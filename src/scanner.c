#include <tree_sitter/parser.h>

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

#include "unicode_tables.h"

#ifdef TREE_SITTER_REUSE_ALLOCATOR
#include <tree_sitter/alloc.h>
#else
#define ts_calloc calloc
#define ts_free free
#endif

enum TokenType {
  SHEBANG,
  BLOCK_COMMENT,
  HASH,
  EMBEDDED_STATEMENT_END,
  MATH_SPREAD_OPERATOR,
  MATH_ARGUMENT_IDENTIFIER,

  HEADING_MARKER,
  BULLET_LIST_MARKER,
  NUMBERED_LIST_MARKER,
  TERM_LIST_MARKER,
  SHORTHAND,
  AUTOMATIC_LINK,
  LIST_CONTINUATION,
  LIST_END,

  INTEGER,
  FLOAT,
  UNIT,

  MATH_IDENTIFIER,
  MATH_LETTER,
  MATH_TEXT,
  MATH_FRACTION_AHEAD,
  MATH_FRACTION_SPACE,
  MATH_EXPRESSION_SPACE,
  MATH_ATTACHMENT_SPACE,
  MATH_CLOSE_SPACE,
  MATH_ARGUMENT_SEPARATOR_SPACE,

  RAW_OPEN,
  RAW_LANGUAGE,
  RAW_CONTENT,
  RAW_CLOSE,

  MARKUP_INDENT,
  MARKUP_SPACE,
  MARKUP_WORD_GAP,
  MARKUP_NEWLINE,
  PARBREAK,
  MATH_SPACE,
  ATOMIC_FIELD_DOT,
  CODE_DOT_AHEAD,
  CODE_ELSE_AHEAD,
  CODE_ELSE_SPACE_AHEAD,
  CODE_ASSIGNMENT_OPERATOR_AHEAD,
  CODE_LOGICAL_OR_OPERATOR_AHEAD,
  CODE_LOGICAL_AND_OPERATOR_AHEAD,
  CODE_COMPARISON_OPERATOR_AHEAD,
  CODE_ADDITION_OPERATOR_AHEAD,
  CODE_MULTIPLICATION_OPERATOR_AHEAD,
  CODE_CLOSE_AHEAD,
  CODE_ARGUMENT_AHEAD,
  CODE_CONTROL_BODY_AHEAD,
  CODE_SPACE,
  CODE_NEWLINE,

  ERROR_SENTINEL,
};

enum OperatorAheadMask {
  OP_ASSIGNMENT = 1u << 0,
  OP_LOGICAL_OR = 1u << 1,
  OP_LOGICAL_AND = 1u << 2,
  OP_COMPARISON = 1u << 3,
  OP_ADDITION = 1u << 4,
  OP_MULTIPLICATION = 1u << 5,
};

enum MathSpaceBoundary {
  MATH_BOUNDARY_FRACTION,
  MATH_BOUNDARY_CLOSE,
  MATH_BOUNDARY_ATTACHMENT,
  MATH_BOUNDARY_ARGUMENT_SEPARATOR,
  MATH_BOUNDARY_EXPRESSION,
  MATH_BOUNDARY_PLAIN,
};

#define SCANNER_FIXED_U32_FIELDS 3u
#define SCANNER_FIXED_U8_FIELDS 1u
#define SCANNER_FIXED_STATE_SIZE                                               \
  (4u * SCANNER_FIXED_U32_FIELDS + SCANNER_FIXED_U8_FIELDS)
#define SCANNER_LIST_DEPTH_OFFSET (4u * SCANNER_FIXED_U32_FIELDS)
#define MAX_LIST_DEPTH_BY_BUFFER                                               \
  ((TREE_SITTER_SERIALIZATION_BUFFER_SIZE - SCANNER_FIXED_STATE_SIZE) / 4u)
#define MAX_LIST_DEPTH                                                         \
  (MAX_LIST_DEPTH_BY_BUFFER < UINT8_MAX ? MAX_LIST_DEPTH_BY_BUFFER : UINT8_MAX)

_Static_assert(SCANNER_FIXED_STATE_SIZE + 4u * MAX_LIST_DEPTH <=
                   TREE_SITTER_SERIALIZATION_BUFFER_SIZE,
               "scanner state exceeds Tree-sitter serialization buffer");

typedef struct {
  // Tree-sitter serializes this state into parse trees and restores it during
  // incremental parsing and GLR exploration. These fields therefore describe
  // parse position, not cache data that can be cleared opportunistically.
  uint32_t raw_delimiter_length;
  // Numeric-unit adjacency is scanner state Tree-sitter may skip global extras
  // before token.immediate rules, so moving UNIT into grammar would allow
  // `12/*...*/pt` to parse as numeric.
  uint32_t unit_column_plus_one;
  uint32_t immediate_postfix_blocked_column_plus_one;
  uint32_t list_indents[MAX_LIST_DEPTH];
  uint8_t list_depth;
} Scanner;

static inline void clear_unit_pending(Scanner *scanner) {
  scanner->unit_column_plus_one = 0;
}

static inline uint32_t current_column_plus_one(TSLexer *lexer) {
  // Zero is the serialized "no pending latch" value.
  return lexer->get_column(lexer) + 1u;
}

static inline bool immediate_postfix_blocked(Scanner *scanner, TSLexer *lexer) {
  return scanner->immediate_postfix_blocked_column_plus_one != 0 &&
         scanner->immediate_postfix_blocked_column_plus_one ==
             current_column_plus_one(lexer);
}

static inline void clear_immediate_postfix_block(Scanner *scanner) {
  scanner->immediate_postfix_blocked_column_plus_one = 0;
}

static inline void record_immediate_postfix_block_after_trivia(Scanner *scanner,
                                                               TSLexer *lexer) {
  // Extras are skipped before token.immediate is checked. This latch prevents
  // trivia from accidentally manufacturing immediacy for calls/content blocks
  // and atomic fields.
  scanner->immediate_postfix_blocked_column_plus_one =
      (lexer->lookahead == '(' || lexer->lookahead == '[' ||
       lexer->lookahead == '.')
          ? current_column_plus_one(lexer)
          : 0;
}

static inline void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

static unsigned write_u32(char *buffer, unsigned offset, uint32_t value) {
  buffer[offset++] = (char)(value & 0xFFu);
  buffer[offset++] = (char)((value >> 8) & 0xFFu);
  buffer[offset++] = (char)((value >> 16) & 0xFFu);
  buffer[offset++] = (char)((value >> 24) & 0xFFu);
  return offset;
}

static uint32_t read_u32(const char *buffer, unsigned offset) {
  return (uint32_t)(uint8_t)buffer[offset] |
         ((uint32_t)(uint8_t)buffer[offset + 1] << 8) |
         ((uint32_t)(uint8_t)buffer[offset + 2] << 16) |
         ((uint32_t)(uint8_t)buffer[offset + 3] << 24);
}

static bool scan_code_keyword_ahead(TSLexer *lexer, const char *keyword,
                                    enum TokenType symbol);
static bool skip_code_all_trivia(TSLexer *lexer, bool *saw_comment);
static bool scan_code_operator_ahead(TSLexer *lexer, bool slash_operator,
                                     uint8_t valid_operator_mask);
static bool scan_markup_automatic_link_start(TSLexer *lexer);

static bool in_ranges(const UnicodeRange *ranges, size_t length, uint32_t c) {
  size_t lo = 0;
  size_t hi = length;
  while (lo < hi) {
    size_t mid = lo + (hi - lo) / 2;
    if (c < ranges[mid].first) {
      hi = mid;
    } else if (c > ranges[mid].last) {
      lo = mid + 1;
    } else {
      return true;
    }
  }
  return false;
}

static inline bool in_ascii_bitset(const uint32_t bits[4], uint32_t c) {
  return (bits[c >> 5] & (1u << (c & 31))) != 0;
}

static inline bool is_xid_start(int32_t c) {
  // Most Typst code is ASCII. Keep the generated Unicode tables as the source
  // of truth, but avoid binary-searching them for the common path.
  if (c < 0)
    return false;
  if (c < 0x80)
    return in_ascii_bitset(XID_START_ASCII_BITS, (uint32_t)c);
  return in_ranges(XID_START_RANGES, XID_START_RANGES_LEN, (uint32_t)c);
}

static inline bool is_xid_continue(int32_t c) {
  // Same ASCII fast path as starts; math scanning hits this on every ordinary
  // identifier character, so avoiding table probes matters on prose-sized docs.
  if (c < 0)
    return false;
  if (c < 0x80)
    return in_ascii_bitset(XID_CONTINUE_ASCII_BITS, (uint32_t)c);
  return in_ranges(XID_CONTINUE_RANGES, XID_CONTINUE_RANGES_LEN, (uint32_t)c);
}

static inline bool is_id_start(int32_t c) {
  return c == '_' || is_xid_start(c);
}

static inline bool is_id_continue(int32_t c) {
  return c == '_' || c == '-' || is_xid_continue(c);
}

