#include <assert.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../../src/scanner.c"

typedef struct {
  TSLexer lexer;
  const unsigned char *input;
  size_t length;
  size_t position;
  size_t mark;
  size_t width;
} MockLexer;

static MockLexer *mock(TSLexer *lexer) { return (MockLexer *)lexer; }
static const MockLexer *cmock(const TSLexer *lexer) {
  return (const MockLexer *)lexer;
}

static int32_t decode_utf8(const unsigned char *s, size_t length, size_t *width) {
  if (length == 0) {
    *width = 0;
    return 0;
  }
  unsigned c = s[0];
  if (c < 0x80) {
    *width = 1;
    return (int32_t)c;
  }
  if ((c & 0xE0) == 0xC0 && length >= 2) {
    *width = 2;
    return (int32_t)(((c & 0x1F) << 6) | (s[1] & 0x3F));
  }
  if ((c & 0xF0) == 0xE0 && length >= 3) {
    *width = 3;
    return (int32_t)(((c & 0x0F) << 12) | ((s[1] & 0x3F) << 6) |
                     (s[2] & 0x3F));
  }
  if ((c & 0xF8) == 0xF0 && length >= 4) {
    *width = 4;
    return (int32_t)(((c & 0x07) << 18) | ((s[1] & 0x3F) << 12) |
                     ((s[2] & 0x3F) << 6) | (s[3] & 0x3F));
  }
  *width = 1;
  return 0xFFFD;
}

static void refresh(MockLexer *m) {
  if (m->position >= m->length) {
    m->lexer.lookahead = 0;
    m->width = 0;
  } else {
    m->lexer.lookahead =
        decode_utf8(m->input + m->position, m->length - m->position, &m->width);
  }
}

static void mock_advance(TSLexer *lexer, bool skip) {
  (void)skip;
  MockLexer *m = mock(lexer);
  if (m->position < m->length) m->position += m->width;
  refresh(m);
}

static void mock_mark_end(TSLexer *lexer) {
  mock(lexer)->mark = mock(lexer)->position;
}

static uint32_t mock_get_column(TSLexer *lexer) {
  const MockLexer *m = cmock(lexer);
  size_t line = m->position;
  while (line > 0 && m->input[line - 1] != '\n' && m->input[line - 1] != '\r') {
    line--;
  }

  uint32_t column = 0;
  while (line < m->position) {
    size_t width = 0;
    (void)decode_utf8(m->input + line, m->position - line, &width);
    line += width;
    column++;
  }
  return column;
}

static bool mock_included_start(const TSLexer *lexer) {
  (void)lexer;
  return false;
}

static bool mock_eof(const TSLexer *lexer) {
  const MockLexer *m = cmock(lexer);
  return m->position >= m->length;
}

static void mock_log(const TSLexer *lexer, const char *format, ...) {
  (void)lexer;
  (void)format;
}

static void mock_init(MockLexer *m, const char *input) {
  memset(m, 0, sizeof(*m));
  m->input = (const unsigned char *)input;
  m->length = strlen(input);
  m->lexer.advance = mock_advance;
  m->lexer.mark_end = mock_mark_end;
  m->lexer.get_column = mock_get_column;
  m->lexer.is_at_included_range_start = mock_included_start;
  m->lexer.eof = mock_eof;
  m->lexer.log = mock_log;
  refresh(m);
}

static void mock_jump(MockLexer *m, size_t position) {
  assert(position <= m->length);
  m->position = position;
  refresh(m);
}

static bool scan_valid(void *scanner, MockLexer *m, const enum TokenType *tokens,
                       size_t token_count, size_t *end) {
  bool valid[ERROR_SENTINEL + 1] = {false};
  for (size_t i = 0; i < token_count; i++) valid[tokens[i]] = true;

  size_t start = m->position;
  m->mark = start;
  bool ok = tree_sitter_typst_external_scanner_scan(scanner, &m->lexer, valid);
  if (ok) {
    m->position = m->mark;
    refresh(m);
    if (end) *end = m->position;
  } else {
    // Tree-sitter restores the lexer after a failed external scan.
    m->position = start;
    refresh(m);
  }
  return ok;
}

static bool scan_one(void *scanner, MockLexer *m, enum TokenType token,
                     size_t *end) {
  return scan_valid(scanner, m, &token, 1, end);
}

static bool scan_raw_choice(void *scanner, MockLexer *m, size_t *end) {
  const enum TokenType tokens[] = {RAW_LANGUAGE, RAW_CONTENT, RAW_CLOSE};
  return scan_valid(scanner, m, tokens, 3, end);
}

static bool scan_list_choice(void *scanner, MockLexer *m, size_t *end) {
  const enum TokenType tokens[] = {LIST_CONTINUATION, LIST_END};
  return scan_valid(scanner, m, tokens, 2, end);
}

static void scan_continuation_gap(void *scanner, MockLexer *m, size_t *end) {
  assert(scan_one(scanner, m, MARKUP_NEWLINE, end));
  if (is_markup_hspace(m->lexer.lookahead))
    assert(scan_one(scanner, m, MARKUP_INDENT, end));
}

static bool scan_number(void *scanner, MockLexer *m, size_t *end) {
  const enum TokenType tokens[] = {INTEGER, FLOAT};
  return scan_valid(scanner, m, tokens, 2, end);
}

static bool scan_math_word_choice(void *scanner, MockLexer *m, size_t *end) {
  const enum TokenType tokens[] = {MATH_IDENTIFIER, MATH_LETTER};
  return scan_valid(scanner, m, tokens, 2, end);
}

static bool scan_math_argument_choice(void *scanner, MockLexer *m, size_t *end) {
  const enum TokenType tokens[] = {
      MATH_ARGUMENT_IDENTIFIER, MATH_IDENTIFIER, MATH_LETTER,
  };
  return scan_valid(scanner, m, tokens, 3, end);
}

static bool scan_math_text_choice(void *scanner, MockLexer *m, size_t *end) {
  const enum TokenType tokens[] = {MATH_TEXT};
  return scan_valid(scanner, m, tokens, 1, end);
}

static bool scan_automatic_link_choice(void *scanner, MockLexer *m,
                                       size_t *end) {
  const enum TokenType tokens[] = {AUTOMATIC_LINK};
  return scan_valid(scanner, m, tokens, 1, end);
}

static void test_hash_and_shebang(void) {
  void *s = tree_sitter_typst_external_scanner_create();
  MockLexer m;
  size_t end = 0;

  const char *cases[] = {
      "#foo",
      "#!x",
      "#",
      "#\nfoo",
      "#   \nfoo",
      "# // comment\nfoo",
      "#/* comment */\nfoo",
      "#// comment",
  };
  for (size_t i = 0; i < sizeof(cases) / sizeof(cases[0]); i++) {
    mock_init(&m, cases[i]);
    assert(scan_one(s, &m, HASH, &end));
    assert(end == 1);
  }

  const char *invalid[] = {
      "# foo",
      "#/* comment */foo",
      "# / not-comment",
  };
  for (size_t i = 0; i < sizeof(invalid) / sizeof(invalid[0]); i++) {
    mock_init(&m, invalid[i]);
    assert(!scan_one(s, &m, HASH, NULL));
    assert(m.position == 0);
  }

  mock_init(&m, "#!/usr/bin/env typst\nbody");
  assert(scan_one(s, &m, SHEBANG, &end));
  assert(m.lexer.result_symbol == SHEBANG);
  assert(end == strlen("#!/usr/bin/env typst"));

  // When both are valid at source start, prefer the complete shebang.
  mock_init(&m, "#!typst\nbody");
  const enum TokenType both[] = {SHEBANG, HASH};
  assert(scan_valid(s, &m, both, 2, &end));
  assert(m.lexer.result_symbol == SHEBANG);
  assert(end == strlen("#!typst"));

  tree_sitter_typst_external_scanner_destroy(s);
}

