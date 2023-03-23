#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 328
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 107
#define ALIAS_COUNT 1
#define TOKEN_COUNT 68
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 11

enum {
  sym_identifier = 1,
  sym__whitespace = 2,
  sym_line_comment = 3,
  sym_line_break = 4,
  aux_sym_quote_token1 = 5,
  anon_sym_DQUOTE = 6,
  aux_sym__text_token1 = 7,
  anon_sym_SLASH = 8,
  anon_sym_TILDE = 9,
  anon_sym_DASH = 10,
  anon_sym_DOT = 11,
  anon_sym_COLON = 12,
  anon_sym_STAR = 13,
  anon_sym__ = 14,
  anon_sym_BQUOTE = 15,
  anon_sym_DOLLAR = 16,
  anon_sym_EQ = 17,
  anon_sym_LT = 18,
  anon_sym_GT = 19,
  anon_sym_AT = 20,
  anon_sym_COMMA = 21,
  anon_sym_SEMI = 22,
  anon_sym_QMARK = 23,
  anon_sym_BANG = 24,
  anon_sym_POUND = 25,
  anon_sym_LBRACK = 26,
  anon_sym_RBRACK = 27,
  anon_sym_let = 28,
  anon_sym_if = 29,
  anon_sym_else = 30,
  anon_sym_for = 31,
  anon_sym_in = 32,
  anon_sym_LPAREN = 33,
  anon_sym_RPAREN = 34,
  anon_sym_LBRACE = 35,
  anon_sym_RBRACE = 36,
  sym_none = 37,
  anon_sym_true = 38,
  anon_sym_false = 39,
  sym_int_literal = 40,
  sym_float_literal = 41,
  anon_sym_pt = 42,
  anon_sym_mm = 43,
  anon_sym_cm = 44,
  anon_sym_deg = 45,
  anon_sym_rad = 46,
  anon_sym_em = 47,
  anon_sym_fr = 48,
  anon_sym_PERCENT = 49,
  aux_sym_string_literal_token1 = 50,
  anon_sym_SQUOTE = 51,
  sym__not_an_escape_sequence = 52,
  sym_escape_sequence = 53,
  anon_sym_PLUS = 54,
  anon_sym_not = 55,
  anon_sym_and = 56,
  anon_sym_or = 57,
  anon_sym_LT_EQ = 58,
  anon_sym_EQ_EQ = 59,
  anon_sym_BANG_EQ = 60,
  anon_sym_GT_EQ = 61,
  anon_sym_PLUS_EQ = 62,
  anon_sym_DASH_EQ = 63,
  anon_sym_STAR_EQ = 64,
  anon_sym_SLASH_EQ = 65,
  sym__string_content = 66,
  sym_block_comment = 67,
  sym_source_file = 68,
  sym__markup = 69,
  sym_quote = 70,
  aux_sym__text = 71,
  sym__code_mode = 72,
  sym_function_call = 73,
  sym__code_block = 74,
  sym_content_block = 75,
  sym__statements = 76,
  sym_expression_statement = 77,
  sym__left_hand_side = 78,
  sym_pattern_list = 79,
  sym_expression = 80,
  sym_let_declaration = 81,
  sym_if_expression = 82,
  sym_else_clause = 83,
  sym_for_expression = 84,
  sym_function = 85,
  sym_parameters = 86,
  sym__parameters = 87,
  sym_parameter = 88,
  sym_default_parameter = 89,
  sym_block = 90,
  sym_boolean_literal = 91,
  sym_unit = 92,
  sym_numeric = 93,
  sym_string_literal = 94,
  sym_unary_operator = 95,
  sym_not_operator = 96,
  sym_boolean_operator = 97,
  sym_binary_operator = 98,
  sym_comparison_operator = 99,
  sym_augmented_assignment = 100,
  aux_sym_source_file_repeat1 = 101,
  aux_sym_quote_repeat1 = 102,
  aux_sym__statements_repeat1 = 103,
  aux_sym_pattern_list_repeat1 = 104,
  aux_sym__parameters_repeat1 = 105,
  aux_sym_string_literal_repeat1 = 106,
  anon_alias_sym_notin = 107,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym__whitespace] = "_whitespace",
  [sym_line_comment] = "line_comment",
  [sym_line_break] = "line_break",
  [aux_sym_quote_token1] = "quote_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__text_token1] = "_text_token1",
  [anon_sym_SLASH] = "/",
  [anon_sym_TILDE] = "~",
  [anon_sym_DASH] = "-",
  [anon_sym_DOT] = ".",
  [anon_sym_COLON] = ":",
  [anon_sym_STAR] = "*",
  [anon_sym__] = "_",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_EQ] = "=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_AT] = "@",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_QMARK] = "\?",
  [anon_sym_BANG] = "!",
  [anon_sym_POUND] = "#",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_let] = "let",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_none] = "none",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_int_literal] = "int_literal",
  [sym_float_literal] = "float_literal",
  [anon_sym_pt] = "pt",
  [anon_sym_mm] = "mm",
  [anon_sym_cm] = "cm",
  [anon_sym_deg] = "deg",
  [anon_sym_rad] = "rad",
  [anon_sym_em] = "em",
  [anon_sym_fr] = "fr",
  [anon_sym_PERCENT] = "%",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [anon_sym_SQUOTE] = "'",
  [sym__not_an_escape_sequence] = "_not_an_escape_sequence",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_PLUS] = "+",
  [anon_sym_not] = "not",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [sym__string_content] = "_string_content",
  [sym_block_comment] = "block_comment",
  [sym_source_file] = "source_file",
  [sym__markup] = "_markup",
  [sym_quote] = "quote",
  [aux_sym__text] = "_text",
  [sym__code_mode] = "_code_mode",
  [sym_function_call] = "function",
  [sym__code_block] = "_code_block",
  [sym_content_block] = "content_block",
  [sym__statements] = "_statements",
  [sym_expression_statement] = "expression_statement",
  [sym__left_hand_side] = "_left_hand_side",
  [sym_pattern_list] = "pattern_list",
  [sym_expression] = "expression",
  [sym_let_declaration] = "let_declaration",
  [sym_if_expression] = "if_expression",
  [sym_else_clause] = "else_clause",
  [sym_for_expression] = "for_expression",
  [sym_function] = "function",
  [sym_parameters] = "parameters",
  [sym__parameters] = "_parameters",
  [sym_parameter] = "parameter",
  [sym_default_parameter] = "default_parameter",
  [sym_block] = "block",
  [sym_boolean_literal] = "boolean_literal",
  [sym_unit] = "unit",
  [sym_numeric] = "numeric",
  [sym_string_literal] = "string_literal",
  [sym_unary_operator] = "unary_operator",
  [sym_not_operator] = "not_operator",
  [sym_boolean_operator] = "boolean_operator",
  [sym_binary_operator] = "binary_operator",
  [sym_comparison_operator] = "comparison_operator",
  [sym_augmented_assignment] = "augmented_assignment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_quote_repeat1] = "quote_repeat1",
  [aux_sym__statements_repeat1] = "_statements_repeat1",
  [aux_sym_pattern_list_repeat1] = "pattern_list_repeat1",
  [aux_sym__parameters_repeat1] = "_parameters_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [anon_alias_sym_notin] = "not in",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym__whitespace] = sym__whitespace,
  [sym_line_comment] = sym_line_comment,
  [sym_line_break] = sym_line_break,
  [aux_sym_quote_token1] = aux_sym_quote_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__text_token1] = aux_sym__text_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym__] = anon_sym__,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_none] = sym_none,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_int_literal] = sym_int_literal,
  [sym_float_literal] = sym_float_literal,
  [anon_sym_pt] = anon_sym_pt,
  [anon_sym_mm] = anon_sym_mm,
  [anon_sym_cm] = anon_sym_cm,
  [anon_sym_deg] = anon_sym_deg,
  [anon_sym_rad] = anon_sym_rad,
  [anon_sym_em] = anon_sym_em,
  [anon_sym_fr] = anon_sym_fr,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym__not_an_escape_sequence] = sym__not_an_escape_sequence,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [sym__string_content] = sym__string_content,
  [sym_block_comment] = sym_block_comment,
  [sym_source_file] = sym_source_file,
  [sym__markup] = sym__markup,
  [sym_quote] = sym_quote,
  [aux_sym__text] = aux_sym__text,
  [sym__code_mode] = sym__code_mode,
  [sym_function_call] = sym_function,
  [sym__code_block] = sym__code_block,
  [sym_content_block] = sym_content_block,
  [sym__statements] = sym__statements,
  [sym_expression_statement] = sym_expression_statement,
  [sym__left_hand_side] = sym__left_hand_side,
  [sym_pattern_list] = sym_pattern_list,
  [sym_expression] = sym_expression,
  [sym_let_declaration] = sym_let_declaration,
  [sym_if_expression] = sym_if_expression,
  [sym_else_clause] = sym_else_clause,
  [sym_for_expression] = sym_for_expression,
  [sym_function] = sym_function,
  [sym_parameters] = sym_parameters,
  [sym__parameters] = sym__parameters,
  [sym_parameter] = sym_parameter,
  [sym_default_parameter] = sym_default_parameter,
  [sym_block] = sym_block,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_unit] = sym_unit,
  [sym_numeric] = sym_numeric,
  [sym_string_literal] = sym_string_literal,
  [sym_unary_operator] = sym_unary_operator,
  [sym_not_operator] = sym_not_operator,
  [sym_boolean_operator] = sym_boolean_operator,
  [sym_binary_operator] = sym_binary_operator,
  [sym_comparison_operator] = sym_comparison_operator,
  [sym_augmented_assignment] = sym_augmented_assignment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_quote_repeat1] = aux_sym_quote_repeat1,
  [aux_sym__statements_repeat1] = aux_sym__statements_repeat1,
  [aux_sym_pattern_list_repeat1] = aux_sym_pattern_list_repeat1,
  [aux_sym__parameters_repeat1] = aux_sym__parameters_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [anon_alias_sym_notin] = anon_alias_sym_notin,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
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
  [sym_line_break] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_quote_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__text_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
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
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [sym_none] = {
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
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__not_an_escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
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
  [sym__markup] = {
    .visible = false,
    .named = true,
  },
  [sym_quote] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__text] = {
    .visible = false,
    .named = false,
  },
  [sym__code_mode] = {
    .visible = false,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym__code_block] = {
    .visible = false,
    .named = true,
  },
  [sym_content_block] = {
    .visible = true,
    .named = true,
  },
  [sym__statements] = {
    .visible = false,
    .named = true,
  },
  [sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__left_hand_side] = {
    .visible = false,
    .named = true,
  },
  [sym_pattern_list] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_let_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_if_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_else_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_for_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym__parameters] = {
    .visible = false,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_default_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
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
  [sym_unary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_not_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_comparison_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_augmented_assignment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quote_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__statements_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pattern_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_notin] = {
    .visible = true,
    .named = false,
  },
};