static bool code_identifier_starts_here(TSLexer *lexer) {
  // A bare `_` is a discard token in Typst (not an identifier). Field probes use
  // this stricter predicate so `value._` does not parse as field access.
  if (is_xid_start(lexer->lookahead))
    return true;

  if (lexer->lookahead != '_')
    return false;

  advance(lexer);
  return is_id_continue(lexer->lookahead);
}

static inline bool is_math_id_start(int32_t c) { return is_xid_start(c); }

static inline bool is_math_id_continue(int32_t c) {
  // Typst's math identifiers exclude underscore so `_` remains attachment
  // syntax. Hyphens are not XID-continue and therefore remain math text.
  return c != '_' && is_xid_continue(c);
}

static inline bool is_unicode_number(int32_t c) {
  if (c < 0)
    return false;
  if (c < 0x80)
    return c >= '0' && c <= '9';
  return in_ranges(NUMBER_RANGES, NUMBER_RANGES_LEN, (uint32_t)c);
}

static inline bool is_newline(int32_t c) {
  return c == '\n' || c == '\r' || c == 0x0B || c == 0x0C || c == 0x85 ||
         c == 0x2028 || c == 0x2029;
}

static inline bool is_markup_hspace(int32_t c) { return c == ' ' || c == '\t'; }

static inline bool is_unicode_space(int32_t c) {
  return c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == 0x0B ||
         c == 0x0C || c == 0x85 || c == 0xA0 || c == 0x1680 ||
         (c >= 0x2000 && c <= 0x200A) || c == 0x2028 || c == 0x2029 ||
         c == 0x202F || c == 0x205F || c == 0x3000;
}