static void test_embedded_unclosed_set_arguments(void) {
  void *s = tree_sitter_typst_external_scanner_create();
  MockLexer m;
  size_t end = 0;

  mock_init(&m, "(\n#show");
  assert(scan_one(s, &m, EMBEDDED_UNCLOSED_SET_ARGUMENTS, &end));
  assert(end == strlen("("));

  mock_init(&m, "(title: \"T\";\nnext");
  assert(scan_one(s, &m, EMBEDDED_UNCLOSED_SET_ARGUMENTS, &end));
  assert(end == strlen("(title: \"T\""));

  mock_init(&m, "(title: \")\"\n#show");
  assert(scan_one(s, &m, EMBEDDED_UNCLOSED_SET_ARGUMENTS, &end));
  assert(end == strlen("(title: \")\""));

  mock_init(&m, "( // bad\n#show");
  assert(scan_one(s, &m, EMBEDDED_UNCLOSED_SET_ARGUMENTS, &end));
  assert(end == strlen("( "));

  mock_init(&m, "(/* bad */\n#show");
  assert(scan_one(s, &m, EMBEDDED_UNCLOSED_SET_ARGUMENTS, &end));
  assert(end == strlen("("));

  mock_init(&m, "(\n  title: \"T\"");
  assert(!scan_one(s, &m, EMBEDDED_UNCLOSED_SET_ARGUMENTS, NULL));
  assert(m.position == 0);

  mock_init(&m, "(title: \"T\")\nnext");
  assert(!scan_one(s, &m, EMBEDDED_UNCLOSED_SET_ARGUMENTS, NULL));
  assert(m.position == 0);

  mock_init(&m, "(title: \"T\",\n)");
  assert(!scan_one(s, &m, EMBEDDED_UNCLOSED_SET_ARGUMENTS, NULL));
  assert(m.position == 0);

  mock_init(&m, "(body: [hello])\nnext");
  assert(!scan_one(s, &m, EMBEDDED_UNCLOSED_SET_ARGUMENTS, NULL));
  assert(m.position == 0);

  mock_init(&m, "(body: [\n#emph[Hello]\n])");
  assert(!scan_one(s, &m, EMBEDDED_UNCLOSED_SET_ARGUMENTS, NULL));
  assert(m.position == 0);

  mock_init(&m, "+\nnext");
  assert(!scan_one(s, &m, EMBEDDED_UNCLOSED_SET_ARGUMENTS, NULL));
  assert(m.position == 0);

  mock_init(&m, "\nnext");
  assert(!scan_one(s, &m, EMBEDDED_UNCLOSED_SET_ARGUMENTS, NULL));
  assert(m.position == 0);

  mock_init(&m, ";");
  assert(!scan_one(s, &m, EMBEDDED_UNCLOSED_SET_ARGUMENTS, NULL));
  assert(m.position == 0);

  tree_sitter_typst_external_scanner_destroy(s);
}

static void test_embedded_return_dangling_operator(void) {
  void *s = tree_sitter_typst_external_scanner_create();
  MockLexer m;
  size_t end = 0;

  mock_init(&m, "return foo +\nnext");
  assert(scan_one(s, &m, EMBEDDED_RETURN_DANGLING_OPERATOR, &end));
  assert(end == strlen("return foo +"));

  mock_init(&m, "return 1 +\nnext");
  assert(scan_one(s, &m, EMBEDDED_RETURN_DANGLING_OPERATOR, &end));
  assert(end == strlen("return 1 +"));

  mock_init(&m, "return foo.bar +\nnext");
  assert(scan_one(s, &m, EMBEDDED_RETURN_DANGLING_OPERATOR, &end));
  assert(end == strlen("return foo.bar +"));

  mock_init(&m, "return foo() +\nnext");
  assert(scan_one(s, &m, EMBEDDED_RETURN_DANGLING_OPERATOR, &end));
  assert(end == strlen("return foo() +"));

  mock_init(&m, "return \"x\" +\nnext");
  assert(scan_one(s, &m, EMBEDDED_RETURN_DANGLING_OPERATOR, &end));
  assert(end == strlen("return \"x\" +"));

  mock_init(&m, "return (foo) +\nnext");
  assert(scan_one(s, &m, EMBEDDED_RETURN_DANGLING_OPERATOR, &end));
  assert(end == strlen("return (foo) +"));

  mock_init(&m, "return foo and\nnext");
  assert(scan_one(s, &m, EMBEDDED_RETURN_DANGLING_OPERATOR, &end));
  assert(end == strlen("return foo and"));

  mock_init(&m, "return foo or\nnext");
  assert(scan_one(s, &m, EMBEDDED_RETURN_DANGLING_OPERATOR, &end));
  assert(end == strlen("return foo or"));

  mock_init(&m, "return foo in\nnext");
  assert(scan_one(s, &m, EMBEDDED_RETURN_DANGLING_OPERATOR, &end));
  assert(end == strlen("return foo in"));

  mock_init(&m, "return foo not in\nnext");
  assert(scan_one(s, &m, EMBEDDED_RETURN_DANGLING_OPERATOR, &end));
  assert(end == strlen("return foo not in"));

  mock_init(&m, "return foo /\nnext");
  assert(scan_one(s, &m, EMBEDDED_RETURN_DANGLING_OPERATOR, &end));
  assert(end == strlen("return foo /"));

  mock_init(&m, "return foo + // bad\nnext");
  assert(scan_one(s, &m, EMBEDDED_RETURN_DANGLING_OPERATOR, &end));
  assert(end == strlen("return foo +"));

  mock_init(&m, "return foo / // bad\nnext");
  assert(scan_one(s, &m, EMBEDDED_RETURN_DANGLING_OPERATOR, &end));
  assert(end == strlen("return foo /"));

  mock_init(&m, "return foo // comment\nnext");
  assert(!scan_one(s, &m, EMBEDDED_RETURN_DANGLING_OPERATOR, NULL));
  assert(m.position == 0);

  mock_init(&m, "return foo + 1\nnext");
  assert(!scan_one(s, &m, EMBEDDED_RETURN_DANGLING_OPERATOR, NULL));
  assert(m.position == 0);

  mock_init(&m, "return foo in bar\nnext");
  assert(!scan_one(s, &m, EMBEDDED_RETURN_DANGLING_OPERATOR, NULL));
  assert(m.position == 0);

  mock_init(&m, "return foo not in bar\nnext");
  assert(!scan_one(s, &m, EMBEDDED_RETURN_DANGLING_OPERATOR, NULL));
  assert(m.position == 0);

  mock_init(&m, "returning foo +\nnext");
  assert(!scan_one(s, &m, EMBEDDED_RETURN_DANGLING_OPERATOR, NULL));
  assert(m.position == 0);

  mock_init(&m, "return +\nnext");
  assert(!scan_one(s, &m, EMBEDDED_RETURN_DANGLING_OPERATOR, NULL));
  assert(m.position == 0);

  tree_sitter_typst_external_scanner_destroy(s);
}