enum {
  field_alternative = 1,
  field_argument = 2,
  field_body = 3,
  field_condition = 4,
  field_consequence = 5,
  field_left = 6,
  field_lhs = 7,
  field_name = 8,
  field_operator = 9,
  field_parameters = 10,
  field_rhs = 11,
  field_right = 12,
  field_value = 13,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_argument] = "argument",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_left] = "left",
  [field_lhs] = "lhs",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_parameters] = "parameters",
  [field_rhs] = "rhs",
  [field_right] = "right",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 1},
  [4] = {.index = 5, .length = 3},
  [5] = {.index = 8, .length = 2},
  [6] = {.index = 10, .length = 2},
  [7] = {.index = 12, .length = 3},
  [8] = {.index = 15, .length = 4},
  [9] = {.index = 19, .length = 2},
  [10] = {.index = 21, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
    {field_parameters, 1},
  [2] =
    {field_argument, 1},
    {field_operator, 0},
  [4] =
    {field_argument, 1},
  [5] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [8] =
    {field_condition, 1},
    {field_consequence, 2},
  [10] =
    {field_lhs, 1},
    {field_rhs, 3},
  [12] =
    {field_alternative, 3},
    {field_condition, 1},
    {field_consequence, 2},
  [15] =
    {field_left, 0},
    {field_operator, 1},
    {field_operator, 2},
    {field_right, 3},
  [19] =
    {field_name, 0},
    {field_value, 2},
  [21] =
    {field_body, 4},
    {field_left, 1},
    {field_value, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [8] = {
    [1] = anon_alias_sym_notin,
    [2] = anon_alias_sym_notin,
  },
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
  [5] = 4,
  [6] = 6,
  [7] = 6,
  [8] = 2,
  [9] = 9,
  [10] = 9,
  [11] = 9,
  [12] = 9,
  [13] = 9,
  [14] = 9,
  [15] = 9,
  [16] = 9,
  [17] = 9,
  [18] = 9,
  [19] = 4,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 20,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 26,
  [35] = 35,
  [36] = 36,
  [37] = 31,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 32,
  [42] = 36,
  [43] = 43,
  [44] = 44,
  [45] = 35,
  [46] = 39,
  [47] = 47,
  [48] = 24,
  [49] = 28,
  [50] = 50,
  [51] = 44,
  [52] = 47,
  [53] = 27,
  [54] = 29,
  [55] = 55,
  [56] = 40,
  [57] = 57,
  [58] = 55,
  [59] = 30,
  [60] = 50,
  [61] = 33,
  [62] = 43,
  [63] = 57,
  [64] = 25,
  [65] = 38,
  [66] = 66,
  [67] = 66,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 70,
  [72] = 69,
  [73] = 68,
  [74] = 74,
  [75] = 74,
  [76] = 76,
  [77] = 77,
  [78] = 74,
  [79] = 74,
  [80] = 74,
  [81] = 74,
  [82] = 74,
  [83] = 74,
  [84] = 74,
  [85] = 77,
  [86] = 74,
  [87] = 87,
  [88] = 87,
  [89] = 87,
  [90] = 87,
  [91] = 87,
  [92] = 87,
  [93] = 87,
  [94] = 87,
  [95] = 87,
  [96] = 87,
  [97] = 97,
  [98] = 97,
  [99] = 97,
  [100] = 97,
  [101] = 20,
  [102] = 97,
  [103] = 24,
  [104] = 25,
  [105] = 32,
  [106] = 29,
  [107] = 40,
  [108] = 57,
  [109] = 31,
  [110] = 55,
  [111] = 111,
  [112] = 68,
  [113] = 30,
  [114] = 114,
  [115] = 43,
  [116] = 35,
  [117] = 38,
  [118] = 27,
  [119] = 28,
  [120] = 36,
  [121] = 33,
  [122] = 50,
  [123] = 44,
  [124] = 47,
  [125] = 26,
  [126] = 39,
  [127] = 127,
  [128] = 2,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 135,
  [137] = 130,
  [138] = 138,
  [139] = 139,
  [140] = 138,
  [141] = 141,
  [142] = 139,
  [143] = 138,
  [144] = 144,
  [145] = 134,
  [146] = 133,
  [147] = 129,
  [148] = 148,
  [149] = 132,
  [150] = 150,
  [151] = 131,
  [152] = 150,
  [153] = 132,
  [154] = 133,
  [155] = 130,
  [156] = 141,
  [157] = 134,
  [158] = 131,
  [159] = 144,
  [160] = 141,
  [161] = 161,
  [162] = 150,
  [163] = 135,
  [164] = 139,
  [165] = 131,
  [166] = 132,
  [167] = 133,
  [168] = 134,
  [169] = 135,
  [170] = 144,
  [171] = 130,
  [172] = 161,
  [173] = 129,
  [174] = 150,
  [175] = 129,
  [176] = 144,
  [177] = 177,
  [178] = 29,
  [179] = 36,
  [180] = 32,
  [181] = 29,
  [182] = 177,
  [183] = 36,
  [184] = 32,
  [185] = 185,
  [186] = 32,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 36,
  [193] = 32,
  [194] = 4,
  [195] = 188,
  [196] = 36,
  [197] = 185,
  [198] = 29,
  [199] = 29,
  [200] = 200,
  [201] = 191,
  [202] = 189,
  [203] = 190,
  [204] = 187,
  [205] = 200,
  [206] = 206,
  [207] = 206,
  [208] = 208,
  [209] = 161,
  [210] = 36,
  [211] = 32,
  [212] = 29,
  [213] = 30,
  [214] = 189,
  [215] = 215,
  [216] = 216,
  [217] = 50,
  [218] = 200,
  [219] = 29,
  [220] = 38,
  [221] = 27,
  [222] = 215,
  [223] = 215,
  [224] = 47,
  [225] = 188,
  [226] = 44,
  [227] = 227,
  [228] = 33,
  [229] = 28,
  [230] = 24,
  [231] = 43,
  [232] = 227,
  [233] = 36,
  [234] = 227,
  [235] = 40,
  [236] = 26,
  [237] = 32,
  [238] = 31,
  [239] = 36,
  [240] = 32,
  [241] = 29,
  [242] = 35,
  [243] = 25,
  [244] = 57,
  [245] = 190,
  [246] = 191,
  [247] = 39,
  [248] = 55,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 252,
  [254] = 252,
  [255] = 255,
  [256] = 256,
  [257] = 255,
  [258] = 258,
  [259] = 258,
  [260] = 260,
  [261] = 255,
  [262] = 262,
  [263] = 262,
  [264] = 262,
  [265] = 262,
  [266] = 255,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 267,
  [274] = 270,
  [275] = 275,
  [276] = 268,
  [277] = 269,
  [278] = 272,
  [279] = 269,
  [280] = 275,
  [281] = 270,
  [282] = 269,
  [283] = 268,
  [284] = 272,
  [285] = 272,
  [286] = 286,
  [287] = 286,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 57,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 294,
  [297] = 55,
  [298] = 298,
  [299] = 293,
  [300] = 40,
  [301] = 301,
  [302] = 301,
  [303] = 303,
  [304] = 303,
  [305] = 303,
  [306] = 303,
  [307] = 307,
  [308] = 303,
  [309] = 303,
  [310] = 307,
  [311] = 311,
  [312] = 311,
  [313] = 301,
  [314] = 303,
  [315] = 303,
  [316] = 303,
  [317] = 307,
  [318] = 318,
  [319] = 301,
  [320] = 307,
  [321] = 301,
  [322] = 311,
  [323] = 323,
  [324] = 324,
  [325] = 324,
  [326] = 324,
  [327] = 303,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'b'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))
              : (c <= 740 || (c < 891
                ? (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1649
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))
              : (c <= 740 || (c < 891
                ? (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1649
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'b' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_escape_sequence_character_set_1(int32_t c) {
  return (c < '_'
    ? (c < '*'
      ? (c < '$'
        ? c == '!'
        : c <= '$')
      : (c <= '*' || (c < ':'
        ? (c >= ',' && c <= '/')
        : c <= '@')))
    : (c <= '`' || (c < 't'
      ? (c < 'r'
        ? c == 'n'
        : c <= 'r')
      : (c <= 't' || c == '~'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(60);
      if (lookahead == '!') ADVANCE(142);
      if (lookahead == '"') ADVANCE(98);
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '$') ADVANCE(130);
      if (lookahead == '%') ADVANCE(193);
      if (lookahead == '\'') ADVANCE(195);
      if (lookahead == '(') ADVANCE(158);
      if (lookahead == ')') ADVANCE(159);
      if (lookahead == '*') ADVANCE(126);
      if (lookahead == '+') ADVANCE(199);
      if (lookahead == ',') ADVANCE(138);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '/') ADVANCE(119);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == ';') ADVANCE(139);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '=') ADVANCE(132);
      if (lookahead == '>') ADVANCE(136);
      if (lookahead == '?') ADVANCE(140);
      if (lookahead == '@') ADVANCE(137);
      if (lookahead == '[') ADVANCE(144);
      if (lookahead == '\\') ADVANCE(196);
      if (lookahead == ']') ADVANCE(145);
      if (lookahead == '_') ADVANCE(127);
      if (lookahead == '`') ADVANCE(129);
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == 'c') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(24);
      if (lookahead == 'l') ADVANCE(23);
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(34);
      if (lookahead == 'o') ADVANCE(37);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(15);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == '{') ADVANCE(160);
      if (lookahead == '}') ADVANCE(161);
      if (lookahead == '~') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '"') ADVANCE(98);
      if (lookahead == '%') ADVANCE(193);
      if (lookahead == '\'') ADVANCE(195);
      if (lookahead == ')') ADVANCE(159);
      if (lookahead == '*') ADVANCE(125);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == ',') ADVANCE(138);
      if (lookahead == '-') ADVANCE(121);
      if (lookahead == '/') ADVANCE(118);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(136);
      if (lookahead == '[') ADVANCE(144);
      if (lookahead == '\\') ADVANCE(196);
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == 'c') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'f') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(32);
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(37);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(15);
      if (lookahead == '{') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '%') ADVANCE(193);
      if (lookahead == '\'') ADVANCE(194);
      if (lookahead == '*') ADVANCE(125);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '-') ADVANCE(121);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '/') ADVANCE(118);
      if (lookahead == ';') ADVANCE(139);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(136);
      if (lookahead == '[') ADVANCE(144);
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'c') ADVANCE(78);
      if (lookahead == 'd') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'f') ADVANCE(61);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'l') ADVANCE(72);
      if (lookahead == 'm') ADVANCE(80);
      if (lookahead == 'n') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(85);
      if (lookahead == 'p') ADVANCE(90);
      if (lookahead == 'r') ADVANCE(64);
      if (lookahead == 't') ADVANCE(86);
      if (lookahead == '{') ADVANCE(160);
      if (lookahead == '}') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(93);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '\'') ADVANCE(194);
      if (lookahead == '(') ADVANCE(158);
      if (lookahead == '*') ADVANCE(126);
      if (lookahead == '+') ADVANCE(199);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '/') ADVANCE(119);
      if (lookahead == ';') ADVANCE(139);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(136);
      if (lookahead == '[') ADVANCE(144);
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'f') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'l') ADVANCE(72);
      if (lookahead == 'n') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(85);
      if (lookahead == 't') ADVANCE(86);
      if (lookahead == '{') ADVANCE(160);
      if (lookahead == '}') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(93);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '\'') ADVANCE(194);
      if (lookahead == '*') ADVANCE(125);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '-') ADVANCE(121);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '/') ADVANCE(118);
      if (lookahead == ';') ADVANCE(139);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(136);
      if (lookahead == '[') ADVANCE(144);
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'f') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'l') ADVANCE(72);
      if (lookahead == 'n') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(85);
      if (lookahead == 't') ADVANCE(86);
      if (lookahead == '{') ADVANCE(160);
      if (lookahead == '}') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(93);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '\'') ADVANCE(194);
      if (lookahead == ')') ADVANCE(159);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '-') ADVANCE(121);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '[') ADVANCE(144);
      if (lookahead == 'f') ADVANCE(63);
      if (lookahead == 'n') ADVANCE(84);
      if (lookahead == 't') ADVANCE(86);
      if (lookahead == '{') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '\'') ADVANCE(194);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '-') ADVANCE(121);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ';') ADVANCE(139);
      if (lookahead == '[') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == 'f') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(74);
      if (lookahead == 'l') ADVANCE(72);
      if (lookahead == 'n') ADVANCE(84);
      if (lookahead == 't') ADVANCE(86);
      if (lookahead == '{') ADVANCE(160);
      if (lookahead == '}') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '\'') ADVANCE(194);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '-') ADVANCE(121);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ';') ADVANCE(139);
      if (lookahead == '[') ADVANCE(144);
      if (lookahead == 'f') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(74);
      if (lookahead == 'l') ADVANCE(72);
      if (lookahead == 'n') ADVANCE(84);
      if (lookahead == 't') ADVANCE(86);
      if (lookahead == '{') ADVANCE(160);
      if (lookahead == '}') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 8:
      if (lookahead == ',') ADVANCE(138);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '=') ADVANCE(131);
      if (lookahead == 'i') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(95);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '=') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(211);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(210);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'o') ADVANCE(39);
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(203);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(184);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(148);
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 25:
      if (lookahead == 'g') ADVANCE(181);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(40);
      if (lookahead == 'm') ADVANCE(187);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 28:
      if (lookahead == 'm') ADVANCE(178);
      END_STATE();
    case 29:
      if (lookahead == 'm') ADVANCE(187);
      END_STATE();
    case 30:
      if (lookahead == 'm') ADVANCE(175);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 46:
      if (lookahead == '{') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 47:
      if (lookahead == '}') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 48:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(197);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 55:
      if (eof) ADVANCE(60);
      if (lookahead == '!') ADVANCE(142);
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '$') ADVANCE(130);
      if (lookahead == '%') ADVANCE(193);
      if (lookahead == '*') ADVANCE(125);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == ',') ADVANCE(138);
      if (lookahead == '-') ADVANCE(121);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '/') ADVANCE(118);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == ';') ADVANCE(139);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '=') ADVANCE(132);
      if (lookahead == '>') ADVANCE(136);
      if (lookahead == '?') ADVANCE(140);
      if (lookahead == '@') ADVANCE(137);
      if (lookahead == '[') ADVANCE(144);
      if (lookahead == '\\') ADVANCE(96);
      if (lookahead == ']') ADVANCE(145);
      if (lookahead == '_') ADVANCE(128);
      if (lookahead == '`') ADVANCE(129);
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead == 'c') ADVANCE(106);
      if (lookahead == 'd') ADVANCE(102);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == 'f') ADVANCE(112);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == 'm') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(113);
      if (lookahead == 'p') ADVANCE(115);
      if (lookahead == 'r') ADVANCE(99);
      if (lookahead == '{') ADVANCE(160);
      if (lookahead == '~') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 56:
      if (eof) ADVANCE(60);
      if (lookahead == '!') ADVANCE(142);
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '$') ADVANCE(130);
      if (lookahead == '(') ADVANCE(158);
      if (lookahead == '*') ADVANCE(126);
      if (lookahead == '+') ADVANCE(199);
      if (lookahead == ',') ADVANCE(138);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '/') ADVANCE(119);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == ';') ADVANCE(139);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '=') ADVANCE(132);
      if (lookahead == '>') ADVANCE(136);
      if (lookahead == '?') ADVANCE(140);
      if (lookahead == '@') ADVANCE(137);
      if (lookahead == '[') ADVANCE(144);
      if (lookahead == '\\') ADVANCE(96);
      if (lookahead == ']') ADVANCE(145);
      if (lookahead == '_') ADVANCE(128);
      if (lookahead == '`') ADVANCE(129);
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(113);
      if (lookahead == '{') ADVANCE(160);
      if (lookahead == '~') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 57:
      if (eof) ADVANCE(60);
      if (lookahead == '!') ADVANCE(142);
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '$') ADVANCE(130);
      if (lookahead == '*') ADVANCE(125);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == ',') ADVANCE(138);
      if (lookahead == '-') ADVANCE(121);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '/') ADVANCE(118);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == ';') ADVANCE(139);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '=') ADVANCE(132);
      if (lookahead == '>') ADVANCE(136);
      if (lookahead == '?') ADVANCE(140);
      if (lookahead == '@') ADVANCE(137);
      if (lookahead == '[') ADVANCE(144);
      if (lookahead == '\\') ADVANCE(96);
      if (lookahead == ']') ADVANCE(145);
      if (lookahead == '_') ADVANCE(128);
      if (lookahead == '`') ADVANCE(129);
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(113);
      if (lookahead == '{') ADVANCE(160);
      if (lookahead == '~') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 58:
      if (eof) ADVANCE(60);
      if (lookahead == '!') ADVANCE(141);
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '$') ADVANCE(130);
      if (lookahead == '\'') ADVANCE(195);
      if (lookahead == '(') ADVANCE(158);
      if (lookahead == '*') ADVANCE(125);
      if (lookahead == ',') ADVANCE(138);
      if (lookahead == '-') ADVANCE(121);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '/') ADVANCE(118);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == ';') ADVANCE(139);
      if (lookahead == '<') ADVANCE(133);
      if (lookahead == '=') ADVANCE(131);
      if (lookahead == '>') ADVANCE(135);
      if (lookahead == '?') ADVANCE(140);
      if (lookahead == '@') ADVANCE(137);
      if (lookahead == '[') ADVANCE(144);
      if (lookahead == '\\') ADVANCE(96);
      if (lookahead == ']') ADVANCE(145);
      if (lookahead == '_') ADVANCE(128);
      if (lookahead == '`') ADVANCE(129);
      if (lookahead == '~') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 59:
      if (eof) ADVANCE(60);
      if (lookahead == '!') ADVANCE(141);
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '$') ADVANCE(130);
      if (lookahead == '*') ADVANCE(125);
      if (lookahead == ',') ADVANCE(138);
      if (lookahead == '-') ADVANCE(121);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '/') ADVANCE(118);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == ';') ADVANCE(139);
      if (lookahead == '<') ADVANCE(133);
      if (lookahead == '=') ADVANCE(131);
      if (lookahead == '>') ADVANCE(135);
      if (lookahead == '?') ADVANCE(140);
      if (lookahead == '@') ADVANCE(137);
      if (lookahead == '[') ADVANCE(144);
      if (lookahead == '\\') ADVANCE(96);
      if (lookahead == ']') ADVANCE(145);
      if (lookahead == '_') ADVANCE(128);
      if (lookahead == '`') ADVANCE(129);
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == '~') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == 'o') ADVANCE(87);
      if (lookahead == 'r') ADVANCE(192);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(93);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == 'o') ADVANCE(87);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(93);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(76);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(93);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(66);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(93);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(205);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(93);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(186);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(93);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(75);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(93);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(163);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(93);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(165);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(93);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(167);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(93);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(152);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(93);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(91);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(93);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(149);
      if (lookahead == 'n') ADVANCE(157);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(93);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(149);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(93);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(183);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(93);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(88);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(93);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(89);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(93);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(180);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(93);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(189);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(93);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(177);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(93);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(65);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(93);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(157);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(93);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == 't') ADVANCE(202);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(93);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(83);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(93);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(208);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(93);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(92);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(93);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(154);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(93);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(70);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(93);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(71);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(93);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(174);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(93);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(147);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(93);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(69);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_line_break);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(197);
      if (lookahead == 'u') ADVANCE(46);
      if (lookahead == 'x') ADVANCE(54);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_quote_token1);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'a') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'd') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'd') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'e') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'e') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'g') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'l') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'm') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'm') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'm') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'n') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'n') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'o') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'r') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'r') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 's') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 't') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 't') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(95);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == '=') ADVANCE(216);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(214);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(215);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(210);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(209);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(212);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(211);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_let);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(93);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(93);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_else);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(93);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_for);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(93);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_in);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(93);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_none);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_none);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(93);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(93);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(93);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(170);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_int_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_pt);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_pt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_pt);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(93);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_mm);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_mm);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_mm);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(93);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_cm);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_cm);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_cm);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(93);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_deg);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_deg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_deg);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(93);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_rad);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_rad);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_rad);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(93);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_em);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_em);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_em);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(93);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_fr);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_fr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_fr);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(93);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__not_an_escape_sequence);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(197);
      if (lookahead == 'u') ADVANCE(46);
      if (lookahead == 'x') ADVANCE(54);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(213);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_not);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(93);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_and);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(93);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_or);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(93);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 58, .external_lex_state = 2},
  [2] = {.lex_state = 55, .external_lex_state = 2},
  [3] = {.lex_state = 55, .external_lex_state = 2},
  [4] = {.lex_state = 56, .external_lex_state = 2},
  [5] = {.lex_state = 56, .external_lex_state = 2},
  [6] = {.lex_state = 56, .external_lex_state = 2},
  [7] = {.lex_state = 56, .external_lex_state = 2},
  [8] = {.lex_state = 2, .external_lex_state = 2},
  [9] = {.lex_state = 7, .external_lex_state = 2},
  [10] = {.lex_state = 7, .external_lex_state = 2},
  [11] = {.lex_state = 7, .external_lex_state = 2},
  [12] = {.lex_state = 7, .external_lex_state = 2},
  [13] = {.lex_state = 7, .external_lex_state = 2},
  [14] = {.lex_state = 7, .external_lex_state = 2},
  [15] = {.lex_state = 7, .external_lex_state = 2},
  [16] = {.lex_state = 7, .external_lex_state = 2},
  [17] = {.lex_state = 7, .external_lex_state = 2},
  [18] = {.lex_state = 7, .external_lex_state = 2},
  [19] = {.lex_state = 3, .external_lex_state = 2},
  [20] = {.lex_state = 57, .external_lex_state = 2},
  [21] = {.lex_state = 7, .external_lex_state = 2},
  [22] = {.lex_state = 7, .external_lex_state = 2},
  [23] = {.lex_state = 57, .external_lex_state = 2},
  [24] = {.lex_state = 57, .external_lex_state = 2},
  [25] = {.lex_state = 57, .external_lex_state = 2},
  [26] = {.lex_state = 57, .external_lex_state = 2},
  [27] = {.lex_state = 57, .external_lex_state = 2},
  [28] = {.lex_state = 57, .external_lex_state = 2},
  [29] = {.lex_state = 57, .external_lex_state = 2},
  [30] = {.lex_state = 57, .external_lex_state = 2},
  [31] = {.lex_state = 57, .external_lex_state = 2},
  [32] = {.lex_state = 57, .external_lex_state = 2},
  [33] = {.lex_state = 57, .external_lex_state = 2},
  [34] = {.lex_state = 57, .external_lex_state = 2},
  [35] = {.lex_state = 57, .external_lex_state = 2},
  [36] = {.lex_state = 57, .external_lex_state = 2},
  [37] = {.lex_state = 57, .external_lex_state = 2},
  [38] = {.lex_state = 57, .external_lex_state = 2},
  [39] = {.lex_state = 57, .external_lex_state = 2},
  [40] = {.lex_state = 57, .external_lex_state = 2},
  [41] = {.lex_state = 57, .external_lex_state = 2},
  [42] = {.lex_state = 57, .external_lex_state = 2},
  [43] = {.lex_state = 57, .external_lex_state = 2},
  [44] = {.lex_state = 57, .external_lex_state = 2},
  [45] = {.lex_state = 57, .external_lex_state = 2},
  [46] = {.lex_state = 57, .external_lex_state = 2},
  [47] = {.lex_state = 57, .external_lex_state = 2},
  [48] = {.lex_state = 57, .external_lex_state = 2},
  [49] = {.lex_state = 57, .external_lex_state = 2},
  [50] = {.lex_state = 57, .external_lex_state = 2},
  [51] = {.lex_state = 57, .external_lex_state = 2},
  [52] = {.lex_state = 57, .external_lex_state = 2},
  [53] = {.lex_state = 57, .external_lex_state = 2},
  [54] = {.lex_state = 57, .external_lex_state = 2},
  [55] = {.lex_state = 57, .external_lex_state = 2},
  [56] = {.lex_state = 57, .external_lex_state = 2},
  [57] = {.lex_state = 57, .external_lex_state = 2},
  [58] = {.lex_state = 57, .external_lex_state = 2},
  [59] = {.lex_state = 57, .external_lex_state = 2},
  [60] = {.lex_state = 57, .external_lex_state = 2},
  [61] = {.lex_state = 57, .external_lex_state = 2},
  [62] = {.lex_state = 57, .external_lex_state = 2},
  [63] = {.lex_state = 57, .external_lex_state = 2},
  [64] = {.lex_state = 57, .external_lex_state = 2},
  [65] = {.lex_state = 57, .external_lex_state = 2},
  [66] = {.lex_state = 7, .external_lex_state = 2},
  [67] = {.lex_state = 7, .external_lex_state = 2},
  [68] = {.lex_state = 57, .external_lex_state = 2},
  [69] = {.lex_state = 57, .external_lex_state = 2},
  [70] = {.lex_state = 57, .external_lex_state = 2},
  [71] = {.lex_state = 57, .external_lex_state = 2},
  [72] = {.lex_state = 57, .external_lex_state = 2},
  [73] = {.lex_state = 57, .external_lex_state = 2},
  [74] = {.lex_state = 58, .external_lex_state = 2},
  [75] = {.lex_state = 58, .external_lex_state = 2},
  [76] = {.lex_state = 58, .external_lex_state = 2},
  [77] = {.lex_state = 58, .external_lex_state = 2},
  [78] = {.lex_state = 58, .external_lex_state = 2},
  [79] = {.lex_state = 58, .external_lex_state = 2},
  [80] = {.lex_state = 58, .external_lex_state = 2},
  [81] = {.lex_state = 58, .external_lex_state = 2},
  [82] = {.lex_state = 58, .external_lex_state = 2},
  [83] = {.lex_state = 58, .external_lex_state = 2},
  [84] = {.lex_state = 58, .external_lex_state = 2},
  [85] = {.lex_state = 58, .external_lex_state = 2},
  [86] = {.lex_state = 58, .external_lex_state = 2},
  [87] = {.lex_state = 58, .external_lex_state = 2},
  [88] = {.lex_state = 58, .external_lex_state = 2},
  [89] = {.lex_state = 58, .external_lex_state = 2},
  [90] = {.lex_state = 58, .external_lex_state = 2},
  [91] = {.lex_state = 58, .external_lex_state = 2},
  [92] = {.lex_state = 58, .external_lex_state = 2},
  [93] = {.lex_state = 58, .external_lex_state = 2},
  [94] = {.lex_state = 58, .external_lex_state = 2},
  [95] = {.lex_state = 58, .external_lex_state = 2},
  [96] = {.lex_state = 58, .external_lex_state = 2},
  [97] = {.lex_state = 5, .external_lex_state = 2},
  [98] = {.lex_state = 5, .external_lex_state = 2},
  [99] = {.lex_state = 5, .external_lex_state = 2},
  [100] = {.lex_state = 5, .external_lex_state = 2},
  [101] = {.lex_state = 4, .external_lex_state = 2},
  [102] = {.lex_state = 5, .external_lex_state = 2},
  [103] = {.lex_state = 4, .external_lex_state = 2},
  [104] = {.lex_state = 4, .external_lex_state = 2},
  [105] = {.lex_state = 4, .external_lex_state = 2},
  [106] = {.lex_state = 4, .external_lex_state = 2},
  [107] = {.lex_state = 4, .external_lex_state = 2},
  [108] = {.lex_state = 4, .external_lex_state = 2},
  [109] = {.lex_state = 4, .external_lex_state = 2},
  [110] = {.lex_state = 4, .external_lex_state = 2},
  [111] = {.lex_state = 5, .external_lex_state = 2},
  [112] = {.lex_state = 4, .external_lex_state = 2},
  [113] = {.lex_state = 4, .external_lex_state = 2},
  [114] = {.lex_state = 5, .external_lex_state = 2},
  [115] = {.lex_state = 4, .external_lex_state = 2},
  [116] = {.lex_state = 4, .external_lex_state = 2},
  [117] = {.lex_state = 4, .external_lex_state = 2},
  [118] = {.lex_state = 4, .external_lex_state = 2},
  [119] = {.lex_state = 4, .external_lex_state = 2},
  [120] = {.lex_state = 4, .external_lex_state = 2},
  [121] = {.lex_state = 4, .external_lex_state = 2},
  [122] = {.lex_state = 4, .external_lex_state = 2},
  [123] = {.lex_state = 4, .external_lex_state = 2},
  [124] = {.lex_state = 4, .external_lex_state = 2},
  [125] = {.lex_state = 4, .external_lex_state = 2},
  [126] = {.lex_state = 4, .external_lex_state = 2},
  [127] = {.lex_state = 5, .external_lex_state = 2},
  [128] = {.lex_state = 1, .external_lex_state = 2},
  [129] = {.lex_state = 5, .external_lex_state = 2},
  [130] = {.lex_state = 5, .external_lex_state = 2},
  [131] = {.lex_state = 5, .external_lex_state = 2},
  [132] = {.lex_state = 5, .external_lex_state = 2},
  [133] = {.lex_state = 5, .external_lex_state = 2},
  [134] = {.lex_state = 5, .external_lex_state = 2},
  [135] = {.lex_state = 5, .external_lex_state = 2},
  [136] = {.lex_state = 5, .external_lex_state = 2},
  [137] = {.lex_state = 5, .external_lex_state = 2},
  [138] = {.lex_state = 5, .external_lex_state = 2},
  [139] = {.lex_state = 5, .external_lex_state = 2},
  [140] = {.lex_state = 5, .external_lex_state = 2},
  [141] = {.lex_state = 5, .external_lex_state = 2},
  [142] = {.lex_state = 5, .external_lex_state = 2},
  [143] = {.lex_state = 5, .external_lex_state = 2},
  [144] = {.lex_state = 5, .external_lex_state = 2},
  [145] = {.lex_state = 5, .external_lex_state = 2},
  [146] = {.lex_state = 5, .external_lex_state = 2},
  [147] = {.lex_state = 5, .external_lex_state = 2},
  [148] = {.lex_state = 5, .external_lex_state = 2},
  [149] = {.lex_state = 5, .external_lex_state = 2},
  [150] = {.lex_state = 5, .external_lex_state = 2},
  [151] = {.lex_state = 5, .external_lex_state = 2},
  [152] = {.lex_state = 5, .external_lex_state = 2},
  [153] = {.lex_state = 5, .external_lex_state = 2},
  [154] = {.lex_state = 5, .external_lex_state = 2},
  [155] = {.lex_state = 5, .external_lex_state = 2},
  [156] = {.lex_state = 5, .external_lex_state = 2},
  [157] = {.lex_state = 5, .external_lex_state = 2},
  [158] = {.lex_state = 5, .external_lex_state = 2},
  [159] = {.lex_state = 5, .external_lex_state = 2},
  [160] = {.lex_state = 5, .external_lex_state = 2},
  [161] = {.lex_state = 59, .external_lex_state = 2},
  [162] = {.lex_state = 5, .external_lex_state = 2},
  [163] = {.lex_state = 5, .external_lex_state = 2},
  [164] = {.lex_state = 5, .external_lex_state = 2},
  [165] = {.lex_state = 5, .external_lex_state = 2},
  [166] = {.lex_state = 5, .external_lex_state = 2},
  [167] = {.lex_state = 5, .external_lex_state = 2},
  [168] = {.lex_state = 5, .external_lex_state = 2},
  [169] = {.lex_state = 5, .external_lex_state = 2},
  [170] = {.lex_state = 5, .external_lex_state = 2},
  [171] = {.lex_state = 5, .external_lex_state = 2},
  [172] = {.lex_state = 59, .external_lex_state = 2},
  [173] = {.lex_state = 5, .external_lex_state = 2},
  [174] = {.lex_state = 5, .external_lex_state = 2},
  [175] = {.lex_state = 5, .external_lex_state = 2},
  [176] = {.lex_state = 5, .external_lex_state = 2},
  [177] = {.lex_state = 58, .external_lex_state = 2},
  [178] = {.lex_state = 59, .external_lex_state = 2},
  [179] = {.lex_state = 59, .external_lex_state = 2},
  [180] = {.lex_state = 59, .external_lex_state = 2},
  [181] = {.lex_state = 59, .external_lex_state = 2},
  [182] = {.lex_state = 58, .external_lex_state = 2},
  [183] = {.lex_state = 59, .external_lex_state = 2},
  [184] = {.lex_state = 59, .external_lex_state = 2},
  [185] = {.lex_state = 58, .external_lex_state = 2},
  [186] = {.lex_state = 58, .external_lex_state = 2},
  [187] = {.lex_state = 58, .external_lex_state = 2},
  [188] = {.lex_state = 58, .external_lex_state = 2},
  [189] = {.lex_state = 58, .external_lex_state = 2},
  [190] = {.lex_state = 58, .external_lex_state = 2},
  [191] = {.lex_state = 58, .external_lex_state = 2},
  [192] = {.lex_state = 58, .external_lex_state = 2},
  [193] = {.lex_state = 58, .external_lex_state = 2},
  [194] = {.lex_state = 0, .external_lex_state = 2},
  [195] = {.lex_state = 58, .external_lex_state = 2},
  [196] = {.lex_state = 58, .external_lex_state = 2},
  [197] = {.lex_state = 58, .external_lex_state = 2},
  [198] = {.lex_state = 58, .external_lex_state = 2},
  [199] = {.lex_state = 58, .external_lex_state = 2},
  [200] = {.lex_state = 58, .external_lex_state = 2},
  [201] = {.lex_state = 58, .external_lex_state = 2},
  [202] = {.lex_state = 58, .external_lex_state = 2},
  [203] = {.lex_state = 58, .external_lex_state = 2},
  [204] = {.lex_state = 58, .external_lex_state = 2},
  [205] = {.lex_state = 58, .external_lex_state = 2},
  [206] = {.lex_state = 58, .external_lex_state = 2},
  [207] = {.lex_state = 58, .external_lex_state = 2},
  [208] = {.lex_state = 0, .external_lex_state = 2},
  [209] = {.lex_state = 6, .external_lex_state = 2},
  [210] = {.lex_state = 6, .external_lex_state = 2},
  [211] = {.lex_state = 6, .external_lex_state = 2},
  [212] = {.lex_state = 6, .external_lex_state = 2},
  [213] = {.lex_state = 1, .external_lex_state = 2},
  [214] = {.lex_state = 7, .external_lex_state = 2},
  [215] = {.lex_state = 1, .external_lex_state = 2},
  [216] = {.lex_state = 7, .external_lex_state = 2},
  [217] = {.lex_state = 1, .external_lex_state = 2},
  [218] = {.lex_state = 7, .external_lex_state = 2},
  [219] = {.lex_state = 1, .external_lex_state = 2},
  [220] = {.lex_state = 1, .external_lex_state = 2},
  [221] = {.lex_state = 1, .external_lex_state = 2},
  [222] = {.lex_state = 1, .external_lex_state = 2},
  [223] = {.lex_state = 1, .external_lex_state = 2},
  [224] = {.lex_state = 1, .external_lex_state = 2},
  [225] = {.lex_state = 7, .external_lex_state = 2},
  [226] = {.lex_state = 1, .external_lex_state = 2},
  [227] = {.lex_state = 1, .external_lex_state = 2},
  [228] = {.lex_state = 1, .external_lex_state = 2},
  [229] = {.lex_state = 1, .external_lex_state = 2},
  [230] = {.lex_state = 1, .external_lex_state = 2},
  [231] = {.lex_state = 1, .external_lex_state = 2},
  [232] = {.lex_state = 1, .external_lex_state = 2},
  [233] = {.lex_state = 1, .external_lex_state = 2},
  [234] = {.lex_state = 1, .external_lex_state = 2},
  [235] = {.lex_state = 1, .external_lex_state = 2},
  [236] = {.lex_state = 1, .external_lex_state = 2},
  [237] = {.lex_state = 7, .external_lex_state = 2},
  [238] = {.lex_state = 1, .external_lex_state = 2},
  [239] = {.lex_state = 7, .external_lex_state = 2},
  [240] = {.lex_state = 1, .external_lex_state = 2},
  [241] = {.lex_state = 7, .external_lex_state = 2},
  [242] = {.lex_state = 1, .external_lex_state = 2},
  [243] = {.lex_state = 1, .external_lex_state = 2},
  [244] = {.lex_state = 1, .external_lex_state = 2},
  [245] = {.lex_state = 7, .external_lex_state = 2},
  [246] = {.lex_state = 7, .external_lex_state = 2},
  [247] = {.lex_state = 1, .external_lex_state = 2},
  [248] = {.lex_state = 1, .external_lex_state = 2},
  [249] = {.lex_state = 7, .external_lex_state = 2},
  [250] = {.lex_state = 1, .external_lex_state = 2},
  [251] = {.lex_state = 1, .external_lex_state = 2},
  [252] = {.lex_state = 0, .external_lex_state = 2},
  [253] = {.lex_state = 0, .external_lex_state = 2},
  [254] = {.lex_state = 0, .external_lex_state = 2},
  [255] = {.lex_state = 1, .external_lex_state = 1},
  [256] = {.lex_state = 1, .external_lex_state = 1},
  [257] = {.lex_state = 1, .external_lex_state = 1},
  [258] = {.lex_state = 0, .external_lex_state = 2},
  [259] = {.lex_state = 58, .external_lex_state = 2},
  [260] = {.lex_state = 1, .external_lex_state = 1},
  [261] = {.lex_state = 1, .external_lex_state = 1},
  [262] = {.lex_state = 1, .external_lex_state = 1},
  [263] = {.lex_state = 1, .external_lex_state = 1},
  [264] = {.lex_state = 1, .external_lex_state = 1},
  [265] = {.lex_state = 1, .external_lex_state = 1},
  [266] = {.lex_state = 1, .external_lex_state = 1},
  [267] = {.lex_state = 1, .external_lex_state = 1},
  [268] = {.lex_state = 10, .external_lex_state = 2},
  [269] = {.lex_state = 58, .external_lex_state = 1},
  [270] = {.lex_state = 10, .external_lex_state = 2},
  [271] = {.lex_state = 8, .external_lex_state = 2},
  [272] = {.lex_state = 58, .external_lex_state = 1},
  [273] = {.lex_state = 1, .external_lex_state = 1},
  [274] = {.lex_state = 10, .external_lex_state = 2},
  [275] = {.lex_state = 1, .external_lex_state = 1},
  [276] = {.lex_state = 10, .external_lex_state = 2},
  [277] = {.lex_state = 58, .external_lex_state = 1},
  [278] = {.lex_state = 58, .external_lex_state = 1},
  [279] = {.lex_state = 58, .external_lex_state = 1},
  [280] = {.lex_state = 1, .external_lex_state = 1},
  [281] = {.lex_state = 10, .external_lex_state = 2},
  [282] = {.lex_state = 58, .external_lex_state = 1},
  [283] = {.lex_state = 10, .external_lex_state = 2},
  [284] = {.lex_state = 58, .external_lex_state = 1},
  [285] = {.lex_state = 58, .external_lex_state = 1},
  [286] = {.lex_state = 58, .external_lex_state = 2},
  [287] = {.lex_state = 0, .external_lex_state = 2},
  [288] = {.lex_state = 8, .external_lex_state = 2},
  [289] = {.lex_state = 0, .external_lex_state = 2},
  [290] = {.lex_state = 0, .external_lex_state = 2},
  [291] = {.lex_state = 0, .external_lex_state = 2},
  [292] = {.lex_state = 8, .external_lex_state = 2},
  [293] = {.lex_state = 10, .external_lex_state = 2},
  [294] = {.lex_state = 10, .external_lex_state = 2},
  [295] = {.lex_state = 0, .external_lex_state = 2},
  [296] = {.lex_state = 11, .external_lex_state = 2},
  [297] = {.lex_state = 8, .external_lex_state = 2},
  [298] = {.lex_state = 0, .external_lex_state = 2},
  [299] = {.lex_state = 11, .external_lex_state = 2},
  [300] = {.lex_state = 8, .external_lex_state = 2},
  [301] = {.lex_state = 0, .external_lex_state = 2},
  [302] = {.lex_state = 0, .external_lex_state = 2},
  [303] = {.lex_state = 0, .external_lex_state = 2},
  [304] = {.lex_state = 0, .external_lex_state = 2},
  [305] = {.lex_state = 0, .external_lex_state = 2},
  [306] = {.lex_state = 0, .external_lex_state = 2},
  [307] = {.lex_state = 0, .external_lex_state = 2},
  [308] = {.lex_state = 0, .external_lex_state = 2},
  [309] = {.lex_state = 0, .external_lex_state = 2},
  [310] = {.lex_state = 0, .external_lex_state = 2},
  [311] = {.lex_state = 58, .external_lex_state = 2},
  [312] = {.lex_state = 58, .external_lex_state = 2},
  [313] = {.lex_state = 0, .external_lex_state = 2},
  [314] = {.lex_state = 0, .external_lex_state = 2},
  [315] = {.lex_state = 0, .external_lex_state = 2},
  [316] = {.lex_state = 0, .external_lex_state = 2},
  [317] = {.lex_state = 0, .external_lex_state = 2},
  [318] = {.lex_state = 10, .external_lex_state = 2},
  [319] = {.lex_state = 0, .external_lex_state = 2},
  [320] = {.lex_state = 0, .external_lex_state = 2},
  [321] = {.lex_state = 0, .external_lex_state = 2},
  [322] = {.lex_state = 58, .external_lex_state = 2},
  [323] = {.lex_state = 0, .external_lex_state = 2},
  [324] = {.lex_state = 0, .external_lex_state = 2},
  [325] = {.lex_state = 0, .external_lex_state = 2},
  [326] = {.lex_state = 0, .external_lex_state = 2},
  [327] = {.lex_state = 0, .external_lex_state = 2},
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
    [sym_line_break] = ACTIONS(1),
    [aux_sym_quote_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_none] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_int_literal] = ACTIONS(1),
    [anon_sym_pt] = ACTIONS(1),
    [anon_sym_mm] = ACTIONS(1),
    [anon_sym_cm] = ACTIONS(1),
    [anon_sym_deg] = ACTIONS(1),
    [anon_sym_rad] = ACTIONS(1),
    [anon_sym_em] = ACTIONS(1),
    [anon_sym_fr] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [aux_sym_string_literal_token1] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym__not_an_escape_sequence] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [sym__string_content] = ACTIONS(1),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(323),
    [sym__markup] = STATE(76),
    [sym_quote] = STATE(76),
    [aux_sym__text] = STATE(76),
    [sym__code_mode] = STATE(76),
    [sym_function_call] = STATE(76),
    [sym__code_block] = STATE(76),
    [sym_content_block] = STATE(76),
    [aux_sym_source_file_repeat1] = STATE(76),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__whitespace] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [sym_line_break] = ACTIONS(7),
    [aux_sym_quote_token1] = ACTIONS(9),
    [aux_sym__text_token1] = ACTIONS(7),
    [anon_sym_SLASH] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym__] = ACTIONS(7),
    [anon_sym_BQUOTE] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_EQ] = ACTIONS(11),
    [anon_sym_LT] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(11),
    [anon_sym_SEMI] = ACTIONS(11),
    [anon_sym_QMARK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_POUND] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [sym_escape_sequence] = ACTIONS(11),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(23), 1,
      anon_sym_PERCENT,
    STATE(39), 1,
      sym_unit,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(21), 8,
      anon_sym_in,
      anon_sym_pt,
      anon_sym_mm,
      anon_sym_cm,
      anon_sym_deg,
      anon_sym_rad,
      anon_sym_em,
      anon_sym_fr,
    ACTIONS(17), 11,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(19), 22,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [59] = 6,
    ACTIONS(27), 1,
      anon_sym_PERCENT,
    STATE(46), 1,
      sym_unit,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(25), 8,
      anon_sym_in,
      anon_sym_pt,
      anon_sym_mm,
      anon_sym_cm,
      anon_sym_deg,
      anon_sym_rad,
      anon_sym_em,
      anon_sym_fr,
    ACTIONS(17), 11,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(19), 22,
      ts_builtin_sym_end,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [118] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym_parameters,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(31), 4,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(17), 15,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(19), 19,
      ts_builtin_sym_end,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [174] = 6,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    STATE(57), 1,
      sym_parameters,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(35), 4,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(17), 15,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(19), 19,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [230] = 8,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    STATE(70), 1,
      sym_parameters,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(19), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(31), 4,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(17), 5,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(39), 10,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
    ACTIONS(37), 14,
      ts_builtin_sym_end,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
  [289] = 8,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    STATE(71), 1,
      sym_parameters,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(19), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(35), 4,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(17), 5,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(39), 10,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
    ACTIONS(37), 14,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
  [348] = 6,
    ACTIONS(43), 1,
      anon_sym_PERCENT,
    STATE(126), 1,
      sym_unit,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(41), 8,
      anon_sym_in,
      anon_sym_pt,
      anon_sym_mm,
      anon_sym_cm,
      anon_sym_deg,
      anon_sym_rad,
      anon_sym_em,
      anon_sym_fr,
    ACTIONS(17), 14,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(19), 14,
      aux_sym_quote_token1,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [402] = 22,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      aux_sym_quote_token1,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_for,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(63), 1,
      sym_none,
    ACTIONS(67), 1,
      sym_int_literal,
    ACTIONS(69), 1,
      sym_float_literal,
    ACTIONS(71), 1,
      aux_sym_string_literal_token1,
    ACTIONS(73), 1,
      anon_sym_not,
    STATE(22), 1,
      aux_sym__statements_repeat1,
    STATE(112), 1,
      sym_expression,
    STATE(216), 1,
      sym_expression_statement,
    STATE(316), 1,
      sym__statements,
    ACTIONS(49), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(218), 3,
      sym_let_declaration,
      sym_if_expression,
      sym_for_expression,
    STATE(123), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [486] = 22,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      aux_sym_quote_token1,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_for,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      sym_none,
    ACTIONS(67), 1,
      sym_int_literal,
    ACTIONS(69), 1,
      sym_float_literal,
    ACTIONS(71), 1,
      aux_sym_string_literal_token1,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      aux_sym__statements_repeat1,
    STATE(112), 1,
      sym_expression,
    STATE(216), 1,
      sym_expression_statement,
    STATE(304), 1,
      sym__statements,
    ACTIONS(49), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(218), 3,
      sym_let_declaration,
      sym_if_expression,
      sym_for_expression,
    STATE(123), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [570] = 22,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      aux_sym_quote_token1,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_for,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      sym_none,
    ACTIONS(67), 1,
      sym_int_literal,
    ACTIONS(69), 1,
      sym_float_literal,
    ACTIONS(71), 1,
      aux_sym_string_literal_token1,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      aux_sym__statements_repeat1,
    STATE(112), 1,
      sym_expression,
    STATE(216), 1,
      sym_expression_statement,
    STATE(305), 1,
      sym__statements,
    ACTIONS(49), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(218), 3,
      sym_let_declaration,
      sym_if_expression,
      sym_for_expression,
    STATE(123), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [654] = 22,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      aux_sym_quote_token1,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_for,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      sym_none,
    ACTIONS(67), 1,
      sym_int_literal,
    ACTIONS(69), 1,
      sym_float_literal,
    ACTIONS(71), 1,
      aux_sym_string_literal_token1,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      aux_sym__statements_repeat1,
    STATE(112), 1,
      sym_expression,
    STATE(216), 1,
      sym_expression_statement,
    STATE(303), 1,
      sym__statements,
    ACTIONS(49), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(218), 3,
      sym_let_declaration,
      sym_if_expression,
      sym_for_expression,
    STATE(123), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [738] = 22,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      aux_sym_quote_token1,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_for,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      sym_none,
    ACTIONS(67), 1,
      sym_int_literal,
    ACTIONS(69), 1,
      sym_float_literal,
    ACTIONS(71), 1,
      aux_sym_string_literal_token1,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      aux_sym__statements_repeat1,
    STATE(112), 1,
      sym_expression,
    STATE(216), 1,
      sym_expression_statement,
    STATE(327), 1,
      sym__statements,
    ACTIONS(49), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(218), 3,
      sym_let_declaration,
      sym_if_expression,
      sym_for_expression,
    STATE(123), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [822] = 22,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      aux_sym_quote_token1,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_for,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      sym_none,
    ACTIONS(67), 1,
      sym_int_literal,
    ACTIONS(69), 1,
      sym_float_literal,
    ACTIONS(71), 1,
      aux_sym_string_literal_token1,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      aux_sym__statements_repeat1,
    STATE(112), 1,
      sym_expression,
    STATE(216), 1,
      sym_expression_statement,
    STATE(315), 1,
      sym__statements,
    ACTIONS(49), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(218), 3,
      sym_let_declaration,
      sym_if_expression,
      sym_for_expression,
    STATE(123), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [906] = 22,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      aux_sym_quote_token1,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_for,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      sym_none,
    ACTIONS(67), 1,
      sym_int_literal,
    ACTIONS(69), 1,
      sym_float_literal,
    ACTIONS(71), 1,
      aux_sym_string_literal_token1,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      aux_sym__statements_repeat1,
    STATE(112), 1,
      sym_expression,
    STATE(216), 1,
      sym_expression_statement,
    STATE(314), 1,
      sym__statements,
    ACTIONS(49), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(218), 3,
      sym_let_declaration,
      sym_if_expression,
      sym_for_expression,
    STATE(123), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [990] = 22,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      aux_sym_quote_token1,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_for,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      sym_none,
    ACTIONS(67), 1,
      sym_int_literal,
    ACTIONS(69), 1,
      sym_float_literal,
    ACTIONS(71), 1,
      aux_sym_string_literal_token1,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      aux_sym__statements_repeat1,
    STATE(112), 1,
      sym_expression,
    STATE(216), 1,
      sym_expression_statement,
    STATE(308), 1,
      sym__statements,
    ACTIONS(49), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(218), 3,
      sym_let_declaration,
      sym_if_expression,
      sym_for_expression,
    STATE(123), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [1074] = 22,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      aux_sym_quote_token1,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_for,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      sym_none,
    ACTIONS(67), 1,
      sym_int_literal,
    ACTIONS(69), 1,
      sym_float_literal,
    ACTIONS(71), 1,
      aux_sym_string_literal_token1,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      aux_sym__statements_repeat1,
    STATE(112), 1,
      sym_expression,
    STATE(216), 1,
      sym_expression_statement,
    STATE(309), 1,
      sym__statements,
    ACTIONS(49), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(218), 3,
      sym_let_declaration,
      sym_if_expression,
      sym_for_expression,
    STATE(123), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [1158] = 22,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      aux_sym_quote_token1,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_for,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      sym_none,
    ACTIONS(67), 1,
      sym_int_literal,
    ACTIONS(69), 1,
      sym_float_literal,
    ACTIONS(71), 1,
      aux_sym_string_literal_token1,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      aux_sym__statements_repeat1,
    STATE(112), 1,
      sym_expression,
    STATE(216), 1,
      sym_expression_statement,
    STATE(306), 1,
      sym__statements,
    ACTIONS(49), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(218), 3,
      sym_let_declaration,
      sym_if_expression,
      sym_for_expression,
    STATE(123), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [1242] = 6,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    STATE(108), 1,
      sym_parameters,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(95), 4,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(19), 11,
      aux_sym_quote_token1,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(17), 18,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [1293] = 13,
    ACTIONS(101), 1,
      anon_sym_SLASH,
    ACTIONS(105), 1,
      anon_sym_STAR,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      anon_sym_not,
    ACTIONS(113), 1,
      anon_sym_and,
    ACTIONS(115), 1,
      anon_sym_or,
    STATE(189), 1,
      sym_block,
    ACTIONS(103), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(107), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(117), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(97), 5,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_BANG,
    ACTIONS(99), 14,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
  [1358] = 21,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(122), 1,
      aux_sym_quote_token1,
    ACTIONS(128), 1,
      anon_sym_LBRACK,
    ACTIONS(131), 1,
      anon_sym_let,
    ACTIONS(134), 1,
      anon_sym_if,
    ACTIONS(137), 1,
      anon_sym_for,
    ACTIONS(140), 1,
      anon_sym_LBRACE,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    ACTIONS(145), 1,
      sym_none,
    ACTIONS(151), 1,
      sym_int_literal,
    ACTIONS(154), 1,
      sym_float_literal,
    ACTIONS(157), 1,
      aux_sym_string_literal_token1,
    ACTIONS(160), 1,
      anon_sym_not,
    STATE(21), 1,
      aux_sym__statements_repeat1,
    STATE(112), 1,
      sym_expression,
    STATE(216), 1,
      sym_expression_statement,
    ACTIONS(125), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(148), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(218), 3,
      sym_let_declaration,
      sym_if_expression,
      sym_for_expression,
    STATE(123), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [1439] = 21,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      aux_sym_quote_token1,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_for,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      sym_none,
    ACTIONS(67), 1,
      sym_int_literal,
    ACTIONS(69), 1,
      sym_float_literal,
    ACTIONS(71), 1,
      aux_sym_string_literal_token1,
    ACTIONS(73), 1,
      anon_sym_not,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      aux_sym__statements_repeat1,
    STATE(112), 1,
      sym_expression,
    STATE(216), 1,
      sym_expression_statement,
    ACTIONS(49), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(218), 3,
      sym_let_declaration,
      sym_if_expression,
      sym_for_expression,
    STATE(123), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [1520] = 13,
    ACTIONS(165), 1,
      anon_sym_SLASH,
    ACTIONS(169), 1,
      anon_sym_STAR,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 1,
      anon_sym_not,
    ACTIONS(177), 1,
      anon_sym_and,
    ACTIONS(179), 1,
      anon_sym_or,
    STATE(202), 1,
      sym_block,
    ACTIONS(167), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(171), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(181), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(97), 5,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_BANG,
    ACTIONS(99), 14,
      ts_builtin_sym_end,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
  [1585] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(183), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(185), 22,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1629] = 9,
    ACTIONS(165), 1,
      anon_sym_SLASH,
    ACTIONS(169), 1,
      anon_sym_STAR,
    ACTIONS(175), 1,
      anon_sym_not,
    ACTIONS(167), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(171), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(181), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(189), 7,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(187), 15,
      ts_builtin_sym_end,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_escape_sequence,
  [1685] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(191), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(193), 22,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1729] = 5,
    ACTIONS(165), 1,
      anon_sym_SLASH,
    ACTIONS(169), 1,
      anon_sym_STAR,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(197), 11,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(195), 21,
      ts_builtin_sym_end,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1777] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(197), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(195), 22,
      ts_builtin_sym_end,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1821] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(201), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(199), 22,
      ts_builtin_sym_end,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1865] = 6,
    ACTIONS(165), 1,
      anon_sym_SLASH,
    ACTIONS(169), 1,
      anon_sym_STAR,
    ACTIONS(167), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(205), 11,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(203), 19,
      ts_builtin_sym_end,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1915] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(183), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(185), 22,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1959] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(207), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(209), 22,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2003] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(211), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(213), 22,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2047] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(191), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(193), 22,
      ts_builtin_sym_end,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2091] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(215), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(217), 22,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2135] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(221), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(219), 22,
      ts_builtin_sym_end,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2179] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(183), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(185), 22,
      ts_builtin_sym_end,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2223] = 6,
    ACTIONS(165), 1,
      anon_sym_SLASH,
    ACTIONS(169), 1,
      anon_sym_STAR,
    ACTIONS(167), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(225), 11,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(223), 19,
      ts_builtin_sym_end,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2273] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(227), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(229), 22,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2317] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(233), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(231), 22,
      ts_builtin_sym_end,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2361] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(207), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(209), 22,
      ts_builtin_sym_end,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2405] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(221), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(219), 22,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2449] = 10,
    ACTIONS(165), 1,
      anon_sym_SLASH,
    ACTIONS(169), 1,
      anon_sym_STAR,
    ACTIONS(175), 1,
      anon_sym_not,
    ACTIONS(177), 1,
      anon_sym_and,
    ACTIONS(167), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(171), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(181), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(189), 6,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_or,
    ACTIONS(187), 15,
      ts_builtin_sym_end,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_escape_sequence,
  [2507] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(17), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(19), 22,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2551] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(215), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(217), 22,
      ts_builtin_sym_end,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2595] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(227), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(229), 22,
      ts_builtin_sym_end,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2639] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(237), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(235), 22,
      ts_builtin_sym_end,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2683] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(183), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(185), 22,
      ts_builtin_sym_end,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2727] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(197), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(195), 22,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2771] = 11,
    ACTIONS(101), 1,
      anon_sym_SLASH,
    ACTIONS(105), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_not,
    ACTIONS(113), 1,
      anon_sym_and,
    ACTIONS(115), 1,
      anon_sym_or,
    ACTIONS(103), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(107), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(117), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(239), 5,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_BANG,
    ACTIONS(241), 15,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      sym_escape_sequence,
  [2831] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(17), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(19), 22,
      ts_builtin_sym_end,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2875] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(237), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(235), 22,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2919] = 5,
    ACTIONS(101), 1,
      anon_sym_SLASH,
    ACTIONS(105), 1,
      anon_sym_STAR,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(197), 11,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(195), 21,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2967] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(201), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(199), 22,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3011] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(245), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(243), 22,
      ts_builtin_sym_end,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3055] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(233), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(231), 22,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3099] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(247), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(249), 22,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3143] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(245), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(243), 22,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3187] = 6,
    ACTIONS(101), 1,
      anon_sym_SLASH,
    ACTIONS(105), 1,
      anon_sym_STAR,
    ACTIONS(103), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(205), 11,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(203), 19,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3237] = 11,
    ACTIONS(165), 1,
      anon_sym_SLASH,
    ACTIONS(169), 1,
      anon_sym_STAR,
    ACTIONS(175), 1,
      anon_sym_not,
    ACTIONS(177), 1,
      anon_sym_and,
    ACTIONS(179), 1,
      anon_sym_or,
    ACTIONS(167), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(171), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(181), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(239), 5,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_BANG,
    ACTIONS(241), 15,
      ts_builtin_sym_end,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_escape_sequence,
  [3297] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(211), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(213), 22,
      ts_builtin_sym_end,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3341] = 10,
    ACTIONS(101), 1,
      anon_sym_SLASH,
    ACTIONS(105), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_not,
    ACTIONS(113), 1,
      anon_sym_and,
    ACTIONS(103), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(107), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(117), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(189), 6,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_or,
    ACTIONS(187), 15,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      sym_escape_sequence,
  [3399] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(247), 12,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(249), 22,
      ts_builtin_sym_end,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3443] = 9,
    ACTIONS(101), 1,
      anon_sym_SLASH,
    ACTIONS(105), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_not,
    ACTIONS(103), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(107), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(117), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(189), 7,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(187), 15,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      sym_escape_sequence,
  [3499] = 6,
    ACTIONS(101), 1,
      anon_sym_SLASH,
    ACTIONS(105), 1,
      anon_sym_STAR,
    ACTIONS(103), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(225), 11,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(223), 19,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3549] = 20,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      aux_sym_quote_token1,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    ACTIONS(259), 1,
      anon_sym_let,
    ACTIONS(261), 1,
      anon_sym_if,
    ACTIONS(263), 1,
      anon_sym_for,
    ACTIONS(265), 1,
      anon_sym_LBRACE,
    ACTIONS(267), 1,
      sym_none,
    ACTIONS(271), 1,
      sym_int_literal,
    ACTIONS(273), 1,
      sym_float_literal,
    ACTIONS(275), 1,
      aux_sym_string_literal_token1,
    ACTIONS(277), 1,
      anon_sym_not,
    STATE(68), 1,
      sym_expression,
    STATE(69), 1,
      sym_block,
    STATE(207), 1,
      sym_expression_statement,
    ACTIONS(255), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(269), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(200), 3,
      sym_let_declaration,
      sym_if_expression,
      sym_for_expression,
    STATE(44), 11,
      sym_content_block,
      sym_function,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [3626] = 20,
    ACTIONS(279), 1,
      sym_identifier,
    ACTIONS(281), 1,
      aux_sym_quote_token1,
    ACTIONS(285), 1,
      anon_sym_LBRACK,
    ACTIONS(287), 1,
      anon_sym_let,
    ACTIONS(289), 1,
      anon_sym_if,
    ACTIONS(291), 1,
      anon_sym_for,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      sym_none,
    ACTIONS(299), 1,
      sym_int_literal,
    ACTIONS(301), 1,
      sym_float_literal,
    ACTIONS(303), 1,
      aux_sym_string_literal_token1,
    ACTIONS(305), 1,
      anon_sym_not,
    STATE(72), 1,
      sym_block,
    STATE(73), 1,
      sym_expression,
    STATE(206), 1,
      sym_expression_statement,
    ACTIONS(283), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(297), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(205), 3,
      sym_let_declaration,
      sym_if_expression,
      sym_for_expression,
    STATE(51), 11,
      sym_content_block,
      sym_function,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [3703] = 11,
    ACTIONS(101), 1,
      anon_sym_SLASH,
    ACTIONS(105), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_not,
    ACTIONS(113), 1,
      anon_sym_and,
    ACTIONS(115), 1,
      anon_sym_or,
    ACTIONS(103), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(107), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(117), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(307), 5,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_BANG,
    ACTIONS(309), 14,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
  [3762] = 5,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(17), 4,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(19), 5,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(311), 8,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
    ACTIONS(313), 16,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
  [3809] = 5,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(247), 4,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(249), 5,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(317), 8,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
    ACTIONS(315), 16,
      ts_builtin_sym_end,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
  [3856] = 5,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(247), 4,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(249), 5,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(317), 8,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
    ACTIONS(315), 16,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
  [3903] = 5,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(17), 4,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(19), 5,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(311), 8,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
    ACTIONS(313), 16,
      ts_builtin_sym_end,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
  [3950] = 11,
    ACTIONS(165), 1,
      anon_sym_SLASH,
    ACTIONS(169), 1,
      anon_sym_STAR,
    ACTIONS(175), 1,
      anon_sym_not,
    ACTIONS(177), 1,
      anon_sym_and,
    ACTIONS(179), 1,
      anon_sym_or,
    ACTIONS(167), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(171), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(181), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(307), 5,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_BANG,
    ACTIONS(309), 14,
      ts_builtin_sym_end,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
  [4009] = 8,
    ACTIONS(321), 1,
      aux_sym_quote_token1,
    ACTIONS(325), 1,
      anon_sym_POUND,
    ACTIONS(327), 1,
      anon_sym_LBRACK,
    ACTIONS(329), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(319), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(77), 8,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym_function_call,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(323), 16,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym_escape_sequence,
  [4061] = 8,
    ACTIONS(321), 1,
      aux_sym_quote_token1,
    ACTIONS(325), 1,
      anon_sym_POUND,
    ACTIONS(327), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(319), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(77), 8,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym_function_call,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(323), 16,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym_escape_sequence,
  [4113] = 8,
    ACTIONS(9), 1,
      aux_sym_quote_token1,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(333), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(335), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(85), 8,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym_function_call,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(337), 16,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym_escape_sequence,
  [4165] = 8,
    ACTIONS(342), 1,
      aux_sym_quote_token1,
    ACTIONS(348), 1,
      anon_sym_POUND,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    ACTIONS(354), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(339), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(77), 8,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym_function_call,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(345), 16,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym_escape_sequence,
  [4217] = 8,
    ACTIONS(321), 1,
      aux_sym_quote_token1,
    ACTIONS(325), 1,
      anon_sym_POUND,
    ACTIONS(327), 1,
      anon_sym_LBRACK,
    ACTIONS(356), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(319), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(77), 8,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym_function_call,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(323), 16,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym_escape_sequence,
  [4269] = 8,
    ACTIONS(321), 1,
      aux_sym_quote_token1,
    ACTIONS(325), 1,
      anon_sym_POUND,
    ACTIONS(327), 1,
      anon_sym_LBRACK,
    ACTIONS(358), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(319), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(77), 8,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym_function_call,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(323), 16,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym_escape_sequence,
  [4321] = 8,
    ACTIONS(321), 1,
      aux_sym_quote_token1,
    ACTIONS(325), 1,
      anon_sym_POUND,
    ACTIONS(327), 1,
      anon_sym_LBRACK,
    ACTIONS(360), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(319), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(77), 8,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym_function_call,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(323), 16,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym_escape_sequence,
  [4373] = 8,
    ACTIONS(321), 1,
      aux_sym_quote_token1,
    ACTIONS(325), 1,
      anon_sym_POUND,
    ACTIONS(327), 1,
      anon_sym_LBRACK,
    ACTIONS(362), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(319), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(77), 8,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym_function_call,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(323), 16,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym_escape_sequence,
  [4425] = 8,
    ACTIONS(321), 1,
      aux_sym_quote_token1,
    ACTIONS(325), 1,
      anon_sym_POUND,
    ACTIONS(327), 1,
      anon_sym_LBRACK,
    ACTIONS(364), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(319), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(77), 8,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym_function_call,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(323), 16,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym_escape_sequence,
  [4477] = 8,
    ACTIONS(321), 1,
      aux_sym_quote_token1,
    ACTIONS(325), 1,
      anon_sym_POUND,
    ACTIONS(327), 1,
      anon_sym_LBRACK,
    ACTIONS(366), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(319), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(77), 8,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym_function_call,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(323), 16,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym_escape_sequence,
  [4529] = 8,
    ACTIONS(321), 1,
      aux_sym_quote_token1,
    ACTIONS(325), 1,
      anon_sym_POUND,
    ACTIONS(327), 1,
      anon_sym_LBRACK,
    ACTIONS(368), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(319), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(77), 8,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym_function_call,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(323), 16,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym_escape_sequence,
  [4581] = 8,
    ACTIONS(354), 1,
      ts_builtin_sym_end,
    ACTIONS(373), 1,
      aux_sym_quote_token1,
    ACTIONS(379), 1,
      anon_sym_POUND,
    ACTIONS(382), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(370), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(85), 8,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym_function_call,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(376), 16,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym_escape_sequence,
  [4633] = 8,
    ACTIONS(321), 1,
      aux_sym_quote_token1,
    ACTIONS(325), 1,
      anon_sym_POUND,
    ACTIONS(327), 1,
      anon_sym_LBRACK,
    ACTIONS(385), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(319), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(77), 8,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym_function_call,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(323), 16,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym_escape_sequence,
  [4685] = 7,
    ACTIONS(321), 1,
      aux_sym_quote_token1,
    ACTIONS(325), 1,
      anon_sym_POUND,
    ACTIONS(327), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(387), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(81), 8,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym_function_call,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(389), 16,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym_escape_sequence,
  [4734] = 7,
    ACTIONS(321), 1,
      aux_sym_quote_token1,
    ACTIONS(325), 1,
      anon_sym_POUND,
    ACTIONS(327), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(391), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(78), 8,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym_function_call,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(393), 16,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym_escape_sequence,
  [4783] = 7,
    ACTIONS(321), 1,
      aux_sym_quote_token1,
    ACTIONS(325), 1,
      anon_sym_POUND,
    ACTIONS(327), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(395), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(80), 8,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym_function_call,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(397), 16,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym_escape_sequence,
  [4832] = 7,
    ACTIONS(321), 1,
      aux_sym_quote_token1,
    ACTIONS(325), 1,
      anon_sym_POUND,
    ACTIONS(327), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(399), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(82), 8,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym_function_call,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(401), 16,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym_escape_sequence,
  [4881] = 7,
    ACTIONS(321), 1,
      aux_sym_quote_token1,
    ACTIONS(325), 1,
      anon_sym_POUND,
    ACTIONS(327), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(403), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(84), 8,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym_function_call,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(405), 16,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym_escape_sequence,
  [4930] = 7,
    ACTIONS(321), 1,
      aux_sym_quote_token1,
    ACTIONS(325), 1,
      anon_sym_POUND,
    ACTIONS(327), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(407), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(86), 8,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym_function_call,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(409), 16,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym_escape_sequence,
  [4979] = 7,
    ACTIONS(321), 1,
      aux_sym_quote_token1,
    ACTIONS(325), 1,
      anon_sym_POUND,
    ACTIONS(327), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(411), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(83), 8,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym_function_call,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(413), 16,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym_escape_sequence,
  [5028] = 7,
    ACTIONS(321), 1,
      aux_sym_quote_token1,
    ACTIONS(325), 1,
      anon_sym_POUND,
    ACTIONS(327), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(415), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(79), 8,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym_function_call,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(417), 16,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym_escape_sequence,
  [5077] = 7,
    ACTIONS(321), 1,
      aux_sym_quote_token1,
    ACTIONS(325), 1,
      anon_sym_POUND,
    ACTIONS(327), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(419), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(75), 8,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym_function_call,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(421), 16,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym_escape_sequence,
  [5126] = 7,
    ACTIONS(321), 1,
      aux_sym_quote_token1,
    ACTIONS(325), 1,
      anon_sym_POUND,
    ACTIONS(327), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(423), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(74), 8,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym_function_call,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(425), 16,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      sym_escape_sequence,
  [5175] = 18,
    ACTIONS(427), 1,
      sym_identifier,
    ACTIONS(429), 1,
      aux_sym_quote_token1,
    ACTIONS(433), 1,
      anon_sym_LBRACK,
    ACTIONS(435), 1,
      anon_sym_RPAREN,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    ACTIONS(439), 1,
      sym_none,
    ACTIONS(443), 1,
      sym_int_literal,
    ACTIONS(445), 1,
      sym_float_literal,
    ACTIONS(447), 1,
      aux_sym_string_literal_token1,
    ACTIONS(449), 1,
      anon_sym_not,
    STATE(251), 1,
      sym_expression,
    STATE(290), 1,
      sym_parameter,
    STATE(295), 1,
      sym_default_parameter,
    STATE(319), 1,
      sym__parameters,
    ACTIONS(431), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(441), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(226), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [5245] = 18,
    ACTIONS(427), 1,
      sym_identifier,
    ACTIONS(429), 1,
      aux_sym_quote_token1,
    ACTIONS(433), 1,
      anon_sym_LBRACK,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    ACTIONS(439), 1,
      sym_none,
    ACTIONS(443), 1,
      sym_int_literal,
    ACTIONS(445), 1,
      sym_float_literal,
    ACTIONS(447), 1,
      aux_sym_string_literal_token1,
    ACTIONS(449), 1,
      anon_sym_not,
    ACTIONS(451), 1,
      anon_sym_RPAREN,
    STATE(251), 1,
      sym_expression,
    STATE(290), 1,
      sym_parameter,
    STATE(295), 1,
      sym_default_parameter,
    STATE(302), 1,
      sym__parameters,
    ACTIONS(431), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(441), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(226), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [5315] = 18,
    ACTIONS(427), 1,
      sym_identifier,
    ACTIONS(429), 1,
      aux_sym_quote_token1,
    ACTIONS(433), 1,
      anon_sym_LBRACK,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    ACTIONS(439), 1,
      sym_none,
    ACTIONS(443), 1,
      sym_int_literal,
    ACTIONS(445), 1,
      sym_float_literal,
    ACTIONS(447), 1,
      aux_sym_string_literal_token1,
    ACTIONS(449), 1,
      anon_sym_not,
    ACTIONS(453), 1,
      anon_sym_RPAREN,
    STATE(251), 1,
      sym_expression,
    STATE(290), 1,
      sym_parameter,
    STATE(295), 1,
      sym_default_parameter,
    STATE(313), 1,
      sym__parameters,
    ACTIONS(431), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(441), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(226), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [5385] = 18,
    ACTIONS(427), 1,
      sym_identifier,
    ACTIONS(429), 1,
      aux_sym_quote_token1,
    ACTIONS(433), 1,
      anon_sym_LBRACK,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    ACTIONS(439), 1,
      sym_none,
    ACTIONS(443), 1,
      sym_int_literal,
    ACTIONS(445), 1,
      sym_float_literal,
    ACTIONS(447), 1,
      aux_sym_string_literal_token1,
    ACTIONS(449), 1,
      anon_sym_not,
    ACTIONS(455), 1,
      anon_sym_RPAREN,
    STATE(251), 1,
      sym_expression,
    STATE(290), 1,
      sym_parameter,
    STATE(295), 1,
      sym_default_parameter,
    STATE(321), 1,
      sym__parameters,
    ACTIONS(431), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(441), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(226), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [5455] = 12,
    ACTIONS(457), 1,
      anon_sym_SLASH,
    ACTIONS(461), 1,
      anon_sym_STAR,
    ACTIONS(465), 1,
      anon_sym_not,
    ACTIONS(467), 1,
      anon_sym_and,
    ACTIONS(469), 1,
      anon_sym_or,
    STATE(214), 1,
      sym_block,
    ACTIONS(459), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(463), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(471), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(99), 7,
      aux_sym_quote_token1,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      aux_sym_string_literal_token1,
    ACTIONS(97), 8,
      sym_identifier,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
  [5513] = 18,
    ACTIONS(427), 1,
      sym_identifier,
    ACTIONS(429), 1,
      aux_sym_quote_token1,
    ACTIONS(433), 1,
      anon_sym_LBRACK,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    ACTIONS(439), 1,
      sym_none,
    ACTIONS(443), 1,
      sym_int_literal,
    ACTIONS(445), 1,
      sym_float_literal,
    ACTIONS(447), 1,
      aux_sym_string_literal_token1,
    ACTIONS(449), 1,
      anon_sym_not,
    ACTIONS(473), 1,
      anon_sym_RPAREN,
    STATE(251), 1,
      sym_expression,
    STATE(290), 1,
      sym_parameter,
    STATE(295), 1,
      sym_default_parameter,
    STATE(301), 1,
      sym__parameters,
    ACTIONS(431), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(441), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(226), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [5583] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(185), 14,
      aux_sym_quote_token1,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(183), 15,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [5622] = 9,
    ACTIONS(457), 1,
      anon_sym_SLASH,
    ACTIONS(461), 1,
      anon_sym_STAR,
    ACTIONS(465), 1,
      anon_sym_not,
    ACTIONS(459), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(463), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(471), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(187), 7,
      aux_sym_quote_token1,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      aux_sym_string_literal_token1,
    ACTIONS(189), 10,
      sym_identifier,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_and,
      anon_sym_or,
  [5673] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(209), 14,
      aux_sym_quote_token1,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(207), 15,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [5712] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(199), 14,
      aux_sym_quote_token1,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(201), 15,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [5751] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(231), 14,
      aux_sym_quote_token1,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(233), 15,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [5790] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(249), 14,
      aux_sym_quote_token1,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(247), 15,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [5829] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(185), 14,
      aux_sym_quote_token1,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(183), 15,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [5868] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(243), 14,
      aux_sym_quote_token1,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(245), 15,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [5907] = 17,
    ACTIONS(427), 1,
      sym_identifier,
    ACTIONS(429), 1,
      aux_sym_quote_token1,
    ACTIONS(433), 1,
      anon_sym_LBRACK,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    ACTIONS(439), 1,
      sym_none,
    ACTIONS(443), 1,
      sym_int_literal,
    ACTIONS(445), 1,
      sym_float_literal,
    ACTIONS(447), 1,
      aux_sym_string_literal_token1,
    ACTIONS(449), 1,
      anon_sym_not,
    ACTIONS(475), 1,
      anon_sym_RPAREN,
    STATE(251), 1,
      sym_expression,
    STATE(295), 1,
      sym_default_parameter,
    STATE(298), 1,
      sym_parameter,
    ACTIONS(431), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(441), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(226), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [5974] = 11,
    ACTIONS(457), 1,
      anon_sym_SLASH,
    ACTIONS(461), 1,
      anon_sym_STAR,
    ACTIONS(465), 1,
      anon_sym_not,
    ACTIONS(467), 1,
      anon_sym_and,
    ACTIONS(469), 1,
      anon_sym_or,
    ACTIONS(459), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(463), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(471), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(309), 7,
      aux_sym_quote_token1,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      aux_sym_string_literal_token1,
    ACTIONS(307), 8,
      sym_identifier,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
  [6029] = 6,
    ACTIONS(457), 1,
      anon_sym_SLASH,
    ACTIONS(461), 1,
      anon_sym_STAR,
    ACTIONS(459), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(203), 11,
      aux_sym_quote_token1,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(205), 14,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [6074] = 17,
    ACTIONS(427), 1,
      sym_identifier,
    ACTIONS(429), 1,
      aux_sym_quote_token1,
    ACTIONS(433), 1,
      anon_sym_LBRACK,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    ACTIONS(439), 1,
      sym_none,
    ACTIONS(443), 1,
      sym_int_literal,
    ACTIONS(445), 1,
      sym_float_literal,
    ACTIONS(447), 1,
      aux_sym_string_literal_token1,
    ACTIONS(449), 1,
      anon_sym_not,
    ACTIONS(477), 1,
      anon_sym_RPAREN,
    STATE(251), 1,
      sym_expression,
    STATE(295), 1,
      sym_default_parameter,
    STATE(298), 1,
      sym_parameter,
    ACTIONS(431), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(441), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(226), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [6141] = 10,
    ACTIONS(457), 1,
      anon_sym_SLASH,
    ACTIONS(461), 1,
      anon_sym_STAR,
    ACTIONS(465), 1,
      anon_sym_not,
    ACTIONS(467), 1,
      anon_sym_and,
    ACTIONS(459), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(463), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(471), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(187), 7,
      aux_sym_quote_token1,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      aux_sym_string_literal_token1,
    ACTIONS(189), 9,
      sym_identifier,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_or,
  [6194] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(217), 14,
      aux_sym_quote_token1,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(215), 15,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [6233] = 6,
    ACTIONS(457), 1,
      anon_sym_SLASH,
    ACTIONS(461), 1,
      anon_sym_STAR,
    ACTIONS(459), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(223), 11,
      aux_sym_quote_token1,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(225), 14,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [6278] = 5,
    ACTIONS(457), 1,
      anon_sym_SLASH,
    ACTIONS(461), 1,
      anon_sym_STAR,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(195), 13,
      aux_sym_quote_token1,
      anon_sym_DASH,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(197), 14,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [6321] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(195), 14,
      aux_sym_quote_token1,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(197), 15,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [6360] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(219), 14,
      aux_sym_quote_token1,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(221), 15,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [6399] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(213), 14,
      aux_sym_quote_token1,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(211), 15,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [6438] = 11,
    ACTIONS(457), 1,
      anon_sym_SLASH,
    ACTIONS(461), 1,
      anon_sym_STAR,
    ACTIONS(465), 1,
      anon_sym_not,
    ACTIONS(467), 1,
      anon_sym_and,
    ACTIONS(469), 1,
      anon_sym_or,
    ACTIONS(459), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(463), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(471), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(241), 7,
      aux_sym_quote_token1,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      aux_sym_string_literal_token1,
    ACTIONS(239), 8,
      sym_identifier,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
  [6493] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(19), 14,
      aux_sym_quote_token1,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(17), 15,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [6532] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(235), 14,
      aux_sym_quote_token1,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(237), 15,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [6571] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(193), 14,
      aux_sym_quote_token1,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(191), 15,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [6610] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(229), 14,
      aux_sym_quote_token1,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(227), 15,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [6649] = 16,
    ACTIONS(427), 1,
      sym_identifier,
    ACTIONS(429), 1,
      aux_sym_quote_token1,
    ACTIONS(433), 1,
      anon_sym_LBRACK,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    ACTIONS(439), 1,
      sym_none,
    ACTIONS(443), 1,
      sym_int_literal,
    ACTIONS(445), 1,
      sym_float_literal,
    ACTIONS(447), 1,
      aux_sym_string_literal_token1,
    ACTIONS(449), 1,
      anon_sym_not,
    STATE(251), 1,
      sym_expression,
    STATE(295), 1,
      sym_default_parameter,
    STATE(298), 1,
      sym_parameter,
    ACTIONS(431), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(441), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(226), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [6713] = 5,
    STATE(247), 1,
      sym_unit,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(17), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(479), 9,
      anon_sym_in,
      anon_sym_pt,
      anon_sym_mm,
      anon_sym_cm,
      anon_sym_deg,
      anon_sym_rad,
      anon_sym_em,
      anon_sym_fr,
      anon_sym_PERCENT,
    ACTIONS(19), 14,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6754] = 14,
    ACTIONS(253), 1,
      aux_sym_quote_token1,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_LBRACE,
    ACTIONS(267), 1,
      sym_none,
    ACTIONS(271), 1,
      sym_int_literal,
    ACTIONS(273), 1,
      sym_float_literal,
    ACTIONS(275), 1,
      aux_sym_string_literal_token1,
    ACTIONS(277), 1,
      anon_sym_not,
    ACTIONS(481), 1,
      sym_identifier,
    STATE(59), 1,
      sym_expression,
    ACTIONS(255), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(269), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(44), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [6812] = 14,
    ACTIONS(253), 1,
      aux_sym_quote_token1,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_LBRACE,
    ACTIONS(267), 1,
      sym_none,
    ACTIONS(271), 1,
      sym_int_literal,
    ACTIONS(273), 1,
      sym_float_literal,
    ACTIONS(275), 1,
      aux_sym_string_literal_token1,
    ACTIONS(277), 1,
      anon_sym_not,
    ACTIONS(481), 1,
      sym_identifier,
    STATE(31), 1,
      sym_expression,
    ACTIONS(255), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(269), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(44), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [6870] = 14,
    ACTIONS(429), 1,
      aux_sym_quote_token1,
    ACTIONS(433), 1,
      anon_sym_LBRACK,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    ACTIONS(439), 1,
      sym_none,
    ACTIONS(443), 1,
      sym_int_literal,
    ACTIONS(445), 1,
      sym_float_literal,
    ACTIONS(447), 1,
      aux_sym_string_literal_token1,
    ACTIONS(449), 1,
      anon_sym_not,
    ACTIONS(483), 1,
      sym_identifier,
    STATE(229), 1,
      sym_expression,
    ACTIONS(431), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(441), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(226), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [6928] = 14,
    ACTIONS(429), 1,
      aux_sym_quote_token1,
    ACTIONS(433), 1,
      anon_sym_LBRACK,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    ACTIONS(439), 1,
      sym_none,
    ACTIONS(443), 1,
      sym_int_literal,
    ACTIONS(445), 1,
      sym_float_literal,
    ACTIONS(447), 1,
      aux_sym_string_literal_token1,
    ACTIONS(449), 1,
      anon_sym_not,
    ACTIONS(483), 1,
      sym_identifier,
    STATE(221), 1,
      sym_expression,
    ACTIONS(431), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(441), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(226), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [6986] = 14,
    ACTIONS(429), 1,
      aux_sym_quote_token1,
    ACTIONS(433), 1,
      anon_sym_LBRACK,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    ACTIONS(439), 1,
      sym_none,
    ACTIONS(443), 1,
      sym_int_literal,
    ACTIONS(445), 1,
      sym_float_literal,
    ACTIONS(447), 1,
      aux_sym_string_literal_token1,
    ACTIONS(449), 1,
      anon_sym_not,
    ACTIONS(483), 1,
      sym_identifier,
    STATE(220), 1,
      sym_expression,
    ACTIONS(431), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(441), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(226), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [7044] = 14,
    ACTIONS(429), 1,
      aux_sym_quote_token1,
    ACTIONS(433), 1,
      anon_sym_LBRACK,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    ACTIONS(439), 1,
      sym_none,
    ACTIONS(443), 1,
      sym_int_literal,
    ACTIONS(445), 1,
      sym_float_literal,
    ACTIONS(447), 1,
      aux_sym_string_literal_token1,
    ACTIONS(449), 1,
      anon_sym_not,
    ACTIONS(483), 1,
      sym_identifier,
    STATE(243), 1,
      sym_expression,
    ACTIONS(431), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(441), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(226), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [7102] = 14,
    ACTIONS(429), 1,
      aux_sym_quote_token1,
    ACTIONS(433), 1,
      anon_sym_LBRACK,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    ACTIONS(439), 1,
      sym_none,
    ACTIONS(443), 1,
      sym_int_literal,
    ACTIONS(445), 1,
      sym_float_literal,
    ACTIONS(447), 1,
      aux_sym_string_literal_token1,
    ACTIONS(449), 1,
      anon_sym_not,
    ACTIONS(483), 1,
      sym_identifier,
    STATE(231), 1,
      sym_expression,
    ACTIONS(431), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(441), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(226), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [7160] = 14,
    ACTIONS(253), 1,
      aux_sym_quote_token1,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_LBRACE,
    ACTIONS(267), 1,
      sym_none,
    ACTIONS(271), 1,
      sym_int_literal,
    ACTIONS(273), 1,
      sym_float_literal,
    ACTIONS(275), 1,
      aux_sym_string_literal_token1,
    ACTIONS(277), 1,
      anon_sym_not,
    ACTIONS(481), 1,
      sym_identifier,
    STATE(62), 1,
      sym_expression,
    ACTIONS(255), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(269), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(44), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [7218] = 14,
    ACTIONS(281), 1,
      aux_sym_quote_token1,
    ACTIONS(285), 1,
      anon_sym_LBRACK,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      sym_none,
    ACTIONS(299), 1,
      sym_int_literal,
    ACTIONS(301), 1,
      sym_float_literal,
    ACTIONS(303), 1,
      aux_sym_string_literal_token1,
    ACTIONS(305), 1,
      anon_sym_not,
    ACTIONS(485), 1,
      sym_identifier,
    STATE(37), 1,
      sym_expression,
    ACTIONS(283), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(297), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(51), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [7276] = 14,
    ACTIONS(429), 1,
      aux_sym_quote_token1,
    ACTIONS(433), 1,
      anon_sym_LBRACK,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    ACTIONS(439), 1,
      sym_none,
    ACTIONS(443), 1,
      sym_int_literal,
    ACTIONS(445), 1,
      sym_float_literal,
    ACTIONS(447), 1,
      aux_sym_string_literal_token1,
    ACTIONS(449), 1,
      anon_sym_not,
    ACTIONS(483), 1,
      sym_identifier,
    STATE(215), 1,
      sym_expression,
    ACTIONS(431), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(441), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(226), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [7334] = 14,
    ACTIONS(429), 1,
      aux_sym_quote_token1,
    ACTIONS(433), 1,
      anon_sym_LBRACK,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    ACTIONS(439), 1,
      sym_none,
    ACTIONS(443), 1,
      sym_int_literal,
    ACTIONS(445), 1,
      sym_float_literal,
    ACTIONS(447), 1,
      aux_sym_string_literal_token1,
    ACTIONS(449), 1,
      anon_sym_not,
    ACTIONS(483), 1,
      sym_identifier,
    STATE(227), 1,
      sym_expression,
    ACTIONS(431), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(441), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(226), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [7392] = 14,
    ACTIONS(429), 1,
      aux_sym_quote_token1,
    ACTIONS(433), 1,
      anon_sym_LBRACK,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    ACTIONS(439), 1,
      sym_none,
    ACTIONS(443), 1,
      sym_int_literal,
    ACTIONS(445), 1,
      sym_float_literal,
    ACTIONS(447), 1,
      aux_sym_string_literal_token1,
    ACTIONS(449), 1,
      anon_sym_not,
    ACTIONS(483), 1,
      sym_identifier,
    STATE(222), 1,
      sym_expression,
    ACTIONS(431), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(441), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(226), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [7450] = 14,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      aux_sym_quote_token1,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      sym_none,
    ACTIONS(67), 1,
      sym_int_literal,
    ACTIONS(69), 1,
      sym_float_literal,
    ACTIONS(71), 1,
      aux_sym_string_literal_token1,
    ACTIONS(73), 1,
      anon_sym_not,
    STATE(101), 1,
      sym_expression,
    ACTIONS(49), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(123), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [7508] = 14,
    ACTIONS(429), 1,
      aux_sym_quote_token1,
    ACTIONS(433), 1,
      anon_sym_LBRACK,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    ACTIONS(439), 1,
      sym_none,
    ACTIONS(443), 1,
      sym_int_literal,
    ACTIONS(445), 1,
      sym_float_literal,
    ACTIONS(447), 1,
      aux_sym_string_literal_token1,
    ACTIONS(449), 1,
      anon_sym_not,
    ACTIONS(483), 1,
      sym_identifier,
    STATE(234), 1,
      sym_expression,
    ACTIONS(431), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(441), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(226), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [7566] = 14,
    ACTIONS(429), 1,
      aux_sym_quote_token1,
    ACTIONS(433), 1,
      anon_sym_LBRACK,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    ACTIONS(439), 1,
      sym_none,
    ACTIONS(443), 1,
      sym_int_literal,
    ACTIONS(445), 1,
      sym_float_literal,
    ACTIONS(447), 1,
      aux_sym_string_literal_token1,
    ACTIONS(449), 1,
      anon_sym_not,
    ACTIONS(483), 1,
      sym_identifier,
    STATE(223), 1,
      sym_expression,
    ACTIONS(431), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(441), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(226), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [7624] = 14,
    ACTIONS(281), 1,
      aux_sym_quote_token1,
    ACTIONS(285), 1,
      anon_sym_LBRACK,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      sym_none,
    ACTIONS(299), 1,
      sym_int_literal,
    ACTIONS(301), 1,
      sym_float_literal,
    ACTIONS(303), 1,
      aux_sym_string_literal_token1,
    ACTIONS(305), 1,
      anon_sym_not,
    ACTIONS(485), 1,
      sym_identifier,
    STATE(48), 1,
      sym_expression,
    ACTIONS(283), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(297), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(51), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [7682] = 14,
    ACTIONS(253), 1,
      aux_sym_quote_token1,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_LBRACE,
    ACTIONS(267), 1,
      sym_none,
    ACTIONS(271), 1,
      sym_int_literal,
    ACTIONS(273), 1,
      sym_float_literal,
    ACTIONS(275), 1,
      aux_sym_string_literal_token1,
    ACTIONS(277), 1,
      anon_sym_not,
    ACTIONS(481), 1,
      sym_identifier,
    STATE(64), 1,
      sym_expression,
    ACTIONS(255), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(269), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(44), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [7740] = 14,
    ACTIONS(253), 1,
      aux_sym_quote_token1,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_LBRACE,
    ACTIONS(267), 1,
      sym_none,
    ACTIONS(271), 1,
      sym_int_literal,
    ACTIONS(273), 1,
      sym_float_literal,
    ACTIONS(275), 1,
      aux_sym_string_literal_token1,
    ACTIONS(277), 1,
      anon_sym_not,
    ACTIONS(481), 1,
      sym_identifier,
    STATE(65), 1,
      sym_expression,
    ACTIONS(255), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(269), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(44), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [7798] = 14,
    ACTIONS(429), 1,
      aux_sym_quote_token1,
    ACTIONS(433), 1,
      anon_sym_LBRACK,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    ACTIONS(439), 1,
      sym_none,
    ACTIONS(443), 1,
      sym_int_literal,
    ACTIONS(445), 1,
      sym_float_literal,
    ACTIONS(447), 1,
      aux_sym_string_literal_token1,
    ACTIONS(449), 1,
      anon_sym_not,
    ACTIONS(483), 1,
      sym_identifier,
    STATE(213), 1,
      sym_expression,
    ACTIONS(431), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(441), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(226), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [7856] = 14,
    ACTIONS(429), 1,
      aux_sym_quote_token1,
    ACTIONS(433), 1,
      anon_sym_LBRACK,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    ACTIONS(439), 1,
      sym_none,
    ACTIONS(443), 1,
      sym_int_literal,
    ACTIONS(445), 1,
      sym_float_literal,
    ACTIONS(447), 1,
      aux_sym_string_literal_token1,
    ACTIONS(449), 1,
      anon_sym_not,
    ACTIONS(483), 1,
      sym_identifier,
    STATE(250), 1,
      sym_expression,
    ACTIONS(431), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(441), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(226), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [7914] = 14,
    ACTIONS(253), 1,
      aux_sym_quote_token1,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_LBRACE,
    ACTIONS(267), 1,
      sym_none,
    ACTIONS(271), 1,
      sym_int_literal,
    ACTIONS(273), 1,
      sym_float_literal,
    ACTIONS(275), 1,
      aux_sym_string_literal_token1,
    ACTIONS(277), 1,
      anon_sym_not,
    ACTIONS(481), 1,
      sym_identifier,
    STATE(53), 1,
      sym_expression,
    ACTIONS(255), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(269), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(44), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [7972] = 14,
    ACTIONS(281), 1,
      aux_sym_quote_token1,
    ACTIONS(285), 1,
      anon_sym_LBRACK,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      sym_none,
    ACTIONS(299), 1,
      sym_int_literal,
    ACTIONS(301), 1,
      sym_float_literal,
    ACTIONS(303), 1,
      aux_sym_string_literal_token1,
    ACTIONS(305), 1,
      anon_sym_not,
    ACTIONS(485), 1,
      sym_identifier,
    STATE(60), 1,
      sym_expression,
    ACTIONS(283), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(297), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(51), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [8030] = 14,
    ACTIONS(281), 1,
      aux_sym_quote_token1,
    ACTIONS(285), 1,
      anon_sym_LBRACK,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      sym_none,
    ACTIONS(299), 1,
      sym_int_literal,
    ACTIONS(301), 1,
      sym_float_literal,
    ACTIONS(303), 1,
      aux_sym_string_literal_token1,
    ACTIONS(305), 1,
      anon_sym_not,
    ACTIONS(485), 1,
      sym_identifier,
    STATE(28), 1,
      sym_expression,
    ACTIONS(283), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(297), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(51), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [8088] = 14,
    ACTIONS(253), 1,
      aux_sym_quote_token1,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_LBRACE,
    ACTIONS(267), 1,
      sym_none,
    ACTIONS(271), 1,
      sym_int_literal,
    ACTIONS(273), 1,
      sym_float_literal,
    ACTIONS(275), 1,
      aux_sym_string_literal_token1,
    ACTIONS(277), 1,
      anon_sym_not,
    ACTIONS(481), 1,
      sym_identifier,
    STATE(50), 1,
      sym_expression,
    ACTIONS(255), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(269), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(44), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [8146] = 14,
    ACTIONS(281), 1,
      aux_sym_quote_token1,
    ACTIONS(285), 1,
      anon_sym_LBRACK,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      sym_none,
    ACTIONS(299), 1,
      sym_int_literal,
    ACTIONS(301), 1,
      sym_float_literal,
    ACTIONS(303), 1,
      aux_sym_string_literal_token1,
    ACTIONS(305), 1,
      anon_sym_not,
    ACTIONS(485), 1,
      sym_identifier,
    STATE(27), 1,
      sym_expression,
    ACTIONS(283), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(297), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(51), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [8204] = 14,
    ACTIONS(281), 1,
      aux_sym_quote_token1,
    ACTIONS(285), 1,
      anon_sym_LBRACK,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      sym_none,
    ACTIONS(299), 1,
      sym_int_literal,
    ACTIONS(301), 1,
      sym_float_literal,
    ACTIONS(303), 1,
      aux_sym_string_literal_token1,
    ACTIONS(305), 1,
      anon_sym_not,
    ACTIONS(485), 1,
      sym_identifier,
    STATE(38), 1,
      sym_expression,
    ACTIONS(283), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(297), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(51), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [8262] = 14,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      aux_sym_quote_token1,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      sym_none,
    ACTIONS(67), 1,
      sym_int_literal,
    ACTIONS(69), 1,
      sym_float_literal,
    ACTIONS(71), 1,
      aux_sym_string_literal_token1,
    ACTIONS(73), 1,
      anon_sym_not,
    STATE(109), 1,
      sym_expression,
    ACTIONS(49), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(123), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [8320] = 14,
    ACTIONS(253), 1,
      aux_sym_quote_token1,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_LBRACE,
    ACTIONS(267), 1,
      sym_none,
    ACTIONS(271), 1,
      sym_int_literal,
    ACTIONS(273), 1,
      sym_float_literal,
    ACTIONS(275), 1,
      aux_sym_string_literal_token1,
    ACTIONS(277), 1,
      anon_sym_not,
    ACTIONS(481), 1,
      sym_identifier,
    STATE(20), 1,
      sym_expression,
    ACTIONS(255), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(269), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(44), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [8378] = 14,
    ACTIONS(281), 1,
      aux_sym_quote_token1,
    ACTIONS(285), 1,
      anon_sym_LBRACK,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      sym_none,
    ACTIONS(299), 1,
      sym_int_literal,
    ACTIONS(301), 1,
      sym_float_literal,
    ACTIONS(303), 1,
      aux_sym_string_literal_token1,
    ACTIONS(305), 1,
      anon_sym_not,
    ACTIONS(485), 1,
      sym_identifier,
    STATE(25), 1,
      sym_expression,
    ACTIONS(283), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(297), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(51), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [8436] = 14,
    ACTIONS(253), 1,
      aux_sym_quote_token1,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_LBRACE,
    ACTIONS(267), 1,
      sym_none,
    ACTIONS(271), 1,
      sym_int_literal,
    ACTIONS(273), 1,
      sym_float_literal,
    ACTIONS(275), 1,
      aux_sym_string_literal_token1,
    ACTIONS(277), 1,
      anon_sym_not,
    ACTIONS(481), 1,
      sym_identifier,
    STATE(49), 1,
      sym_expression,
    ACTIONS(255), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(269), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(44), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [8494] = 14,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      aux_sym_quote_token1,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      sym_none,
    ACTIONS(67), 1,
      sym_int_literal,
    ACTIONS(69), 1,
      sym_float_literal,
    ACTIONS(71), 1,
      aux_sym_string_literal_token1,
    ACTIONS(73), 1,
      anon_sym_not,
    STATE(103), 1,
      sym_expression,
    ACTIONS(49), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(123), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [8552] = 14,
    ACTIONS(281), 1,
      aux_sym_quote_token1,
    ACTIONS(285), 1,
      anon_sym_LBRACK,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      sym_none,
    ACTIONS(299), 1,
      sym_int_literal,
    ACTIONS(301), 1,
      sym_float_literal,
    ACTIONS(303), 1,
      aux_sym_string_literal_token1,
    ACTIONS(305), 1,
      anon_sym_not,
    ACTIONS(485), 1,
      sym_identifier,
    STATE(23), 1,
      sym_expression,
    ACTIONS(283), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(297), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(51), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [8610] = 5,
    ACTIONS(491), 1,
      anon_sym_else,
    STATE(195), 1,
      sym_else_clause,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(489), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(487), 20,
      ts_builtin_sym_end,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
  [8650] = 14,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      aux_sym_quote_token1,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      sym_none,
    ACTIONS(67), 1,
      sym_int_literal,
    ACTIONS(69), 1,
      sym_float_literal,
    ACTIONS(71), 1,
      aux_sym_string_literal_token1,
    ACTIONS(73), 1,
      anon_sym_not,
    STATE(122), 1,
      sym_expression,
    ACTIONS(49), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(123), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [8708] = 14,
    ACTIONS(281), 1,
      aux_sym_quote_token1,
    ACTIONS(285), 1,
      anon_sym_LBRACK,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      sym_none,
    ACTIONS(299), 1,
      sym_int_literal,
    ACTIONS(301), 1,
      sym_float_literal,
    ACTIONS(303), 1,
      aux_sym_string_literal_token1,
    ACTIONS(305), 1,
      anon_sym_not,
    ACTIONS(485), 1,
      sym_identifier,
    STATE(43), 1,
      sym_expression,
    ACTIONS(283), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(297), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(51), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [8766] = 14,
    ACTIONS(429), 1,
      aux_sym_quote_token1,
    ACTIONS(433), 1,
      anon_sym_LBRACK,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    ACTIONS(439), 1,
      sym_none,
    ACTIONS(443), 1,
      sym_int_literal,
    ACTIONS(445), 1,
      sym_float_literal,
    ACTIONS(447), 1,
      aux_sym_string_literal_token1,
    ACTIONS(449), 1,
      anon_sym_not,
    ACTIONS(483), 1,
      sym_identifier,
    STATE(232), 1,
      sym_expression,
    ACTIONS(431), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(441), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(226), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [8824] = 14,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      aux_sym_quote_token1,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      sym_none,
    ACTIONS(67), 1,
      sym_int_literal,
    ACTIONS(69), 1,
      sym_float_literal,
    ACTIONS(71), 1,
      aux_sym_string_literal_token1,
    ACTIONS(73), 1,
      anon_sym_not,
    STATE(119), 1,
      sym_expression,
    ACTIONS(49), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(123), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [8882] = 14,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      aux_sym_quote_token1,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      sym_none,
    ACTIONS(67), 1,
      sym_int_literal,
    ACTIONS(69), 1,
      sym_float_literal,
    ACTIONS(71), 1,
      aux_sym_string_literal_token1,
    ACTIONS(73), 1,
      anon_sym_not,
    STATE(118), 1,
      sym_expression,
    ACTIONS(49), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(123), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [8940] = 14,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      aux_sym_quote_token1,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      sym_none,
    ACTIONS(67), 1,
      sym_int_literal,
    ACTIONS(69), 1,
      sym_float_literal,
    ACTIONS(71), 1,
      aux_sym_string_literal_token1,
    ACTIONS(73), 1,
      anon_sym_not,
    STATE(117), 1,
      sym_expression,
    ACTIONS(49), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(123), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [8998] = 14,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      aux_sym_quote_token1,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      sym_none,
    ACTIONS(67), 1,
      sym_int_literal,
    ACTIONS(69), 1,
      sym_float_literal,
    ACTIONS(71), 1,
      aux_sym_string_literal_token1,
    ACTIONS(73), 1,
      anon_sym_not,
    STATE(104), 1,
      sym_expression,
    ACTIONS(49), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(123), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [9056] = 14,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      aux_sym_quote_token1,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      sym_none,
    ACTIONS(67), 1,
      sym_int_literal,
    ACTIONS(69), 1,
      sym_float_literal,
    ACTIONS(71), 1,
      aux_sym_string_literal_token1,
    ACTIONS(73), 1,
      anon_sym_not,
    STATE(115), 1,
      sym_expression,
    ACTIONS(49), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(123), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [9114] = 14,
    ACTIONS(429), 1,
      aux_sym_quote_token1,
    ACTIONS(433), 1,
      anon_sym_LBRACK,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    ACTIONS(439), 1,
      sym_none,
    ACTIONS(443), 1,
      sym_int_literal,
    ACTIONS(445), 1,
      sym_float_literal,
    ACTIONS(447), 1,
      aux_sym_string_literal_token1,
    ACTIONS(449), 1,
      anon_sym_not,
    ACTIONS(483), 1,
      sym_identifier,
    STATE(230), 1,
      sym_expression,
    ACTIONS(431), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(441), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(226), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [9172] = 14,
    ACTIONS(429), 1,
      aux_sym_quote_token1,
    ACTIONS(433), 1,
      anon_sym_LBRACK,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    ACTIONS(439), 1,
      sym_none,
    ACTIONS(443), 1,
      sym_int_literal,
    ACTIONS(445), 1,
      sym_float_literal,
    ACTIONS(447), 1,
      aux_sym_string_literal_token1,
    ACTIONS(449), 1,
      anon_sym_not,
    ACTIONS(483), 1,
      sym_identifier,
    STATE(238), 1,
      sym_expression,
    ACTIONS(431), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(441), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(226), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [9230] = 5,
    ACTIONS(493), 1,
      anon_sym_else,
    STATE(188), 1,
      sym_else_clause,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(489), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(487), 20,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
  [9270] = 14,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      aux_sym_quote_token1,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      sym_none,
    ACTIONS(67), 1,
      sym_int_literal,
    ACTIONS(69), 1,
      sym_float_literal,
    ACTIONS(71), 1,
      aux_sym_string_literal_token1,
    ACTIONS(73), 1,
      anon_sym_not,
    STATE(113), 1,
      sym_expression,
    ACTIONS(49), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(123), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [9328] = 14,
    ACTIONS(429), 1,
      aux_sym_quote_token1,
    ACTIONS(433), 1,
      anon_sym_LBRACK,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    ACTIONS(439), 1,
      sym_none,
    ACTIONS(443), 1,
      sym_int_literal,
    ACTIONS(445), 1,
      sym_float_literal,
    ACTIONS(447), 1,
      aux_sym_string_literal_token1,
    ACTIONS(449), 1,
      anon_sym_not,
    ACTIONS(483), 1,
      sym_identifier,
    STATE(217), 1,
      sym_expression,
    ACTIONS(431), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(441), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(226), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [9386] = 14,
    ACTIONS(281), 1,
      aux_sym_quote_token1,
    ACTIONS(285), 1,
      anon_sym_LBRACK,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      sym_none,
    ACTIONS(299), 1,
      sym_int_literal,
    ACTIONS(301), 1,
      sym_float_literal,
    ACTIONS(303), 1,
      aux_sym_string_literal_token1,
    ACTIONS(305), 1,
      anon_sym_not,
    ACTIONS(485), 1,
      sym_identifier,
    STATE(30), 1,
      sym_expression,
    ACTIONS(283), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(297), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(51), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [9444] = 14,
    ACTIONS(253), 1,
      aux_sym_quote_token1,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_LBRACE,
    ACTIONS(267), 1,
      sym_none,
    ACTIONS(271), 1,
      sym_int_literal,
    ACTIONS(273), 1,
      sym_float_literal,
    ACTIONS(275), 1,
      aux_sym_string_literal_token1,
    ACTIONS(277), 1,
      anon_sym_not,
    ACTIONS(481), 1,
      sym_identifier,
    STATE(24), 1,
      sym_expression,
    ACTIONS(255), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(269), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(44), 12,
      sym_content_block,
      sym_function,
      sym_block,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [9502] = 6,
    ACTIONS(497), 1,
      sym_line_break,
    STATE(177), 1,
      aux_sym__text,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(499), 3,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(495), 5,
      ts_builtin_sym_end,
      aux_sym_quote_token1,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
    ACTIONS(502), 15,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
  [9543] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(201), 5,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_else,
    ACTIONS(199), 20,
      ts_builtin_sym_end,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
  [9578] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(221), 5,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_else,
    ACTIONS(219), 20,
      ts_builtin_sym_end,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
  [9613] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(207), 5,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_else,
    ACTIONS(209), 20,
      ts_builtin_sym_end,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
  [9648] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(201), 5,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_else,
    ACTIONS(199), 20,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
  [9683] = 6,
    ACTIONS(497), 1,
      sym_line_break,
    STATE(182), 1,
      aux_sym__text,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(505), 3,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(495), 5,
      aux_sym_quote_token1,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
    ACTIONS(508), 15,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
  [9724] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(221), 5,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_else,
    ACTIONS(219), 20,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
  [9759] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(207), 5,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_else,
    ACTIONS(209), 20,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
  [9794] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(511), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(513), 20,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
  [9828] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(207), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(209), 20,
      ts_builtin_sym_end,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
  [9862] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(515), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(517), 20,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
  [9896] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(519), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(521), 20,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
  [9930] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(523), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(525), 20,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
  [9964] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(527), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(529), 20,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
  [9998] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(531), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(533), 20,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
  [10032] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(221), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(219), 20,
      ts_builtin_sym_end,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
  [10066] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(207), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(209), 20,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
  [10100] = 6,
    ACTIONS(535), 1,
      anon_sym_LPAREN,
    STATE(244), 1,
      sym_parameters,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(537), 4,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(17), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
    ACTIONS(19), 12,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [10140] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(519), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(521), 20,
      ts_builtin_sym_end,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
  [10174] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(221), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(219), 20,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
  [10208] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(511), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(513), 20,
      ts_builtin_sym_end,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
  [10242] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(201), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(199), 20,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
  [10276] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(201), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(199), 20,
      ts_builtin_sym_end,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
  [10310] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(307), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(309), 20,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
  [10344] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(531), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(533), 20,
      ts_builtin_sym_end,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
  [10378] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(523), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(525), 20,
      ts_builtin_sym_end,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
  [10412] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(527), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(529), 20,
      ts_builtin_sym_end,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
  [10446] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(515), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(517), 20,
      ts_builtin_sym_end,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
  [10480] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(307), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(309), 20,
      ts_builtin_sym_end,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
  [10514] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(311), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(313), 20,
      ts_builtin_sym_end,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
  [10548] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(311), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(313), 20,
      aux_sym_quote_token1,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
  [10582] = 8,
    ACTIONS(535), 1,
      anon_sym_LPAREN,
    ACTIONS(539), 1,
      anon_sym_COLON,
    STATE(244), 1,
      sym_parameters,
    ACTIONS(541), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(537), 4,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(17), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
    ACTIONS(19), 8,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [10625] = 5,
    ACTIONS(543), 1,
      anon_sym_else,
    STATE(225), 1,
      sym_else_clause,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(487), 9,
      aux_sym_quote_token1,
      anon_sym_DASH,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
    ACTIONS(489), 9,
      sym_identifier,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
  [10659] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(219), 9,
      aux_sym_quote_token1,
      anon_sym_DASH,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
    ACTIONS(221), 10,
      sym_identifier,
      anon_sym_let,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
  [10688] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(209), 9,
      aux_sym_quote_token1,
      anon_sym_DASH,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
    ACTIONS(207), 10,
      sym_identifier,
      anon_sym_let,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
  [10717] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(199), 9,
      aux_sym_quote_token1,
      anon_sym_DASH,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
    ACTIONS(201), 10,
      sym_identifier,
      anon_sym_let,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
  [10746] = 6,
    ACTIONS(545), 1,
      anon_sym_SLASH,
    ACTIONS(549), 1,
      anon_sym_STAR,
    ACTIONS(205), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(547), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(203), 12,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [10780] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(523), 9,
      sym_identifier,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
    ACTIONS(525), 9,
      aux_sym_quote_token1,
      anon_sym_DASH,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
  [10808] = 12,
    ACTIONS(545), 1,
      anon_sym_SLASH,
    ACTIONS(549), 1,
      anon_sym_STAR,
    ACTIONS(553), 1,
      anon_sym_LBRACK,
    ACTIONS(557), 1,
      anon_sym_LBRACE,
    ACTIONS(559), 1,
      anon_sym_not,
    ACTIONS(561), 1,
      anon_sym_and,
    ACTIONS(563), 1,
      anon_sym_or,
    ACTIONS(547), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(551), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(161), 2,
      sym_content_block,
      sym_block,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(555), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [10854] = 4,
    ACTIONS(569), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(567), 8,
      aux_sym_quote_token1,
      anon_sym_DASH,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
    ACTIONS(565), 9,
      sym_identifier,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
  [10884] = 10,
    ACTIONS(545), 1,
      anon_sym_SLASH,
    ACTIONS(549), 1,
      anon_sym_STAR,
    ACTIONS(559), 1,
      anon_sym_not,
    ACTIONS(561), 1,
      anon_sym_and,
    ACTIONS(563), 1,
      anon_sym_or,
    ACTIONS(547), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(551), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(241), 4,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
    ACTIONS(555), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [10926] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(307), 9,
      sym_identifier,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
    ACTIONS(309), 9,
      aux_sym_quote_token1,
      anon_sym_DASH,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
  [10954] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(201), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(199), 15,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [10982] = 6,
    ACTIONS(545), 1,
      anon_sym_SLASH,
    ACTIONS(549), 1,
      anon_sym_STAR,
    ACTIONS(225), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(547), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(223), 12,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [11016] = 5,
    ACTIONS(545), 1,
      anon_sym_SLASH,
    ACTIONS(549), 1,
      anon_sym_STAR,
    ACTIONS(197), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(195), 14,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [11048] = 12,
    ACTIONS(545), 1,
      anon_sym_SLASH,
    ACTIONS(549), 1,
      anon_sym_STAR,
    ACTIONS(559), 1,
      anon_sym_not,
    ACTIONS(561), 1,
      anon_sym_and,
    ACTIONS(563), 1,
      anon_sym_or,
    ACTIONS(571), 1,
      anon_sym_LBRACK,
    ACTIONS(573), 1,
      anon_sym_LBRACE,
    ACTIONS(547), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(551), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(172), 2,
      sym_content_block,
      sym_block,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(555), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [11094] = 12,
    ACTIONS(545), 1,
      anon_sym_SLASH,
    ACTIONS(549), 1,
      anon_sym_STAR,
    ACTIONS(559), 1,
      anon_sym_not,
    ACTIONS(561), 1,
      anon_sym_and,
    ACTIONS(563), 1,
      anon_sym_or,
    ACTIONS(575), 1,
      anon_sym_LBRACK,
    ACTIONS(577), 1,
      anon_sym_LBRACE,
    ACTIONS(547), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(551), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(209), 2,
      sym_content_block,
      sym_block,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(555), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [11140] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(237), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(235), 15,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [11168] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(519), 9,
      sym_identifier,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
    ACTIONS(521), 9,
      aux_sym_quote_token1,
      anon_sym_DASH,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
  [11196] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(17), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 15,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [11224] = 12,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(327), 1,
      anon_sym_LBRACK,
    ACTIONS(545), 1,
      anon_sym_SLASH,
    ACTIONS(549), 1,
      anon_sym_STAR,
    ACTIONS(559), 1,
      anon_sym_not,
    ACTIONS(561), 1,
      anon_sym_and,
    ACTIONS(563), 1,
      anon_sym_or,
    ACTIONS(547), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(551), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(191), 2,
      sym_content_block,
      sym_block,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(555), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [11270] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(211), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(213), 15,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [11298] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(197), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(195), 15,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [11326] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(183), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(185), 15,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [11354] = 9,
    ACTIONS(545), 1,
      anon_sym_SLASH,
    ACTIONS(549), 1,
      anon_sym_STAR,
    ACTIONS(559), 1,
      anon_sym_not,
    ACTIONS(561), 1,
      anon_sym_and,
    ACTIONS(547), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(551), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(187), 5,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_or,
    ACTIONS(555), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [11394] = 12,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(545), 1,
      anon_sym_SLASH,
    ACTIONS(549), 1,
      anon_sym_STAR,
    ACTIONS(559), 1,
      anon_sym_not,
    ACTIONS(561), 1,
      anon_sym_and,
    ACTIONS(563), 1,
      anon_sym_or,
    ACTIONS(547), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(551), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(201), 2,
      sym_content_block,
      sym_block,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(555), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [11440] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(221), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(219), 15,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [11468] = 12,
    ACTIONS(545), 1,
      anon_sym_SLASH,
    ACTIONS(549), 1,
      anon_sym_STAR,
    ACTIONS(559), 1,
      anon_sym_not,
    ACTIONS(561), 1,
      anon_sym_and,
    ACTIONS(563), 1,
      anon_sym_or,
    ACTIONS(579), 1,
      anon_sym_LBRACK,
    ACTIONS(581), 1,
      anon_sym_LBRACE,
    ACTIONS(547), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(551), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(246), 2,
      sym_content_block,
      sym_block,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(555), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [11514] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(233), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(231), 15,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [11542] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(191), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(193), 15,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [11570] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(207), 9,
      sym_identifier,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
    ACTIONS(209), 9,
      aux_sym_quote_token1,
      anon_sym_DASH,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
  [11598] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(183), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(185), 15,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [11626] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(219), 9,
      aux_sym_quote_token1,
      anon_sym_DASH,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
    ACTIONS(221), 9,
      sym_identifier,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
  [11654] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(207), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 15,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [11682] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(199), 9,
      aux_sym_quote_token1,
      anon_sym_DASH,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
    ACTIONS(201), 9,
      sym_identifier,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
  [11710] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(215), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(217), 15,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [11738] = 8,
    ACTIONS(545), 1,
      anon_sym_SLASH,
    ACTIONS(549), 1,
      anon_sym_STAR,
    ACTIONS(559), 1,
      anon_sym_not,
    ACTIONS(547), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(551), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(555), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(187), 6,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_and,
      anon_sym_or,
  [11776] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(247), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(249), 15,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [11804] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(527), 9,
      sym_identifier,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
    ACTIONS(529), 9,
      aux_sym_quote_token1,
      anon_sym_DASH,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
  [11832] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(531), 9,
      sym_identifier,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
    ACTIONS(533), 9,
      aux_sym_quote_token1,
      anon_sym_DASH,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
  [11860] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(227), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(229), 15,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [11888] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(245), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(243), 15,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_in,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [11916] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(143), 8,
      aux_sym_quote_token1,
      anon_sym_DASH,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
    ACTIONS(583), 9,
      sym_identifier,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
  [11943] = 10,
    ACTIONS(545), 1,
      anon_sym_SLASH,
    ACTIONS(549), 1,
      anon_sym_STAR,
    ACTIONS(559), 1,
      anon_sym_not,
    ACTIONS(561), 1,
      anon_sym_and,
    ACTIONS(563), 1,
      anon_sym_or,
    ACTIONS(547), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(551), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(585), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(555), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [11983] = 10,
    ACTIONS(545), 1,
      anon_sym_SLASH,
    ACTIONS(549), 1,
      anon_sym_STAR,
    ACTIONS(559), 1,
      anon_sym_not,
    ACTIONS(561), 1,
      anon_sym_and,
    ACTIONS(563), 1,
      anon_sym_or,
    ACTIONS(541), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(547), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(551), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(555), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [12023] = 5,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(327), 1,
      anon_sym_LBRACK,
    ACTIONS(587), 1,
      anon_sym_if,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(190), 3,
      sym_content_block,
      sym_if_expression,
      sym_block,
  [12043] = 5,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(589), 1,
      anon_sym_if,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(203), 3,
      sym_content_block,
      sym_if_expression,
      sym_block,
  [12063] = 5,
    ACTIONS(579), 1,
      anon_sym_LBRACK,
    ACTIONS(581), 1,
      anon_sym_LBRACE,
    ACTIONS(591), 1,
      anon_sym_if,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(245), 3,
      sym_content_block,
      sym_if_expression,
      sym_block,
  [12083] = 5,
    ACTIONS(593), 1,
      anon_sym_DQUOTE,
    ACTIONS(595), 1,
      sym__not_an_escape_sequence,
    STATE(256), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(597), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12102] = 5,
    ACTIONS(599), 1,
      anon_sym_DQUOTE,
    ACTIONS(601), 1,
      sym__not_an_escape_sequence,
    STATE(256), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(604), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12121] = 5,
    ACTIONS(595), 1,
      sym__not_an_escape_sequence,
    ACTIONS(607), 1,
      anon_sym_DQUOTE,
    STATE(256), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(597), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12140] = 6,
    ACTIONS(609), 1,
      anon_sym_COMMA,
    ACTIONS(611), 1,
      anon_sym_in,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    STATE(287), 1,
      aux_sym_pattern_list_repeat1,
    STATE(292), 1,
      sym_parameters,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12161] = 6,
    ACTIONS(611), 1,
      anon_sym_EQ,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(615), 1,
      anon_sym_COMMA,
    STATE(286), 1,
      aux_sym_pattern_list_repeat1,
    STATE(292), 1,
      sym_parameters,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12182] = 4,
    STATE(260), 1,
      aux_sym_quote_repeat1,
    ACTIONS(617), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(619), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12199] = 5,
    ACTIONS(595), 1,
      sym__not_an_escape_sequence,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    STATE(256), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(597), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12218] = 5,
    ACTIONS(624), 1,
      anon_sym_DQUOTE,
    ACTIONS(626), 1,
      sym__not_an_escape_sequence,
    STATE(257), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(628), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12237] = 5,
    ACTIONS(630), 1,
      anon_sym_DQUOTE,
    ACTIONS(632), 1,
      sym__not_an_escape_sequence,
    STATE(266), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(634), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12256] = 5,
    ACTIONS(636), 1,
      anon_sym_DQUOTE,
    ACTIONS(638), 1,
      sym__not_an_escape_sequence,
    STATE(255), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(640), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12275] = 5,
    ACTIONS(642), 1,
      anon_sym_DQUOTE,
    ACTIONS(644), 1,
      sym__not_an_escape_sequence,
    STATE(261), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(646), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12294] = 5,
    ACTIONS(595), 1,
      sym__not_an_escape_sequence,
    ACTIONS(648), 1,
      anon_sym_DQUOTE,
    STATE(256), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(597), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12313] = 4,
    ACTIONS(650), 1,
      anon_sym_DQUOTE,
    STATE(275), 1,
      aux_sym_quote_repeat1,
    ACTIONS(652), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12329] = 3,
    ACTIONS(654), 1,
      sym_identifier,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(326), 3,
      sym__left_hand_side,
      sym_pattern_list,
      sym_function,
  [12343] = 4,
    ACTIONS(648), 1,
      anon_sym_SQUOTE,
    STATE(260), 1,
      aux_sym_quote_repeat1,
    ACTIONS(656), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12359] = 3,
    ACTIONS(658), 1,
      sym_identifier,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(311), 3,
      sym__left_hand_side,
      sym_pattern_list,
      sym_function,
  [12373] = 4,
    ACTIONS(662), 1,
      anon_sym_COMMA,
    STATE(271), 1,
      aux_sym_pattern_list_repeat1,
    ACTIONS(660), 2,
      anon_sym_EQ,
      anon_sym_in,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12389] = 4,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    STATE(269), 1,
      aux_sym_quote_repeat1,
    ACTIONS(665), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12405] = 4,
    ACTIONS(667), 1,
      anon_sym_DQUOTE,
    STATE(280), 1,
      aux_sym_quote_repeat1,
    ACTIONS(669), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12421] = 3,
    ACTIONS(658), 1,
      sym_identifier,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(322), 3,
      sym__left_hand_side,
      sym_pattern_list,
      sym_function,
  [12435] = 4,
    ACTIONS(671), 1,
      anon_sym_DQUOTE,
    STATE(260), 1,
      aux_sym_quote_repeat1,
    ACTIONS(656), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12451] = 3,
    ACTIONS(654), 1,
      sym_identifier,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(325), 3,
      sym__left_hand_side,
      sym_pattern_list,
      sym_function,
  [12465] = 4,
    ACTIONS(593), 1,
      anon_sym_SQUOTE,
    STATE(260), 1,
      aux_sym_quote_repeat1,
    ACTIONS(656), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12481] = 4,
    ACTIONS(642), 1,
      anon_sym_SQUOTE,
    STATE(282), 1,
      aux_sym_quote_repeat1,
    ACTIONS(673), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12497] = 4,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    STATE(260), 1,
      aux_sym_quote_repeat1,
    ACTIONS(656), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12513] = 4,
    ACTIONS(675), 1,
      anon_sym_DQUOTE,
    STATE(260), 1,
      aux_sym_quote_repeat1,
    ACTIONS(656), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12529] = 3,
    ACTIONS(658), 1,
      sym_identifier,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(312), 3,
      sym__left_hand_side,
      sym_pattern_list,
      sym_function,
  [12543] = 4,
    ACTIONS(622), 1,
      anon_sym_SQUOTE,
    STATE(260), 1,
      aux_sym_quote_repeat1,
    ACTIONS(656), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12559] = 3,
    ACTIONS(654), 1,
      sym_identifier,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(324), 3,
      sym__left_hand_side,
      sym_pattern_list,
      sym_function,
  [12573] = 4,
    ACTIONS(636), 1,
      anon_sym_SQUOTE,
    STATE(277), 1,
      aux_sym_quote_repeat1,
    ACTIONS(677), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12589] = 4,
    ACTIONS(624), 1,
      anon_sym_SQUOTE,
    STATE(279), 1,
      aux_sym_quote_repeat1,
    ACTIONS(679), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12605] = 4,
    ACTIONS(681), 1,
      anon_sym_EQ,
    ACTIONS(683), 1,
      anon_sym_COMMA,
    STATE(271), 1,
      aux_sym_pattern_list_repeat1,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12620] = 4,
    ACTIONS(681), 1,
      anon_sym_in,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    STATE(271), 1,
      aux_sym_pattern_list_repeat1,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12635] = 2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(660), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_in,
  [12646] = 4,
    ACTIONS(475), 1,
      anon_sym_RPAREN,
    ACTIONS(687), 1,
      anon_sym_COMMA,
    STATE(291), 1,
      aux_sym__parameters_repeat1,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12661] = 4,
    ACTIONS(689), 1,
      anon_sym_COMMA,
    ACTIONS(691), 1,
      anon_sym_RPAREN,
    STATE(289), 1,
      aux_sym__parameters_repeat1,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12676] = 4,
    ACTIONS(693), 1,
      anon_sym_COMMA,
    ACTIONS(696), 1,
      anon_sym_RPAREN,
    STATE(291), 1,
      aux_sym__parameters_repeat1,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12691] = 2,
    ACTIONS(249), 2,
      anon_sym_EQ,
      anon_sym_in,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12701] = 3,
    ACTIONS(698), 1,
      sym_identifier,
    ACTIONS(700), 1,
      anon_sym_EQ,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12713] = 3,
    ACTIONS(681), 1,
      anon_sym_EQ,
    ACTIONS(698), 1,
      sym_identifier,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12725] = 2,
    ACTIONS(541), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12735] = 3,
    ACTIONS(702), 1,
      sym_identifier,
    ACTIONS(704), 1,
      anon_sym_in,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12747] = 2,
    ACTIONS(243), 2,
      anon_sym_EQ,
      anon_sym_in,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12757] = 2,
    ACTIONS(696), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12767] = 3,
    ACTIONS(702), 1,
      sym_identifier,
    ACTIONS(706), 1,
      anon_sym_in,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12779] = 2,
    ACTIONS(231), 2,
      anon_sym_EQ,
      anon_sym_in,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12789] = 2,
    ACTIONS(708), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12798] = 2,
    ACTIONS(710), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12807] = 2,
    ACTIONS(712), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12816] = 2,
    ACTIONS(714), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12825] = 2,
    ACTIONS(716), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12834] = 2,
    ACTIONS(718), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12843] = 2,
    ACTIONS(720), 1,
      anon_sym_in,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12852] = 2,
    ACTIONS(722), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12861] = 2,
    ACTIONS(724), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12870] = 2,
    ACTIONS(726), 1,
      anon_sym_in,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12879] = 2,
    ACTIONS(728), 1,
      anon_sym_EQ,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12888] = 2,
    ACTIONS(730), 1,
      anon_sym_EQ,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12897] = 2,
    ACTIONS(732), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12906] = 2,
    ACTIONS(734), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12915] = 2,
    ACTIONS(736), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12924] = 2,
    ACTIONS(738), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12933] = 2,
    ACTIONS(740), 1,
      anon_sym_in,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12942] = 2,
    ACTIONS(698), 1,
      sym_identifier,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12951] = 2,
    ACTIONS(742), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12960] = 2,
    ACTIONS(744), 1,
      anon_sym_in,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12969] = 2,
    ACTIONS(746), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12978] = 2,
    ACTIONS(748), 1,
      anon_sym_EQ,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12987] = 2,
    ACTIONS(750), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [12996] = 2,
    ACTIONS(752), 1,
      anon_sym_in,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [13005] = 2,
    ACTIONS(754), 1,
      anon_sym_in,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [13014] = 2,
    ACTIONS(756), 1,
      anon_sym_in,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [13023] = 2,
    ACTIONS(758), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 59,
  [SMALL_STATE(4)] = 118,
  [SMALL_STATE(5)] = 174,
  [SMALL_STATE(6)] = 230,
  [SMALL_STATE(7)] = 289,
  [SMALL_STATE(8)] = 348,
  [SMALL_STATE(9)] = 402,
  [SMALL_STATE(10)] = 486,
  [SMALL_STATE(11)] = 570,
  [SMALL_STATE(12)] = 654,
  [SMALL_STATE(13)] = 738,
  [SMALL_STATE(14)] = 822,
  [SMALL_STATE(15)] = 906,
  [SMALL_STATE(16)] = 990,
  [SMALL_STATE(17)] = 1074,
  [SMALL_STATE(18)] = 1158,
  [SMALL_STATE(19)] = 1242,
  [SMALL_STATE(20)] = 1293,
  [SMALL_STATE(21)] = 1358,
  [SMALL_STATE(22)] = 1439,
  [SMALL_STATE(23)] = 1520,
  [SMALL_STATE(24)] = 1585,
  [SMALL_STATE(25)] = 1629,
  [SMALL_STATE(26)] = 1685,
  [SMALL_STATE(27)] = 1729,
  [SMALL_STATE(28)] = 1777,
  [SMALL_STATE(29)] = 1821,
  [SMALL_STATE(30)] = 1865,
  [SMALL_STATE(31)] = 1915,
  [SMALL_STATE(32)] = 1959,
  [SMALL_STATE(33)] = 2003,
  [SMALL_STATE(34)] = 2047,
  [SMALL_STATE(35)] = 2091,
  [SMALL_STATE(36)] = 2135,
  [SMALL_STATE(37)] = 2179,
  [SMALL_STATE(38)] = 2223,
  [SMALL_STATE(39)] = 2273,
  [SMALL_STATE(40)] = 2317,
  [SMALL_STATE(41)] = 2361,
  [SMALL_STATE(42)] = 2405,
  [SMALL_STATE(43)] = 2449,
  [SMALL_STATE(44)] = 2507,
  [SMALL_STATE(45)] = 2551,
  [SMALL_STATE(46)] = 2595,
  [SMALL_STATE(47)] = 2639,
  [SMALL_STATE(48)] = 2683,
  [SMALL_STATE(49)] = 2727,
  [SMALL_STATE(50)] = 2771,
  [SMALL_STATE(51)] = 2831,
  [SMALL_STATE(52)] = 2875,
  [SMALL_STATE(53)] = 2919,
  [SMALL_STATE(54)] = 2967,
  [SMALL_STATE(55)] = 3011,
  [SMALL_STATE(56)] = 3055,
  [SMALL_STATE(57)] = 3099,
  [SMALL_STATE(58)] = 3143,
  [SMALL_STATE(59)] = 3187,
  [SMALL_STATE(60)] = 3237,
  [SMALL_STATE(61)] = 3297,
  [SMALL_STATE(62)] = 3341,
  [SMALL_STATE(63)] = 3399,
  [SMALL_STATE(64)] = 3443,
  [SMALL_STATE(65)] = 3499,
  [SMALL_STATE(66)] = 3549,
  [SMALL_STATE(67)] = 3626,
  [SMALL_STATE(68)] = 3703,
  [SMALL_STATE(69)] = 3762,
  [SMALL_STATE(70)] = 3809,
  [SMALL_STATE(71)] = 3856,
  [SMALL_STATE(72)] = 3903,
  [SMALL_STATE(73)] = 3950,
  [SMALL_STATE(74)] = 4009,
  [SMALL_STATE(75)] = 4061,
  [SMALL_STATE(76)] = 4113,
  [SMALL_STATE(77)] = 4165,
  [SMALL_STATE(78)] = 4217,
  [SMALL_STATE(79)] = 4269,
  [SMALL_STATE(80)] = 4321,
  [SMALL_STATE(81)] = 4373,
  [SMALL_STATE(82)] = 4425,
  [SMALL_STATE(83)] = 4477,
  [SMALL_STATE(84)] = 4529,
  [SMALL_STATE(85)] = 4581,
  [SMALL_STATE(86)] = 4633,
  [SMALL_STATE(87)] = 4685,
  [SMALL_STATE(88)] = 4734,
  [SMALL_STATE(89)] = 4783,
  [SMALL_STATE(90)] = 4832,
  [SMALL_STATE(91)] = 4881,
  [SMALL_STATE(92)] = 4930,
  [SMALL_STATE(93)] = 4979,
  [SMALL_STATE(94)] = 5028,
  [SMALL_STATE(95)] = 5077,
  [SMALL_STATE(96)] = 5126,
  [SMALL_STATE(97)] = 5175,
  [SMALL_STATE(98)] = 5245,
  [SMALL_STATE(99)] = 5315,
  [SMALL_STATE(100)] = 5385,
  [SMALL_STATE(101)] = 5455,
  [SMALL_STATE(102)] = 5513,
  [SMALL_STATE(103)] = 5583,
  [SMALL_STATE(104)] = 5622,
  [SMALL_STATE(105)] = 5673,
  [SMALL_STATE(106)] = 5712,
  [SMALL_STATE(107)] = 5751,
  [SMALL_STATE(108)] = 5790,
  [SMALL_STATE(109)] = 5829,
  [SMALL_STATE(110)] = 5868,
  [SMALL_STATE(111)] = 5907,
  [SMALL_STATE(112)] = 5974,
  [SMALL_STATE(113)] = 6029,
  [SMALL_STATE(114)] = 6074,
  [SMALL_STATE(115)] = 6141,
  [SMALL_STATE(116)] = 6194,
  [SMALL_STATE(117)] = 6233,
  [SMALL_STATE(118)] = 6278,
  [SMALL_STATE(119)] = 6321,
  [SMALL_STATE(120)] = 6360,
  [SMALL_STATE(121)] = 6399,
  [SMALL_STATE(122)] = 6438,
  [SMALL_STATE(123)] = 6493,
  [SMALL_STATE(124)] = 6532,
  [SMALL_STATE(125)] = 6571,
  [SMALL_STATE(126)] = 6610,
  [SMALL_STATE(127)] = 6649,
  [SMALL_STATE(128)] = 6713,
  [SMALL_STATE(129)] = 6754,
  [SMALL_STATE(130)] = 6812,
  [SMALL_STATE(131)] = 6870,
  [SMALL_STATE(132)] = 6928,
  [SMALL_STATE(133)] = 6986,
  [SMALL_STATE(134)] = 7044,
  [SMALL_STATE(135)] = 7102,
  [SMALL_STATE(136)] = 7160,
  [SMALL_STATE(137)] = 7218,
  [SMALL_STATE(138)] = 7276,
  [SMALL_STATE(139)] = 7334,
  [SMALL_STATE(140)] = 7392,
  [SMALL_STATE(141)] = 7450,
  [SMALL_STATE(142)] = 7508,
  [SMALL_STATE(143)] = 7566,
  [SMALL_STATE(144)] = 7624,
  [SMALL_STATE(145)] = 7682,
  [SMALL_STATE(146)] = 7740,
  [SMALL_STATE(147)] = 7798,
  [SMALL_STATE(148)] = 7856,
  [SMALL_STATE(149)] = 7914,
  [SMALL_STATE(150)] = 7972,
  [SMALL_STATE(151)] = 8030,
  [SMALL_STATE(152)] = 8088,
  [SMALL_STATE(153)] = 8146,
  [SMALL_STATE(154)] = 8204,
  [SMALL_STATE(155)] = 8262,
  [SMALL_STATE(156)] = 8320,
  [SMALL_STATE(157)] = 8378,
  [SMALL_STATE(158)] = 8436,
  [SMALL_STATE(159)] = 8494,
  [SMALL_STATE(160)] = 8552,
  [SMALL_STATE(161)] = 8610,
  [SMALL_STATE(162)] = 8650,
  [SMALL_STATE(163)] = 8708,
  [SMALL_STATE(164)] = 8766,
  [SMALL_STATE(165)] = 8824,
  [SMALL_STATE(166)] = 8882,
  [SMALL_STATE(167)] = 8940,
  [SMALL_STATE(168)] = 8998,
  [SMALL_STATE(169)] = 9056,
  [SMALL_STATE(170)] = 9114,
  [SMALL_STATE(171)] = 9172,
  [SMALL_STATE(172)] = 9230,
  [SMALL_STATE(173)] = 9270,
  [SMALL_STATE(174)] = 9328,
  [SMALL_STATE(175)] = 9386,
  [SMALL_STATE(176)] = 9444,
  [SMALL_STATE(177)] = 9502,
  [SMALL_STATE(178)] = 9543,
  [SMALL_STATE(179)] = 9578,
  [SMALL_STATE(180)] = 9613,
  [SMALL_STATE(181)] = 9648,
  [SMALL_STATE(182)] = 9683,
  [SMALL_STATE(183)] = 9724,
  [SMALL_STATE(184)] = 9759,
  [SMALL_STATE(185)] = 9794,
  [SMALL_STATE(186)] = 9828,
  [SMALL_STATE(187)] = 9862,
  [SMALL_STATE(188)] = 9896,
  [SMALL_STATE(189)] = 9930,
  [SMALL_STATE(190)] = 9964,
  [SMALL_STATE(191)] = 9998,
  [SMALL_STATE(192)] = 10032,
  [SMALL_STATE(193)] = 10066,
  [SMALL_STATE(194)] = 10100,
  [SMALL_STATE(195)] = 10140,
  [SMALL_STATE(196)] = 10174,
  [SMALL_STATE(197)] = 10208,
  [SMALL_STATE(198)] = 10242,
  [SMALL_STATE(199)] = 10276,
  [SMALL_STATE(200)] = 10310,
  [SMALL_STATE(201)] = 10344,
  [SMALL_STATE(202)] = 10378,
  [SMALL_STATE(203)] = 10412,
  [SMALL_STATE(204)] = 10446,
  [SMALL_STATE(205)] = 10480,
  [SMALL_STATE(206)] = 10514,
  [SMALL_STATE(207)] = 10548,
  [SMALL_STATE(208)] = 10582,
  [SMALL_STATE(209)] = 10625,
  [SMALL_STATE(210)] = 10659,
  [SMALL_STATE(211)] = 10688,
  [SMALL_STATE(212)] = 10717,
  [SMALL_STATE(213)] = 10746,
  [SMALL_STATE(214)] = 10780,
  [SMALL_STATE(215)] = 10808,
  [SMALL_STATE(216)] = 10854,
  [SMALL_STATE(217)] = 10884,
  [SMALL_STATE(218)] = 10926,
  [SMALL_STATE(219)] = 10954,
  [SMALL_STATE(220)] = 10982,
  [SMALL_STATE(221)] = 11016,
  [SMALL_STATE(222)] = 11048,
  [SMALL_STATE(223)] = 11094,
  [SMALL_STATE(224)] = 11140,
  [SMALL_STATE(225)] = 11168,
  [SMALL_STATE(226)] = 11196,
  [SMALL_STATE(227)] = 11224,
  [SMALL_STATE(228)] = 11270,
  [SMALL_STATE(229)] = 11298,
  [SMALL_STATE(230)] = 11326,
  [SMALL_STATE(231)] = 11354,
  [SMALL_STATE(232)] = 11394,
  [SMALL_STATE(233)] = 11440,
  [SMALL_STATE(234)] = 11468,
  [SMALL_STATE(235)] = 11514,
  [SMALL_STATE(236)] = 11542,
  [SMALL_STATE(237)] = 11570,
  [SMALL_STATE(238)] = 11598,
  [SMALL_STATE(239)] = 11626,
  [SMALL_STATE(240)] = 11654,
  [SMALL_STATE(241)] = 11682,
  [SMALL_STATE(242)] = 11710,
  [SMALL_STATE(243)] = 11738,
  [SMALL_STATE(244)] = 11776,
  [SMALL_STATE(245)] = 11804,
  [SMALL_STATE(246)] = 11832,
  [SMALL_STATE(247)] = 11860,
  [SMALL_STATE(248)] = 11888,
  [SMALL_STATE(249)] = 11916,
  [SMALL_STATE(250)] = 11943,
  [SMALL_STATE(251)] = 11983,
  [SMALL_STATE(252)] = 12023,
  [SMALL_STATE(253)] = 12043,
  [SMALL_STATE(254)] = 12063,
  [SMALL_STATE(255)] = 12083,
  [SMALL_STATE(256)] = 12102,
  [SMALL_STATE(257)] = 12121,
  [SMALL_STATE(258)] = 12140,
  [SMALL_STATE(259)] = 12161,
  [SMALL_STATE(260)] = 12182,
  [SMALL_STATE(261)] = 12199,
  [SMALL_STATE(262)] = 12218,
  [SMALL_STATE(263)] = 12237,
  [SMALL_STATE(264)] = 12256,
  [SMALL_STATE(265)] = 12275,
  [SMALL_STATE(266)] = 12294,
  [SMALL_STATE(267)] = 12313,
  [SMALL_STATE(268)] = 12329,
  [SMALL_STATE(269)] = 12343,
  [SMALL_STATE(270)] = 12359,
  [SMALL_STATE(271)] = 12373,
  [SMALL_STATE(272)] = 12389,
  [SMALL_STATE(273)] = 12405,
  [SMALL_STATE(274)] = 12421,
  [SMALL_STATE(275)] = 12435,
  [SMALL_STATE(276)] = 12451,
  [SMALL_STATE(277)] = 12465,
  [SMALL_STATE(278)] = 12481,
  [SMALL_STATE(279)] = 12497,
  [SMALL_STATE(280)] = 12513,
  [SMALL_STATE(281)] = 12529,
  [SMALL_STATE(282)] = 12543,
  [SMALL_STATE(283)] = 12559,
  [SMALL_STATE(284)] = 12573,
  [SMALL_STATE(285)] = 12589,
  [SMALL_STATE(286)] = 12605,
  [SMALL_STATE(287)] = 12620,
  [SMALL_STATE(288)] = 12635,
  [SMALL_STATE(289)] = 12646,
  [SMALL_STATE(290)] = 12661,
  [SMALL_STATE(291)] = 12676,
  [SMALL_STATE(292)] = 12691,
  [SMALL_STATE(293)] = 12701,
  [SMALL_STATE(294)] = 12713,
  [SMALL_STATE(295)] = 12725,
  [SMALL_STATE(296)] = 12735,
  [SMALL_STATE(297)] = 12747,
  [SMALL_STATE(298)] = 12757,
  [SMALL_STATE(299)] = 12767,
  [SMALL_STATE(300)] = 12779,
  [SMALL_STATE(301)] = 12789,
  [SMALL_STATE(302)] = 12798,
  [SMALL_STATE(303)] = 12807,
  [SMALL_STATE(304)] = 12816,
  [SMALL_STATE(305)] = 12825,
  [SMALL_STATE(306)] = 12834,
  [SMALL_STATE(307)] = 12843,
  [SMALL_STATE(308)] = 12852,
  [SMALL_STATE(309)] = 12861,
  [SMALL_STATE(310)] = 12870,
  [SMALL_STATE(311)] = 12879,
  [SMALL_STATE(312)] = 12888,
  [SMALL_STATE(313)] = 12897,
  [SMALL_STATE(314)] = 12906,
  [SMALL_STATE(315)] = 12915,
  [SMALL_STATE(316)] = 12924,
  [SMALL_STATE(317)] = 12933,
  [SMALL_STATE(318)] = 12942,
  [SMALL_STATE(319)] = 12951,
  [SMALL_STATE(320)] = 12960,
  [SMALL_STATE(321)] = 12969,
  [SMALL_STATE(322)] = 12978,
  [SMALL_STATE(323)] = 12987,
  [SMALL_STATE(324)] = 12996,
  [SMALL_STATE(325)] = 13005,
  [SMALL_STATE(326)] = 13014,
  [SMALL_STATE(327)] = 13023,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 4, .production_id = 6),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 4, .production_id = 6),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(19),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(263),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(155),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(90),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(281),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(143),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(283),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(12),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(123),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(124),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(8),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(8),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(272),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(159),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statements, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operator, 2, .production_id = 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operator, 2, .production_id = 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_operator, 3, .production_id = 4),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_operator, 3, .production_id = 4),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 3, .production_id = 4),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 3, .production_id = 4),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content_block, 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content_block, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 4, .production_id = 8),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 4, .production_id = 8),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 3, .production_id = 4),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 3, .production_id = 4),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_augmented_assignment, 3, .production_id = 4),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_augmented_assignment, 3, .production_id = 4),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 2),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 2, .production_id = 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 2, .production_id = 1),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__code_block, 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__code_block, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [339] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(267),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(88),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(85),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(273),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(85),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(96),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 2),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 3),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 3, .production_id = 5),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 3, .production_id = 5),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text, 2),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__text, 2),
  [499] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text, 2), SHIFT_REPEAT(177),
  [502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text, 2), SHIFT_REPEAT(177),
  [505] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text, 2), SHIFT_REPEAT(182),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text, 2), SHIFT_REPEAT(182),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 3),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 3),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 4, .production_id = 7),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 4, .production_id = 7),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 5, .production_id = 6),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 5, .production_id = 6),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_expression, 5, .production_id = 10),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_expression, 5, .production_id = 10),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 1),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 1),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_parameter, 3, .production_id = 9),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [601] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(256),
  [604] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(256),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__left_hand_side, 1),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2),
  [619] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2), SHIFT_REPEAT(260),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_list_repeat1, 2),
  [662] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_list_repeat1, 2), SHIFT_REPEAT(318),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_list, 2),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 1),
  [693] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2), SHIFT_REPEAT(127),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_list, 3),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_list, 2),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_list, 3),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [750] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