static inline bool ascii_digit(int32_t c) { return c >= '0' && c <= '9'; }
static inline bool ascii_alnum(int32_t c) {
  return ascii_digit(c) || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

static bool base_digit(int32_t c, int base) {
  if (base <= 10)
    return c >= '0' && c < '0' + base;
  return ascii_digit(c) || (c >= 'a' && c < 'a' + base - 10) ||
         (c >= 'A' && c < 'A' + base - 10);
}

static bool consume_newline(TSLexer *lexer) {
  if (lexer->lookahead == '\r') {
    advance(lexer);
    if (lexer->lookahead == '\n')
      advance(lexer);
    return true;
  }
  if (!is_newline(lexer->lookahead))
    return false;
  advance(lexer);
  return true;
}

static bool push_list_indent(Scanner *scanner, uint32_t indent) {
  if (scanner->list_depth == MAX_LIST_DEPTH)
    return false;
  scanner->list_indents[scanner->list_depth++] = indent;
  return true;
}

static void pop_list_indent(Scanner *scanner) {
  if (scanner->list_depth > 0)
    scanner->list_depth--;
}

static uint32_t top_list_indent(const Scanner *scanner) {
  return scanner->list_depth == 0
             ? 0
             : scanner->list_indents[scanner->list_depth - 1];
}

static bool consume_nested_block_comment_body(TSLexer *lexer) {
  if (lexer->lookahead != '*')
    return false;
  advance(lexer);

  uint32_t depth = 1;
  int32_t previous = 0;
  while (!lexer->eof(lexer)) {
    int32_t current = lexer->lookahead;
    advance(lexer);
    if (previous == '/' && current == '*') {
      depth++;
      previous = 0;
    } else if (previous == '*' && current == '/') {
      depth--;
      previous = 0;
      if (depth == 0)
        return true;
    } else {
      previous = current;
    }
  }

  return true;
}

static bool marker_boundary(TSLexer *lexer, bool slash_is_marker) {
  if (lexer->eof(lexer) || is_unicode_space(lexer->lookahead))
    return true;

  // A comment can directly follow headings, bullets, and enumerations. For a
  // term marker, `//` and `/*` start a comment at the original slash instead.
  if (!slash_is_marker && lexer->lookahead == '/') {
    advance(lexer);
    return lexer->lookahead == '/' || lexer->lookahead == '*';
  }

  return false;
}

static bool is_link_ascii_body_char(int32_t c) {
  return ascii_alnum(c) || c == '!' || c == '#' || c == '$' || c == '%' ||
         c == '&' || c == '*' || c == '+' || c == ',' || c == '-' || c == '.' ||
         c == '/' || c == ':' || c == ';' || c == '=' || c == '?' || c == '@' ||
         c == '_' || c == '~' || c == '\'';
}

static bool is_link_trailing_punctuation(int32_t c) {
  return c == '.' || c == ',' || c == ':' || c == ';' || c == '?' || c == '!' ||
         c == '\'';
}

static bool scan_literal(TSLexer *lexer, const char *literal) {
  for (const char *p = literal; *p; p++) {
    if (lexer->lookahead != *p)
      return false;
    advance(lexer);
  }
  return true;
}

static bool scan_automatic_link(TSLexer *lexer) {
  if (!scan_literal(lexer, "http"))
    return false;
  if (lexer->lookahead == 's')
    advance(lexer);
  if (!scan_literal(lexer, "://"))
    return false;

  lexer->mark_end(lexer);

  while (!lexer->eof(lexer)) {
    int32_t c = lexer->lookahead;

    if (c == '(' || c == ')' || c == '[' || c == ']') {
      advance(lexer);
      lexer->mark_end(lexer);
      continue;
    }

    if (!is_link_ascii_body_char(c))
      break;

    advance(lexer);
    if (!is_link_trailing_punctuation(c))
      lexer->mark_end(lexer);
  }

  lexer->result_symbol = AUTOMATIC_LINK;
  return true;
}

static bool scan_markup_dash(Scanner *scanner, TSLexer *lexer,
                             bool bullet_valid, bool shorthand_valid) {
  if (lexer->lookahead != '-')
    return false;
  uint32_t column = lexer->get_column(lexer);
  advance(lexer);
  lexer->mark_end(lexer);

  if (shorthand_valid) {
    if (lexer->lookahead == '-') {
      advance(lexer);
      if (lexer->lookahead == '-')
        advance(lexer);
      lexer->mark_end(lexer);
      lexer->result_symbol = SHORTHAND;
      return true;
    }
    if (lexer->lookahead == '?') {
      advance(lexer);
      lexer->mark_end(lexer);
      lexer->result_symbol = SHORTHAND;
      return true;
    }
    if (is_unicode_number(lexer->lookahead)) {
      lexer->result_symbol = SHORTHAND;
      return true;
    }
  }

  if (bullet_valid && marker_boundary(lexer, false)) {
    if (!push_list_indent(scanner, column))
      return false;
    lexer->result_symbol = BULLET_LIST_MARKER;
    return true;
  }

  return false;
}

static bool scan_markup_shorthand(TSLexer *lexer) {
  if (lexer->lookahead != '~')
    return false;
  advance(lexer);
  lexer->mark_end(lexer);
  lexer->result_symbol = SHORTHAND;
  return true;
}

static bool scan_markup_marker(Scanner *scanner, TSLexer *lexer,
                               const bool *valid_symbols) {
  // Typst compares continuation indentation with the marker's physical column,
  // i.e., not with indentation previously tokenized as markup whitespace.
  uint32_t column = lexer->get_column(lexer);

  if (lexer->lookahead == '=' && valid_symbols[HEADING_MARKER]) {
    do
      advance(lexer);
    while (lexer->lookahead == '=');
    lexer->mark_end(lexer);
    if (!marker_boundary(lexer, false))
      return false;
    lexer->result_symbol = HEADING_MARKER;
    return true;
  }

  if (lexer->lookahead == '+' && valid_symbols[NUMBERED_LIST_MARKER]) {
    advance(lexer);
    lexer->mark_end(lexer);
    if (!marker_boundary(lexer, false))
      return false;
    if (!push_list_indent(scanner, column))
      return false;
    lexer->result_symbol = NUMBERED_LIST_MARKER;
    return true;
  }

  if (ascii_digit(lexer->lookahead) && valid_symbols[NUMBERED_LIST_MARKER]) {
    do {
      advance(lexer);
    } while (ascii_digit(lexer->lookahead));
    if (lexer->lookahead != '.')
      return false;
    advance(lexer);
    lexer->mark_end(lexer);
    if (!marker_boundary(lexer, false))
      return false;
    if (!push_list_indent(scanner, column))
      return false;
    lexer->result_symbol = NUMBERED_LIST_MARKER;
    return true;
  }

  return false;
}

static uint32_t consume_list_next_nonblank_indent(TSLexer *lexer) {
  uint32_t indent = 0;
  while (is_markup_hspace(lexer->lookahead)) {
    advance(lexer);
    indent++;
  }

  // Blank lines belong to the current item when the next nonblank line remains
  // indented under that item. Otherwise, the blank line separates sibling
  // markup blocks and the list item ends before the newline.
  while (is_newline(lexer->lookahead)) {
    consume_newline(lexer);
    indent = 0;
    while (is_markup_hspace(lexer->lookahead)) {
      advance(lexer);
      indent++;
    }
  }

  return indent;
}

static bool scan_list_boundary(Scanner *scanner, TSLexer *lexer,
                               bool continuation_valid, bool end_valid) {
  if (scanner->list_depth == 0)
    return false;

  // LIST_END is a zero-width external token. Mark the start before looking
  // ahead so a dedent doesn't consume the newline owned by the outer markup.
  lexer->mark_end(lexer);

  if (lexer->eof(lexer) || lexer->lookahead == ']') {
    if (!end_valid)
      return false;
    pop_list_indent(scanner);
    lexer->result_symbol = LIST_END;
    return true;
  }

  if (!is_newline(lexer->lookahead))
    return false;

  consume_newline(lexer);
  uint32_t indent = consume_list_next_nonblank_indent(lexer);

  if (lexer->eof(lexer) || lexer->lookahead == ']') {
    if (!end_valid)
      return false;
    pop_list_indent(scanner);
    lexer->result_symbol = LIST_END;
    return true;
  }

  if (indent > top_list_indent(scanner) && continuation_valid) {
    // Emit a zero-width guard only. The grammar consumes the newline/parbreak
    // after this, preserving paragraph boundaries inside continued list items.
    lexer->result_symbol = LIST_CONTINUATION;
    return true;
  }

  if (end_valid) {
    pop_list_indent(scanner);
    lexer->result_symbol = LIST_END;
    return true;
  }

  return false;
}

static bool scan_hash_or_shebang(TSLexer *lexer, bool shebang_valid,
                                 bool hash_valid) {
  if (lexer->lookahead != '#')
    return false;
  advance(lexer);
  lexer->mark_end(lexer);

  // SHEBANG is valid only at the start of source_file. Coordinating it with
  // HASH here prevents a one-byte external hash from pre-empting `#!...` at
  // byte zero, while `#!` elsewhere remains a recoverable hash expression.
  if (shebang_valid && lexer->lookahead == '!') {
    advance(lexer);
    while (!lexer->eof(lexer) && !is_newline(lexer->lookahead))
      advance(lexer);
    lexer->mark_end(lexer);
    lexer->result_symbol = SHEBANG;
    return true;
  }

  if (!hash_valid)
    return false;
  // `#` always starts embedded code in Typst; literal prose hashes must be
  // escaped. Declining trivia here lets recovery report malformed embedded
  // code instead of folding `# text` into a text node.
  if (is_unicode_space(lexer->lookahead))
    return false;
  if (lexer->lookahead == '/') {
    advance(lexer);
    if (lexer->lookahead == '/' || lexer->lookahead == '*')
      return false;
  }
  lexer->result_symbol = HASH;
  return true;
}

static bool scan_embedded_statement_end(TSLexer *lexer) {
  // A statement embedded after `#` can end without a semicolon only at the
  // stopped-code boundary. Horizontal trivia never terminates the statement;
  // it remains available to ordinary code tokens and extras.
  if (!lexer->eof(lexer) && !is_newline(lexer->lookahead) &&
      lexer->lookahead != ']') {
    return false;
  }

  lexer->mark_end(lexer);
  lexer->result_symbol = EMBEDDED_STATEMENT_END;
  return true;
}

static bool emit_number(Scanner *scanner, TSLexer *lexer, enum TokenType token,
                        const bool *valid_symbols, bool allow_unit) {
  if (!valid_symbols[token])
    return false;
  // Units have to be lexed in a later scanner call. Store the exact adjacent
  // column so comments, spaces, and incremental resumes can't turn `1 pt` or
  // `1/*...*/pt` into a single numeric literal.
  scanner->unit_column_plus_one =
      allow_unit ? lexer->get_column(lexer) + 1u : 0;
  lexer->result_symbol = token;
  return true;
}

static bool emit_number_before_current_char(Scanner *scanner, TSLexer *lexer,
                                            enum TokenType token,
                                            const bool *valid_symbols) {
  if (!valid_symbols[token])
    return false;
  scanner->unit_column_plus_one = lexer->get_column(lexer);
  lexer->result_symbol = token;
  return true;
}

static bool scan_code_number_tail(Scanner *scanner, TSLexer *lexer,
                                  const bool *valid_symbols, bool is_float) {
  // `em` is a unit, i.e., making sure we don't parse as exponent prefix.
  if (lexer->lookahead == 'e') {
    advance(lexer);
    if (lexer->lookahead == 'm') {
      return emit_number_before_current_char(
          scanner, lexer, is_float ? FLOAT : INTEGER, valid_symbols);
    }

    if (lexer->lookahead == '+' || lexer->lookahead == '-')
      advance(lexer);
    if (!ascii_digit(lexer->lookahead)) {
      return emit_number(scanner, lexer, is_float ? FLOAT : INTEGER,
                         valid_symbols, false);
    }
    is_float = true;
    do
      advance(lexer);
    while (ascii_digit(lexer->lookahead));
    lexer->mark_end(lexer);
  } else if (lexer->lookahead == 'E') {
    advance(lexer);
    if (lexer->lookahead == '+' || lexer->lookahead == '-')
      advance(lexer);
    if (!ascii_digit(lexer->lookahead)) {
      return emit_number(scanner, lexer, is_float ? FLOAT : INTEGER,
                         valid_symbols, false);
    }
    is_float = true;
    do
      advance(lexer);
    while (ascii_digit(lexer->lookahead));
    lexer->mark_end(lexer);
  }

  return emit_number(scanner, lexer, is_float ? FLOAT : INTEGER, valid_symbols,
                     true);
}

static bool scan_numeric_unit(Scanner *scanner, TSLexer *lexer) {
  // UNIT is only valid immediately after an emitted numeric token. That token
  // records the expected adjacent column; comments, spaces, invalid base-number
  // tails, and incremental resumes must not manufacture adjacency later.
  if (scanner->unit_column_plus_one != lexer->get_column(lexer) + 1u) {
    scanner->unit_column_plus_one = 0;
    return false;
  }
  scanner->unit_column_plus_one = 0;

  switch (lexer->lookahead) {
  case '%':
    advance(lexer);
    break;
  case 'p':
    advance(lexer);
    if (lexer->lookahead != 't')
      return false;
    advance(lexer);
    break;
  case 'm':
    advance(lexer);
    if (lexer->lookahead != 'm')
      return false;
    advance(lexer);
    break;
  case 'c':
    advance(lexer);
    if (lexer->lookahead != 'm')
      return false;
    advance(lexer);
    break;
  case 'i':
    advance(lexer);
    if (lexer->lookahead != 'n')
      return false;
    advance(lexer);
    break;
  case 'd':
    advance(lexer);
    if (lexer->lookahead != 'e')
      return false;
    advance(lexer);
    if (lexer->lookahead != 'g')
      return false;
    advance(lexer);
    break;
  case 'r':
    advance(lexer);
    if (lexer->lookahead != 'a')
      return false;
    advance(lexer);
    if (lexer->lookahead != 'd')
      return false;
    advance(lexer);
    break;
  case 'e':
    advance(lexer);
    if (lexer->lookahead != 'm')
      return false;
    advance(lexer);
    break;
  case 'f':
    advance(lexer);
    if (lexer->lookahead != 'r')
      return false;
    advance(lexer);
    break;
  default:
    return false;
  }

  if (is_id_continue(lexer->lookahead))
    return false;
  lexer->mark_end(lexer);
  lexer->result_symbol = UNIT;
  return true;
}

static bool scan_code_number(Scanner *scanner, TSLexer *lexer,
                             const bool *valid_symbols) {
  bool is_float = false;
  bool looked_past_end = false;

  if (ascii_digit(lexer->lookahead)) {
    int32_t first = lexer->lookahead;
    advance(lexer);
    lexer->mark_end(lexer);

    if (first == '0' && (lexer->lookahead == 'b' || lexer->lookahead == 'o' ||
                         lexer->lookahead == 'x')) {
      int base = lexer->lookahead == 'b' ? 2 : lexer->lookahead == 'o' ? 8 : 16;
      advance(lexer);
      if (!base_digit(lexer->lookahead, base))
        return emit_number(scanner, lexer, INTEGER, valid_symbols, false);
      do {
        advance(lexer);
      } while (base_digit(lexer->lookahead, base));
      lexer->mark_end(lexer);
      return emit_number(scanner, lexer, INTEGER, valid_symbols, false);
    }

    while (ascii_digit(lexer->lookahead)) {
      advance(lexer);
    }
    lexer->mark_end(lexer);

    if (lexer->lookahead == '.') {
      // Marked integer end is retained when `.` starts `..` or `.field`.
      advance(lexer);
      if (lexer->lookahead == '.' || is_id_start(lexer->lookahead)) {
        looked_past_end = true;
      } else {
        is_float = true;
        while (ascii_digit(lexer->lookahead))
          advance(lexer);
        lexer->mark_end(lexer);
      }
    }
  } else {
    return false;
  }

  if (looked_past_end) {
    return emit_number(scanner, lexer, is_float ? FLOAT : INTEGER,
                       valid_symbols, false);
  }

  return scan_code_number_tail(scanner, lexer, valid_symbols, is_float);
}

static bool colon_starts_math_shorthand(TSLexer *lexer) {
  if (lexer->lookahead != ':')
    return false;
  advance(lexer);
  if (lexer->lookahead == '=')
    return true;
  if (lexer->lookahead != ':')
    return false;
  advance(lexer);
  return lexer->lookahead == '=';
}

static bool scan_math_word(TSLexer *lexer, bool argument_identifier_valid,
                           bool identifier_valid, bool letter_valid) {
  bool can_be_math_word = is_math_id_start(lexer->lookahead);
  if (!can_be_math_word &&
      !(argument_identifier_valid && is_id_start(lexer->lookahead))) {
    return false;
  }

  bool bare_underscore = !can_be_math_word;
  bool has_continue = false;

  if (can_be_math_word) {
    advance(lexer);

    while (is_math_id_continue(lexer->lookahead)) {
      has_continue = true;
      advance(lexer);
    }

    // Preserve the math-word endpoint if the longer code-identifier probe
    // below doesn't discover a direct named-argument colon.
    lexer->mark_end(lexer);
  } else {
    // `_` can begin a code identifier for a named math argument, but never a
    // normal math identifier.
    advance(lexer);
  }

  if (argument_identifier_valid) {
    while (is_id_continue(lexer->lookahead)) {
      bare_underscore = false;
      advance(lexer);
    }
    if (!bare_underscore && lexer->lookahead == ':') {
      // Mark the identifier before probing the colon. `:=` and `::=` are math
      // shorthands.
      lexer->mark_end(lexer);
      if (!colon_starts_math_shorthand(lexer)) {
        lexer->result_symbol = MATH_ARGUMENT_IDENTIFIER;
        return true;
      }
    }
  }

  if (!can_be_math_word)
    return false;
  if (!has_continue) {
    if (!letter_valid)
      return false;
    lexer->result_symbol = MATH_LETTER;
  } else {
    if (!identifier_valid)
      return false;
    lexer->result_symbol = MATH_IDENTIFIER;
  }
  return true;
}

static bool math_text_cluster_start(int32_t c) {
  if (c < 0x80)
    return false;
  if (is_unicode_space(c) || is_math_id_start(c) || is_unicode_number(c))
    return false;
  if (c == 0x221A || c == 0x221B || c == 0x221C)
    return false;
  switch (c) {
  case '$':
  case '#':
  case '_':
  case '^':
  case '/':
  case '\'':
  case '&':
    return false;
  default:
    return true;
  }
}

static bool scan_math_text(TSLexer *lexer) {
  if (!math_text_cluster_start(lexer->lookahead))
    return false;

  advance(lexer);
  lexer->mark_end(lexer);
  lexer->result_symbol = MATH_TEXT;
  return true;
}

static bool scan_raw_open(Scanner *scanner, TSLexer *lexer) {
  if (lexer->lookahead != '`')
    return false;

  uint32_t count = 0;
  while (lexer->lookahead == '`') {
    advance(lexer);
    count++;
    if (count == 1)
      lexer->mark_end(lexer);
  }

  // `` is an empty raw value with two one-backtick delimiters.
  uint32_t delimiter = count == 2 ? 1 : count;
  if (count != 2)
    lexer->mark_end(lexer);

  scanner->raw_delimiter_length = delimiter;
  lexer->result_symbol = RAW_OPEN;
  return true;
}

static bool scan_raw_language(const Scanner *scanner, TSLexer *lexer) {
  // Typst 0.15 accepts a raw language tag that is mostly identifier-like, but
  // unlike code identifiers it accepts bare `_` as a language tag. Future Typst
  // syntax is expected to broaden this to any text up to whitespace/backtick;
  // keep this scanner narrow until the grammar's target version changes.
  if (scanner->raw_delimiter_length < 3 || !is_id_start(lexer->lookahead)) {
    return false;
  }

  advance(lexer);
  while (is_id_continue(lexer->lookahead))
    advance(lexer);
  lexer->mark_end(lexer);
  lexer->result_symbol = RAW_LANGUAGE;
  return true;
}

static bool scan_raw_body(Scanner *scanner, TSLexer *lexer, bool content_valid,
                          bool close_valid) {
  uint32_t delimiter = scanner->raw_delimiter_length;
  if (delimiter == 0)
    return false;

  bool has_content = false;
  while (!lexer->eof(lexer)) {
    if (lexer->lookahead != '`') {
      if (!content_valid)
        return false;
      advance(lexer);
      has_content = true;
      lexer->mark_end(lexer);
      continue;
    }

    if (has_content)
      lexer->mark_end(lexer);

    uint32_t count = 0;
    while (count < delimiter && lexer->lookahead == '`') {
      advance(lexer);
      count++;
    }

    if (count == delimiter) {
      if (has_content) {
        if (!content_valid)
          return false;
        lexer->result_symbol = RAW_CONTENT;
        return true;
      }

      if (!close_valid)
        return false;
      lexer->mark_end(lexer);
      scanner->raw_delimiter_length = 0;
      lexer->result_symbol = RAW_CLOSE;
      return true;
    }

    if (!content_valid)
      return false;
    has_content = true;
    lexer->mark_end(lexer);
  }

  if (!content_valid || !has_content)
    return false;
  // EOF is not a close delimiter. Keep the raw delimiter length serialized so
  // appending the missing backticks during an incremental edit resumes inside
  // the same raw string/block.
  lexer->mark_end(lexer);
  lexer->result_symbol = RAW_CONTENT;
  return true;
}

static bool scan_markup_hspace(TSLexer *lexer, enum TokenType symbol) {
  if (!is_markup_hspace(lexer->lookahead))
    return false;
  do
    advance(lexer);
  while (is_markup_hspace(lexer->lookahead));
  lexer->mark_end(lexer);
  lexer->result_symbol = symbol;
  return true;
}

static bool scan_markup_word_gap_target(TSLexer *lexer) {
  if (lexer->eof(lexer))
    return false;

  int32_t c = lexer->lookahead;
  if (is_markup_hspace(c) || is_newline(c))
    return false;

  switch (c) {
  case '/':
  case '\\':
  case '`':
  case '$':
  case '#':
  case '<':
  case '@':
  case '*':
  case '_':
  case '\'':
  case '"':
  case '[':
  case ']':
  case '~':
  case ':':
    return false;
  case '-':
    advance(lexer);
    return !(lexer->lookahead == '-' || lexer->lookahead == '?' ||
             is_unicode_number(lexer->lookahead));
  case '.':
    advance(lexer);
    if (lexer->lookahead != '.')
      return true;
    advance(lexer);
    return lexer->lookahead != '.';
  case 'h':
    return !scan_markup_automatic_link_start(lexer);
  default:
    return true;
  }
}

static bool scan_ascii_char(TSLexer *lexer, char c) {
  if (lexer->lookahead != c)
    return false;
  advance(lexer);
  return true;
}

static bool scan_markup_automatic_link_start(TSLexer *lexer) {
  if (!scan_ascii_char(lexer, 'h'))
    return false;
  if (!scan_ascii_char(lexer, 't'))
    return false;
  if (!scan_ascii_char(lexer, 't'))
    return false;
  if (!scan_ascii_char(lexer, 'p'))
    return false;
  if (lexer->lookahead == 's')
    advance(lexer);
  if (!scan_ascii_char(lexer, ':'))
    return false;
  if (!scan_ascii_char(lexer, '/'))
    return false;
  return lexer->lookahead == '/';
}

static bool scan_markup_space_or_word_gap(TSLexer *lexer, bool word_gap_valid,
                                          bool space_valid,
                                          bool else_space_valid) {
  if (!is_markup_hspace(lexer->lookahead))
    return false;

  do
    advance(lexer);
  while (is_markup_hspace(lexer->lookahead));

  lexer->mark_end(lexer);

  int32_t target = lexer->lookahead;
  if (else_space_valid && target == 'e') {
    if (scan_code_keyword_ahead(lexer, "else", CODE_ELSE_SPACE_AHEAD)) {
      return true;
    }
    // Failed `else...` probes may have consumed past the original target.
    // Since a word starting with `e` is a valid markup word-gap target, emit
    // the fallback directly instead of consulting the mutated lexer state.
    if (word_gap_valid) {
      lexer->result_symbol = MARKUP_WORD_GAP;
      return true;
    }
    if (space_valid) {
      lexer->result_symbol = MARKUP_SPACE;
      return true;
    }
    return false;
  }

  if (word_gap_valid && scan_markup_word_gap_target(lexer)) {
    lexer->result_symbol = MARKUP_WORD_GAP;
    return true;
  }

  if (space_valid) {
    lexer->result_symbol = MARKUP_SPACE;
    return true;
  }

  return false;
}

static bool scan_markup_newline(TSLexer *lexer, bool paragraph_valid,
                                bool newline_valid) {
  if (!is_newline(lexer->lookahead))
    return false;

  consume_newline(lexer);
  lexer->mark_end(lexer);
  uint32_t count = 1;

  while (true) {
    while (is_markup_hspace(lexer->lookahead))
      advance(lexer);
    if (!is_newline(lexer->lookahead))
      break;
    consume_newline(lexer);
    count++;
    lexer->mark_end(lexer);
  }

  if (count >= 2) {
    // Never collapse a paragraph break into a MARKUP_NEWLINE. This is what
    // prevents strong/emphasis from crossing blank lines.
    if (!paragraph_valid)
      return false;
    lexer->result_symbol = PARBREAK;
    return true;
  }

  if (!newline_valid)
    return false;
  lexer->result_symbol = MARKUP_NEWLINE;
  return true;
}

static bool is_math_expression_start_after_space(TSLexer *lexer) {
  int32_t c = lexer->lookahead;
  if (lexer->eof(lexer) || c == '$' || c == '_' || c == '^' || c == '/')
    return false;

  return true;
}

static inline bool is_math_close_delimiter(int32_t c) {
  switch (c) {
  case ')':
  case ']':
  case '}':
    return true;
  default:
    if (c < 0x80)
      return false;
    return in_ranges(MATH_CLOSE_RANGES, MATH_CLOSE_RANGES_LEN, (uint32_t)c);
  }
}

static bool skip_math_space_run_tail(TSLexer *lexer, bool *slash_ahead) {
  *slash_ahead = false;

  while (lexer->lookahead == '/') {
    advance(lexer);
    if (lexer->lookahead == '*') {
      if (!consume_nested_block_comment_body(lexer))
        return false;
    } else if (lexer->lookahead == '/') {
      while (!lexer->eof(lexer) && !is_newline(lexer->lookahead))
        advance(lexer);
    } else {
      *slash_ahead = true;
      return true;
    }

    while (is_unicode_space(lexer->lookahead))
      advance(lexer);
  }

  return true;
}

static bool classify_math_space_boundary(TSLexer *lexer, bool close_space_valid,
                                         enum MathSpaceBoundary *boundary) {
  // Classify once after the visible space run. Reusing mutating probes here can
  // advance past a bare `|` while checking for `|]`, then accidentally classify
  // the next character as the expression boundary.
  bool slash_ahead = false;
  if (!skip_math_space_run_tail(lexer, &slash_ahead))
    return false;

  if (slash_ahead) {
    *boundary = MATH_BOUNDARY_FRACTION;
    return true;
  }

  if (lexer->lookahead == '|') {
    advance(lexer);
    *boundary = lexer->lookahead == ']' && close_space_valid
                    ? MATH_BOUNDARY_CLOSE
                    : MATH_BOUNDARY_EXPRESSION;
    return true;
  }

  if (close_space_valid && is_math_close_delimiter(lexer->lookahead)) {
    *boundary = MATH_BOUNDARY_CLOSE;
    return true;
  }

  if (lexer->lookahead == '_' || lexer->lookahead == '^') {
    *boundary = MATH_BOUNDARY_ATTACHMENT;
    return true;
  }

  if (lexer->lookahead == ',' || lexer->lookahead == ';') {
    *boundary = MATH_BOUNDARY_ARGUMENT_SEPARATOR;
    return true;
  }

  if (is_math_expression_start_after_space(lexer)) {
    *boundary = MATH_BOUNDARY_EXPRESSION;
    return true;
  }

  *boundary = MATH_BOUNDARY_PLAIN;
  return true;
}

// Decide whether visible math spaces introduce another expression/attachment
// or merely trail the current sequence. Guard tokens consume only the first
// visible space run; comments and following spaces remain for mathSpaceRun.
static bool scan_math_space_boundary(TSLexer *lexer, bool fraction_space_valid,
                                     bool expression_space_valid,
                                     bool attachment_space_valid,
                                     bool close_space_valid,
                                     bool argument_separator_space_valid,
                                     bool space_valid) {
  if (!is_unicode_space(lexer->lookahead))
    return false;

  // The external token owns only the first visible space run. Comments and
  // later spaces are consumed by the grammar-side mathSpaceRun helper, keeping
  // scanner lookahead and grammar consumption in lockstep.
  do
    advance(lexer);
  while (is_unicode_space(lexer->lookahead));
  lexer->mark_end(lexer);

  enum MathSpaceBoundary boundary = MATH_BOUNDARY_PLAIN;
  if (!classify_math_space_boundary(lexer, close_space_valid, &boundary))
    return false;

  switch (boundary) {
  case MATH_BOUNDARY_FRACTION:
    if (!fraction_space_valid)
      break;
    lexer->result_symbol = MATH_FRACTION_SPACE;
    return true;

  case MATH_BOUNDARY_CLOSE:
    if (!close_space_valid)
      break;
    lexer->result_symbol = MATH_CLOSE_SPACE;
    return true;

  case MATH_BOUNDARY_ATTACHMENT:
    if (!attachment_space_valid)
      break;
    lexer->result_symbol = MATH_ATTACHMENT_SPACE;
    return true;

  case MATH_BOUNDARY_ARGUMENT_SEPARATOR:
    if (argument_separator_space_valid) {
      lexer->result_symbol = MATH_ARGUMENT_SEPARATOR_SPACE;
      return true;
    }
    if (expression_space_valid) {
      lexer->result_symbol = MATH_EXPRESSION_SPACE;
      return true;
    }
    break;

  case MATH_BOUNDARY_EXPRESSION:
    if (!expression_space_valid)
      break;
    lexer->result_symbol = MATH_EXPRESSION_SPACE;
    return true;

  case MATH_BOUNDARY_PLAIN:
    break;
  }

  if (!space_valid)
    return false;
  lexer->result_symbol = MATH_SPACE;
  return true;
}

static bool scan_math_space(TSLexer *lexer) {
  if (!is_unicode_space(lexer->lookahead))
    return false;
  do
    advance(lexer);
  while (is_unicode_space(lexer->lookahead));
  lexer->mark_end(lexer);
  lexer->result_symbol = MATH_SPACE;
  return true;
}

static bool scan_dot_prefixed(Scanner *scanner, TSLexer *lexer,
                              const bool *valid_symbols) {
  if (lexer->lookahead != '.')
    return false;
  bool blocked = immediate_postfix_blocked(scanner, lexer);
  advance(lexer);

  lexer->mark_end(lexer);

  if (valid_symbols[ATOMIC_FIELD_DOT] && code_identifier_starts_here(lexer)) {
    // The dot-to-field side is proven by the lookahead above; the receiver-to-
    // dot side is proven by the trivia latch recorded when CODE_SPACE crossed
    // a postfix-looking token.
    if (blocked)
      return false;
    lexer->result_symbol = ATOMIC_FIELD_DOT;
    return true;
  }

  if ((valid_symbols[INTEGER] || valid_symbols[FLOAT]) &&
      ascii_digit(lexer->lookahead)) {
    do
      advance(lexer);
    while (ascii_digit(lexer->lookahead));
    lexer->mark_end(lexer);
    return scan_code_number_tail(scanner, lexer, valid_symbols, true);
  }

  if (valid_symbols[SHORTHAND] && lexer->lookahead == '.') {
    advance(lexer);
    if (lexer->lookahead == '.') {
      advance(lexer);
      lexer->mark_end(lexer);
      lexer->result_symbol = SHORTHAND;
      return true;
    }

    if (valid_symbols[MATH_SPREAD_OPERATOR] &&
        !(lexer->eof(lexer) || is_unicode_space(lexer->lookahead) ||
          lexer->lookahead == '.' || lexer->lookahead == ',' ||
          lexer->lookahead == ';' || lexer->lookahead == ')' ||
          lexer->lookahead == '$')) {
      lexer->mark_end(lexer);
      lexer->result_symbol = MATH_SPREAD_OPERATOR;
      return true;
    }

    return false;
  }

  if (valid_symbols[MATH_SPREAD_OPERATOR] && lexer->lookahead == '.') {
    advance(lexer);
    lexer->mark_end(lexer);

    if (lexer->eof(lexer) || is_unicode_space(lexer->lookahead) ||
        lexer->lookahead == '.' || lexer->lookahead == ',' ||
        lexer->lookahead == ';' || lexer->lookahead == ')' ||
        lexer->lookahead == '$') {
      return false;
    }

    if (lexer->lookahead == '/') {
      advance(lexer);
      if (lexer->lookahead == '/' || lexer->lookahead == '*')
        return false;
    }

    lexer->result_symbol = MATH_SPREAD_OPERATOR;
    return true;
  }

  return false;
}

static bool scan_slash_prefixed(Scanner *scanner, TSLexer *lexer,
                                const bool *valid_symbols) {
  if (lexer->lookahead != '/')
    return false;

  uint32_t column = lexer->get_column(lexer);
  lexer->mark_end(lexer); // Zero-width endpoint for MATH_FRACTION_AHEAD.
  advance(lexer);

  if (lexer->lookahead == '*') {
    if (!consume_nested_block_comment_body(lexer))
      return false;

    if (!valid_symbols[BLOCK_COMMENT])
      return false;

    lexer->mark_end(lexer);
    clear_unit_pending(scanner);
    record_immediate_postfix_block_after_trivia(scanner, lexer);
    lexer->result_symbol = BLOCK_COMMENT;
    return true;
  }

  // `//` belongs to the ordinary line-comment token in grammar.js and must not
  // be reclassified as a math fraction lookahead.
  if (lexer->lookahead == '/')
    return false;

  if (valid_symbols[TERM_LIST_MARKER] && marker_boundary(lexer, true)) {
    if (!push_list_indent(scanner, column))
      return false;
    lexer->mark_end(lexer);
    lexer->result_symbol = TERM_LIST_MARKER;
    return true;
  }

  if (valid_symbols[MATH_FRACTION_AHEAD]) {
    lexer->result_symbol = MATH_FRACTION_AHEAD;
    return true;
  }

  return false;
}

static bool scan_code_keyword_ahead(TSLexer *lexer, const char *keyword,
                                    enum TokenType symbol) {
  for (const char *p = keyword; *p; p++) {
    if (lexer->lookahead != *p)
      return false;
    advance(lexer);
  }
  if (is_id_continue(lexer->lookahead))
    return false;
  lexer->result_symbol = symbol;
  return true;
}

static bool scan_code_else_ahead(TSLexer *lexer) {
  if (lexer->lookahead != 'e')
    return false;
  return scan_code_keyword_ahead(lexer, "else", CODE_ELSE_AHEAD);
}

static bool emit_operator_ahead(TSLexer *lexer, enum TokenType symbol) {
  lexer->result_symbol = symbol;
  return true;
}

static bool scan_code_not_in_ahead(TSLexer *lexer, enum TokenType symbol) {
  if (!scan_code_keyword_ahead(lexer, "not", symbol))
    return false;

  if (skip_code_all_trivia(lexer, NULL))
    return false;
  if (lexer->lookahead != 'i')
    return false;

  return scan_code_keyword_ahead(lexer, "in", symbol);
}

static bool scan_code_operator_ahead(TSLexer *lexer, bool slash_operator,
                                     uint8_t valid_operator_mask) {
  if (slash_operator) {
    if (lexer->lookahead == '=')
      return (valid_operator_mask & OP_ASSIGNMENT)
                 ? emit_operator_ahead(lexer, CODE_ASSIGNMENT_OPERATOR_AHEAD)
                 : false;
    return (valid_operator_mask & OP_MULTIPLICATION)
               ? emit_operator_ahead(lexer, CODE_MULTIPLICATION_OPERATOR_AHEAD)
               : false;
  }

  switch (lexer->lookahead) {
  case '+':
    advance(lexer);
    if (lexer->lookahead == '=')
      return (valid_operator_mask & OP_ASSIGNMENT)
                 ? emit_operator_ahead(lexer, CODE_ASSIGNMENT_OPERATOR_AHEAD)
                 : false;
    return (valid_operator_mask & OP_ADDITION)
               ? emit_operator_ahead(lexer, CODE_ADDITION_OPERATOR_AHEAD)
               : false;
  case '-':
  case 0x2212:
    advance(lexer);
    if (lexer->lookahead == '=')
      return (valid_operator_mask & OP_ASSIGNMENT)
                 ? emit_operator_ahead(lexer, CODE_ASSIGNMENT_OPERATOR_AHEAD)
                 : false;
    return (valid_operator_mask & OP_ADDITION)
               ? emit_operator_ahead(lexer, CODE_ADDITION_OPERATOR_AHEAD)
               : false;
  case '*':
    advance(lexer);
    if (lexer->lookahead == '=')
      return (valid_operator_mask & OP_ASSIGNMENT)
                 ? emit_operator_ahead(lexer, CODE_ASSIGNMENT_OPERATOR_AHEAD)
                 : false;
    return (valid_operator_mask & OP_MULTIPLICATION)
               ? emit_operator_ahead(lexer, CODE_MULTIPLICATION_OPERATOR_AHEAD)
               : false;
  case '=':
    advance(lexer);
    if (lexer->lookahead == '>') {
      return false;
    }
    if (lexer->lookahead == '=')
      return (valid_operator_mask & OP_COMPARISON)
                 ? emit_operator_ahead(lexer, CODE_COMPARISON_OPERATOR_AHEAD)
                 : false;
    return (valid_operator_mask & OP_ASSIGNMENT)
               ? emit_operator_ahead(lexer, CODE_ASSIGNMENT_OPERATOR_AHEAD)
               : false;
  case '!':
    advance(lexer);
    return lexer->lookahead == '=' && (valid_operator_mask & OP_COMPARISON)
               ? emit_operator_ahead(lexer, CODE_COMPARISON_OPERATOR_AHEAD)
               : false;
  case '<':
  case '>':
    return (valid_operator_mask & OP_COMPARISON)
               ? emit_operator_ahead(lexer, CODE_COMPARISON_OPERATOR_AHEAD)
               : false;
  case 'a':
    return (valid_operator_mask & OP_LOGICAL_AND) &&
           scan_code_keyword_ahead(lexer, "and",
                                   CODE_LOGICAL_AND_OPERATOR_AHEAD);
  case 'i':
    return (valid_operator_mask & OP_COMPARISON) &&
           scan_code_keyword_ahead(lexer, "in", CODE_COMPARISON_OPERATOR_AHEAD);
  case 'o':
    return (valid_operator_mask & OP_LOGICAL_OR) &&
           scan_code_keyword_ahead(lexer, "or", CODE_LOGICAL_OR_OPERATOR_AHEAD);
  case 'n':
    return (valid_operator_mask & OP_COMPARISON) &&
           scan_code_not_in_ahead(lexer, CODE_COMPARISON_OPERATOR_AHEAD);
  default:
    return false;
  }
}

static bool scan_code_contextual_space_ahead(TSLexer *lexer,
                                             bool control_body_valid,
                                             bool atomic_field_valid,
                                             bool else_space_valid,
                                             bool code_space_valid) {
  if (!is_unicode_space(lexer->lookahead) || is_newline(lexer->lookahead))
    return false;

  do {
    advance(lexer);
  } while (is_unicode_space(lexer->lookahead) && !is_newline(lexer->lookahead));

  lexer->mark_end(lexer);

  if (else_space_valid && lexer->lookahead == 'e') {
    if (scan_code_keyword_ahead(lexer, "else", CODE_ELSE_SPACE_AHEAD))
      return true;
    // The failed keyword probe may have consumed `else` plus part of a longer
    // identifier. If plain code space is valid, keep the already-marked space
    // fallback available within this scan call.
    if (code_space_valid) {
      lexer->result_symbol = CODE_SPACE;
      return true;
    }
    return false;
  }

  if (atomic_field_valid && lexer->lookahead == '.')
    return false;

  // A spaced `[` can be a control-flow body, while an immediate `[` belongs
  // to the preceding function call. Spaced `{` is guarded too because some
  // control-body states do not accept plain CODE_SPACE before a code block.
  if (control_body_valid &&
      (lexer->lookahead == '{' || lexer->lookahead == '[')) {
    lexer->result_symbol = CODE_CONTROL_BODY_AHEAD;
    return true;
  }

  if (!code_space_valid)
    return false;

  lexer->result_symbol = CODE_SPACE;
  return true;
}

static bool skip_code_all_trivia(TSLexer *lexer, bool *saw_comment) {
  if (saw_comment)
    *saw_comment = false;

  while (true) {
    while (is_unicode_space(lexer->lookahead) &&
           !is_newline(lexer->lookahead)) {
      advance(lexer);
    }

    if (lexer->lookahead == '/') {
      advance(lexer);
      if (lexer->lookahead == '/') {
        if (saw_comment)
          *saw_comment = true;
        while (!lexer->eof(lexer) && !is_newline(lexer->lookahead))
          advance(lexer);
        continue;
      }
      if (lexer->lookahead == '*') {
        if (saw_comment)
          *saw_comment = true;
        consume_nested_block_comment_body(lexer);
        continue;
      }
      return true;
    }

    if (consume_newline(lexer))
      continue;

    return false;
  }
}

static bool consume_nested_block_comment_body_same_line(TSLexer *lexer) {
  if (lexer->lookahead != '*')
    return false;
  advance(lexer);

  uint32_t depth = 1;
  int32_t previous = 0;
  while (!lexer->eof(lexer)) {
    int32_t current = lexer->lookahead;
    if (is_newline(current))
      return false;
    advance(lexer);
    if (previous == '/' && current == '*') {
      depth++;
      previous = 0;
    } else if (previous == '*' && current == '/') {
      depth--;
      previous = 0;
      if (depth == 0)
        return true;
    } else {
      previous = current;
    }
  }

  return true;
}

static bool skip_code_inline_trivia(TSLexer *lexer) {
  while (true) {
    while (is_unicode_space(lexer->lookahead) &&
           !is_newline(lexer->lookahead)) {
      advance(lexer);
    }

    if (lexer->lookahead != '/')
      return true;

    advance(lexer);
    if (lexer->lookahead != '*')
      return false;
    if (!consume_nested_block_comment_body_same_line(lexer))
      return false;
  }
}

static bool scan_code_dot_ahead(TSLexer *lexer) {
  if (lexer->lookahead != '.')
    return false;

  advance(lexer);

  if (ascii_digit(lexer->lookahead) || lexer->lookahead == '.')
    return false;

  // Contextual continuation is `newline dot same-line-field`. A second newline
  // after the dot stops again in Typst, so this probe skips only same-line
  // trivia; fully continued delimited contexts use grammar `codeGap` instead.
  if (!skip_code_inline_trivia(lexer))
    return false;
  // The grammar consumes the field with FIELD_IDENT, where bare `_` is a
  // discard token rather than an identifier. Keep this probe in sync with the
  // atomic field handoff so `value\n._` remains a statement boundary/recovery
  // case instead of shifting into an impossible field access.
  if (!code_identifier_starts_here(lexer))
    return false;

  lexer->result_symbol = CODE_DOT_AHEAD;
  return true;
}

static bool
scan_code_newline_or_continuation_ahead(TSLexer *lexer, bool dot_valid,
                                        bool else_valid, uint8_t operator_mask,
                                        bool close_valid, bool newline_valid) {
  if (!consume_newline(lexer))
    return false;

  // Mark the separator newline before looking ahead. If the lookahead crosses
  // only whitespace, the mark is later extended over that hidden run so the
  // next scanner invocation does not rescan the same blank suffix. Comments
  // stay outside the aggregate token so their nodes remain visible.
  lexer->mark_end(lexer);

  bool saw_comment = false;
  bool slash_operator = false;
  if (dot_valid || else_valid || operator_mask != 0 || close_valid)
    slash_operator = skip_code_all_trivia(lexer, &saw_comment);

  if (!saw_comment && !slash_operator)
    lexer->mark_end(lexer);

  if (dot_valid && lexer->lookahead == '.') {
    if (scan_code_dot_ahead(lexer))
      return true;
    if (!newline_valid)
      return false;
    lexer->result_symbol = CODE_NEWLINE;
    return true;
  }
  if (else_valid && lexer->lookahead == 'e' && scan_code_else_ahead(lexer)) {
    return true;
  }
  if (close_valid && (lexer->lookahead == ')' || lexer->lookahead == ']' ||
                      lexer->lookahead == '}')) {
    lexer->result_symbol = CODE_CLOSE_AHEAD;
    return true;
  }
  if (lexer->lookahead == '=') {
    advance(lexer);

    if (lexer->lookahead == '>') {
      if (!newline_valid)
        return false;
      lexer->result_symbol = CODE_NEWLINE;
      return true;
    }

    if (operator_mask != 0) {
      if (lexer->lookahead == '=') {
        if (operator_mask & OP_COMPARISON) {
          lexer->result_symbol = CODE_COMPARISON_OPERATOR_AHEAD;
          return true;
        }
        if (newline_valid) {
          lexer->result_symbol = CODE_NEWLINE;
          return true;
        }
        return false;
      }
      if (operator_mask & OP_ASSIGNMENT) {
        lexer->result_symbol = CODE_ASSIGNMENT_OPERATOR_AHEAD;
        return true;
      }
      if (newline_valid) {
        lexer->result_symbol = CODE_NEWLINE;
        return true;
      }
      return false;
    }
    if (newline_valid) {
      lexer->result_symbol = CODE_NEWLINE;
      return true;
    }
    return false;
  }
  // Prefer specific continuation guards over generic CODE_NEWLINE. Comma-list
  // states can make both valid, but choosing the newline first would split
  // `1\n+ 2` before the operator tier can claim it.
  if (operator_mask != 0 &&
      scan_code_operator_ahead(lexer, slash_operator, operator_mask))
    return true;
  if (!newline_valid)
    return false;

  lexer->result_symbol = CODE_NEWLINE;
  return true;
}

static void *scanner_create(void) { return ts_calloc(1, sizeof(Scanner)); }
static void scanner_destroy(void *payload) { ts_free(payload); }

static unsigned scanner_serialize(void *payload, char *buffer) {
  const Scanner *scanner = (const Scanner *)payload;
  // Fixed fields first, then the bounded list stack. Keeping this layout
  // explicit makes it harder to forget that every serialized byte is part of
  // the incremental-parse contract.
  unsigned written = 0;
  written = write_u32(buffer, written, scanner->raw_delimiter_length);
  written = write_u32(buffer, written, scanner->unit_column_plus_one);
  written = write_u32(buffer, written,
                      scanner->immediate_postfix_blocked_column_plus_one);
  buffer[written++] = (char)scanner->list_depth;

  for (uint8_t i = 0; i < scanner->list_depth; i++) {
    written = write_u32(buffer, written, scanner->list_indents[i]);
  }
  return written;
}

static void scanner_deserialize(void *payload, const char *buffer,
                                unsigned length) {
  Scanner *scanner = (Scanner *)payload;
  // Always clear before validating the buffer. A truncated serialized state
  // should resume from a neutral scanner.
  scanner->raw_delimiter_length = 0;
  scanner->unit_column_plus_one = 0;
  scanner->immediate_postfix_blocked_column_plus_one = 0;
  scanner->list_depth = 0;

  if (length < SCANNER_FIXED_STATE_SIZE)
    return;

  uint8_t depth = (uint8_t)buffer[SCANNER_LIST_DEPTH_OFFSET];
  unsigned read = SCANNER_FIXED_STATE_SIZE;
  if (depth > MAX_LIST_DEPTH || length < read + 4u * depth)
    return;

  unsigned offset = 0;
  scanner->raw_delimiter_length = read_u32(buffer, offset);
  offset += 4u;
  scanner->unit_column_plus_one = read_u32(buffer, offset);
  offset += 4u;
  scanner->immediate_postfix_blocked_column_plus_one = read_u32(buffer, offset);
  scanner->list_depth = depth;

  for (uint8_t i = 0; i < depth; i++) {
    scanner->list_indents[i] = read_u32(buffer, read);
    read += 4;
  }
}

static bool scanner_scan(void *payload, TSLexer *lexer,
                         const bool *valid_symbols) {
  Scanner *scanner = (Scanner *)payload;

  // Recovery states pass broad valid-symbol sets. Opt out before mutating
  // column latches so failed recovery probes do not affect the next real scan.
  if (valid_symbols[ERROR_SENTINEL])
    return false;

  if (scanner->immediate_postfix_blocked_column_plus_one != 0 &&
      scanner->immediate_postfix_blocked_column_plus_one !=
          current_column_plus_one(lexer)) {
    clear_immediate_postfix_block(scanner);
  }

  if (scanner->raw_delimiter_length != 0) {
    if (valid_symbols[RAW_LANGUAGE] && scan_raw_language(scanner, lexer)) {
      return true;
    }
    if (valid_symbols[RAW_CONTENT] || valid_symbols[RAW_CLOSE]) {
      return scan_raw_body(scanner, lexer, valid_symbols[RAW_CONTENT],
                           valid_symbols[RAW_CLOSE]);
    }
    return false;
  }

  bool code_space_valid =
      valid_symbols[CODE_SPACE] && !valid_symbols[MARKUP_SPACE] &&
      !valid_symbols[MARKUP_WORD_GAP] && !valid_symbols[MATH_SPACE];

  // Scanner convention: helpers that advance before deciding must either be
  // called with `return helper(...)` or handle every same-position fallback
  // internally. Do not call a mutating probe, ignore `false`, and then try a
  // generic fallback token in the same scan call.

  // This probe is zero-width on both success and failure, so a failed check is
  // allowed to fall through to external extras such as block comments.
  if (valid_symbols[EMBEDDED_STATEMENT_END] &&
      scan_embedded_statement_end(lexer)) {
    return true;
  }

  // External scanner probes cannot backtrack within one `scan` call. Once
  // one of these helpers is selected, return its result directly even when it
  // declines the token after lookahead.
  if (scanner->list_depth != 0 &&
      (lexer->eof(lexer) || lexer->lookahead == ']' ||
       is_newline(lexer->lookahead)) &&
      (valid_symbols[LIST_CONTINUATION] || valid_symbols[LIST_END])) {
    return scan_list_boundary(scanner, lexer, valid_symbols[LIST_CONTINUATION],
                              valid_symbols[LIST_END]);
  }

  if (is_newline(lexer->lookahead) &&
      (valid_symbols[PARBREAK] || valid_symbols[MARKUP_NEWLINE])) {
    return scan_markup_newline(lexer, valid_symbols[PARBREAK],
                               valid_symbols[MARKUP_NEWLINE]);
  }

  if (valid_symbols[MARKUP_INDENT] && lexer->get_column(lexer) == 0 &&
      scan_markup_hspace(lexer, MARKUP_INDENT)) {
    return true;
  }
  if ((valid_symbols[MARKUP_WORD_GAP] || valid_symbols[MARKUP_SPACE]) &&
      scan_markup_space_or_word_gap(lexer, valid_symbols[MARKUP_WORD_GAP],
                                    valid_symbols[MARKUP_SPACE],
                                    valid_symbols[CODE_ELSE_SPACE_AHEAD])) {
    return true;
  }

  if (lexer->lookahead == '/' &&
      (valid_symbols[BLOCK_COMMENT] || valid_symbols[TERM_LIST_MARKER] ||
       valid_symbols[MATH_FRACTION_AHEAD])) {
    return scan_slash_prefixed(scanner, lexer, valid_symbols);
  }

  if ((valid_symbols[MATH_FRACTION_SPACE] ||
       valid_symbols[MATH_EXPRESSION_SPACE] ||
       valid_symbols[MATH_ATTACHMENT_SPACE] ||
       valid_symbols[MATH_CLOSE_SPACE] ||
       valid_symbols[MATH_ARGUMENT_SEPARATOR_SPACE]) &&
      is_unicode_space(lexer->lookahead)) {
    return scan_math_space_boundary(
        lexer, valid_symbols[MATH_FRACTION_SPACE],
        valid_symbols[MATH_EXPRESSION_SPACE],
        valid_symbols[MATH_ATTACHMENT_SPACE], valid_symbols[MATH_CLOSE_SPACE],
        valid_symbols[MATH_ARGUMENT_SEPARATOR_SPACE],
        valid_symbols[MATH_SPACE]);
  }
  if (valid_symbols[MATH_SPACE] && scan_math_space(lexer))
    return true;

  if (lexer->lookahead == '.' &&
      (valid_symbols[ATOMIC_FIELD_DOT] || valid_symbols[INTEGER] ||
       valid_symbols[FLOAT] || valid_symbols[SHORTHAND] ||
       valid_symbols[MATH_SPREAD_OPERATOR])) {
    return scan_dot_prefixed(scanner, lexer, valid_symbols);
  }

  if (valid_symbols[CODE_ARGUMENT_AHEAD] &&
      (lexer->lookahead == '(' || lexer->lookahead == '[') &&
      !immediate_postfix_blocked(scanner, lexer)) {
    lexer->mark_end(lexer);
    lexer->result_symbol = CODE_ARGUMENT_AHEAD;
    return true;
  }

  if (valid_symbols[CODE_CONTROL_BODY_AHEAD] && lexer->lookahead == '{') {
    lexer->mark_end(lexer);
    lexer->result_symbol = CODE_CONTROL_BODY_AHEAD;
    return true;
  }

  if (valid_symbols[CODE_CONTROL_BODY_AHEAD] && lexer->lookahead == '[' &&
      immediate_postfix_blocked(scanner, lexer)) {
    lexer->mark_end(lexer);
    lexer->result_symbol = CODE_CONTROL_BODY_AHEAD;
    return true;
  }

  if ((valid_symbols[CODE_CONTROL_BODY_AHEAD] ||
       valid_symbols[CODE_ELSE_SPACE_AHEAD] || code_space_valid) &&
      is_unicode_space(lexer->lookahead) && !is_newline(lexer->lookahead) &&
      scan_code_contextual_space_ahead(
          lexer, valid_symbols[CODE_CONTROL_BODY_AHEAD],
          valid_symbols[ATOMIC_FIELD_DOT],
          valid_symbols[CODE_ELSE_SPACE_AHEAD], code_space_valid)) {
    if (lexer->result_symbol == CODE_SPACE) {
      clear_unit_pending(scanner);
      record_immediate_postfix_block_after_trivia(scanner, lexer);
    }
    return true;
  }

  uint8_t operator_mask = 0;
  if (valid_symbols[CODE_ASSIGNMENT_OPERATOR_AHEAD])
    operator_mask |= OP_ASSIGNMENT;
  if (valid_symbols[CODE_LOGICAL_OR_OPERATOR_AHEAD])
    operator_mask |= OP_LOGICAL_OR;
  if (valid_symbols[CODE_LOGICAL_AND_OPERATOR_AHEAD])
    operator_mask |= OP_LOGICAL_AND;
  if (valid_symbols[CODE_COMPARISON_OPERATOR_AHEAD])
    operator_mask |= OP_COMPARISON;
  if (valid_symbols[CODE_ADDITION_OPERATOR_AHEAD])
    operator_mask |= OP_ADDITION;
  if (valid_symbols[CODE_MULTIPLICATION_OPERATOR_AHEAD])
    operator_mask |= OP_MULTIPLICATION;

  if ((valid_symbols[CODE_DOT_AHEAD] || valid_symbols[CODE_ELSE_AHEAD] ||
       operator_mask != 0 || valid_symbols[CODE_CLOSE_AHEAD] ||
       valid_symbols[CODE_NEWLINE]) &&
      is_newline(lexer->lookahead)) {
    return scan_code_newline_or_continuation_ahead(
        lexer, valid_symbols[CODE_DOT_AHEAD], valid_symbols[CODE_ELSE_AHEAD],
        operator_mask, valid_symbols[CODE_CLOSE_AHEAD],
        valid_symbols[CODE_NEWLINE]);
  }

  if (valid_symbols[RAW_OPEN] && lexer->lookahead == '`') {
    return scan_raw_open(scanner, lexer);
  }

  if ((valid_symbols[HEADING_MARKER] || valid_symbols[BULLET_LIST_MARKER] ||
       valid_symbols[NUMBERED_LIST_MARKER]) &&
      (lexer->lookahead == '=' || lexer->lookahead == '+' ||
       ascii_digit(lexer->lookahead))) {
    return scan_markup_marker(scanner, lexer, valid_symbols);
  }

  if (lexer->lookahead == '-' &&
      (valid_symbols[BULLET_LIST_MARKER] || valid_symbols[SHORTHAND])) {
    return scan_markup_dash(scanner, lexer, valid_symbols[BULLET_LIST_MARKER],
                            valid_symbols[SHORTHAND]);
  }

  if (valid_symbols[SHORTHAND] && lexer->lookahead == '~') {
    return scan_markup_shorthand(lexer);
  }

  if (valid_symbols[AUTOMATIC_LINK] && lexer->lookahead == 'h') {
    return scan_automatic_link(lexer);
  }

  if ((valid_symbols[INTEGER] || valid_symbols[FLOAT]) &&
      ascii_digit(lexer->lookahead)) {
    return scan_code_number(scanner, lexer, valid_symbols);
  }

  if (valid_symbols[UNIT] && scan_numeric_unit(scanner, lexer)) {
    return true;
  }

  if ((valid_symbols[MATH_ARGUMENT_IDENTIFIER] ||
       valid_symbols[MATH_IDENTIFIER] || valid_symbols[MATH_LETTER]) &&
      (is_math_id_start(lexer->lookahead) ||
       (valid_symbols[MATH_ARGUMENT_IDENTIFIER] &&
        is_id_start(lexer->lookahead)))) {
    return scan_math_word(lexer, valid_symbols[MATH_ARGUMENT_IDENTIFIER],
                          valid_symbols[MATH_IDENTIFIER],
                          valid_symbols[MATH_LETTER]);
  }

  if (valid_symbols[MATH_TEXT] && scan_math_text(lexer)) {
    return true;
  }

  if ((valid_symbols[SHEBANG] || valid_symbols[HASH]) &&
      lexer->lookahead == '#') {
    return scan_hash_or_shebang(lexer, valid_symbols[SHEBANG],
                                valid_symbols[HASH]);
  }

  return false;
}

#define DEFINE_SCANNER(prefix)                                                 \
  void *tree_sitter_##prefix##_external_scanner_create(void) {                 \
    return scanner_create();                                                   \
  }                                                                            \
  void tree_sitter_##prefix##_external_scanner_destroy(void *payload) {        \
    scanner_destroy(payload);                                                  \
  }                                                                            \
  unsigned tree_sitter_##prefix##_external_scanner_serialize(void *payload,    \
                                                             char *buffer) {   \
    return scanner_serialize(payload, buffer);                                 \
  }                                                                            \
  void tree_sitter_##prefix##_external_scanner_deserialize(                    \
      void *payload, const char *buffer, unsigned length) {                    \
    scanner_deserialize(payload, buffer, length);                              \
  }                                                                            \
  bool tree_sitter_##prefix##_external_scanner_scan(                           \
      void *payload, TSLexer *lexer, const bool *valid_symbols) {              \
    return scanner_scan(payload, lexer, valid_symbols);                        \
  }

DEFINE_SCANNER(typst)
DEFINE_SCANNER(typc)
DEFINE_SCANNER(typm)