static void test_nested_comment(void) {
  void *s = tree_sitter_typst_external_scanner_create();
  MockLexer m;
  size_t end = 0;
  mock_init(&m, "/* a /* b */ c */tail");
  assert(scan_one(s, &m, BLOCK_COMMENT, &end));
  assert(end == strlen("/* a /* b */ c */"));
  tree_sitter_typst_external_scanner_destroy(s);
}

static void test_marker_boundaries(void) {
  void *s = tree_sitter_typst_external_scanner_create();
  MockLexer m;
  size_t end = 0;

  struct Case {
    const char *input;
    enum TokenType token;
    bool valid;
    size_t end;
  } cases[] = {
      {"=foo", HEADING_MARKER, false, 0},
      {"= foo", HEADING_MARKER, true, 1},
      {"==//comment", HEADING_MARKER, true, 2},
      {"-foo", BULLET_LIST_MARKER, false, 0},
      {"- item", BULLET_LIST_MARKER, true, 1},
      {"+ item", NUMBERED_LIST_MARKER, true, 1},
      {"1.foo", NUMBERED_LIST_MARKER, false, 0},
      {"12. item", NUMBERED_LIST_MARKER, true, 3},
      {"18446744073709551616. item", NUMBERED_LIST_MARKER, true, 21},
      {"/foo", TERM_LIST_MARKER, false, 0},
      {"/ Term", TERM_LIST_MARKER, true, 1},
      {"//comment", TERM_LIST_MARKER, false, 0},
      {"/*comment*/", TERM_LIST_MARKER, false, 0},
  };

  for (size_t i = 0; i < sizeof(cases) / sizeof(cases[0]); i++) {
    // List markers mutate indentation state, so use a fresh scanner per case.
    tree_sitter_typst_external_scanner_destroy(s);
    s = tree_sitter_typst_external_scanner_create();
    mock_init(&m, cases[i].input);
    bool ok = scan_one(s, &m, cases[i].token, &end);
    assert(ok == cases[i].valid);
    if (ok) assert(end == cases[i].end);
  }

  tree_sitter_typst_external_scanner_destroy(s);
}

static void test_list_continuation(void) {
  void *s = tree_sitter_typst_external_scanner_create();
  MockLexer m;
  size_t end = 0;
  const char *input = "- first\n  continuation\nnext";
  mock_init(&m, input);

  assert(scan_one(s, &m, BULLET_LIST_MARKER, &end));
  assert(((Scanner *)s)->list_depth == 1);

  mock_jump(&m, strlen("- first"));
  assert(scan_list_choice(s, &m, &end));
  assert(m.lexer.result_symbol == LIST_CONTINUATION);
  assert(end == strlen("- first"));

  mock_jump(&m, strlen("- first\n  continuation"));
  assert(scan_list_choice(s, &m, &end));
  assert(m.lexer.result_symbol == LIST_END);
  assert(end == strlen("- first\n  continuation"));
  assert(((Scanner *)s)->list_depth == 0);

  tree_sitter_typst_external_scanner_destroy(s);

  s = tree_sitter_typst_external_scanner_create();
  input = "- first\n  // c\n  continuation\nnext";
  mock_init(&m, input);

  assert(scan_one(s, &m, BULLET_LIST_MARKER, &end));
  mock_jump(&m, strlen("- first"));
  assert(scan_list_choice(s, &m, &end));
  assert(m.lexer.result_symbol == LIST_CONTINUATION);
  assert(end == strlen("- first"));

  mock_jump(&m, strlen("- first\n  // c\n  continuation"));
  assert(scan_list_choice(s, &m, &end));
  assert(m.lexer.result_symbol == LIST_END);
  tree_sitter_typst_external_scanner_destroy(s);

  s = tree_sitter_typst_external_scanner_create();
  input = "- first\n  /* c */\n  continuation\nnext";
  mock_init(&m, input);

  assert(scan_one(s, &m, BULLET_LIST_MARKER, &end));
  mock_jump(&m, strlen("- first"));
  assert(scan_list_choice(s, &m, &end));
  assert(m.lexer.result_symbol == LIST_CONTINUATION);
  assert(end == strlen("- first"));

  mock_jump(&m, strlen("- first\n  /* c */\n  continuation"));
  assert(scan_list_choice(s, &m, &end));
  assert(m.lexer.result_symbol == LIST_END);
  tree_sitter_typst_external_scanner_destroy(s);
}

static void test_nested_list_indentation(void) {
  void *s = tree_sitter_typst_external_scanner_create();
  MockLexer m;
  size_t end = 0;
  const char *input = "- outer\n  - inner\n  tail\nnext";
  mock_init(&m, input);

  assert(scan_one(s, &m, BULLET_LIST_MARKER, &end));
  assert(((Scanner *)s)->list_depth == 1);
  assert(((Scanner *)s)->list_indents[0] == 0);

  mock_jump(&m, strlen("- outer"));
  assert(scan_list_choice(s, &m, &end));
  assert(m.lexer.result_symbol == LIST_CONTINUATION);
  assert(end == strlen("- outer"));
  scan_continuation_gap(s, &m, &end);

  // The nested marker records its physical marker column.
  assert(scan_one(s, &m, BULLET_LIST_MARKER, &end));
  assert(((Scanner *)s)->list_depth == 2);
  assert(((Scanner *)s)->list_indents[1] == 2);

  mock_jump(&m, strlen("- outer\n  - inner"));
  assert(scan_list_choice(s, &m, &end));
  assert(m.lexer.result_symbol == LIST_END);
  assert(((Scanner *)s)->list_depth == 1);

  // The same physical newline can now be reconsidered for the outer item.
  mock_jump(&m, strlen("- outer\n  - inner"));
  assert(scan_list_choice(s, &m, &end));
  assert(m.lexer.result_symbol == LIST_CONTINUATION);
  assert(((Scanner *)s)->list_depth == 1);

  mock_jump(&m, strlen("- outer\n  - inner\n  tail"));
  assert(scan_list_choice(s, &m, &end));
  assert(m.lexer.result_symbol == LIST_END);
  assert(((Scanner *)s)->list_depth == 0);

  tree_sitter_typst_external_scanner_destroy(s);

  // A marker on an indented first line records its physical marker column.
  s = tree_sitter_typst_external_scanner_create();
  mock_init(&m, "  - item");
  assert(scan_one(s, &m, MARKUP_INDENT, &end));
  assert(end == 2);
  assert(scan_one(s, &m, BULLET_LIST_MARKER, &end));
  assert(((Scanner *)s)->list_indents[0] == 2);
  tree_sitter_typst_external_scanner_destroy(s);
}

static void test_markup_newline_boundary(void) {
  void *s = tree_sitter_typst_external_scanner_create();
  MockLexer m;
  size_t end = 0;

  mock_init(&m, "\n  \nX");
  assert(!scan_one(s, &m, MARKUP_NEWLINE, NULL));
  assert(m.position == 0);

  mock_init(&m, "\n  \nX");
  assert(scan_one(s, &m, PARBREAK, &end));
  assert(end == 4);

  mock_init(&m, "\n  X");
  assert(scan_one(s, &m, MARKUP_NEWLINE, &end));
  assert(end == 1);

  tree_sitter_typst_external_scanner_destroy(s);
}

