#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 28
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 57
#define ALIAS_COUNT 0
#define TOKEN_COUNT 44
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 2

enum {
  sym__whitespace = 1,
  sym_line_comment = 2,
  sym_none = 3,
  sym_auto = 4,
  anon_sym_true = 5,
  anon_sym_false = 6,
  sym_int = 7,
  sym_float = 8,
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
  anon_sym_DQUOTE = 19,
  sym__not_escape_sequence = 20,
  sym__escape_sequence = 21,
  anon_sym_BSLASH = 22,
  aux_sym_string_content_token1 = 23,
  aux_sym_string_content_token2 = 24,
  aux_sym_string_content_token3 = 25,
  anon_sym_SLASH = 26,
  anon_sym_LBRACK = 27,
  anon_sym_RBRACK = 28,
  anon_sym_LBRACE = 29,
  anon_sym_RBRACE = 30,
  anon_sym_POUND = 31,
  anon_sym_TILDE = 32,
  anon_sym_DOT = 33,
  anon_sym_COLON = 34,
  anon_sym_SQUOTE = 35,
  anon_sym_STAR = 36,
  anon_sym__ = 37,
  anon_sym_BQUOTE = 38,
  anon_sym_DOLLAR = 39,
  anon_sym_EQ = 40,
  anon_sym_LT = 41,
  anon_sym_GT = 42,
  anon_sym_AT = 43,
  sym_source_file = 44,
  sym__markup_node = 45,
  sym_expression = 46,
  sym__literal = 47,
  sym_boolean = 48,
  sym_unit = 49,
  sym_numeric = 50,
  sym_str = 51,
  sym_escape_sequence = 52,
  sym_string_content = 53,
  sym_special = 54,
  aux_sym_source_file_repeat1 = 55,
  aux_sym_string_content_repeat1 = 56,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__whitespace] = "_whitespace",
  [sym_line_comment] = "line_comment",
  [sym_none] = "none",
  [sym_auto] = "auto",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_int] = "int",
  [sym_float] = "float",
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
  [anon_sym_DQUOTE] = "\"",
  [sym__not_escape_sequence] = "_not_escape_sequence",
  [sym__escape_sequence] = "_escape_sequence",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_string_content_token1] = "string_content_token1",
  [aux_sym_string_content_token2] = "string_content_token2",
  [aux_sym_string_content_token3] = "string_content_token3",
  [anon_sym_SLASH] = "/",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_POUND] = "#",
  [anon_sym_TILDE] = "~",
  [anon_sym_DOT] = ".",
  [anon_sym_COLON] = ":",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_STAR] = "*",
  [anon_sym__] = "_",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_EQ] = "=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_AT] = "@",
  [sym_source_file] = "source_file",
  [sym__markup_node] = "_markup_node",
  [sym_expression] = "expression",
  [sym__literal] = "_literal",
  [sym_boolean] = "boolean",
  [sym_unit] = "unit",
  [sym_numeric] = "numeric",
  [sym_str] = "str",
  [sym_escape_sequence] = "escape_sequence",
  [sym_string_content] = "string_content",
  [sym_special] = "special",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_content_repeat1] = "string_content_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__whitespace] = sym__whitespace,
  [sym_line_comment] = sym_line_comment,
  [sym_none] = sym_none,
  [sym_auto] = sym_auto,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_int] = sym_int,
  [sym_float] = sym_float,
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
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym__not_escape_sequence] = sym__not_escape_sequence,
  [sym__escape_sequence] = sym__escape_sequence,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_string_content_token1] = aux_sym_string_content_token1,
  [aux_sym_string_content_token2] = aux_sym_string_content_token2,
  [aux_sym_string_content_token3] = aux_sym_string_content_token3,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym__] = anon_sym__,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_AT] = anon_sym_AT,
  [sym_source_file] = sym_source_file,
  [sym__markup_node] = sym__markup_node,
  [sym_expression] = sym_expression,
  [sym__literal] = sym__literal,
  [sym_boolean] = sym_boolean,
  [sym_unit] = sym_unit,
  [sym_numeric] = sym_numeric,
  [sym_str] = sym_str,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_string_content] = sym_string_content,
  [sym_special] = sym_special,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_content_repeat1] = aux_sym_string_content_repeat1,
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
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__not_escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [sym__escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_content_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_content_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_content_token3] = {
    .visible = false,
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
  },
  [sym_boolean] = {
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
  [sym_str] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_string_content] = {
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
  [aux_sym_string_content_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_prefix = 1,
  field_string_content = 2,
  field_suffix = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_prefix] = "prefix",
  [field_string_content] = "string_content",
  [field_suffix] = "suffix",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_prefix, 0},
    {field_string_content, 1},
    {field_suffix, 2},
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
  [20] = 12,
  [21] = 13,
  [22] = 22,
  [23] = 23,
  [24] = 11,
  [25] = 25,
  [26] = 26,
  [27] = 27,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(35);
      if (lookahead == '"') ADVANCE(56);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '$') ADVANCE(81);
      if (lookahead == '%') ADVANCE(54);
      if (lookahead == '\'') ADVANCE(77);
      if (lookahead == '*') ADVANCE(78);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '<') ADVANCE(83);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '>') ADVANCE(84);
      if (lookahead == '@') ADVANCE(85);
      if (lookahead == '[') ADVANCE(69);
      if (lookahead == '\\') ADVANCE(57);
      if (lookahead == ']') ADVANCE(70);
      if (lookahead == '_') ADVANCE(79);
      if (lookahead == '`') ADVANCE(80);
      if (lookahead == 'a') ADVANCE(23);
      if (lookahead == 'c') ADVANCE(12);
      if (lookahead == 'd') ADVANCE(6);
      if (lookahead == 'e') ADVANCE(13);
      if (lookahead == 'f') ADVANCE(3);
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == 'm') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 'p') ADVANCE(21);
      if (lookahead == 'r') ADVANCE(4);
      if (lookahead == 't') ADVANCE(19);
      if (lookahead == '{') ADVANCE(71);
      if (lookahead == '}') ADVANCE(72);
      if (lookahead == '~') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(56);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '$') ADVANCE(81);
      if (lookahead == '\'') ADVANCE(77);
      if (lookahead == '*') ADVANCE(78);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '<') ADVANCE(83);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '>') ADVANCE(84);
      if (lookahead == '@') ADVANCE(85);
      if (lookahead == '[') ADVANCE(69);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == ']') ADVANCE(70);
      if (lookahead == '_') ADVANCE(79);
      if (lookahead == '`') ADVANCE(80);
      if (lookahead == '{') ADVANCE(71);
      if (lookahead == '}') ADVANCE(72);
      if (lookahead == '~') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(37);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 10:
      if (lookahead == 'g') ADVANCE(50);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 13:
      if (lookahead == 'm') ADVANCE(52);
      END_STATE();
    case 14:
      if (lookahead == 'm') ADVANCE(47);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 20:
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 25:
      if (lookahead == '{') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 26:
      if (lookahead == '}') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 34:
      if (eof) ADVANCE(35);
      if (lookahead == '"') ADVANCE(56);
      if (lookahead == '%') ADVANCE(54);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == 'a') ADVANCE(23);
      if (lookahead == 'c') ADVANCE(12);
      if (lookahead == 'd') ADVANCE(6);
      if (lookahead == 'e') ADVANCE(13);
      if (lookahead == 'f') ADVANCE(3);
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == 'm') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 'p') ADVANCE(21);
      if (lookahead == 'r') ADVANCE(4);
      if (lookahead == 't') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_none);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_auto);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_pt);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_mm);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_cm);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_deg);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_rad);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_em);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_fr);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__not_escape_sequence);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != 'u' &&
          lookahead != 'x' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(60);
      if (lookahead == 'u') ADVANCE(25);
      if (lookahead == 'x') ADVANCE(33);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(59);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__not_escape_sequence);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != 'u' &&
          lookahead != 'x' &&
          lookahead != '{') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(60);
      if (lookahead == 'u') ADVANCE(25);
      if (lookahead == 'x') ADVANCE(33);
      if (lookahead == '{') ADVANCE(59);
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
      if (lookahead == 'u') ADVANCE(25);
      if (lookahead == 'x') ADVANCE(33);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_string_content_token2);
      if (lookahead == '"') ADVANCE(56);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '\\') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_string_content_token2);
      if (lookahead == '"') ADVANCE(56);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '\\') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_string_content_token2);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '\\') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_string_content_token2);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_string_content_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(37);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 34},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 34},
  [5] = {.lex_state = 34},
  [6] = {.lex_state = 34},
  [7] = {.lex_state = 34},
  [8] = {.lex_state = 34},
  [9] = {.lex_state = 34},
  [10] = {.lex_state = 34},
  [11] = {.lex_state = 34},
  [12] = {.lex_state = 34},
  [13] = {.lex_state = 34},
  [14] = {.lex_state = 34},
  [15] = {.lex_state = 65},
  [16] = {.lex_state = 64},
  [17] = {.lex_state = 64},
  [18] = {.lex_state = 63},
  [19] = {.lex_state = 63},
  [20] = {.lex_state = 64},
  [21] = {.lex_state = 64},
  [22] = {.lex_state = 64},
  [23] = {.lex_state = 64},
  [24] = {.lex_state = 64},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 66},
  [27] = {.lex_state = 0},
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
    [sym_int] = ACTIONS(1),
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
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__not_escape_sequence] = ACTIONS(1),
    [sym__escape_sequence] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [aux_sym_string_content_token1] = ACTIONS(1),
    [aux_sym_string_content_token3] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(25),
    [sym__markup_node] = STATE(5),
    [sym_expression] = STATE(5),
    [sym__literal] = STATE(7),
    [sym_boolean] = STATE(7),
    [sym_numeric] = STATE(7),
    [sym_str] = STATE(7),
    [sym_escape_sequence] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__whitespace] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [sym_none] = ACTIONS(7),
    [sym_auto] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_int] = ACTIONS(11),
    [sym_float] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym__escape_sequence] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(23), 1,
      anon_sym_SLASH,
    STATE(20), 1,
      sym_special,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(21), 20,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym__,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
  [33] = 4,
    ACTIONS(27), 1,
      anon_sym_SLASH,
    STATE(12), 1,
      sym_special,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(25), 20,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym__,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
  [66] = 5,
    STATE(10), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(31), 2,
      sym_int,
      anon_sym_BSLASH,
    ACTIONS(29), 8,
      ts_builtin_sym_end,
      sym_none,
      sym_auto,
      anon_sym_true,
      anon_sym_false,
      sym_float,
      anon_sym_DQUOTE,
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
  [99] = 11,
    ACTIONS(11), 1,
      sym_int,
    ACTIONS(13), 1,
      sym_float,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym__escape_sequence,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(7), 2,
      sym_none,
      sym_auto,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 4,
      sym__markup_node,
      sym_expression,
      sym_escape_sequence,
      aux_sym_source_file_repeat1,
    STATE(7), 4,
      sym__literal,
      sym_boolean,
      sym_numeric,
      sym_str,
  [142] = 11,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      sym_int,
    ACTIONS(48), 1,
      sym_float,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(54), 1,
      sym__escape_sequence,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(39), 2,
      sym_none,
      sym_auto,
    ACTIONS(42), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 4,
      sym__markup_node,
      sym_expression,
      sym_escape_sequence,
      aux_sym_source_file_repeat1,
    STATE(7), 4,
      sym__literal,
      sym_boolean,
      sym_numeric,
      sym_str,
  [185] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(62), 2,
      sym_int,
      anon_sym_BSLASH,
    ACTIONS(60), 8,
      ts_builtin_sym_end,
      sym_none,
      sym_auto,
      anon_sym_true,
      anon_sym_false,
      sym_float,
      anon_sym_DQUOTE,
      sym__escape_sequence,
  [204] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(66), 2,
      sym_int,
      anon_sym_BSLASH,
    ACTIONS(64), 8,
      ts_builtin_sym_end,
      sym_none,
      sym_auto,
      anon_sym_true,
      anon_sym_false,
      sym_float,
      anon_sym_DQUOTE,
      sym__escape_sequence,
  [223] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(70), 2,
      sym_int,
      anon_sym_BSLASH,
    ACTIONS(68), 8,
      ts_builtin_sym_end,
      sym_none,
      sym_auto,
      anon_sym_true,
      anon_sym_false,
      sym_float,
      anon_sym_DQUOTE,
      sym__escape_sequence,
  [242] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(74), 2,
      sym_int,
      anon_sym_BSLASH,
    ACTIONS(72), 8,
      ts_builtin_sym_end,
      sym_none,
      sym_auto,
      anon_sym_true,
      anon_sym_false,
      sym_float,
      anon_sym_DQUOTE,
      sym__escape_sequence,
  [261] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(78), 2,
      sym_int,
      anon_sym_BSLASH,
    ACTIONS(76), 8,
      ts_builtin_sym_end,
      sym_none,
      sym_auto,
      anon_sym_true,
      anon_sym_false,
      sym_float,
      anon_sym_DQUOTE,
      sym__escape_sequence,
  [280] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(82), 2,
      sym_int,
      anon_sym_BSLASH,
    ACTIONS(80), 8,
      ts_builtin_sym_end,
      sym_none,
      sym_auto,
      anon_sym_true,
      anon_sym_false,
      sym_float,
      anon_sym_DQUOTE,
      sym__escape_sequence,
  [299] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(86), 2,
      sym_int,
      anon_sym_BSLASH,
    ACTIONS(84), 8,
      ts_builtin_sym_end,
      sym_none,
      sym_auto,
      anon_sym_true,
      anon_sym_false,
      sym_float,
      anon_sym_DQUOTE,
      sym__escape_sequence,
  [318] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(90), 2,
      sym_int,
      anon_sym_BSLASH,
    ACTIONS(88), 8,
      ts_builtin_sym_end,
      sym_none,
      sym_auto,
      anon_sym_true,
      anon_sym_false,
      sym_float,
      anon_sym_DQUOTE,
      sym__escape_sequence,
  [337] = 8,
    ACTIONS(92), 1,
      sym__not_escape_sequence,
    ACTIONS(94), 1,
      sym__escape_sequence,
    ACTIONS(96), 1,
      anon_sym_BSLASH,
    ACTIONS(98), 1,
      aux_sym_string_content_token1,
    ACTIONS(100), 1,
      aux_sym_string_content_token2,
    STATE(27), 1,
      sym_string_content,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    STATE(16), 2,
      sym_escape_sequence,
      aux_sym_string_content_repeat1,
  [364] = 8,
    ACTIONS(94), 1,
      sym__escape_sequence,
    ACTIONS(96), 1,
      anon_sym_BSLASH,
    ACTIONS(98), 1,
      aux_sym_string_content_token1,
    ACTIONS(100), 1,
      aux_sym_string_content_token2,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 1,
      sym__not_escape_sequence,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    STATE(17), 2,
      sym_escape_sequence,
      aux_sym_string_content_repeat1,
  [391] = 8,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      sym__not_escape_sequence,
    ACTIONS(111), 1,
      sym__escape_sequence,
    ACTIONS(114), 1,
      anon_sym_BSLASH,
    ACTIONS(117), 1,
      aux_sym_string_content_token1,
    ACTIONS(120), 1,
      aux_sym_string_content_token2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    STATE(17), 2,
      sym_escape_sequence,
      aux_sym_string_content_repeat1,
  [418] = 4,
    ACTIONS(125), 1,
      aux_sym_string_content_token3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(106), 2,
      anon_sym_DQUOTE,
      sym__escape_sequence,
    ACTIONS(123), 4,
      sym__not_escape_sequence,
      anon_sym_BSLASH,
      aux_sym_string_content_token1,
      aux_sym_string_content_token2,
  [436] = 4,
    ACTIONS(131), 1,
      aux_sym_string_content_token3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(127), 2,
      anon_sym_DQUOTE,
      sym__escape_sequence,
    ACTIONS(129), 4,
      sym__not_escape_sequence,
      anon_sym_BSLASH,
      aux_sym_string_content_token1,
      aux_sym_string_content_token2,
  [454] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(80), 2,
      anon_sym_DQUOTE,
      sym__escape_sequence,
    ACTIONS(82), 4,
      sym__not_escape_sequence,
      anon_sym_BSLASH,
      aux_sym_string_content_token1,
      aux_sym_string_content_token2,
  [469] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(84), 2,
      anon_sym_DQUOTE,
      sym__escape_sequence,
    ACTIONS(86), 4,
      sym__not_escape_sequence,
      anon_sym_BSLASH,
      aux_sym_string_content_token1,
      aux_sym_string_content_token2,
  [484] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(106), 2,
      anon_sym_DQUOTE,
      sym__escape_sequence,
    ACTIONS(123), 4,
      sym__not_escape_sequence,
      anon_sym_BSLASH,
      aux_sym_string_content_token1,
      aux_sym_string_content_token2,
  [499] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(133), 2,
      anon_sym_DQUOTE,
      sym__escape_sequence,
    ACTIONS(135), 4,
      sym__not_escape_sequence,
      anon_sym_BSLASH,
      aux_sym_string_content_token1,
      aux_sym_string_content_token2,
  [514] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(76), 2,
      anon_sym_DQUOTE,
      sym__escape_sequence,
    ACTIONS(78), 4,
      sym__not_escape_sequence,
      anon_sym_BSLASH,
      aux_sym_string_content_token1,
      aux_sym_string_content_token2,
  [529] = 2,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [537] = 2,
    ACTIONS(139), 1,
      aux_sym_string_content_token2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [545] = 2,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 99,
  [SMALL_STATE(6)] = 142,
  [SMALL_STATE(7)] = 185,
  [SMALL_STATE(8)] = 204,
  [SMALL_STATE(9)] = 223,
  [SMALL_STATE(10)] = 242,
  [SMALL_STATE(11)] = 261,
  [SMALL_STATE(12)] = 280,
  [SMALL_STATE(13)] = 299,
  [SMALL_STATE(14)] = 318,
  [SMALL_STATE(15)] = 337,
  [SMALL_STATE(16)] = 364,
  [SMALL_STATE(17)] = 391,
  [SMALL_STATE(18)] = 418,
  [SMALL_STATE(19)] = 436,
  [SMALL_STATE(20)] = 454,
  [SMALL_STATE(21)] = 469,
  [SMALL_STATE(22)] = 484,
  [SMALL_STATE(23)] = 499,
  [SMALL_STATE(24)] = 514,
  [SMALL_STATE(25)] = 529,
  [SMALL_STATE(26)] = 537,
  [SMALL_STATE(27)] = 545,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_special, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 2),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_str, 3, .production_id = 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_str, 3, .production_id = 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_content, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(17),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(21),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(2),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(26),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(19),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 3),
  [137] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
};

#ifdef __cplusplus
extern "C" {
#endif
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
