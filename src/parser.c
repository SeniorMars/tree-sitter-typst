#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 24
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 0
#define TOKEN_COUNT 44
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym__whitespace = 1,
  sym_line_comment = 2,
  sym_none = 3,
  sym_auto = 4,
  anon_sym_true = 5,
  anon_sym_false = 6,
  sym_int_literal = 7,
  sym_float_literal = 8,
  anon_sym_pt = 9,
  anon_sym_mm = 10,
  anon_sym_cm = 11,
  anon_sym_in = 12,
  anon_sym_deg = 13,
  anon_sym_rad = 14,
  anon_sym_em = 15,
  anon_sym_fr = 16,
  anon_sym_PERCENT = 17,
  anon_sym_DASH = 18,
  aux_sym_string_literal_token1 = 19,
  anon_sym_DQUOTE = 20,
  sym__escape_sequence = 21,
  anon_sym_BSLASH = 22,
  anon_sym_SLASH = 23,
  anon_sym_LBRACK = 24,
  anon_sym_RBRACK = 25,
  anon_sym_LBRACE = 26,
  anon_sym_RBRACE = 27,
  anon_sym_POUND = 28,
  anon_sym_TILDE = 29,
  anon_sym_DOT = 30,
  anon_sym_COLON = 31,
  anon_sym_DQUOTE2 = 32,
  anon_sym_SQUOTE = 33,
  anon_sym_STAR = 34,
  anon_sym__ = 35,
  anon_sym_BQUOTE = 36,
  anon_sym_DOLLAR = 37,
  anon_sym_EQ = 38,
  anon_sym_LT = 39,
  anon_sym_GT = 40,
  anon_sym_AT = 41,
  sym__string_content = 42,
  sym_block_comment = 43,
  sym_source_file = 44,
  sym__markup_node = 45,
  sym_expression = 46,
  sym__literal = 47,
  sym_boolean_literal = 48,
  sym_unit = 49,
  sym_numeric = 50,
  sym_string_literal = 51,
  sym_escape_sequence = 52,
  sym_special = 53,
  aux_sym_source_file_repeat1 = 54,
  aux_sym_string_literal_repeat1 = 55,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__whitespace] = "_whitespace",
  [sym_line_comment] = "line_comment",
  [sym_none] = "none",
  [sym_auto] = "auto",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_int_literal] = "int_literal",
  [sym_float_literal] = "float_literal",
  [anon_sym_pt] = "pt",
  [anon_sym_mm] = "mm",
  [anon_sym_cm] = "cm",
  [anon_sym_in] = "in",
  [anon_sym_deg] = "deg",
  [anon_sym_rad] = "rad",
  [anon_sym_em] = "em",
  [anon_sym_fr] = "fr",
  [anon_sym_PERCENT] = "%",
  [anon_sym_DASH] = "-",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [anon_sym_DQUOTE] = "\"",
  [sym__escape_sequence] = "_escape_sequence",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_SLASH] = "/",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_POUND] = "#",
  [anon_sym_TILDE] = "~",
  [anon_sym_DOT] = ".",
  [anon_sym_COLON] = ":",
  [anon_sym_DQUOTE2] = "\"",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_STAR] = "*",
  [anon_sym__] = "_",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_EQ] = "=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_AT] = "@",
  [sym__string_content] = "_string_content",
  [sym_block_comment] = "block_comment",
  [sym_source_file] = "source_file",
  [sym__markup_node] = "_markup_node",
  [sym_expression] = "expression",
  [sym__literal] = "_literal",
  [sym_boolean_literal] = "boolean_literal",
  [sym_unit] = "unit",
  [sym_numeric] = "numeric",
  [sym_string_literal] = "string_literal",
  [sym_escape_sequence] = "escape_sequence",
  [sym_special] = "special",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__whitespace] = sym__whitespace,
  [sym_line_comment] = sym_line_comment,
  [sym_none] = sym_none,
  [sym_auto] = sym_auto,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_int_literal] = sym_int_literal,
  [sym_float_literal] = sym_float_literal,
  [anon_sym_pt] = anon_sym_pt,
  [anon_sym_mm] = anon_sym_mm,
  [anon_sym_cm] = anon_sym_cm,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_deg] = anon_sym_deg,
  [anon_sym_rad] = anon_sym_rad,
  [anon_sym_em] = anon_sym_em,
  [anon_sym_fr] = anon_sym_fr,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym__escape_sequence] = sym__escape_sequence,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym__] = anon_sym__,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_AT] = anon_sym_AT,
  [sym__string_content] = sym__string_content,
  [sym_block_comment] = sym_block_comment,
  [sym_source_file] = sym_source_file,
  [sym__markup_node] = sym__markup_node,
  [sym_expression] = sym_expression,
  [sym__literal] = sym__literal,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_unit] = sym_unit,
  [sym_numeric] = sym_numeric,
  [sym_string_literal] = sym_string_literal,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_special] = sym_special,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_none] = {
    .visible = true,
    .named = true,
  },
  [sym_auto] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_int_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_pt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rad] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_em] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [sym__string_content] = {
    .visible = false,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__markup_node] = {
    .visible = false,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_special] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 8,
  [21] = 12,
  [22] = 13,
  [23] = 23,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(36);
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '#') ADVANCE(68);
      if (lookahead == '$') ADVANCE(77);
      if (lookahead == '%') ADVANCE(55);
      if (lookahead == '\'') ADVANCE(73);
      if (lookahead == '*') ADVANCE(74);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '.') ADVANCE(70);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '>') ADVANCE(80);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == ']') ADVANCE(65);
      if (lookahead == '_') ADVANCE(75);
      if (lookahead == '`') ADVANCE(76);
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'c') ADVANCE(13);
      if (lookahead == 'd') ADVANCE(7);
      if (lookahead == 'e') ADVANCE(14);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'm') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead == 'p') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(5);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '}') ADVANCE(67);
      if (lookahead == '~') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '#') ADVANCE(68);
      if (lookahead == '$') ADVANCE(77);
      if (lookahead == '\'') ADVANCE(73);
      if (lookahead == '*') ADVANCE(74);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '.') ADVANCE(70);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '>') ADVANCE(80);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == ']') ADVANCE(65);
      if (lookahead == '_') ADVANCE(75);
      if (lookahead == '`') ADVANCE(76);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '}') ADVANCE(67);
      if (lookahead == '~') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(38);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 11:
      if (lookahead == 'g') ADVANCE(51);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 14:
      if (lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 15:
      if (lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 24:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 26:
      if (lookahead == '{') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == '}') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 35:
      if (eof) ADVANCE(36);
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '%') ADVANCE(55);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'c') ADVANCE(13);
      if (lookahead == 'd') ADVANCE(7);
      if (lookahead == 'e') ADVANCE(14);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'm') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead == 'p') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(5);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_none);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_auto);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_int_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_pt);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_mm);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_cm);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_deg);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_rad);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_em);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_fr);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (lookahead == '\n') ADVANCE(59);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != 'u' &&
          lookahead != 'x') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(60);
      if (lookahead == 'u') ADVANCE(26);
      if (lookahead == 'x') ADVANCE(34);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(38);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 35, .external_lex_state = 2},
  [2] = {.lex_state = 2, .external_lex_state = 2},
  [3] = {.lex_state = 2, .external_lex_state = 2},
  [4] = {.lex_state = 35, .external_lex_state = 2},
  [5] = {.lex_state = 35, .external_lex_state = 2},
  [6] = {.lex_state = 35, .external_lex_state = 2},
  [7] = {.lex_state = 35, .external_lex_state = 2},
  [8] = {.lex_state = 35, .external_lex_state = 2},
  [9] = {.lex_state = 35, .external_lex_state = 2},
  [10] = {.lex_state = 35, .external_lex_state = 2},
  [11] = {.lex_state = 35, .external_lex_state = 2},
  [12] = {.lex_state = 35, .external_lex_state = 2},
  [13] = {.lex_state = 35, .external_lex_state = 2},
  [14] = {.lex_state = 35, .external_lex_state = 2},
  [15] = {.lex_state = 35, .external_lex_state = 2},
  [16] = {.lex_state = 35, .external_lex_state = 2},
  [17] = {.lex_state = 1, .external_lex_state = 1},
  [18] = {.lex_state = 1, .external_lex_state = 1},
  [19] = {.lex_state = 1, .external_lex_state = 1},
  [20] = {.lex_state = 1, .external_lex_state = 1},
  [21] = {.lex_state = 1, .external_lex_state = 1},
  [22] = {.lex_state = 1, .external_lex_state = 1},
  [23] = {.lex_state = 0, .external_lex_state = 2},
};