static void test_code_numbers(void) {
  void *s = tree_sitter_typst_external_scanner_create();
  MockLexer m;
  size_t end = 0;

  struct NumberCase {
    const char *input;
    enum TokenType token;
    size_t end;
  } cases[] = {
      {"1.abs()", INTEGER, 1},
      {"1..2", INTEGER, 1},
      {"1.pt", INTEGER, 1},
      {"1.", FLOAT, 2},
      {"1.25", FLOAT, 4},
      {".5em", FLOAT, 2},
      {"12pt", INTEGER, 2},
      {"1e-3in", FLOAT, 4},
      {"9223372036854775807", INTEGER, 19},
      {"9223372036854775808", INTEGER, 19},
      {"0000000009223372036854775807", INTEGER, 28},
      {"0000000009223372036854775808", INTEGER, 28},
      {"0xff", INTEGER, 4},
      {"0x7fffffffffffffff", INTEGER, 18},
      {"0b101", INTEGER, 5},
      {"0o77", INTEGER, 4},
  };

  for (size_t i = 0; i < sizeof(cases) / sizeof(cases[0]); i++) {
    mock_init(&m, cases[i].input);
    assert(scan_number(s, &m, &end));
    assert(m.lexer.result_symbol == cases[i].token);
    assert(end == cases[i].end);
  }

  struct NumberCase loose_exponents[] = {
      {"1e", INTEGER, 1},
      {"1E", INTEGER, 1},
      {"1e+", INTEGER, 1},
      {"1E-", INTEGER, 1},
      {"1ex", INTEGER, 1},
      {"1.2e", FLOAT, 3},
      {".5e+", FLOAT, 2},
  };
  for (size_t i = 0; i < sizeof(loose_exponents) / sizeof(loose_exponents[0]);
       i++) {
    mock_init(&m, loose_exponents[i].input);
    assert(scan_number(s, &m, &end));
    assert(m.lexer.result_symbol == loose_exponents[i].token);
    assert(end == loose_exponents[i].end);
  }

  struct NumberCase loose_prefixed[] = {
      {"0b102", INTEGER, 4},
      {"0xGG", INTEGER, 1},
      {"0x10pt", INTEGER, 4},
      {"0x8000000000000000", INTEGER, 18},
      {"0xffffffffffffffff", INTEGER, 18},
  };
  for (size_t i = 0; i < sizeof(loose_prefixed) / sizeof(loose_prefixed[0]);
       i++) {
    mock_init(&m, loose_prefixed[i].input);
    assert(scan_number(s, &m, &end));
    assert(m.lexer.result_symbol == loose_prefixed[i].token);
    assert(end == loose_prefixed[i].end);
  }

  mock_init(&m, "12pt");
  assert(scan_number(s, &m, &end));
  assert(end == 2);
  assert(scan_one(s, &m, UNIT, &end));
  assert(end == 4);

  mock_init(&m, "12/*\n*/pt");
  assert(scan_number(s, &m, &end));
  assert(end == 2);
  assert(scan_one(s, &m, BLOCK_COMMENT, &end));
  assert(end == strlen("12/*\n*/"));
  assert(!scan_one(s, &m, UNIT, NULL));

  tree_sitter_typst_external_scanner_destroy(s);
}

static void test_prefix_dispatch_no_corruption(void) {
  void *s = tree_sitter_typst_external_scanner_create();
  MockLexer m;
  size_t end = 0;

  const enum TokenType dot_number[] = {INTEGER, FLOAT};
  mock_init(&m, ".5");
  assert(scan_valid(s, &m, dot_number, 2, &end));
  assert(m.lexer.result_symbol == FLOAT);
  assert(end == 2);

  const enum TokenType newline_number[] = {INTEGER, FLOAT};
  mock_init(&m, "\n123");
  assert(!scan_valid(s, &m, newline_number, 2, NULL));
  assert(m.position == 0);

  const enum TokenType close_paren_gap[] = {CODE_NEWLINE};
  mock_init(&m, "\n  )");
  assert(scan_valid(s, &m, close_paren_gap, 1, &end));
  assert(m.lexer.result_symbol == CODE_NEWLINE);
  assert(end == 1);

  mock_init(&m, "\n  x");
  assert(scan_valid(s, &m, close_paren_gap, 1, &end));
  assert(m.lexer.result_symbol == CODE_NEWLINE);
  assert(end == 1);

  const enum TokenType code_continuation[] = {
      CODE_DOT_AHEAD,
      CODE_ELSE_AHEAD,
      CODE_ASSIGNMENT_OPERATOR_AHEAD,
      CODE_LOGICAL_OR_OPERATOR_AHEAD,
      CODE_LOGICAL_AND_OPERATOR_AHEAD,
      CODE_COMPARISON_OPERATOR_AHEAD,
      CODE_ADDITION_OPERATOR_AHEAD,
      CODE_MULTIPLICATION_OPERATOR_AHEAD,
      CODE_NEWLINE,
  };
  const enum TokenType code_contextual[] = {
      CODE_DOT_AHEAD,
      CODE_ELSE_AHEAD,
      CODE_NEWLINE,
  };
  mock_init(&m, "\n  /* c */\n  .field");
  assert(scan_valid(s, &m, code_contextual, 3, &end));
  assert(m.lexer.result_symbol == CODE_DOT_AHEAD);
  assert(end == 1);

  mock_init(&m, "\n  . /* c */ field");
  assert(scan_valid(s, &m, code_contextual, 3, &end));
  assert(m.lexer.result_symbol == CODE_DOT_AHEAD);
  assert(end == 3);

  mock_init(&m, "\n  ./* c */field");
  assert(scan_valid(s, &m, code_contextual, 3, &end));
  assert(m.lexer.result_symbol == CODE_DOT_AHEAD);
  assert(end == 3);

  mock_init(&m, "\n  ._field");
  assert(scan_valid(s, &m, code_contextual, 3, &end));
  assert(m.lexer.result_symbol == CODE_DOT_AHEAD);
  assert(end == 3);

  mock_init(&m, "\n  ._");
  assert(scan_valid(s, &m, code_contextual, 3, &end));
  assert(m.lexer.result_symbol == CODE_NEWLINE);
  assert(end == 3);

  mock_init(&m, "\n  .\n  field");
  assert(scan_valid(s, &m, code_contextual, 3, &end));
  assert(m.lexer.result_symbol == CODE_NEWLINE);
  assert(end == 3);

  mock_init(&m, "\n  ./*\n  */field");
  assert(scan_valid(s, &m, code_contextual, 3, &end));
  assert(m.lexer.result_symbol == CODE_NEWLINE);
  assert(end == 3);

  mock_init(&m, "\n  .5");
  assert(scan_valid(s, &m, code_contextual, 3, &end));
  assert(m.lexer.result_symbol == CODE_NEWLINE);
  assert(end == 3);

  mock_init(&m, "\n  ..field");
  assert(scan_valid(s, &m, code_contextual, 3, &end));
  assert(m.lexer.result_symbol == CODE_NEWLINE);
  assert(end == 3);

  mock_init(&m, "\n  ./field");
  assert(scan_valid(s, &m, code_contextual, 3, &end));
  assert(m.lexer.result_symbol == CODE_NEWLINE);
  assert(end == 3);

  mock_init(&m, "\n  .field");
  assert(scan_valid(s, &m, code_continuation, 9, &end));
  assert(m.lexer.result_symbol == CODE_DOT_AHEAD);
  assert(end == 3);

  mock_init(&m, "\n  // c\n  else");
  assert(scan_valid(s, &m, code_continuation, 9, &end));
  assert(m.lexer.result_symbol == CODE_ELSE_AHEAD);
  assert(end == 1);

  mock_init(&m, "\n  /* c */\n  + value");
  assert(scan_valid(s, &m, code_continuation, 9, &end));
  assert(m.lexer.result_symbol == CODE_ADDITION_OPERATOR_AHEAD);
  assert(end == 1);

  const enum TokenType operator_or_newline[] = {
      CODE_ADDITION_OPERATOR_AHEAD,
      CODE_NEWLINE,
  };
  mock_init(&m, "\n+ value");
  assert(scan_valid(s, &m, operator_or_newline, 2, &end));
  assert(m.lexer.result_symbol == CODE_ADDITION_OPERATOR_AHEAD);
  assert(end == 1);

  const enum TokenType assignment_or_newline[] = {
      CODE_ASSIGNMENT_OPERATOR_AHEAD,
      CODE_NEWLINE,
  };
  mock_init(&m, "\n= value");
  assert(scan_valid(s, &m, assignment_or_newline, 2, &end));
  assert(m.lexer.result_symbol == CODE_ASSIGNMENT_OPERATOR_AHEAD);
  assert(end == 1);

  mock_init(&m, "\n== value");
  assert(scan_valid(s, &m, assignment_or_newline, 2, &end));
  assert(m.lexer.result_symbol == CODE_NEWLINE);
  assert(end == 1);

  const enum TokenType comparison_or_newline[] = {
      CODE_COMPARISON_OPERATOR_AHEAD,
      CODE_NEWLINE,
  };
  mock_init(&m, "\n== value");
  assert(scan_valid(s, &m, comparison_or_newline, 2, &end));
  assert(m.lexer.result_symbol == CODE_COMPARISON_OPERATOR_AHEAD);
  assert(end == 1);

  mock_init(&m, "\n  let");
  assert(scan_valid(s, &m, code_continuation, 9, &end));
  assert(m.lexer.result_symbol == CODE_NEWLINE);
  assert(end == 3);

  const char *failed_keyword_probes[] = {
      "\nexample",
      "\nalpha",
      "\ninput",
      "\nother",
      "\nname",
  };
  for (size_t i = 0;
       i < sizeof(failed_keyword_probes) / sizeof(failed_keyword_probes[0]);
       i++) {
    mock_init(&m, failed_keyword_probes[i]);
    assert(scan_valid(s, &m, code_continuation, 9, &end));
    assert(m.lexer.result_symbol == CODE_NEWLINE);
    assert(end == 1);
  }

  mock_init(&m, " input");
  assert(scan_one(s, &m, MARKUP_SPACE, &end));
  assert(m.lexer.result_symbol == MARKUP_SPACE);
  assert(end == 1);

  mock_init(&m, "\n/ value");
  assert(scan_valid(s, &m, code_continuation, 9, &end));
  assert(m.lexer.result_symbol == CODE_MULTIPLICATION_OPERATOR_AHEAD);
  assert(end == 1);

  const enum TokenType embedded_statement_boundary[] = {
      EMBEDDED_STATEMENT_END, CODE_SPACE};
  mock_init(&m, " // comment");
  assert(scan_valid(s, &m, embedded_statement_boundary, 2, &end));
  assert(m.lexer.result_symbol == CODE_SPACE);
  assert(end == 1);

  mock_init(&m, " /* comment */");
  assert(scan_valid(s, &m, embedded_statement_boundary, 2, &end));
  assert(m.lexer.result_symbol == CODE_SPACE);
  assert(end == 1);

  mock_init(&m, " /* explanation */ + 2");
  assert(scan_valid(s, &m, embedded_statement_boundary, 2, &end));
  assert(m.lexer.result_symbol == CODE_SPACE);
  assert(end == 1);

  mock_init(&m, "\n[body]");
  assert(scan_valid(s, &m, embedded_statement_boundary, 2, &end));
  assert(m.lexer.result_symbol == EMBEDDED_STATEMENT_END);
  assert(end == 0);

  mock_init(&m, "\n{ body }");
  assert(scan_valid(s, &m, embedded_statement_boundary, 2, &end));
  assert(m.lexer.result_symbol == EMBEDDED_STATEMENT_END);
  assert(end == 0);

  mock_init(&m, "  \n[body]");
  assert(scan_valid(s, &m, embedded_statement_boundary, 2, &end));
  assert(m.lexer.result_symbol == CODE_SPACE);
  assert(end == 2);

  const enum TokenType else_space_or_code_space[] = {
      CODE_ELSE_SPACE_AHEAD, CODE_SPACE};
  mock_init(&m, " else { body }");
  assert(scan_valid(s, &m, else_space_or_code_space, 2, &end));
  assert(m.lexer.result_symbol == CODE_ELSE_SPACE_AHEAD);
  assert(end == 1);

  mock_init(&m, " elsewhere");
  assert(scan_valid(s, &m, else_space_or_code_space, 2, &end));
  assert(m.lexer.result_symbol == CODE_SPACE);
  assert(end == 1);

  mock_init(&m, " else_value");
  assert(scan_valid(s, &m, else_space_or_code_space, 2, &end));
  assert(m.lexer.result_symbol == CODE_SPACE);
  assert(end == 1);

  mock_init(&m, " elsewhere");
  assert(!scan_one(s, &m, CODE_ELSE_SPACE_AHEAD, NULL));
  assert(m.position == 0);

  const enum TokenType operator_space[] = {CODE_SPACE};
  mock_init(&m, " == value");
  assert(scan_valid(s, &m, operator_space, 1, &end));
  assert(m.lexer.result_symbol == CODE_SPACE);
  assert(end == 1);

  mock_init(&m, " // comment");
  assert(scan_valid(s, &m, operator_space, 1, &end));
  assert(m.lexer.result_symbol == CODE_SPACE);
  assert(end == 1);

  mock_init(&m, " { value }");
  assert(scan_valid(s, &m, operator_space, 1, &end));
  assert(m.lexer.result_symbol == CODE_SPACE);
  assert(end == 1);

  const enum TokenType code_space_only[] = {CODE_SPACE};

  const enum TokenType control_body_only[] = {CODE_CONTROL_BODY_AHEAD};
  mock_init(&m, "/* comment */[x]");
  assert(scan_one(s, &m, BLOCK_COMMENT, &end));
  assert(end == strlen("/* comment */"));
  assert(scan_valid(s, &m, control_body_only, 1, &end));
  assert(m.lexer.result_symbol == CODE_CONTROL_BODY_AHEAD);
  assert(end == strlen("/* comment */"));

  mock_init(&m, "(x)");
  assert(scan_one(s, &m, CODE_ARGUMENT_AHEAD, &end));
  assert(end == 0);

  mock_init(&m, "[x]");
  assert(scan_one(s, &m, CODE_ARGUMENT_AHEAD, &end));
  assert(end == 0);

  mock_init(&m, " (x)");
  assert(scan_valid(s, &m, code_space_only, 1, &end));
  assert(m.lexer.result_symbol == CODE_SPACE);
  assert(end == 1);
  assert(!scan_one(s, &m, CODE_ARGUMENT_AHEAD, NULL));
  assert(m.position == 1);

  mock_init(&m, "/* comment */(x)");
  assert(scan_one(s, &m, BLOCK_COMMENT, &end));
  assert(end == strlen("/* comment */"));
  assert(!scan_one(s, &m, CODE_ARGUMENT_AHEAD, NULL));
  assert(m.position == end);

  mock_init(&m, ".field");
  assert(scan_one(s, &m, ATOMIC_FIELD_DOT, &end));
  assert(end == 1);

  mock_init(&m, "._field");
  assert(scan_one(s, &m, ATOMIC_FIELD_DOT, &end));
  assert(end == 1);

  mock_init(&m, "._");
  assert(!scan_one(s, &m, ATOMIC_FIELD_DOT, NULL));
  assert(m.position == 0);

  mock_init(&m, "/* comment */.field");
  assert(scan_one(s, &m, BLOCK_COMMENT, &end));
  assert(end == strlen("/* comment */"));
  assert(!scan_one(s, &m, ATOMIC_FIELD_DOT, NULL));
  assert(m.position == end);

  const enum TokenType atomic_field_or_space[] = {ATOMIC_FIELD_DOT, CODE_SPACE};
  mock_init(&m, " .field");
  assert(!scan_valid(s, &m, atomic_field_or_space, 2, NULL));
  assert(m.position == 0);

  mock_init(&m, " + x");
  assert(scan_valid(s, &m, code_space_only, 1, &end));
  assert(m.lexer.result_symbol == CODE_SPACE);
  assert(end == 1);

  const enum TokenType closing_space[] = {CODE_CLOSE_AHEAD, CODE_NEWLINE};
  mock_init(&m, "\n  )");
  assert(scan_valid(s, &m, closing_space, 2, &end));
  assert(m.lexer.result_symbol == CODE_CLOSE_AHEAD);
  assert(end == 3);

  mock_init(&m, "\n  }");
  assert(scan_valid(s, &m, closing_space, 2, &end));
  assert(m.lexer.result_symbol == CODE_CLOSE_AHEAD);
  assert(end == 3);

  mock_init(&m, "\n[body]");
  assert(scan_valid(s, &m, closing_space, 2, &end));
  assert(m.lexer.result_symbol == CODE_NEWLINE);
  assert(end == 1);

  mock_init(&m, "\n[body]");
  assert(!scan_one(s, &m, CODE_SPACE, NULL));
  assert(m.position == 0);

  const enum TokenType slash_comment[] = {MATH_FRACTION_AHEAD, BLOCK_COMMENT};
  mock_init(&m, "/*c*/");
  assert(scan_valid(s, &m, slash_comment, 2, &end));
  assert(m.lexer.result_symbol == BLOCK_COMMENT);
  assert(end == strlen("/*c*/"));

  mock_init(&m, "// comment");
  assert(!scan_valid(s, &m, slash_comment, 2, NULL));
  assert(m.position == 0);

  mock_init(&m, "/x");
  assert(scan_one(s, &m, MATH_FRACTION_AHEAD, &end));
  assert(end == 0);

  tree_sitter_typst_external_scanner_destroy(s);
}