enum {
  ts_external_token__string_content = 0,
  ts_external_token_block_comment = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__string_content] = sym__string_content,
  [ts_external_token_block_comment] = sym_block_comment,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__string_content] = true,
    [ts_external_token_block_comment] = true,
  },
  [2] = {
    [ts_external_token_block_comment] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [sym_none] = ACTIONS(1),
    [sym_auto] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_int_literal] = ACTIONS(1),
    [anon_sym_pt] = ACTIONS(1),
    [anon_sym_mm] = ACTIONS(1),
    [anon_sym_cm] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_deg] = ACTIONS(1),
    [anon_sym_rad] = ACTIONS(1),
    [anon_sym_em] = ACTIONS(1),
    [anon_sym_fr] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_string_literal_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__escape_sequence] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [sym__string_content] = ACTIONS(1),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(23),
    [sym__markup_node] = STATE(6),
    [sym_expression] = STATE(6),
    [sym__literal] = STATE(9),
    [sym_boolean_literal] = STATE(14),
    [sym_numeric] = STATE(14),
    [sym_string_literal] = STATE(14),
    [sym_escape_sequence] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__whitespace] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [sym_none] = ACTIONS(7),
    [sym_auto] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_int_literal] = ACTIONS(11),
    [sym_float_literal] = ACTIONS(13),
    [aux_sym_string_literal_token1] = ACTIONS(15),
    [sym__escape_sequence] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(19),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(23), 1,
      anon_sym_SLASH,
    STATE(13), 1,
      sym_special,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(21), 20,
      anon_sym_DASH,
      anon_sym_BSLASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_DQUOTE2,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym__,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
  [34] = 4,
    ACTIONS(27), 1,
      anon_sym_SLASH,
    STATE(22), 1,
      sym_special,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(25), 20,
      anon_sym_DASH,
      anon_sym_BSLASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_DQUOTE2,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym__,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
  [68] = 5,
    STATE(7), 1,
      sym_unit,
    ACTIONS(31), 2,
      sym_int_literal,
      anon_sym_BSLASH,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(29), 8,
      ts_builtin_sym_end,
      sym_none,
      sym_auto,
      anon_sym_true,
      anon_sym_false,
      sym_float_literal,
      aux_sym_string_literal_token1,
      sym__escape_sequence,
    ACTIONS(33), 9,
      anon_sym_pt,
      anon_sym_mm,
      anon_sym_cm,
      anon_sym_in,
      anon_sym_deg,
      anon_sym_rad,
      anon_sym_em,
      anon_sym_fr,
      anon_sym_PERCENT,
  [102] = 12,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      sym_int_literal,
    ACTIONS(46), 1,
      sym_float_literal,
    ACTIONS(49), 1,
      aux_sym_string_literal_token1,
    ACTIONS(52), 1,
      sym__escape_sequence,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    STATE(9), 1,
      sym__literal,
    ACTIONS(37), 2,
      sym_none,
      sym_auto,
    ACTIONS(40), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(14), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(5), 4,
      sym__markup_node,
      sym_expression,
      sym_escape_sequence,
      aux_sym_source_file_repeat1,
  [148] = 12,
    ACTIONS(11), 1,
      sym_int_literal,
    ACTIONS(13), 1,
      sym_float_literal,
    ACTIONS(15), 1,
      aux_sym_string_literal_token1,
    ACTIONS(17), 1,
      sym__escape_sequence,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      sym__literal,
    ACTIONS(7), 2,
      sym_none,
      sym_auto,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(14), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(5), 4,
      sym__markup_node,
      sym_expression,
      sym_escape_sequence,
      aux_sym_source_file_repeat1,
  [194] = 3,
    ACTIONS(62), 2,
      sym_int_literal,
      anon_sym_BSLASH,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(60), 8,
      ts_builtin_sym_end,
      sym_none,
      sym_auto,
      anon_sym_true,
      anon_sym_false,
      sym_float_literal,
      aux_sym_string_literal_token1,
      sym__escape_sequence,
  [214] = 3,
    ACTIONS(66), 2,
      sym_int_literal,
      anon_sym_BSLASH,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(64), 8,
      ts_builtin_sym_end,
      sym_none,
      sym_auto,
      anon_sym_true,
      anon_sym_false,
      sym_float_literal,
      aux_sym_string_literal_token1,
      sym__escape_sequence,
  [234] = 3,
    ACTIONS(70), 2,
      sym_int_literal,
      anon_sym_BSLASH,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(68), 8,
      ts_builtin_sym_end,
      sym_none,
      sym_auto,
      anon_sym_true,
      anon_sym_false,
      sym_float_literal,
      aux_sym_string_literal_token1,
      sym__escape_sequence,
  [254] = 3,
    ACTIONS(74), 2,
      sym_int_literal,
      anon_sym_BSLASH,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(72), 8,
      ts_builtin_sym_end,
      sym_none,
      sym_auto,
      anon_sym_true,
      anon_sym_false,
      sym_float_literal,
      aux_sym_string_literal_token1,
      sym__escape_sequence,
  [274] = 3,
    ACTIONS(78), 2,
      sym_int_literal,
      anon_sym_BSLASH,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(76), 8,
      ts_builtin_sym_end,
      sym_none,
      sym_auto,
      anon_sym_true,
      anon_sym_false,
      sym_float_literal,
      aux_sym_string_literal_token1,
      sym__escape_sequence,
  [294] = 3,
    ACTIONS(82), 2,
      sym_int_literal,
      anon_sym_BSLASH,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(80), 8,
      ts_builtin_sym_end,
      sym_none,
      sym_auto,
      anon_sym_true,
      anon_sym_false,
      sym_float_literal,
      aux_sym_string_literal_token1,
      sym__escape_sequence,
  [314] = 3,
    ACTIONS(86), 2,
      sym_int_literal,
      anon_sym_BSLASH,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(84), 8,
      ts_builtin_sym_end,
      sym_none,
      sym_auto,
      anon_sym_true,
      anon_sym_false,
      sym_float_literal,
      aux_sym_string_literal_token1,
      sym__escape_sequence,
  [334] = 3,
    ACTIONS(31), 2,
      sym_int_literal,
      anon_sym_BSLASH,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(29), 8,
      ts_builtin_sym_end,
      sym_none,
      sym_auto,
      anon_sym_true,
      anon_sym_false,
      sym_float_literal,
      aux_sym_string_literal_token1,
      sym__escape_sequence,
  [354] = 3,
    ACTIONS(90), 2,
      sym_int_literal,
      anon_sym_BSLASH,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(88), 8,
      ts_builtin_sym_end,
      sym_none,
      sym_auto,
      anon_sym_true,
      anon_sym_false,
      sym_float_literal,
      aux_sym_string_literal_token1,
      sym__escape_sequence,
  [374] = 3,
    ACTIONS(94), 2,
      sym_int_literal,
      anon_sym_BSLASH,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(92), 8,
      ts_builtin_sym_end,
      sym_none,
      sym_auto,
      anon_sym_true,
      anon_sym_false,
      sym_float_literal,
      aux_sym_string_literal_token1,
      sym__escape_sequence,
  [394] = 6,
    ACTIONS(96), 1,
      anon_sym_DQUOTE,
    ACTIONS(98), 1,
      sym__escape_sequence,
    ACTIONS(100), 1,
      anon_sym_BSLASH,
    ACTIONS(102), 1,
      sym__string_content,
    STATE(18), 2,
      sym_escape_sequence,
      aux_sym_string_literal_repeat1,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [416] = 6,
    ACTIONS(98), 1,
      sym__escape_sequence,
    ACTIONS(100), 1,
      anon_sym_BSLASH,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      sym__string_content,
    STATE(19), 2,
      sym_escape_sequence,
      aux_sym_string_literal_repeat1,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [438] = 6,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      sym__escape_sequence,
    ACTIONS(113), 1,
      anon_sym_BSLASH,
    ACTIONS(116), 1,
      sym__string_content,
    STATE(19), 2,
      sym_escape_sequence,
      aux_sym_string_literal_repeat1,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [460] = 3,
    ACTIONS(66), 1,
      anon_sym_BSLASH,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(64), 3,
      sym__string_content,
      anon_sym_DQUOTE,
      sym__escape_sequence,
  [474] = 3,
    ACTIONS(82), 1,
      anon_sym_BSLASH,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(80), 3,
      sym__string_content,
      anon_sym_DQUOTE,
      sym__escape_sequence,
  [488] = 3,
    ACTIONS(86), 1,
      anon_sym_BSLASH,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(84), 3,
      sym__string_content,
      anon_sym_DQUOTE,
      sym__escape_sequence,
  [502] = 2,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 102,
  [SMALL_STATE(6)] = 148,
  [SMALL_STATE(7)] = 194,
  [SMALL_STATE(8)] = 214,
  [SMALL_STATE(9)] = 234,
  [SMALL_STATE(10)] = 254,
  [SMALL_STATE(11)] = 274,
  [SMALL_STATE(12)] = 294,
  [SMALL_STATE(13)] = 314,
  [SMALL_STATE(14)] = 334,
  [SMALL_STATE(15)] = 354,
  [SMALL_STATE(16)] = 374,
  [SMALL_STATE(17)] = 394,
  [SMALL_STATE(18)] = 416,
  [SMALL_STATE(19)] = 438,
  [SMALL_STATE(20)] = 460,
  [SMALL_STATE(21)] = 474,
  [SMALL_STATE(22)] = 488,
  [SMALL_STATE(23)] = 502,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special, 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_special, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(20),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(3),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(19),
  [119] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_typst_external_scanner_create(void);
void tree_sitter_typst_external_scanner_destroy(void *);
bool tree_sitter_typst_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_typst_external_scanner_serialize(void *, char *);
void tree_sitter_typst_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_typst(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_typst_external_scanner_create,
      tree_sitter_typst_external_scanner_destroy,
      tree_sitter_typst_external_scanner_scan,
      tree_sitter_typst_external_scanner_serialize,
      tree_sitter_typst_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