static void test_automatic_links(void) {
  void *s = tree_sitter_typst_external_scanner_create();
  MockLexer m;
  size_t end = 0;

  mock_init(&m, "https://host/a_(b)[c].");
  assert(scan_one(s, &m, AUTOMATIC_LINK, &end));
  assert(end == strlen("https://host/a_(b)[c]"));

  mock_init(&m, "http://typst.app/docs?x=1!");
  assert(scan_one(s, &m, AUTOMATIC_LINK, &end));
  assert(end == strlen("http://typst.app/docs?x=1"));

  mock_init(&m, "http://typst.app/docs'");
  assert(scan_one(s, &m, AUTOMATIC_LINK, &end));
  assert(end == strlen("http://typst.app/docs"));

  mock_init(&m, "http://typst.app/it'reads");
  assert(scan_one(s, &m, AUTOMATIC_LINK, &end));
  assert(end == strlen("http://typst.app/it'reads"));

  mock_init(&m, "https://host/a_(b tail");
  assert(scan_automatic_link_choice(s, &m, &end));
  assert(m.lexer.result_symbol == AUTOMATIC_LINK);
  assert(end == strlen("https://host/a_(b"));

  mock_init(&m, "https://host/a_[(]) tail");
  assert(scan_automatic_link_choice(s, &m, &end));
  assert(m.lexer.result_symbol == AUTOMATIC_LINK);
  assert(end == strlen("https://host/a_[(])"));

  mock_init(&m, "https://host/a_(b)");
  assert(scan_one(s, &m, AUTOMATIC_LINK, &end));
  assert(end == strlen("https://host/a_(b)"));

  mock_init(&m, "https://host/a_(b");
  assert(scan_one(s, &m, AUTOMATIC_LINK, &end));
  assert(end == strlen("https://host/a_(b"));

  mock_init(&m, "https://éxample.test");
  assert(scan_one(s, &m, AUTOMATIC_LINK, &end));
  assert(end == strlen("https://"));

  mock_init(&m, "https://.");
  assert(scan_one(s, &m, AUTOMATIC_LINK, &end));
  assert(end == strlen("https://"));

  tree_sitter_typst_external_scanner_destroy(s);
}

static void test_math_words(void) {
  void *s = tree_sitter_typst_external_scanner_create();
  MockLexer m;
  size_t end = 0;

  mock_init(&m, "x");
  assert(scan_math_word_choice(s, &m, &end));
  assert(m.lexer.result_symbol == MATH_LETTER);

  mock_init(&m, "pi");
  assert(scan_math_word_choice(s, &m, &end));
  assert(m.lexer.result_symbol == MATH_IDENTIFIER);

  mock_init(&m, "x\xCC\x81");  // x + COMBINING ACUTE ACCENT.
  assert(scan_math_word_choice(s, &m, &end));
  assert(m.lexer.result_symbol == MATH_IDENTIFIER);
  assert(end == strlen("x\xCC\x81"));

  mock_init(&m, "αβ");
  assert(scan_math_word_choice(s, &m, &end));
  assert(m.lexer.result_symbol == MATH_IDENTIFIER);

  // Editor tokenization treats XID continuation runs as math identifiers
  // instead of reproducing Typst's extended-grapheme clustering.
  mock_init(&m, "क्ष");
  assert(scan_math_word_choice(s, &m, &end));
  assert(m.lexer.result_symbol == MATH_IDENTIFIER);
  assert(end == strlen("क्ष"));

  mock_init(&m, "👩‍🔬_x");
  assert(scan_math_text_choice(s, &m, &end));
  assert(m.lexer.result_symbol == MATH_TEXT);
  assert(end == strlen("👩"));

  tree_sitter_typst_external_scanner_destroy(s);
}

static void test_math_argument_tokens(void) {
  void *s = tree_sitter_typst_external_scanner_create();
  MockLexer m;
  size_t end = 0;

  mock_init(&m, "x:value");
  assert(scan_math_argument_choice(s, &m, &end));
  assert(m.lexer.result_symbol == MATH_ARGUMENT_IDENTIFIER);
  assert(end == 1);

  mock_init(&m, "long-name:value");
  assert(scan_math_argument_choice(s, &m, &end));
  assert(m.lexer.result_symbol == MATH_ARGUMENT_IDENTIFIER);
  assert(end == strlen("long-name"));

  mock_init(&m, "x:=value");
  assert(scan_math_argument_choice(s, &m, &end));
  assert(m.lexer.result_symbol == MATH_LETTER);
  assert(end == 1);

  mock_init(&m, "name::=value");
  assert(scan_math_argument_choice(s, &m, &end));
  assert(m.lexer.result_symbol == MATH_IDENTIFIER);
  assert(end == strlen("name"));

  tree_sitter_typst_external_scanner_destroy(s);
}

static void test_raw(void) {
  void *s = tree_sitter_typst_external_scanner_create();
  MockLexer m;
  size_t end = 0;
  mock_init(&m, "```typc\n#let x = 1\n```");

  assert(scan_one(s, &m, RAW_OPEN, &end));
  assert(end == 3);
  assert(scan_raw_choice(s, &m, &end));
  assert(m.lexer.result_symbol == RAW_LANGUAGE);
  assert(end == 7);
  assert(scan_raw_choice(s, &m, &end));
  assert(m.lexer.result_symbol == RAW_CONTENT);
  assert(end == strlen("```typc\n#let x = 1\n"));
  assert(scan_raw_choice(s, &m, &end));
  assert(m.lexer.result_symbol == RAW_CLOSE);
  assert(end == strlen("```typc\n#let x = 1\n```"));

  tree_sitter_typst_external_scanner_destroy(s);
  s = tree_sitter_typst_external_scanner_create();
  mock_init(&m, "```_\nbody\n```");
  assert(scan_one(s, &m, RAW_OPEN, &end));
  assert(scan_raw_choice(s, &m, &end));
  assert(m.lexer.result_symbol == RAW_LANGUAGE);
  assert(end == strlen("```_"));

  tree_sitter_typst_external_scanner_destroy(s);
  s = tree_sitter_typst_external_scanner_create();
  mock_init(&m, "```_x\nbody\n```");
  assert(scan_one(s, &m, RAW_OPEN, &end));
  assert(scan_raw_choice(s, &m, &end));
  assert(m.lexer.result_symbol == RAW_LANGUAGE);
  assert(end == strlen("```_x"));

  tree_sitter_typst_external_scanner_destroy(s);
  s = tree_sitter_typst_external_scanner_create();
  mock_init(&m, "```c++\nbody\n```");
  assert(scan_one(s, &m, RAW_OPEN, &end));
  assert(scan_raw_choice(s, &m, &end));
  assert(m.lexer.result_symbol == RAW_LANGUAGE);
  assert(end == strlen("```c"));

  tree_sitter_typst_external_scanner_destroy(s);
  s = tree_sitter_typst_external_scanner_create();
  mock_init(&m, "```++c\nbody\n```");
  assert(scan_one(s, &m, RAW_OPEN, &end));
  assert(scan_raw_choice(s, &m, &end));
  assert(m.lexer.result_symbol == RAW_CONTENT);

  tree_sitter_typst_external_scanner_destroy(s);
}

static void test_raw_language_unicode(void) {
  void *s = tree_sitter_typst_external_scanner_create();
  MockLexer m;
  size_t end = 0;

  mock_init(&m, "```λ-tag body```");
  assert(scan_one(s, &m, RAW_OPEN, &end));
  assert(scan_raw_choice(s, &m, &end));
  assert(m.lexer.result_symbol == RAW_LANGUAGE);
  assert(end == strlen("```λ-tag"));

  tree_sitter_typst_external_scanner_destroy(s);
  s = tree_sitter_typst_external_scanner_create();
  mock_init(&m, "```😀 body```");
  assert(scan_one(s, &m, RAW_OPEN, &end));
  assert(scan_raw_choice(s, &m, &end));
  assert(m.lexer.result_symbol == RAW_CONTENT);

  tree_sitter_typst_external_scanner_destroy(s);
}

static void test_raw_short_tick_run(void) {
  void *s = tree_sitter_typst_external_scanner_create();
  MockLexer m;
  size_t end = 0;
  mock_init(&m, "```txt\na`b\n```tail");

  assert(scan_one(s, &m, RAW_OPEN, &end));
  assert(scan_raw_choice(s, &m, &end));
  assert(m.lexer.result_symbol == RAW_LANGUAGE);
  assert(scan_raw_choice(s, &m, &end));
  assert(m.lexer.result_symbol == RAW_CONTENT);
  assert(end == strlen("```txt\na`b\n"));
  assert(scan_raw_choice(s, &m, &end));
  assert(m.lexer.result_symbol == RAW_CLOSE);
  assert(end == strlen("```txt\na`b\n```"));

  tree_sitter_typst_external_scanner_destroy(s);
}

static void test_math_spread_token(void) {
  void *s = tree_sitter_typst_external_scanner_create();
  MockLexer m;
  size_t end = 0;

  mock_init(&m, "..#args");
  assert(scan_one(s, &m, MATH_SPREAD_OPERATOR, &end));
  assert(end == 2);

  const char *invalid[] = {"...x", ".. x", "../* comment */x", "..//comment"};
  for (size_t i = 0; i < sizeof(invalid) / sizeof(invalid[0]); i++) {
    mock_init(&m, invalid[i]);
    assert(!scan_one(s, &m, MATH_SPREAD_OPERATOR, NULL));
  }

  tree_sitter_typst_external_scanner_destroy(s);
}

static void test_math_space_boundary_endpoints(void) {
  void *s = tree_sitter_typst_external_scanner_create();
  MockLexer m;
  size_t end = 0;
  const enum TokenType math_space_boundary[] = {MATH_EXPRESSION_SPACE,
                                                MATH_SPACE};

  mock_init(&m, "  x");
  assert(scan_valid(s, &m, math_space_boundary, 2, &end));
  assert(m.lexer.result_symbol == MATH_EXPRESSION_SPACE);
  assert(end == 2);

  mock_init(&m, "  |]");
  assert(scan_valid(s, &m, math_space_boundary, 2, &end));
  assert(m.lexer.result_symbol == MATH_EXPRESSION_SPACE);
  assert(end == 2);

  mock_init(&m, "  /* comment */ x");
  assert(scan_valid(s, &m, math_space_boundary, 2, &end));
  assert(m.lexer.result_symbol == MATH_EXPRESSION_SPACE);
  assert(end == 2);

  const enum TokenType math_close_boundary[] = {MATH_EXPRESSION_SPACE,
                                                MATH_CLOSE_SPACE, MATH_SPACE};
  mock_init(&m, "  |]");
  assert(scan_valid(s, &m, math_close_boundary, 3, &end));
  assert(m.lexer.result_symbol == MATH_CLOSE_SPACE);
  assert(end == 2);

  mock_init(&m, "  )");
  assert(scan_valid(s, &m, math_close_boundary, 3, &end));
  assert(m.lexer.result_symbol == MATH_CLOSE_SPACE);
  assert(end == 2);

  mock_init(&m, "  | x");
  assert(scan_valid(s, &m, math_close_boundary, 3, &end));
  assert(m.lexer.result_symbol == MATH_EXPRESSION_SPACE);
  assert(end == 2);

  mock_init(&m, "  |$");
  assert(scan_valid(s, &m, math_close_boundary, 3, &end));
  assert(m.lexer.result_symbol == MATH_EXPRESSION_SPACE);
  assert(end == 2);

  mock_init(&m, "  |_b");
  assert(scan_valid(s, &m, math_close_boundary, 3, &end));
  assert(m.lexer.result_symbol == MATH_EXPRESSION_SPACE);
  assert(end == 2);

  mock_init(&m, "  |/b");
  assert(scan_valid(s, &m, math_close_boundary, 3, &end));
  assert(m.lexer.result_symbol == MATH_EXPRESSION_SPACE);
  assert(end == 2);

  const enum TokenType math_close_comment_boundary[] = {MATH_CLOSE_SPACE,
                                                        MATH_SPACE};
  mock_init(&m, "  /* comment */ |]");
  assert(scan_valid(s, &m, math_close_comment_boundary, 2, &end));
  assert(m.lexer.result_symbol == MATH_CLOSE_SPACE);
  assert(end == 2);

  const enum TokenType math_attachment_boundary[] = {MATH_ATTACHMENT_SPACE,
                                                     MATH_SPACE};
  mock_init(&m, "  /* comment */ _x");
  assert(scan_valid(s, &m, math_attachment_boundary, 2, &end));
  assert(m.lexer.result_symbol == MATH_ATTACHMENT_SPACE);
  assert(end == 2);

  const enum TokenType math_argument_separator_boundary[] = {
      MATH_ARGUMENT_SEPARATOR_SPACE,
      MATH_EXPRESSION_SPACE,
      MATH_SPACE,
  };
  mock_init(&m, "  , b");
  assert(scan_valid(s, &m, math_argument_separator_boundary, 3, &end));
  assert(m.lexer.result_symbol == MATH_ARGUMENT_SEPARATOR_SPACE);
  assert(end == 2);

  mock_init(&m, "  ; b");
  assert(scan_valid(s, &m, math_argument_separator_boundary, 3, &end));
  assert(m.lexer.result_symbol == MATH_ARGUMENT_SEPARATOR_SPACE);
  assert(end == 2);

  mock_init(&m, "  , b");
  assert(scan_valid(s, &m, math_space_boundary, 2, &end));
  assert(m.lexer.result_symbol == MATH_EXPRESSION_SPACE);
  assert(end == 2);

  const enum TokenType math_fraction_boundary[] = {MATH_FRACTION_SPACE,
                                                   MATH_EXPRESSION_SPACE,
                                                   MATH_SPACE};
  mock_init(&m, " / y");
  assert(scan_valid(s, &m, math_fraction_boundary, 3, &end));
  assert(m.lexer.result_symbol == MATH_FRACTION_SPACE);
  assert(end == 1);

  mock_init(&m, "  /* comment */ / y");
  assert(scan_valid(s, &m, math_fraction_boundary, 3, &end));
  assert(m.lexer.result_symbol == MATH_FRACTION_SPACE);
  assert(end == 2);

  tree_sitter_typst_external_scanner_destroy(s);
}

static void test_two_backticks(void) {
  void *s = tree_sitter_typst_external_scanner_create();
  MockLexer m;
  size_t end = 0;
  mock_init(&m, "``");
  assert(scan_one(s, &m, RAW_OPEN, &end));
  assert(end == 1);
  assert(scan_one(s, &m, RAW_CLOSE, &end));
  assert(end == 2);
  tree_sitter_typst_external_scanner_destroy(s);
}

static void test_whitespace(void) {
  void *s = tree_sitter_typst_external_scanner_create();
  MockLexer m;
  size_t end = 0;

  mock_init(&m, " \ttext");
  assert(scan_one(s, &m, MARKUP_SPACE, &end));
  assert(end == 2);

  mock_init(&m, " \ttext");
  assert(scan_one(s, &m, MARKUP_WORD_GAP, &end));
  assert(end == 2);

  const char *word_gap_targets[] = {
      " -",
      " .",
      " ..",
      " -text",
  };
  for (size_t i = 0; i < sizeof(word_gap_targets) / sizeof(word_gap_targets[0]);
       i++) {
    mock_init(&m, word_gap_targets[i]);
    assert(scan_one(s, &m, MARKUP_WORD_GAP, &end));
    assert(end == 1);
  }

  const char *not_word_gap_targets[] = {
      " --",
      " ---",
      " -?",
      " -1",
      " -١",
      " ...",
      " https://typst.app",
      " ",
  };
  for (size_t i = 0;
       i < sizeof(not_word_gap_targets) / sizeof(not_word_gap_targets[0]);
       i++) {
    mock_init(&m, not_word_gap_targets[i]);
    assert(!scan_one(s, &m, MARKUP_WORD_GAP, NULL));
  }

  const enum TokenType markup_word_gap_or_space[] = {MARKUP_WORD_GAP,
                                                     MARKUP_SPACE};
  mock_init(&m, " \\");
  assert(scan_valid(s, &m, markup_word_gap_or_space, 2, &end));
  assert(m.lexer.result_symbol == MARKUP_SPACE);
  assert(end == 1);

  mock_init(&m, " --");
  assert(scan_valid(s, &m, markup_word_gap_or_space, 2, &end));
  assert(m.lexer.result_symbol == MARKUP_SPACE);
  assert(end == 1);

  mock_init(&m, " ...");
  assert(scan_valid(s, &m, markup_word_gap_or_space, 2, &end));
  assert(m.lexer.result_symbol == MARKUP_SPACE);
  assert(end == 1);

  mock_init(&m, " https://typst.app");
  assert(scan_valid(s, &m, markup_word_gap_or_space, 2, &end));
  assert(m.lexer.result_symbol == MARKUP_SPACE);
  assert(end == 1);

  const enum TokenType markup_gap_or_else_space[] = {
      CODE_ELSE_SPACE_AHEAD, MARKUP_WORD_GAP, MARKUP_SPACE};
  mock_init(&m, " else [body]");
  assert(scan_valid(s, &m, markup_gap_or_else_space, 3, &end));
  assert(m.lexer.result_symbol == CODE_ELSE_SPACE_AHEAD);
  assert(end == 1);

  mock_init(&m, " elsewhere");
  assert(scan_valid(s, &m, markup_gap_or_else_space, 3, &end));
  assert(m.lexer.result_symbol == MARKUP_WORD_GAP);
  assert(end == 1);

  mock_init(&m, "\r\nnext");
  assert(scan_one(s, &m, CODE_NEWLINE, &end));
  assert(end == 2);

  tree_sitter_typst_external_scanner_destroy(s);
}

static void test_serialization(void) {
  void *a = tree_sitter_typst_external_scanner_create();
  void *b = tree_sitter_typst_external_scanner_create();
  MockLexer m;

  mock_init(&m, "`````body`````");
  assert(scan_one(a, &m, RAW_OPEN, NULL));
  ((Scanner *)a)->list_indents[0] = 2;
  ((Scanner *)a)->list_indents[1] = 6;
  ((Scanner *)a)->list_depth = 2;

  char buffer[TREE_SITTER_SERIALIZATION_BUFFER_SIZE] = {0};
  unsigned length = tree_sitter_typst_external_scanner_serialize(a, buffer);
  assert(length == SCANNER_FIXED_STATE_SIZE + 8);
  tree_sitter_typst_external_scanner_deserialize(b, buffer, length);
  assert(((Scanner *)b)->raw_delimiter_length == 5);
  assert(((Scanner *)b)->list_depth == 2);
  assert(((Scanner *)b)->list_indents[0] == 2);
  assert(((Scanner *)b)->list_indents[1] == 6);

  tree_sitter_typst_external_scanner_destroy(a);
  tree_sitter_typst_external_scanner_destroy(b);
}

int main(void) {
  test_hash_and_shebang();
  test_embedded_unclosed_set_arguments();
  test_embedded_return_dangling_operator();
  test_nested_comment();
  test_marker_boundaries();
  test_list_continuation();
  test_nested_list_indentation();
  test_markup_newline_boundary();
  test_code_numbers();
  test_prefix_dispatch_no_corruption();
  test_automatic_links();
  test_math_words();
  test_math_argument_tokens();
  test_raw();
  test_raw_language_unicode();
  test_raw_short_tick_run();
  test_two_backticks();
  test_math_spread_token();
  test_math_space_boundary_endpoints();
  test_whitespace();
  test_serialization();
  puts("scanner tests passed");
  return 0;
}
