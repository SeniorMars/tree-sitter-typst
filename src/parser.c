#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 463
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 129
#define ALIAS_COUNT 1
#define TOKEN_COUNT 77
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 18

enum {
  sym_identifier = 1,
  sym__whitespace = 2,
  sym_line_comment = 3,
  sym_line_break = 4,
  anon_sym_DQUOTE = 5,
  aux_sym__text_token1 = 6,
  anon_sym_SLASH = 7,
  anon_sym_TILDE = 8,
  anon_sym_DASH = 9,
  anon_sym_DOT = 10,
  anon_sym_COLON = 11,
  anon_sym_STAR = 12,
  anon_sym__ = 13,
  anon_sym_BQUOTE = 14,
  anon_sym_DOLLAR = 15,
  anon_sym_EQ = 16,
  anon_sym_LT = 17,
  anon_sym_GT = 18,
  anon_sym_AT = 19,
  anon_sym_COMMA = 20,
  anon_sym_SEMI = 21,
  anon_sym_QMARK = 22,
  anon_sym_BANG = 23,
  anon_sym_POUND = 24,
  anon_sym_LBRACE = 25,
  anon_sym_RBRACE = 26,
  anon_sym_LBRACK = 27,
  anon_sym_RBRACK = 28,
  anon_sym_LPAREN = 29,
  anon_sym_RPAREN = 30,
  anon_sym_COMMA2 = 31,
  anon_sym_SEMI2 = 32,
  anon_sym_break = 33,
  anon_sym_continue = 34,
  anon_sym_let = 35,
  anon_sym_if = 36,
  anon_sym_else = 37,
  anon_sym_while = 38,
  anon_sym_for = 39,
  anon_sym_in = 40,
  anon_sym_EQ_GT = 41,
  anon_sym_DOT_DOT = 42,
  anon_sym_DOT2 = 43,
  anon_sym_SQUOTE = 44,
  anon_sym_QMARK2 = 45,
  anon_sym_BANG2 = 46,
  sym_none = 47,
  anon_sym_true = 48,
  anon_sym_false = 49,
  sym_int_literal = 50,
  sym_float_literal = 51,
  anon_sym_pt = 52,
  anon_sym_mm = 53,
  anon_sym_cm = 54,
  anon_sym_deg = 55,
  anon_sym_rad = 56,
  anon_sym_em = 57,
  anon_sym_fr = 58,
  anon_sym_PERCENT = 59,
  aux_sym_string_literal_token1 = 60,
  sym__not_an_escape_sequence = 61,
  sym_escape_sequence = 62,
  anon_sym_PLUS = 63,
  anon_sym_not = 64,
  anon_sym_and = 65,
  anon_sym_or = 66,
  anon_sym_LT_EQ = 67,
  anon_sym_EQ_EQ = 68,
  anon_sym_BANG_EQ = 69,
  anon_sym_GT_EQ = 70,
  anon_sym_PLUS_EQ = 71,
  anon_sym_DASH_EQ = 72,
  anon_sym_STAR_EQ = 73,
  anon_sym_SLASH_EQ = 74,
  sym__string_content = 75,
  sym_block_comment = 76,
  sym_source_file = 77,
  sym__markup = 78,
  sym_quote = 79,
  aux_sym__text = 80,
  sym__code_mode = 81,
  sym__code_block = 82,
  sym_code_block = 83,
  sym_content_block = 84,
  sym_parenthesized_expression = 85,
  sym_array = 86,
  sym__array = 87,
  aux_sym__weird_edge_case = 88,
  sym__statements = 89,
  sym__expression_statement = 90,
  sym__control_flow = 91,
  sym_break_statement = 92,
  sym_continue_statement = 93,
  sym_let_declaration = 94,
  sym_if_expression = 95,
  sym_else_clause = 96,
  sym_while_expression = 97,
  sym_for_expression = 98,
  sym_unnamed_function = 99,
  sym__unnamed_arguments = 100,
  sym_parameters = 101,
  sym__parameters = 102,
  sym__parameter = 103,
  sym_asssigned_parameter = 104,
  sym_function = 105,
  sym_pattern = 106,
  sym_pattern_list = 107,
  sym__literal = 108,
  sym_expression = 109,
  sym_assignment = 110,
  sym_function_call = 111,
  sym_boolean_literal = 112,
  sym_unit = 113,
  sym_numeric = 114,
  sym_string_literal = 115,
  sym_unary_operator = 116,
  sym_not_operator = 117,
  sym_boolean_operator = 118,
  sym_binary_operator = 119,
  sym_comparison_operator = 120,
  sym_augmented_assignment = 121,
  aux_sym_source_file_repeat1 = 122,
  aux_sym_quote_repeat1 = 123,
  aux_sym__array_repeat1 = 124,
  aux_sym__statements_repeat1 = 125,
  aux_sym__unnamed_arguments_repeat1 = 126,
  aux_sym_pattern_list_repeat1 = 127,
  aux_sym_string_literal_repeat1 = 128,
  anon_alias_sym_notin = 129,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym__whitespace] = "_whitespace",
  [sym_line_comment] = "line_comment",
  [sym_line_break] = "line_break",
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
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA2] = ",",
  [anon_sym_SEMI2] = ";",
  [anon_sym_break] = "break",
  [anon_sym_continue] = "continue",
  [anon_sym_let] = "let",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_while] = "while",
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_DOT2] = ".",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_QMARK2] = "\?",
  [anon_sym_BANG2] = "!",
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
  [sym__code_block] = "_code_block",
  [sym_code_block] = "code_block",
  [sym_content_block] = "content_block",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_array] = "array",
  [sym__array] = "_array",
  [aux_sym__weird_edge_case] = "_weird_edge_case",
  [sym__statements] = "_statements",
  [sym__expression_statement] = "_expression_statement",
  [sym__control_flow] = "_control_flow",
  [sym_break_statement] = "break_statement",
  [sym_continue_statement] = "continue_statement",
  [sym_let_declaration] = "let_declaration",
  [sym_if_expression] = "if_expression",
  [sym_else_clause] = "else_clause",
  [sym_while_expression] = "while_expression",
  [sym_for_expression] = "for_expression",
  [sym_unnamed_function] = "unnamed_function",
  [sym__unnamed_arguments] = "_unnamed_arguments",
  [sym_parameters] = "parameters",
  [sym__parameters] = "_parameters",
  [sym__parameter] = "_parameter",
  [sym_asssigned_parameter] = "asssigned_parameter",
  [sym_function] = "function",
  [sym_pattern] = "pattern",
  [sym_pattern_list] = "pattern_list",
  [sym__literal] = "_literal",
  [sym_expression] = "expression",
  [sym_assignment] = "assignment",
  [sym_function_call] = "function_call",
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
  [aux_sym__array_repeat1] = "_array_repeat1",
  [aux_sym__statements_repeat1] = "_statements_repeat1",
  [aux_sym__unnamed_arguments_repeat1] = "_unnamed_arguments_repeat1",
  [aux_sym_pattern_list_repeat1] = "pattern_list_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [anon_alias_sym_notin] = "not in",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym__whitespace] = sym__whitespace,
  [sym_line_comment] = sym_line_comment,
  [sym_line_break] = sym_line_break,
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
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA2] = anon_sym_COMMA,
  [anon_sym_SEMI2] = anon_sym_SEMI,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_continue] = anon_sym_continue,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_DOT2] = anon_sym_DOT,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_QMARK2] = anon_sym_QMARK,
  [anon_sym_BANG2] = anon_sym_BANG,
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
  [sym__code_block] = sym__code_block,
  [sym_code_block] = sym_code_block,
  [sym_content_block] = sym_content_block,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_array] = sym_array,
  [sym__array] = sym__array,
  [aux_sym__weird_edge_case] = aux_sym__weird_edge_case,
  [sym__statements] = sym__statements,
  [sym__expression_statement] = sym__expression_statement,
  [sym__control_flow] = sym__control_flow,
  [sym_break_statement] = sym_break_statement,
  [sym_continue_statement] = sym_continue_statement,
  [sym_let_declaration] = sym_let_declaration,
  [sym_if_expression] = sym_if_expression,
  [sym_else_clause] = sym_else_clause,
  [sym_while_expression] = sym_while_expression,
  [sym_for_expression] = sym_for_expression,
  [sym_unnamed_function] = sym_unnamed_function,
  [sym__unnamed_arguments] = sym__unnamed_arguments,
  [sym_parameters] = sym_parameters,
  [sym__parameters] = sym__parameters,
  [sym__parameter] = sym__parameter,
  [sym_asssigned_parameter] = sym_asssigned_parameter,
  [sym_function] = sym_function,
  [sym_pattern] = sym_pattern,
  [sym_pattern_list] = sym_pattern_list,
  [sym__literal] = sym__literal,
  [sym_expression] = sym_expression,
  [sym_assignment] = sym_assignment,
  [sym_function_call] = sym_function_call,
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
  [aux_sym__array_repeat1] = aux_sym__array_repeat1,
  [aux_sym__statements_repeat1] = aux_sym__statements_repeat1,
  [aux_sym__unnamed_arguments_repeat1] = aux_sym__unnamed_arguments_repeat1,
  [aux_sym_pattern_list_repeat1] = aux_sym_pattern_list_repeat1,
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
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
  [anon_sym_while] = {
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
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG2] = {
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
  [sym__code_block] = {
    .visible = false,
    .named = true,
  },
  [sym_code_block] = {
    .visible = true,
    .named = true,
  },
  [sym_content_block] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym__array] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__weird_edge_case] = {
    .visible = false,
    .named = false,
  },
  [sym__statements] = {
    .visible = false,
    .named = true,
  },
  [sym__expression_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__control_flow] = {
    .visible = false,
    .named = true,
  },
  [sym_break_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_continue_statement] = {
    .visible = true,
    .named = true,
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
  [sym_while_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_for_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unnamed_function] = {
    .visible = true,
    .named = true,
  },
  [sym__unnamed_arguments] = {
    .visible = false,
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
  [sym__parameter] = {
    .visible = false,
    .named = true,
  },
  [sym_asssigned_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern_list] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
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
  [aux_sym__array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__statements_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__unnamed_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pattern_list_repeat1] = {
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
  field_arguments = 3,
  field_body = 4,
  field_condition = 5,
  field_consequence = 6,
  field_field = 7,
  field_function = 8,
  field_left = 9,
  field_lhs = 10,
  field_name = 11,
  field_operator = 12,
  field_parameters = 13,
  field_rhs = 14,
  field_right = 15,
  field_value = 16,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_argument] = "argument",
  [field_arguments] = "arguments",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_field] = "field",
  [field_function] = "function",
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
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 3},
  [8] = {.index = 13, .length = 2},
  [9] = {.index = 15, .length = 2},
  [10] = {.index = 17, .length = 2},
  [11] = {.index = 19, .length = 2},
  [12] = {.index = 21, .length = 3},
  [13] = {.index = 24, .length = 2},
  [14] = {.index = 26, .length = 2},
  [15] = {.index = 28, .length = 3},
  [16] = {.index = 31, .length = 4},
  [17] = {.index = 35, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_function, 0},
  [1] =
    {field_arguments, 1},
    {field_function, 0},
  [3] =
    {field_argument, 1},
    {field_operator, 0},
  [5] =
    {field_argument, 1},
  [6] =
    {field_lhs, 0},
    {field_rhs, 2},
  [8] =
    {field_field, 2},
    {field_function, 0},
  [10] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [13] =
    {field_name, 0},
    {field_parameters, 1},
  [15] =
    {field_condition, 1},
    {field_consequence, 2},
  [17] =
    {field_body, 2},
    {field_condition, 1},
  [19] =
    {field_arguments, 0},
    {field_body, 2},
  [21] =
    {field_arguments, 1},
    {field_field, 3},
    {field_function, 0},
  [24] =
    {field_name, 0},
    {field_value, 2},
  [26] =
    {field_lhs, 1},
    {field_rhs, 3},
  [28] =
    {field_alternative, 3},
    {field_condition, 1},
    {field_consequence, 2},
  [31] =
    {field_left, 0},
    {field_operator, 1},
    {field_operator, 2},
    {field_right, 3},
  [35] =
    {field_body, 4},
    {field_left, 1},
    {field_value, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [16] = {
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
  [4] = 2,
  [5] = 2,
  [6] = 2,
  [7] = 2,
  [8] = 2,
  [9] = 2,
  [10] = 2,
  [11] = 2,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 14,
  [16] = 16,
  [17] = 16,
  [18] = 16,
  [19] = 19,
  [20] = 19,
  [21] = 19,
  [22] = 22,
  [23] = 22,
  [24] = 24,
  [25] = 24,
  [26] = 26,
  [27] = 26,
  [28] = 28,
  [29] = 28,
  [30] = 28,
  [31] = 28,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 33,
  [41] = 34,
  [42] = 35,
  [43] = 37,
  [44] = 37,
  [45] = 45,
  [46] = 36,
  [47] = 47,
  [48] = 38,
  [49] = 32,
  [50] = 47,
  [51] = 47,
  [52] = 47,
  [53] = 33,
  [54] = 37,
  [55] = 38,
  [56] = 33,
  [57] = 37,
  [58] = 45,
  [59] = 39,
  [60] = 38,
  [61] = 26,
  [62] = 22,
  [63] = 24,
  [64] = 34,
  [65] = 45,
  [66] = 33,
  [67] = 36,
  [68] = 47,
  [69] = 35,
  [70] = 70,
  [71] = 32,
  [72] = 72,
  [73] = 73,
  [74] = 38,
  [75] = 39,
  [76] = 76,
  [77] = 24,
  [78] = 78,
  [79] = 79,
  [80] = 24,
  [81] = 26,
  [82] = 26,
  [83] = 83,
  [84] = 83,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 35,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 98,
  [101] = 92,
  [102] = 35,
  [103] = 103,
  [104] = 97,
  [105] = 90,
  [106] = 39,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 96,
  [114] = 99,
  [115] = 95,
  [116] = 93,
  [117] = 89,
  [118] = 88,
  [119] = 119,
  [120] = 87,
  [121] = 121,
  [122] = 34,
  [123] = 34,
  [124] = 36,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 85,
  [130] = 94,
  [131] = 131,
  [132] = 132,
  [133] = 132,
  [134] = 119,
  [135] = 131,
  [136] = 121,
  [137] = 107,
  [138] = 110,
  [139] = 39,
  [140] = 86,
  [141] = 108,
  [142] = 142,
  [143] = 126,
  [144] = 36,
  [145] = 127,
  [146] = 112,
  [147] = 111,
  [148] = 148,
  [149] = 83,
  [150] = 109,
  [151] = 148,
  [152] = 142,
  [153] = 142,
  [154] = 154,
  [155] = 155,
  [156] = 154,
  [157] = 126,
  [158] = 158,
  [159] = 127,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 158,
  [166] = 166,
  [167] = 167,
  [168] = 121,
  [169] = 119,
  [170] = 99,
  [171] = 112,
  [172] = 111,
  [173] = 110,
  [174] = 109,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 167,
  [179] = 164,
  [180] = 155,
  [181] = 162,
  [182] = 108,
  [183] = 177,
  [184] = 176,
  [185] = 175,
  [186] = 90,
  [187] = 132,
  [188] = 161,
  [189] = 92,
  [190] = 98,
  [191] = 160,
  [192] = 97,
  [193] = 193,
  [194] = 193,
  [195] = 193,
  [196] = 96,
  [197] = 95,
  [198] = 93,
  [199] = 89,
  [200] = 88,
  [201] = 160,
  [202] = 87,
  [203] = 85,
  [204] = 148,
  [205] = 205,
  [206] = 155,
  [207] = 94,
  [208] = 164,
  [209] = 107,
  [210] = 166,
  [211] = 167,
  [212] = 212,
  [213] = 177,
  [214] = 205,
  [215] = 131,
  [216] = 176,
  [217] = 175,
  [218] = 162,
  [219] = 155,
  [220] = 154,
  [221] = 158,
  [222] = 164,
  [223] = 154,
  [224] = 163,
  [225] = 161,
  [226] = 205,
  [227] = 166,
  [228] = 167,
  [229] = 177,
  [230] = 166,
  [231] = 176,
  [232] = 205,
  [233] = 175,
  [234] = 160,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 235,
  [239] = 237,
  [240] = 235,
  [241] = 236,
  [242] = 237,
  [243] = 235,
  [244] = 237,
  [245] = 235,
  [246] = 237,
  [247] = 237,
  [248] = 237,
  [249] = 235,
  [250] = 237,
  [251] = 237,
  [252] = 235,
  [253] = 235,
  [254] = 235,
  [255] = 235,
  [256] = 237,
  [257] = 257,
  [258] = 258,
  [259] = 16,
  [260] = 260,
  [261] = 261,
  [262] = 19,
  [263] = 263,
  [264] = 263,
  [265] = 265,
  [266] = 148,
  [267] = 142,
  [268] = 148,
  [269] = 92,
  [270] = 142,
  [271] = 119,
  [272] = 119,
  [273] = 265,
  [274] = 92,
  [275] = 275,
  [276] = 119,
  [277] = 277,
  [278] = 278,
  [279] = 142,
  [280] = 24,
  [281] = 281,
  [282] = 277,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 275,
  [289] = 285,
  [290] = 148,
  [291] = 142,
  [292] = 119,
  [293] = 22,
  [294] = 284,
  [295] = 148,
  [296] = 26,
  [297] = 92,
  [298] = 283,
  [299] = 92,
  [300] = 278,
  [301] = 281,
  [302] = 287,
  [303] = 286,
  [304] = 263,
  [305] = 35,
  [306] = 45,
  [307] = 142,
  [308] = 119,
  [309] = 148,
  [310] = 32,
  [311] = 34,
  [312] = 38,
  [313] = 33,
  [314] = 47,
  [315] = 39,
  [316] = 92,
  [317] = 36,
  [318] = 287,
  [319] = 142,
  [320] = 277,
  [321] = 284,
  [322] = 322,
  [323] = 119,
  [324] = 148,
  [325] = 278,
  [326] = 275,
  [327] = 283,
  [328] = 92,
  [329] = 329,
  [330] = 83,
  [331] = 87,
  [332] = 121,
  [333] = 111,
  [334] = 110,
  [335] = 109,
  [336] = 126,
  [337] = 142,
  [338] = 107,
  [339] = 339,
  [340] = 99,
  [341] = 132,
  [342] = 342,
  [343] = 131,
  [344] = 344,
  [345] = 108,
  [346] = 339,
  [347] = 342,
  [348] = 342,
  [349] = 339,
  [350] = 90,
  [351] = 148,
  [352] = 112,
  [353] = 85,
  [354] = 344,
  [355] = 344,
  [356] = 88,
  [357] = 89,
  [358] = 93,
  [359] = 95,
  [360] = 96,
  [361] = 97,
  [362] = 98,
  [363] = 92,
  [364] = 119,
  [365] = 365,
  [366] = 365,
  [367] = 365,
  [368] = 365,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 372,
  [374] = 372,
  [375] = 375,
  [376] = 375,
  [377] = 377,
  [378] = 375,
  [379] = 379,
  [380] = 379,
  [381] = 379,
  [382] = 375,
  [383] = 379,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 386,
  [388] = 384,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 393,
  [397] = 394,
  [398] = 398,
  [399] = 399,
  [400] = 394,
  [401] = 393,
  [402] = 402,
  [403] = 395,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 395,
  [410] = 395,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 411,
  [418] = 418,
  [419] = 419,
  [420] = 411,
  [421] = 421,
  [422] = 422,
  [423] = 422,
  [424] = 424,
  [425] = 425,
  [426] = 421,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 422,
  [432] = 427,
  [433] = 433,
  [434] = 427,
  [435] = 422,
  [436] = 422,
  [437] = 425,
  [438] = 424,
  [439] = 422,
  [440] = 422,
  [441] = 441,
  [442] = 427,
  [443] = 443,
  [444] = 444,
  [445] = 443,
  [446] = 422,
  [447] = 447,
  [448] = 421,
  [449] = 449,
  [450] = 422,
  [451] = 421,
  [452] = 427,
  [453] = 443,
  [454] = 443,
  [455] = 424,
  [456] = 422,
  [457] = 424,
  [458] = 32,
  [459] = 428,
  [460] = 428,
  [461] = 425,
  [462] = 45,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 931
            ? (c < 748
              ? (c < 192
                ? (c < 170
                  ? (c < 'g'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= 'z')
                  : (c <= 170 || (c < 186
                    ? c == 181
                    : c <= 186)))
                : (c <= 214 || (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 891 && c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1649
              ? (c < 1376
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))
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

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'd'
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

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'g'
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

static inline bool sym_identifier_character_set_5(int32_t c) {
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

static inline bool sym_identifier_character_set_6(int32_t c) {
  return (c < 43520
    ? (c < 4206
      ? (c < 2738
        ? (c < 2042
          ? (c < 1162
            ? (c < 880
              ? (c < 248
                ? (c < 186
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 186 || (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)))
                : (c <= 705 || (c < 748
                  ? (c < 736
                    ? (c >= 710 && c <= 721)
                    : c <= 740)
                  : (c <= 748 || c == 750))))
              : (c <= 884 || (c < 904
                ? (c < 895
                  ? (c < 891
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 931
                  ? (c < 910
                    ? c == 908
                    : c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))))))
            : (c <= 1327 || (c < 1765
              ? (c < 1519
                ? (c < 1376
                  ? (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1649
                  ? (c < 1646
                    ? (c >= 1568 && c <= 1610)
                    : c <= 1647)
                  : (c <= 1747 || c == 1749))))
              : (c <= 1766 || (c < 1810
                ? (c < 1791
                  ? (c < 1786
                    ? (c >= 1774 && c <= 1775)
                    : c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1994
                  ? (c < 1969
                    ? (c >= 1869 && c <= 1957)
                    : c <= 1969)
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))))))))
          : (c <= 2042 || (c < 2493
            ? (c < 2365
              ? (c < 2144
                ? (c < 2084
                  ? (c < 2074
                    ? (c >= 2048 && c <= 2069)
                    : c <= 2074)
                  : (c <= 2084 || (c < 2112
                    ? c == 2088
                    : c <= 2136)))
                : (c <= 2154 || (c < 2208
                  ? (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)
                  : (c <= 2249 || (c >= 2308 && c <= 2361)))))
              : (c <= 2365 || (c < 2447
                ? (c < 2417
                  ? (c < 2392
                    ? c == 2384
                    : c <= 2401)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2482
                  ? (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))))))
            : (c <= 2493 || (c < 2610
              ? (c < 2556
                ? (c < 2527
                  ? (c < 2524
                    ? c == 2510
                    : c <= 2525)
                  : (c <= 2529 || (c >= 2544 && c <= 2545)))
                : (c <= 2556 || (c < 2579
                  ? (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)
                  : (c <= 2600 || (c >= 2602 && c <= 2608)))))
              : (c <= 2611 || (c < 2674
                ? (c < 2649
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2652 || c == 2654))
                : (c <= 2676 || (c < 2707
                  ? (c < 2703
                    ? (c >= 2693 && c <= 2701)
                    : c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))))))))))
        : (c <= 2739 || (c < 3261
          ? (c < 2972
            ? (c < 2869
              ? (c < 2821
                ? (c < 2768
                  ? (c < 2749
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2749)
                  : (c <= 2768 || (c < 2809
                    ? (c >= 2784 && c <= 2785)
                    : c <= 2809)))
                : (c <= 2828 || (c < 2858
                  ? (c < 2835
                    ? (c >= 2831 && c <= 2832)
                    : c <= 2856)
                  : (c <= 2864 || (c >= 2866 && c <= 2867)))))
              : (c <= 2873 || (c < 2947
                ? (c < 2911
                  ? (c < 2908
                    ? c == 2877
                    : c <= 2909)
                  : (c <= 2913 || c == 2929))
                : (c <= 2947 || (c < 2962
                  ? (c < 2958
                    ? (c >= 2949 && c <= 2954)
                    : c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))))))
            : (c <= 2972 || (c < 3133
              ? (c < 3024
                ? (c < 2984
                  ? (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3090
                  ? (c < 3086
                    ? (c >= 3077 && c <= 3084)
                    : c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))))
              : (c <= 3133 || (c < 3205
                ? (c < 3168
                  ? (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)
                  : (c <= 3169 || c == 3200))
                : (c <= 3212 || (c < 3242
                  ? (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))))))))
          : (c <= 3261 || (c < 3716
            ? (c < 3450
              ? (c < 3346
                ? (c < 3313
                  ? (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3297)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3332 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3386 || (c < 3412
                  ? (c < 3406
                    ? c == 3389
                    : c <= 3406)
                  : (c <= 3414 || (c >= 3423 && c <= 3425)))))
              : (c <= 3455 || (c < 3520
                ? (c < 3507
                  ? (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)
                  : (c <= 3515 || c == 3517))
                : (c <= 3526 || (c < 3648
                  ? (c < 3634
                    ? (c >= 3585 && c <= 3632)
                    : c <= 3634)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))))))
            : (c <= 3716 || (c < 3840
              ? (c < 3762
                ? (c < 3749
                  ? (c < 3724
                    ? (c >= 3718 && c <= 3722)
                    : c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3762 || (c < 3782
                  ? (c < 3776
                    ? c == 3773
                    : c <= 3780)
                  : (c <= 3782 || (c >= 3804 && c <= 3807)))))
              : (c <= 3840 || (c < 4159
                ? (c < 3976
                  ? (c < 3913
                    ? (c >= 3904 && c <= 3911)
                    : c <= 3948)
                  : (c <= 3980 || (c >= 4096 && c <= 4138)))
                : (c <= 4159 || (c < 4193
                  ? (c < 4186
                    ? (c >= 4176 && c <= 4181)
                    : c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))))))))))))
      : (c <= 4208 || (c < 8150
        ? (c < 6314
          ? (c < 4882
            ? (c < 4698
              ? (c < 4304
                ? (c < 4256
                  ? (c < 4238
                    ? (c >= 4213 && c <= 4225)
                    : c <= 4238)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))
                : (c <= 4346 || (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || c == 4696))))
              : (c <= 4701 || (c < 4792
                ? (c < 4752
                  ? (c < 4746
                    ? (c >= 4704 && c <= 4744)
                    : c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))
                : (c <= 4798 || (c < 4808
                  ? (c < 4802
                    ? c == 4800
                    : c <= 4805)
                  : (c <= 4822 || (c >= 4824 && c <= 4880)))))))
            : (c <= 4885 || (c < 5888
              ? (c < 5121
                ? (c < 5024
                  ? (c < 4992
                    ? (c >= 4888 && c <= 4954)
                    : c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5792
                  ? (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : c <= 5786)
                  : (c <= 5866 || (c >= 5870 && c <= 5880)))))
              : (c <= 5905 || (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5937)
                    : c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6176
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6108)
                  : (c <= 6264 || (c >= 6272 && c <= 6312)))))))))
          : (c <= 6314 || (c < 7401
            ? (c < 6981
              ? (c < 6576
                ? (c < 6480
                  ? (c < 6400
                    ? (c >= 6320 && c <= 6389)
                    : c <= 6430)
                  : (c <= 6509 || (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)))
                : (c <= 6601 || (c < 6823
                  ? (c < 6688
                    ? (c >= 6656 && c <= 6678)
                    : c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))))
              : (c <= 6988 || (c < 7245
                ? (c < 7098
                  ? (c < 7086
                    ? (c >= 7043 && c <= 7072)
                    : c <= 7087)
                  : (c <= 7141 || (c >= 7168 && c <= 7203)))
                : (c <= 7247 || (c < 7312
                  ? (c < 7296
                    ? (c >= 7258 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))))))
            : (c <= 7404 || (c < 8025
              ? (c < 7680
                ? (c < 7418
                  ? (c < 7413
                    ? (c >= 7406 && c <= 7411)
                    : c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 8008
                  ? (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))))
              : (c <= 8025 || (c < 8118
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c >= 8064 && c <= 8116)))
                : (c <= 8124 || (c < 8134
                  ? (c < 8130
                    ? c == 8126
                    : c <= 8132)
                  : (c <= 8140 || (c >= 8144 && c <= 8147)))))))))))
        : (c <= 8155 || (c < 12353
          ? (c < 11499
            ? (c < 8472
              ? (c < 8336
                ? (c < 8182
                  ? (c < 8178
                    ? (c >= 8160 && c <= 8172)
                    : c <= 8180)
                  : (c <= 8188 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || c == 8469))))
              : (c <= 8477 || (c < 8508
                ? (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c >= 8490 && c <= 8505)))
                : (c <= 8511 || (c < 8544
                  ? (c < 8526
                    ? (c >= 8517 && c <= 8521)
                    : c <= 8526)
                  : (c <= 8584 || (c >= 11264 && c <= 11492)))))))
            : (c <= 11502 || (c < 11696
              ? (c < 11568
                ? (c < 11559
                  ? (c < 11520
                    ? (c >= 11506 && c <= 11507)
                    : c <= 11557)
                  : (c <= 11559 || c == 11565))
                : (c <= 11623 || (c < 11680
                  ? (c < 11648
                    ? c == 11631
                    : c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))))
              : (c <= 11702 || (c < 11736
                ? (c < 11720
                  ? (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12337
                  ? (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12329)
                  : (c <= 12341 || (c >= 12344 && c <= 12348)))))))))
          : (c <= 12438 || (c < 42960
            ? (c < 42192
              ? (c < 12593
                ? (c < 12540
                  ? (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)
                  : (c <= 12543 || (c >= 12549 && c <= 12591)))
                : (c <= 12686 || (c < 13312
                  ? (c < 12784
                    ? (c >= 12704 && c <= 12735)
                    : c <= 12799)
                  : (c <= 19903 || (c >= 19968 && c <= 42124)))))
              : (c <= 42237 || (c < 42623
                ? (c < 42538
                  ? (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))
                : (c <= 42653 || (c < 42786
                  ? (c < 42775
                    ? (c >= 42656 && c <= 42735)
                    : c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))))))
            : (c <= 42961 || (c < 43259
              ? (c < 43015
                ? (c < 42994
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))
                : (c <= 43018 || (c < 43138
                  ? (c < 43072
                    ? (c >= 43020 && c <= 43042)
                    : c <= 43123)
                  : (c <= 43187 || (c >= 43250 && c <= 43255)))))
              : (c <= 43259 || (c < 43396
                ? (c < 43312
                  ? (c < 43274
                    ? (c >= 43261 && c <= 43262)
                    : c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))
                : (c <= 43442 || (c < 43494
                  ? (c < 43488
                    ? c == 43471
                    : c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))))))))))))))
    : (c <= 43560 || (c < 70751
      ? (c < 66964
        ? (c < 65008
          ? (c < 43888
            ? (c < 43739
              ? (c < 43697
                ? (c < 43616
                  ? (c < 43588
                    ? (c >= 43584 && c <= 43586)
                    : c <= 43595)
                  : (c <= 43638 || (c < 43646
                    ? c == 43642
                    : c <= 43695)))
                : (c <= 43697 || (c < 43712
                  ? (c < 43705
                    ? (c >= 43701 && c <= 43702)
                    : c <= 43709)
                  : (c <= 43712 || c == 43714))))
              : (c <= 43741 || (c < 43793
                ? (c < 43777
                  ? (c < 43762
                    ? (c >= 43744 && c <= 43754)
                    : c <= 43764)
                  : (c <= 43782 || (c >= 43785 && c <= 43790)))
                : (c <= 43798 || (c < 43824
                  ? (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))))))
            : (c <= 44002 || (c < 64298
              ? (c < 64112
                ? (c < 55243
                  ? (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64285
                  ? (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)
                  : (c <= 64285 || (c >= 64287 && c <= 64296)))))
              : (c <= 64310 || (c < 64326
                ? (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))
                : (c <= 64433 || (c < 64848
                  ? (c < 64612
                    ? (c >= 64467 && c <= 64605)
                    : c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))))))))
          : (c <= 65017 || (c < 65616
            ? (c < 65440
              ? (c < 65149
                ? (c < 65143
                  ? (c < 65139
                    ? c == 65137
                    : c <= 65139)
                  : (c <= 65143 || (c < 65147
                    ? c == 65145
                    : c <= 65147)))
                : (c <= 65149 || (c < 65345
                  ? (c < 65313
                    ? (c >= 65151 && c <= 65276)
                    : c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65437)))))
              : (c <= 65470 || (c < 65536
                ? (c < 65490
                  ? (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)
                  : (c <= 65495 || (c >= 65498 && c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))))))
            : (c <= 65629 || (c < 66504
              ? (c < 66304
                ? (c < 66176
                  ? (c < 65856
                    ? (c >= 65664 && c <= 65786)
                    : c <= 65908)
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66421)
                  : (c <= 66461 || (c >= 66464 && c <= 66499)))))
              : (c <= 66511 || (c < 66816
                ? (c < 66736
                  ? (c < 66560
                    ? (c >= 66513 && c <= 66517)
                    : c <= 66717)
                  : (c <= 66771 || (c >= 66776 && c <= 66811)))
                : (c <= 66855 || (c < 66940
                  ? (c < 66928
                    ? (c >= 66864 && c <= 66915)
                    : c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))))))))))
        : (c <= 66965 || (c < 69248
          ? (c < 67840
            ? (c < 67584
              ? (c < 67392
                ? (c < 66995
                  ? (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)
                  : (c <= 67001 || (c < 67072
                    ? (c >= 67003 && c <= 67004)
                    : c <= 67382)))
                : (c <= 67413 || (c < 67463
                  ? (c < 67456
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67461)
                  : (c <= 67504 || (c >= 67506 && c <= 67514)))))
              : (c <= 67589 || (c < 67647
                ? (c < 67639
                  ? (c < 67594
                    ? c == 67592
                    : c <= 67637)
                  : (c <= 67640 || c == 67644))
                : (c <= 67669 || (c < 67808
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)
                  : (c <= 67826 || (c >= 67828 && c <= 67829)))))))
            : (c <= 67861 || (c < 68288
              ? (c < 68112
                ? (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || c == 68096))
                : (c <= 68115 || (c < 68192
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68220 || (c >= 68224 && c <= 68252)))))
              : (c <= 68295 || (c < 68480
                ? (c < 68416
                  ? (c < 68352
                    ? (c >= 68297 && c <= 68324)
                    : c <= 68405)
                  : (c <= 68437 || (c >= 68448 && c <= 68466)))
                : (c <= 68497 || (c < 68800
                  ? (c < 68736
                    ? (c >= 68608 && c <= 68680)
                    : c <= 68786)
                  : (c <= 68850 || (c >= 68864 && c <= 68899)))))))))
          : (c <= 69289 || (c < 70108
            ? (c < 69763
              ? (c < 69552
                ? (c < 69415
                  ? (c < 69376
                    ? (c >= 69296 && c <= 69297)
                    : c <= 69404)
                  : (c <= 69415 || (c < 69488
                    ? (c >= 69424 && c <= 69445)
                    : c <= 69505)))
                : (c <= 69572 || (c < 69745
                  ? (c < 69635
                    ? (c >= 69600 && c <= 69622)
                    : c <= 69687)
                  : (c <= 69746 || c == 69749))))
              : (c <= 69807 || (c < 69968
                ? (c < 69956
                  ? (c < 69891
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69926)
                  : (c <= 69956 || c == 69959))
                : (c <= 70002 || (c < 70081
                  ? (c < 70019
                    ? c == 70006
                    : c <= 70066)
                  : (c <= 70084 || c == 70106))))))
            : (c <= 70108 || (c < 70415
              ? (c < 70282
                ? (c < 70272
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70187)
                  : (c <= 70278 || c == 70280))
                : (c <= 70285 || (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70366 || (c >= 70405 && c <= 70412)))))
              : (c <= 70416 || (c < 70461
                ? (c < 70450
                  ? (c < 70442
                    ? (c >= 70419 && c <= 70440)
                    : c <= 70448)
                  : (c <= 70451 || (c >= 70453 && c <= 70457)))
                : (c <= 70461 || (c < 70656
                  ? (c < 70493
                    ? c == 70480
                    : c <= 70497)
                  : (c <= 70708 || (c >= 70727 && c <= 70730)))))))))))))
      : (c <= 70753 || (c < 119966
        ? (c < 73063
          ? (c < 72096
            ? (c < 71488
              ? (c < 71168
                ? (c < 70855
                  ? (c < 70852
                    ? (c >= 70784 && c <= 70831)
                    : c <= 70853)
                  : (c <= 70855 || (c < 71128
                    ? (c >= 71040 && c <= 71086)
                    : c <= 71131)))
                : (c <= 71215 || (c < 71352
                  ? (c < 71296
                    ? c == 71236
                    : c <= 71338)
                  : (c <= 71352 || (c >= 71424 && c <= 71450)))))
              : (c <= 71494 || (c < 71948
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71723)
                    : c <= 71903)
                  : (c <= 71942 || c == 71945))
                : (c <= 71955 || (c < 71999
                  ? (c < 71960
                    ? (c >= 71957 && c <= 71958)
                    : c <= 71983)
                  : (c <= 71999 || c == 72001))))))
            : (c <= 72103 || (c < 72368
              ? (c < 72203
                ? (c < 72163
                  ? (c < 72161
                    ? (c >= 72106 && c <= 72144)
                    : c <= 72161)
                  : (c <= 72163 || c == 72192))
                : (c <= 72242 || (c < 72284
                  ? (c < 72272
                    ? c == 72250
                    : c <= 72272)
                  : (c <= 72329 || c == 72349))))
              : (c <= 72440 || (c < 72960
                ? (c < 72768
                  ? (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72750)
                  : (c <= 72768 || (c >= 72818 && c <= 72847)))
                : (c <= 72966 || (c < 73030
                  ? (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73008)
                  : (c <= 73030 || (c >= 73056 && c <= 73061)))))))))
          : (c <= 73064 || (c < 94032
            ? (c < 92160
              ? (c < 74752
                ? (c < 73440
                  ? (c < 73112
                    ? (c >= 73066 && c <= 73097)
                    : c <= 73112)
                  : (c <= 73458 || (c < 73728
                    ? c == 73648
                    : c <= 74649)))
                : (c <= 74862 || (c < 77824
                  ? (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)
                  : (c <= 78894 || (c >= 82944 && c <= 83526)))))
              : (c <= 92728 || (c < 92992
                ? (c < 92880
                  ? (c < 92784
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92862)
                  : (c <= 92909 || (c >= 92928 && c <= 92975)))
                : (c <= 92995 || (c < 93760
                  ? (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)
                  : (c <= 93823 || (c >= 93952 && c <= 94026)))))))
            : (c <= 94032 || (c < 110592
              ? (c < 100352
                ? (c < 94179
                  ? (c < 94176
                    ? (c >= 94099 && c <= 94111)
                    : c <= 94177)
                  : (c <= 94179 || (c >= 94208 && c <= 100343)))
                : (c <= 101589 || (c < 110581
                  ? (c < 110576
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110579)
                  : (c <= 110587 || (c >= 110589 && c <= 110590)))))
              : (c <= 110882 || (c < 113776
                ? (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c >= 113664 && c <= 113770)))
                : (c <= 113788 || (c < 119808
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 126464
          ? (c < 120598
            ? (c < 120094
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c >= 120086 && c <= 120092)))))
              : (c <= 120121 || (c < 120146
                ? (c < 120134
                  ? (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)
                  : (c <= 120134 || (c >= 120138 && c <= 120144)))
                : (c <= 120485 || (c < 120540
                  ? (c < 120514
                    ? (c >= 120488 && c <= 120512)
                    : c <= 120538)
                  : (c <= 120570 || (c >= 120572 && c <= 120596)))))))
            : (c <= 120628 || (c < 123214
              ? (c < 120746
                ? (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c >= 120714 && c <= 120744)))
                : (c <= 120770 || (c < 123136
                  ? (c < 122624
                    ? (c >= 120772 && c <= 120779)
                    : c <= 122654)
                  : (c <= 123180 || (c >= 123191 && c <= 123197)))))
              : (c <= 123214 || (c < 124909
                ? (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123565)
                    : c <= 123627)
                  : (c <= 124902 || (c >= 124904 && c <= 124907)))
                : (c <= 124910 || (c < 125184
                  ? (c < 124928
                    ? (c >= 124912 && c <= 124926)
                    : c <= 125124)
                  : (c <= 125251 || c == 125259))))))))
          : (c <= 126467 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126500
                  ? (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)
                  : (c <= 126500 || c == 126503))
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

static inline bool sym_identifier_character_set_7(int32_t c) {
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

static inline bool sym_identifier_character_set_8(int32_t c) {
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

static inline bool sym_identifier_character_set_9(int32_t c) {
  return (c < 43739
    ? (c < 3804
      ? (c < 2768
        ? (c < 2160
          ? (c < 1369
            ? (c < 768
              ? (c < 216
                ? (c < 183
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 183 || (c < 192
                    ? c == 186
                    : c <= 214)))
                : (c <= 246 || (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || (c < 750
                    ? c == 748
                    : c <= 750)))))
              : (c <= 884 || (c < 910
                ? (c < 895
                  ? (c < 891
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || (c < 908
                    ? (c >= 902 && c <= 906)
                    : c <= 908)))
                : (c <= 929 || (c < 1155
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1159 || (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)))))))
            : (c <= 1369 || (c < 1749
              ? (c < 1479
                ? (c < 1471
                  ? (c < 1425
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1469)
                  : (c <= 1471 || (c < 1476
                    ? (c >= 1473 && c <= 1474)
                    : c <= 1477)))
                : (c <= 1479 || (c < 1552
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1562 || (c < 1646
                    ? (c >= 1568 && c <= 1641)
                    : c <= 1747)))))
              : (c <= 1756 || (c < 1984
                ? (c < 1791
                  ? (c < 1770
                    ? (c >= 1759 && c <= 1768)
                    : c <= 1788)
                  : (c <= 1791 || (c < 1869
                    ? (c >= 1808 && c <= 1866)
                    : c <= 1969)))
                : (c <= 2037 || (c < 2048
                  ? (c < 2045
                    ? c == 2042
                    : c <= 2045)
                  : (c <= 2093 || (c < 2144
                    ? (c >= 2112 && c <= 2139)
                    : c <= 2154)))))))))
          : (c <= 2183 || (c < 2579
            ? (c < 2492
              ? (c < 2437
                ? (c < 2275
                  ? (c < 2200
                    ? (c >= 2185 && c <= 2190)
                    : c <= 2273)
                  : (c <= 2403 || (c < 2417
                    ? (c >= 2406 && c <= 2415)
                    : c <= 2435)))
                : (c <= 2444 || (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || (c < 2486
                    ? c == 2482
                    : c <= 2489)))))
              : (c <= 2500 || (c < 2534
                ? (c < 2519
                  ? (c < 2507
                    ? (c >= 2503 && c <= 2504)
                    : c <= 2510)
                  : (c <= 2519 || (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)))
                : (c <= 2545 || (c < 2561
                  ? (c < 2558
                    ? c == 2556
                    : c <= 2558)
                  : (c <= 2563 || (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)))))))
            : (c <= 2600 || (c < 2662
              ? (c < 2622
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)))
                : (c <= 2626 || (c < 2641
                  ? (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)
                  : (c <= 2641 || (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)))))
              : (c <= 2677 || (c < 2738
                ? (c < 2703
                  ? (c < 2693
                    ? (c >= 2689 && c <= 2691)
                    : c <= 2701)
                  : (c <= 2705 || (c < 2730
                    ? (c >= 2707 && c <= 2728)
                    : c <= 2736)))
                : (c <= 2739 || (c < 2759
                  ? (c < 2748
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2757)
                  : (c <= 2761 || (c >= 2763 && c <= 2765)))))))))))
        : (c <= 2768 || (c < 3205
          ? (c < 2972
            ? (c < 2887
              ? (c < 2831
                ? (c < 2809
                  ? (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)
                  : (c <= 2815 || (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)))
                : (c <= 2832 || (c < 2866
                  ? (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)
                  : (c <= 2867 || (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)))))
              : (c <= 2888 || (c < 2929
                ? (c < 2908
                  ? (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)
                  : (c <= 2909 || (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)))
                : (c <= 2929 || (c < 2958
                  ? (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)
                  : (c <= 2960 || (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)))))))
            : (c <= 2972 || (c < 3086
              ? (c < 3014
                ? (c < 2984
                  ? (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)
                  : (c <= 2986 || (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)))
                : (c <= 3016 || (c < 3031
                  ? (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)
                  : (c <= 3031 || (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)))))
              : (c <= 3088 || (c < 3157
                ? (c < 3132
                  ? (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)
                  : (c <= 3140 || (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)))
                : (c <= 3158 || (c < 3168
                  ? (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)
                  : (c <= 3171 || (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)))))))))
          : (c <= 3212 || (c < 3482
            ? (c < 3313
              ? (c < 3270
                ? (c < 3242
                  ? (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)
                  : (c <= 3251 || (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)))
                : (c <= 3272 || (c < 3293
                  ? (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)
                  : (c <= 3294 || (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)))))
              : (c <= 3314 || (c < 3412
                ? (c < 3346
                  ? (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)
                  : (c <= 3396 || (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)))
                : (c <= 3415 || (c < 3450
                  ? (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)
                  : (c <= 3455 || (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)))))))
            : (c <= 3505 || (c < 3664
              ? (c < 3542
                ? (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || (c < 3535
                    ? c == 3530
                    : c <= 3540)))
                : (c <= 3542 || (c < 3570
                  ? (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)
                  : (c <= 3571 || (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)))))
              : (c <= 3673 || (c < 3751
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)))
                : (c <= 3773 || (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c >= 3792 && c <= 3801)))))))))))))
      : (c <= 3807 || (c < 8029
        ? (c < 5984
          ? (c < 4704
            ? (c < 4038
              ? (c < 3897
                ? (c < 3872
                  ? (c < 3864
                    ? c == 3840
                    : c <= 3865)
                  : (c <= 3881 || (c < 3895
                    ? c == 3893
                    : c <= 3895)))
                : (c <= 3897 || (c < 3953
                  ? (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)
                  : (c <= 3972 || (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)))))
              : (c <= 4038 || (c < 4304
                ? (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))
                : (c <= 4346 || (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))))))
            : (c <= 4744 || (c < 4969
              ? (c < 4802
                ? (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))
                : (c <= 4805 || (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)))))
              : (c <= 4977 || (c < 5761
                ? (c < 5112
                  ? (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)
                  : (c <= 5117 || (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)))
                : (c <= 5786 || (c < 5888
                  ? (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)
                  : (c <= 5909 || (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)))))))))
          : (c <= 5996 || (c < 6800
            ? (c < 6400
              ? (c < 6112
                ? (c < 6016
                  ? (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)
                  : (c <= 6099 || (c < 6108
                    ? c == 6103
                    : c <= 6109)))
                : (c <= 6121 || (c < 6176
                  ? (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)
                  : (c <= 6264 || (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)))))
              : (c <= 6430 || (c < 6576
                ? (c < 6470
                  ? (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)
                  : (c <= 6509 || (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)))
                : (c <= 6601 || (c < 6688
                  ? (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)
                  : (c <= 6750 || (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)))))))
            : (c <= 6809 || (c < 7312
              ? (c < 7019
                ? (c < 6847
                  ? (c < 6832
                    ? c == 6823
                    : c <= 6845)
                  : (c <= 6862 || (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)))
                : (c <= 7027 || (c < 7232
                  ? (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)
                  : (c <= 7241 || (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)))))
              : (c <= 7354 || (c < 7968
                ? (c < 7380
                  ? (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)
                  : (c <= 7418 || (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)))
                : (c <= 8005 || (c < 8025
                  ? (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)
                  : (c <= 8025 || c == 8027))))))))))
        : (c <= 8029 || (c < 11736
          ? (c < 8472
            ? (c < 8255
              ? (c < 8134
                ? (c < 8118
                  ? (c < 8064
                    ? (c >= 8031 && c <= 8061)
                    : c <= 8116)
                  : (c <= 8124 || (c < 8130
                    ? c == 8126
                    : c <= 8132)))
                : (c <= 8140 || (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))))
              : (c <= 8256 || (c < 8417
                ? (c < 8319
                  ? (c < 8305
                    ? c == 8276
                    : c <= 8305)
                  : (c <= 8319 || (c < 8400
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8412)))
                : (c <= 8417 || (c < 8455
                  ? (c < 8450
                    ? (c >= 8421 && c <= 8432)
                    : c <= 8450)
                  : (c <= 8455 || (c < 8469
                    ? (c >= 8458 && c <= 8467)
                    : c <= 8469)))))))
            : (c <= 8477 || (c < 11559
              ? (c < 8517
                ? (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)))
                : (c <= 8521 || (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11492 || (c < 11520
                    ? (c >= 11499 && c <= 11507)
                    : c <= 11557)))))
              : (c <= 11559 || (c < 11688
                ? (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c < 11680
                    ? (c >= 11647 && c <= 11670)
                    : c <= 11686)))
                : (c <= 11694 || (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c < 11728
                    ? (c >= 11720 && c <= 11726)
                    : c <= 11734)))))))))
          : (c <= 11742 || (c < 42786
            ? (c < 12593
              ? (c < 12353
                ? (c < 12321
                  ? (c < 12293
                    ? (c >= 11744 && c <= 11775)
                    : c <= 12295)
                  : (c <= 12335 || (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)))
                : (c <= 12438 || (c < 12449
                  ? (c < 12445
                    ? (c >= 12441 && c <= 12442)
                    : c <= 12447)
                  : (c <= 12538 || (c < 12549
                    ? (c >= 12540 && c <= 12543)
                    : c <= 12591)))))
              : (c <= 12686 || (c < 42240
                ? (c < 13312
                  ? (c < 12784
                    ? (c >= 12704 && c <= 12735)
                    : c <= 12799)
                  : (c <= 19903 || (c < 42192
                    ? (c >= 19968 && c <= 42124)
                    : c <= 42237)))
                : (c <= 42508 || (c < 42612
                  ? (c < 42560
                    ? (c >= 42512 && c <= 42539)
                    : c <= 42607)
                  : (c <= 42621 || (c < 42775
                    ? (c >= 42623 && c <= 42737)
                    : c <= 42783)))))))
            : (c <= 42888 || (c < 43261
              ? (c < 43052
                ? (c < 42963
                  ? (c < 42960
                    ? (c >= 42891 && c <= 42954)
                    : c <= 42961)
                  : (c <= 42963 || (c < 42994
                    ? (c >= 42965 && c <= 42969)
                    : c <= 43047)))
                : (c <= 43052 || (c < 43216
                  ? (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43205)
                  : (c <= 43225 || (c < 43259
                    ? (c >= 43232 && c <= 43255)
                    : c <= 43259)))))
              : (c <= 43309 || (c < 43520
                ? (c < 43392
                  ? (c < 43360
                    ? (c >= 43312 && c <= 43347)
                    : c <= 43388)
                  : (c <= 43456 || (c < 43488
                    ? (c >= 43471 && c <= 43481)
                    : c <= 43518)))
                : (c <= 43574 || (c < 43616
                  ? (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)
                  : (c <= 43638 || (c >= 43642 && c <= 43714)))))))))))))))
    : (c <= 43741 || (c < 71472
      ? (c < 67644
        ? (c < 65474
          ? (c < 64320
            ? (c < 44016
              ? (c < 43808
                ? (c < 43777
                  ? (c < 43762
                    ? (c >= 43744 && c <= 43759)
                    : c <= 43766)
                  : (c <= 43782 || (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)))
                : (c <= 43814 || (c < 43868
                  ? (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)
                  : (c <= 43881 || (c < 44012
                    ? (c >= 43888 && c <= 44010)
                    : c <= 44013)))))
              : (c <= 44025 || (c < 64256
                ? (c < 55243
                  ? (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)
                  : (c <= 55291 || (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)))
                : (c <= 64262 || (c < 64298
                  ? (c < 64285
                    ? (c >= 64275 && c <= 64279)
                    : c <= 64296)
                  : (c <= 64310 || (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)))))))
            : (c <= 64321 || (c < 65137
              ? (c < 64914
                ? (c < 64467
                  ? (c < 64326
                    ? (c >= 64323 && c <= 64324)
                    : c <= 64433)
                  : (c <= 64605 || (c < 64848
                    ? (c >= 64612 && c <= 64829)
                    : c <= 64911)))
                : (c <= 64967 || (c < 65056
                  ? (c < 65024
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65039)
                  : (c <= 65071 || (c < 65101
                    ? (c >= 65075 && c <= 65076)
                    : c <= 65103)))))
              : (c <= 65137 || (c < 65151
                ? (c < 65145
                  ? (c < 65143
                    ? c == 65139
                    : c <= 65143)
                  : (c <= 65145 || (c < 65149
                    ? c == 65147
                    : c <= 65149)))
                : (c <= 65276 || (c < 65343
                  ? (c < 65313
                    ? (c >= 65296 && c <= 65305)
                    : c <= 65338)
                  : (c <= 65343 || (c < 65382
                    ? (c >= 65345 && c <= 65370)
                    : c <= 65470)))))))))
          : (c <= 65479 || (c < 66720
            ? (c < 66045
              ? (c < 65576
                ? (c < 65498
                  ? (c < 65490
                    ? (c >= 65482 && c <= 65487)
                    : c <= 65495)
                  : (c <= 65500 || (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)))
                : (c <= 65594 || (c < 65616
                  ? (c < 65599
                    ? (c >= 65596 && c <= 65597)
                    : c <= 65613)
                  : (c <= 65629 || (c < 65856
                    ? (c >= 65664 && c <= 65786)
                    : c <= 65908)))))
              : (c <= 66045 || (c < 66384
                ? (c < 66272
                  ? (c < 66208
                    ? (c >= 66176 && c <= 66204)
                    : c <= 66256)
                  : (c <= 66272 || (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)))
                : (c <= 66426 || (c < 66504
                  ? (c < 66464
                    ? (c >= 66432 && c <= 66461)
                    : c <= 66499)
                  : (c <= 66511 || (c < 66560
                    ? (c >= 66513 && c <= 66517)
                    : c <= 66717)))))))
            : (c <= 66729 || (c < 67003
              ? (c < 66940
                ? (c < 66816
                  ? (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)
                  : (c <= 66855 || (c < 66928
                    ? (c >= 66864 && c <= 66915)
                    : c <= 66938)))
                : (c <= 66954 || (c < 66967
                  ? (c < 66964
                    ? (c >= 66956 && c <= 66962)
                    : c <= 66965)
                  : (c <= 66977 || (c < 66995
                    ? (c >= 66979 && c <= 66993)
                    : c <= 67001)))))
              : (c <= 67004 || (c < 67506
                ? (c < 67424
                  ? (c < 67392
                    ? (c >= 67072 && c <= 67382)
                    : c <= 67413)
                  : (c <= 67431 || (c < 67463
                    ? (c >= 67456 && c <= 67461)
                    : c <= 67504)))
                : (c <= 67514 || (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))))))))))
        : (c <= 67644 || (c < 69968
          ? (c < 68480
            ? (c < 68108
              ? (c < 67840
                ? (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)))
                : (c <= 67861 || (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || (c < 68101
                    ? (c >= 68096 && c <= 68099)
                    : c <= 68102)))))
              : (c <= 68115 || (c < 68224
                ? (c < 68152
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68154 || (c < 68192
                    ? c == 68159
                    : c <= 68220)))
                : (c <= 68252 || (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68326)
                  : (c <= 68405 || (c < 68448
                    ? (c >= 68416 && c <= 68437)
                    : c <= 68466)))))))
            : (c <= 68497 || (c < 69488
              ? (c < 69248
                ? (c < 68800
                  ? (c < 68736
                    ? (c >= 68608 && c <= 68680)
                    : c <= 68786)
                  : (c <= 68850 || (c < 68912
                    ? (c >= 68864 && c <= 68903)
                    : c <= 68921)))
                : (c <= 69289 || (c < 69376
                  ? (c < 69296
                    ? (c >= 69291 && c <= 69292)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69456)))))
              : (c <= 69509 || (c < 69826
                ? (c < 69632
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69702 || (c < 69759
                    ? (c >= 69734 && c <= 69749)
                    : c <= 69818)))
                : (c <= 69826 || (c < 69888
                  ? (c < 69872
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69881)
                  : (c <= 69940 || (c < 69956
                    ? (c >= 69942 && c <= 69951)
                    : c <= 69959)))))))))
          : (c <= 70003 || (c < 70471
            ? (c < 70287
              ? (c < 70144
                ? (c < 70089
                  ? (c < 70016
                    ? c == 70006
                    : c <= 70084)
                  : (c <= 70092 || (c < 70108
                    ? (c >= 70094 && c <= 70106)
                    : c <= 70108)))
                : (c <= 70161 || (c < 70272
                  ? (c < 70206
                    ? (c >= 70163 && c <= 70199)
                    : c <= 70206)
                  : (c <= 70278 || (c < 70282
                    ? c == 70280
                    : c <= 70285)))))
              : (c <= 70301 || (c < 70415
                ? (c < 70384
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70378)
                  : (c <= 70393 || (c < 70405
                    ? (c >= 70400 && c <= 70403)
                    : c <= 70412)))
                : (c <= 70416 || (c < 70450
                  ? (c < 70442
                    ? (c >= 70419 && c <= 70440)
                    : c <= 70448)
                  : (c <= 70451 || (c < 70459
                    ? (c >= 70453 && c <= 70457)
                    : c <= 70468)))))))
            : (c <= 70472 || (c < 70864
              ? (c < 70512
                ? (c < 70487
                  ? (c < 70480
                    ? (c >= 70475 && c <= 70477)
                    : c <= 70480)
                  : (c <= 70487 || (c < 70502
                    ? (c >= 70493 && c <= 70499)
                    : c <= 70508)))
                : (c <= 70516 || (c < 70750
                  ? (c < 70736
                    ? (c >= 70656 && c <= 70730)
                    : c <= 70745)
                  : (c <= 70753 || (c < 70855
                    ? (c >= 70784 && c <= 70853)
                    : c <= 70855)))))
              : (c <= 70873 || (c < 71248
                ? (c < 71128
                  ? (c < 71096
                    ? (c >= 71040 && c <= 71093)
                    : c <= 71104)
                  : (c <= 71133 || (c < 71236
                    ? (c >= 71168 && c <= 71232)
                    : c <= 71236)))
                : (c <= 71257 || (c < 71424
                  ? (c < 71360
                    ? (c >= 71296 && c <= 71352)
                    : c <= 71369)
                  : (c <= 71450 || (c >= 71453 && c <= 71467)))))))))))))
      : (c <= 71481 || (c < 119973
        ? (c < 82944
          ? (c < 72784
            ? (c < 72096
              ? (c < 71948
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71738)
                  : (c <= 71913 || (c < 71945
                    ? (c >= 71935 && c <= 71942)
                    : c <= 71945)))
                : (c <= 71955 || (c < 71991
                  ? (c < 71960
                    ? (c >= 71957 && c <= 71958)
                    : c <= 71989)
                  : (c <= 71992 || (c < 72016
                    ? (c >= 71995 && c <= 72003)
                    : c <= 72025)))))
              : (c <= 72103 || (c < 72272
                ? (c < 72163
                  ? (c < 72154
                    ? (c >= 72106 && c <= 72151)
                    : c <= 72161)
                  : (c <= 72164 || (c < 72263
                    ? (c >= 72192 && c <= 72254)
                    : c <= 72263)))
                : (c <= 72345 || (c < 72704
                  ? (c < 72368
                    ? c == 72349
                    : c <= 72440)
                  : (c <= 72712 || (c < 72760
                    ? (c >= 72714 && c <= 72758)
                    : c <= 72768)))))))
            : (c <= 72793 || (c < 73063
              ? (c < 72971
                ? (c < 72873
                  ? (c < 72850
                    ? (c >= 72818 && c <= 72847)
                    : c <= 72871)
                  : (c <= 72886 || (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)))
                : (c <= 73014 || (c < 73023
                  ? (c < 73020
                    ? c == 73018
                    : c <= 73021)
                  : (c <= 73031 || (c < 73056
                    ? (c >= 73040 && c <= 73049)
                    : c <= 73061)))))
              : (c <= 73064 || (c < 73648
                ? (c < 73107
                  ? (c < 73104
                    ? (c >= 73066 && c <= 73102)
                    : c <= 73105)
                  : (c <= 73112 || (c < 73440
                    ? (c >= 73120 && c <= 73129)
                    : c <= 73462)))
                : (c <= 73648 || (c < 74880
                  ? (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)
                  : (c <= 75075 || (c < 77824
                    ? (c >= 77712 && c <= 77808)
                    : c <= 78894)))))))))
          : (c <= 83526 || (c < 110581
            ? (c < 93053
              ? (c < 92880
                ? (c < 92768
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92777 || (c < 92864
                    ? (c >= 92784 && c <= 92862)
                    : c <= 92873)))
                : (c <= 92909 || (c < 92992
                  ? (c < 92928
                    ? (c >= 92912 && c <= 92916)
                    : c <= 92982)
                  : (c <= 92995 || (c < 93027
                    ? (c >= 93008 && c <= 93017)
                    : c <= 93047)))))
              : (c <= 93071 || (c < 94179
                ? (c < 94031
                  ? (c < 93952
                    ? (c >= 93760 && c <= 93823)
                    : c <= 94026)
                  : (c <= 94087 || (c < 94176
                    ? (c >= 94095 && c <= 94111)
                    : c <= 94177)))
                : (c <= 94180 || (c < 100352
                  ? (c < 94208
                    ? (c >= 94192 && c <= 94193)
                    : c <= 100343)
                  : (c <= 101589 || (c < 110576
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110579)))))))
            : (c <= 110587 || (c < 118576
              ? (c < 113664
                ? (c < 110928
                  ? (c < 110592
                    ? (c >= 110589 && c <= 110590)
                    : c <= 110882)
                  : (c <= 110930 || (c < 110960
                    ? (c >= 110948 && c <= 110951)
                    : c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c < 118528
                    ? (c >= 113821 && c <= 113822)
                    : c <= 118573)))))
              : (c <= 118598 || (c < 119362
                ? (c < 119163
                  ? (c < 119149
                    ? (c >= 119141 && c <= 119145)
                    : c <= 119154)
                  : (c <= 119170 || (c < 119210
                    ? (c >= 119173 && c <= 119179)
                    : c <= 119213)))
                : (c <= 119364 || (c < 119966
                  ? (c < 119894
                    ? (c >= 119808 && c <= 119892)
                    : c <= 119964)
                  : (c <= 119967 || c == 119970))))))))))
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
  return (c < '@'
    ? (c < ','
      ? (c < '*'
        ? c == '$'
        : c <= '*')
      : (c <= '-' || (c < ':'
        ? c == '/'
        : c <= '>')))
    : (c <= '@' || (c < 'r'
      ? (c < 'n'
        ? (c >= '_' && c <= '`')
        : c <= 'n')
      : (c <= 'r' || (c < '~'
        ? c == 't'
        : c <= '~')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(52);
      if (lookahead == '!') ADVANCE(189);
      if (lookahead == '"') ADVANCE(114);
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == '$') ADVANCE(147);
      if (lookahead == '%') ADVANCE(218);
      if (lookahead == '\'') ADVANCE(187);
      if (lookahead == '(') ADVANCE(166);
      if (lookahead == ')') ADVANCE(167);
      if (lookahead == '*') ADVANCE(142);
      if (lookahead == '+') ADVANCE(223);
      if (lookahead == ',') ADVANCE(168);
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '/') ADVANCE(135);
      if (lookahead == ':') ADVANCE(140);
      if (lookahead == ';') ADVANCE(169);
      if (lookahead == '<') ADVANCE(152);
      if (lookahead == '=') ADVANCE(150);
      if (lookahead == '>') ADVANCE(154);
      if (lookahead == '?') ADVANCE(188);
      if (lookahead == '@') ADVANCE(155);
      if (lookahead == '[') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(220);
      if (lookahead == ']') ADVANCE(165);
      if (lookahead == '_') ADVANCE(145);
      if (lookahead == '`') ADVANCE(146);
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'b') ADVANCE(99);
      if (lookahead == 'c') ADVANCE(81);
      if (lookahead == 'd') ADVANCE(61);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == 'l') ADVANCE(68);
      if (lookahead == 'm') ADVANCE(83);
      if (lookahead == 'n') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(95);
      if (lookahead == 'p') ADVANCE(102);
      if (lookahead == 'r') ADVANCE(57);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == 'w') ADVANCE(73);
      if (lookahead == '{') ADVANCE(162);
      if (lookahead == '}') ADVANCE(163);
      if (lookahead == '~') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(110);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(189);
      if (lookahead == '"') ADVANCE(114);
      if (lookahead == '\'') ADVANCE(187);
      if (lookahead == '(') ADVANCE(166);
      if (lookahead == ')') ADVANCE(167);
      if (lookahead == '*') ADVANCE(142);
      if (lookahead == '+') ADVANCE(223);
      if (lookahead == ',') ADVANCE(168);
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '/') ADVANCE(135);
      if (lookahead == ':') ADVANCE(140);
      if (lookahead == '<') ADVANCE(152);
      if (lookahead == '=') ADVANCE(150);
      if (lookahead == '>') ADVANCE(154);
      if (lookahead == '?') ADVANCE(188);
      if (lookahead == '\\') ADVANCE(220);
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'i') ADVANCE(85);
      if (lookahead == 'n') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(111);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(110);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(189);
      if (lookahead == '"') ADVANCE(219);
      if (lookahead == '\'') ADVANCE(187);
      if (lookahead == '(') ADVANCE(166);
      if (lookahead == '*') ADVANCE(142);
      if (lookahead == '+') ADVANCE(223);
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == '/') ADVANCE(135);
      if (lookahead == ';') ADVANCE(169);
      if (lookahead == '<') ADVANCE(152);
      if (lookahead == '=') ADVANCE(150);
      if (lookahead == '>') ADVANCE(154);
      if (lookahead == '?') ADVANCE(188);
      if (lookahead == '[') ADVANCE(164);
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'b') ADVANCE(99);
      if (lookahead == 'c') ADVANCE(93);
      if (lookahead == 'f') ADVANCE(54);
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == 'l') ADVANCE(68);
      if (lookahead == 'n') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(95);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == 'w') ADVANCE(73);
      if (lookahead == '{') ADVANCE(162);
      if (lookahead == '}') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(189);
      if (lookahead == '"') ADVANCE(219);
      if (lookahead == '\'') ADVANCE(187);
      if (lookahead == '(') ADVANCE(166);
      if (lookahead == '*') ADVANCE(141);
      if (lookahead == '+') ADVANCE(222);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == ';') ADVANCE(169);
      if (lookahead == '<') ADVANCE(152);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '>') ADVANCE(154);
      if (lookahead == '?') ADVANCE(188);
      if (lookahead == '[') ADVANCE(164);
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'b') ADVANCE(99);
      if (lookahead == 'c') ADVANCE(93);
      if (lookahead == 'f') ADVANCE(54);
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == 'l') ADVANCE(68);
      if (lookahead == 'n') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(95);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == 'w') ADVANCE(73);
      if (lookahead == '{') ADVANCE(162);
      if (lookahead == '}') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(189);
      if (lookahead == '%') ADVANCE(218);
      if (lookahead == '\'') ADVANCE(187);
      if (lookahead == '(') ADVANCE(166);
      if (lookahead == ')') ADVANCE(167);
      if (lookahead == '*') ADVANCE(141);
      if (lookahead == '+') ADVANCE(222);
      if (lookahead == ',') ADVANCE(156);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == '<') ADVANCE(152);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '>') ADVANCE(154);
      if (lookahead == '?') ADVANCE(188);
      if (lookahead == '[') ADVANCE(164);
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'c') ADVANCE(24);
      if (lookahead == 'd') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(25);
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(26);
      if (lookahead == 'n') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(30);
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(18);
      if (lookahead == '{') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(111);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(189);
      if (lookahead == '\'') ADVANCE(187);
      if (lookahead == '(') ADVANCE(166);
      if (lookahead == ')') ADVANCE(167);
      if (lookahead == '*') ADVANCE(142);
      if (lookahead == '+') ADVANCE(223);
      if (lookahead == ',') ADVANCE(156);
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '/') ADVANCE(135);
      if (lookahead == ':') ADVANCE(140);
      if (lookahead == '<') ADVANCE(152);
      if (lookahead == '=') ADVANCE(150);
      if (lookahead == '>') ADVANCE(154);
      if (lookahead == '?') ADVANCE(188);
      if (lookahead == '[') ADVANCE(164);
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(30);
      if (lookahead == '{') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(111);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(189);
      if (lookahead == '\'') ADVANCE(187);
      if (lookahead == ')') ADVANCE(167);
      if (lookahead == '*') ADVANCE(141);
      if (lookahead == '+') ADVANCE(222);
      if (lookahead == ',') ADVANCE(156);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == '<') ADVANCE(152);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '>') ADVANCE(154);
      if (lookahead == '?') ADVANCE(188);
      if (lookahead == '[') ADVANCE(164);
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'i') ADVANCE(85);
      if (lookahead == 'n') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(95);
      if (lookahead == '{') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(111);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(110);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '"') ADVANCE(219);
      if (lookahead == '%') ADVANCE(218);
      if (lookahead == '(') ADVANCE(166);
      if (lookahead == '*') ADVANCE(141);
      if (lookahead == '+') ADVANCE(222);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == ';') ADVANCE(169);
      if (lookahead == '<') ADVANCE(152);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '>') ADVANCE(154);
      if (lookahead == '[') ADVANCE(164);
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'b') ADVANCE(99);
      if (lookahead == 'c') ADVANCE(81);
      if (lookahead == 'd') ADVANCE(61);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == 'l') ADVANCE(68);
      if (lookahead == 'm') ADVANCE(83);
      if (lookahead == 'n') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(95);
      if (lookahead == 'p') ADVANCE(102);
      if (lookahead == 'r') ADVANCE(57);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == 'w') ADVANCE(73);
      if (lookahead == '{') ADVANCE(162);
      if (lookahead == '}') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(110);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(219);
      if (lookahead == '(') ADVANCE(166);
      if (lookahead == ')') ADVANCE(167);
      if (lookahead == '+') ADVANCE(222);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '[') ADVANCE(164);
      if (lookahead == 'f') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(91);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == '{') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(110);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(219);
      if (lookahead == '(') ADVANCE(166);
      if (lookahead == '+') ADVANCE(222);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(169);
      if (lookahead == '[') ADVANCE(164);
      if (lookahead == 'b') ADVANCE(99);
      if (lookahead == 'c') ADVANCE(93);
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == 'f') ADVANCE(54);
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead == 'l') ADVANCE(68);
      if (lookahead == 'n') ADVANCE(91);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == 'w') ADVANCE(73);
      if (lookahead == '{') ADVANCE(162);
      if (lookahead == '}') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(110);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(219);
      if (lookahead == '(') ADVANCE(166);
      if (lookahead == '+') ADVANCE(222);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(169);
      if (lookahead == '[') ADVANCE(164);
      if (lookahead == 'b') ADVANCE(99);
      if (lookahead == 'c') ADVANCE(93);
      if (lookahead == 'f') ADVANCE(54);
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead == 'l') ADVANCE(68);
      if (lookahead == 'n') ADVANCE(91);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == 'w') ADVANCE(73);
      if (lookahead == '{') ADVANCE(162);
      if (lookahead == '}') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(110);
      END_STATE();
    case 11:
      if (lookahead == ')') ADVANCE(167);
      if (lookahead == ',') ADVANCE(168);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(111);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(110);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(112);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(111);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(110);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(238);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(237);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(237);
      if (lookahead == '>') ADVANCE(183);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(228);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(209);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == 'f') ADVANCE(173);
      if (lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 23:
      if (lookahead == 'g') ADVANCE(206);
      END_STATE();
    case 24:
      if (lookahead == 'm') ADVANCE(203);
      END_STATE();
    case 25:
      if (lookahead == 'm') ADVANCE(212);
      END_STATE();
    case 26:
      if (lookahead == 'm') ADVANCE(200);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 34:
      if (lookahead == '{') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 35:
      if (lookahead == '}') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(221);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 43:
      if (eof) ADVANCE(52);
      if (lookahead == '!') ADVANCE(189);
      if (lookahead == '"') ADVANCE(114);
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == '$') ADVANCE(147);
      if (lookahead == '\'') ADVANCE(187);
      if (lookahead == '(') ADVANCE(166);
      if (lookahead == '*') ADVANCE(142);
      if (lookahead == '+') ADVANCE(223);
      if (lookahead == ',') ADVANCE(156);
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '/') ADVANCE(135);
      if (lookahead == ':') ADVANCE(140);
      if (lookahead == ';') ADVANCE(157);
      if (lookahead == '<') ADVANCE(152);
      if (lookahead == '=') ADVANCE(150);
      if (lookahead == '>') ADVANCE(154);
      if (lookahead == '?') ADVANCE(188);
      if (lookahead == '@') ADVANCE(155);
      if (lookahead == '[') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(113);
      if (lookahead == ']') ADVANCE(165);
      if (lookahead == '_') ADVANCE(143);
      if (lookahead == '`') ADVANCE(146);
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == 'i') ADVANCE(126);
      if (lookahead == 'n') ADVANCE(127);
      if (lookahead == 'o') ADVANCE(128);
      if (lookahead == '~') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 44:
      if (eof) ADVANCE(52);
      if (lookahead == '!') ADVANCE(189);
      if (lookahead == '"') ADVANCE(114);
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == '$') ADVANCE(147);
      if (lookahead == '\'') ADVANCE(187);
      if (lookahead == '(') ADVANCE(166);
      if (lookahead == '*') ADVANCE(141);
      if (lookahead == '+') ADVANCE(222);
      if (lookahead == ',') ADVANCE(156);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == ':') ADVANCE(140);
      if (lookahead == ';') ADVANCE(157);
      if (lookahead == '<') ADVANCE(152);
      if (lookahead == '=') ADVANCE(149);
      if (lookahead == '>') ADVANCE(154);
      if (lookahead == '?') ADVANCE(188);
      if (lookahead == '@') ADVANCE(155);
      if (lookahead == '[') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(113);
      if (lookahead == ']') ADVANCE(165);
      if (lookahead == '_') ADVANCE(143);
      if (lookahead == '`') ADVANCE(146);
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == 'i') ADVANCE(126);
      if (lookahead == 'n') ADVANCE(127);
      if (lookahead == 'o') ADVANCE(128);
      if (lookahead == '~') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 45:
      if (eof) ADVANCE(52);
      if (lookahead == '!') ADVANCE(189);
      if (lookahead == '"') ADVANCE(114);
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == '$') ADVANCE(147);
      if (lookahead == '\'') ADVANCE(187);
      if (lookahead == '*') ADVANCE(141);
      if (lookahead == '+') ADVANCE(222);
      if (lookahead == ',') ADVANCE(156);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == ':') ADVANCE(140);
      if (lookahead == ';') ADVANCE(157);
      if (lookahead == '<') ADVANCE(152);
      if (lookahead == '=') ADVANCE(149);
      if (lookahead == '>') ADVANCE(154);
      if (lookahead == '?') ADVANCE(188);
      if (lookahead == '@') ADVANCE(155);
      if (lookahead == '[') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(113);
      if (lookahead == ']') ADVANCE(165);
      if (lookahead == '_') ADVANCE(144);
      if (lookahead == '`') ADVANCE(146);
      if (lookahead == 'a') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == 'n') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(98);
      if (lookahead == '~') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(110);
      END_STATE();
    case 46:
      if (eof) ADVANCE(52);
      if (lookahead == '!') ADVANCE(159);
      if (lookahead == '"') ADVANCE(114);
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == '$') ADVANCE(147);
      if (lookahead == '(') ADVANCE(166);
      if (lookahead == ')') ADVANCE(167);
      if (lookahead == '*') ADVANCE(141);
      if (lookahead == ',') ADVANCE(156);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '.') ADVANCE(139);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == ':') ADVANCE(140);
      if (lookahead == ';') ADVANCE(157);
      if (lookahead == '<') ADVANCE(151);
      if (lookahead == '=') ADVANCE(148);
      if (lookahead == '>') ADVANCE(153);
      if (lookahead == '?') ADVANCE(158);
      if (lookahead == '@') ADVANCE(155);
      if (lookahead == '[') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(113);
      if (lookahead == ']') ADVANCE(165);
      if (lookahead == '_') ADVANCE(143);
      if (lookahead == '`') ADVANCE(146);
      if (lookahead == '~') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 47:
      if (eof) ADVANCE(52);
      if (lookahead == '!') ADVANCE(159);
      if (lookahead == '"') ADVANCE(114);
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == '$') ADVANCE(147);
      if (lookahead == '*') ADVANCE(141);
      if (lookahead == ',') ADVANCE(156);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '.') ADVANCE(139);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == ':') ADVANCE(140);
      if (lookahead == ';') ADVANCE(157);
      if (lookahead == '<') ADVANCE(151);
      if (lookahead == '=') ADVANCE(148);
      if (lookahead == '>') ADVANCE(153);
      if (lookahead == '?') ADVANCE(158);
      if (lookahead == '@') ADVANCE(155);
      if (lookahead == '[') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(113);
      if (lookahead == ']') ADVANCE(165);
      if (lookahead == '_') ADVANCE(143);
      if (lookahead == '`') ADVANCE(146);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == '~') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 48:
      if (eof) ADVANCE(52);
      if (lookahead == '!') ADVANCE(160);
      if (lookahead == '"') ADVANCE(114);
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == '$') ADVANCE(147);
      if (lookahead == '%') ADVANCE(218);
      if (lookahead == '*') ADVANCE(141);
      if (lookahead == '+') ADVANCE(222);
      if (lookahead == ',') ADVANCE(156);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '.') ADVANCE(139);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == ':') ADVANCE(140);
      if (lookahead == ';') ADVANCE(157);
      if (lookahead == '<') ADVANCE(152);
      if (lookahead == '=') ADVANCE(149);
      if (lookahead == '>') ADVANCE(154);
      if (lookahead == '?') ADVANCE(158);
      if (lookahead == '@') ADVANCE(155);
      if (lookahead == '[') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(113);
      if (lookahead == ']') ADVANCE(165);
      if (lookahead == '_') ADVANCE(143);
      if (lookahead == '`') ADVANCE(146);
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == 'c') ADVANCE(122);
      if (lookahead == 'd') ADVANCE(118);
      if (lookahead == 'e') ADVANCE(123);
      if (lookahead == 'f') ADVANCE(129);
      if (lookahead == 'i') ADVANCE(126);
      if (lookahead == 'm') ADVANCE(124);
      if (lookahead == 'n') ADVANCE(127);
      if (lookahead == 'o') ADVANCE(128);
      if (lookahead == 'p') ADVANCE(132);
      if (lookahead == 'r') ADVANCE(115);
      if (lookahead == '~') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 49:
      if (eof) ADVANCE(52);
      if (lookahead == '!') ADVANCE(160);
      if (lookahead == '"') ADVANCE(114);
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == '$') ADVANCE(147);
      if (lookahead == '*') ADVANCE(141);
      if (lookahead == '+') ADVANCE(222);
      if (lookahead == ',') ADVANCE(156);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '.') ADVANCE(139);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == ':') ADVANCE(140);
      if (lookahead == ';') ADVANCE(157);
      if (lookahead == '<') ADVANCE(152);
      if (lookahead == '=') ADVANCE(150);
      if (lookahead == '>') ADVANCE(154);
      if (lookahead == '?') ADVANCE(158);
      if (lookahead == '@') ADVANCE(155);
      if (lookahead == '[') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(113);
      if (lookahead == ']') ADVANCE(165);
      if (lookahead == '_') ADVANCE(143);
      if (lookahead == '`') ADVANCE(146);
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == 'i') ADVANCE(126);
      if (lookahead == 'n') ADVANCE(127);
      if (lookahead == 'o') ADVANCE(128);
      if (lookahead == '~') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 50:
      if (eof) ADVANCE(52);
      if (lookahead == '!') ADVANCE(160);
      if (lookahead == '"') ADVANCE(114);
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == '$') ADVANCE(147);
      if (lookahead == '*') ADVANCE(141);
      if (lookahead == '+') ADVANCE(222);
      if (lookahead == ',') ADVANCE(156);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '.') ADVANCE(139);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == ':') ADVANCE(140);
      if (lookahead == ';') ADVANCE(157);
      if (lookahead == '<') ADVANCE(152);
      if (lookahead == '=') ADVANCE(149);
      if (lookahead == '>') ADVANCE(154);
      if (lookahead == '?') ADVANCE(158);
      if (lookahead == '@') ADVANCE(155);
      if (lookahead == '[') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(113);
      if (lookahead == ']') ADVANCE(165);
      if (lookahead == '_') ADVANCE(143);
      if (lookahead == '`') ADVANCE(146);
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == 'i') ADVANCE(126);
      if (lookahead == 'n') ADVANCE(127);
      if (lookahead == 'o') ADVANCE(128);
      if (lookahead == '~') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 51:
      if (eof) ADVANCE(52);
      if (lookahead == '!') ADVANCE(160);
      if (lookahead == '"') ADVANCE(114);
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == '$') ADVANCE(147);
      if (lookahead == '*') ADVANCE(141);
      if (lookahead == '+') ADVANCE(222);
      if (lookahead == ',') ADVANCE(156);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '.') ADVANCE(139);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == ':') ADVANCE(140);
      if (lookahead == ';') ADVANCE(157);
      if (lookahead == '<') ADVANCE(152);
      if (lookahead == '=') ADVANCE(149);
      if (lookahead == '>') ADVANCE(154);
      if (lookahead == '?') ADVANCE(158);
      if (lookahead == '@') ADVANCE(155);
      if (lookahead == '[') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(113);
      if (lookahead == ']') ADVANCE(165);
      if (lookahead == '_') ADVANCE(144);
      if (lookahead == '`') ADVANCE(146);
      if (lookahead == 'a') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == 'n') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(98);
      if (lookahead == '~') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(110);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead == 'o') ADVANCE(97);
      if (lookahead == 'r') ADVANCE(217);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(110);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead == 'o') ADVANCE(97);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(110);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(80);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(110);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(76);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(110);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(59);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(110);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(231);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(211);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(110);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(72);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(176);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(190);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(191);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(192);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(177);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(171);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(103);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(56);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(174);
      if (lookahead == 'n') ADVANCE(182);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(174);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(208);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(74);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(79);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(90);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(170);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(100);
      if (lookahead == 'm') ADVANCE(214);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(100);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(66);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(101);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(88);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(214);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(202);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(58);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(182);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(110);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(110);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(106);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead == 't') ADVANCE(227);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(108);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(89);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(110);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(88);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(104);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(235);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(107);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(178);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(110);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(69);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(62);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(65);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(199);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(172);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(227);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(110);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(75);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(64);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(67);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_line_break);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(221);
      if (lookahead == 'u') ADVANCE(34);
      if (lookahead == 'x') ADVANCE(42);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'a') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'd') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'd') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'e') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'e') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'g') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'l') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'm') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'm') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'm') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'n') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'n') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'o') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'r') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'r') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 's') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 't') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 't') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(112);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead == '=') ADVANCE(243);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(241);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(242);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(110);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym__);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(237);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(237);
      if (lookahead == '>') ADVANCE(183);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(236);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(239);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(238);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_COMMA2);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_SEMI2);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_break);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_continue);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_let);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_else);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_while);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_for);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(110);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_in);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_DOT2);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_DOT2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_QMARK2);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_BANG2);
      if (lookahead == '=') ADVANCE(238);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_none);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(195);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_int_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_pt);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_pt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_pt);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_mm);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_mm);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_mm);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_cm);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_cm);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_cm);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_deg);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_deg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_deg);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_rad);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_rad);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_rad);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_em);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_em);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_em);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_fr);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_fr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_fr);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__not_an_escape_sequence);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(221);
      if (lookahead == 'u') ADVANCE(34);
      if (lookahead == 'x') ADVANCE(42);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(240);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(110);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_not);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(110);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_and);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(110);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_or);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(110);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 46, .external_lex_state = 2},
  [2] = {.lex_state = 10, .external_lex_state = 2},
  [3] = {.lex_state = 10, .external_lex_state = 2},
  [4] = {.lex_state = 10, .external_lex_state = 2},
  [5] = {.lex_state = 10, .external_lex_state = 2},
  [6] = {.lex_state = 10, .external_lex_state = 2},
  [7] = {.lex_state = 10, .external_lex_state = 2},
  [8] = {.lex_state = 10, .external_lex_state = 2},
  [9] = {.lex_state = 10, .external_lex_state = 2},
  [10] = {.lex_state = 10, .external_lex_state = 2},
  [11] = {.lex_state = 10, .external_lex_state = 2},
  [12] = {.lex_state = 10, .external_lex_state = 2},
  [13] = {.lex_state = 10, .external_lex_state = 2},
  [14] = {.lex_state = 10, .external_lex_state = 2},
  [15] = {.lex_state = 10, .external_lex_state = 2},
  [16] = {.lex_state = 43, .external_lex_state = 2},
  [17] = {.lex_state = 43, .external_lex_state = 2},
  [18] = {.lex_state = 2, .external_lex_state = 2},
  [19] = {.lex_state = 48, .external_lex_state = 2},
  [20] = {.lex_state = 48, .external_lex_state = 2},
  [21] = {.lex_state = 7, .external_lex_state = 2},
  [22] = {.lex_state = 44, .external_lex_state = 2},
  [23] = {.lex_state = 44, .external_lex_state = 2},
  [24] = {.lex_state = 45, .external_lex_state = 2},
  [25] = {.lex_state = 45, .external_lex_state = 2},
  [26] = {.lex_state = 45, .external_lex_state = 2},
  [27] = {.lex_state = 45, .external_lex_state = 2},
  [28] = {.lex_state = 8, .external_lex_state = 2},
  [29] = {.lex_state = 8, .external_lex_state = 2},
  [30] = {.lex_state = 8, .external_lex_state = 2},
  [31] = {.lex_state = 8, .external_lex_state = 2},
  [32] = {.lex_state = 44, .external_lex_state = 2},
  [33] = {.lex_state = 44, .external_lex_state = 2},
  [34] = {.lex_state = 44, .external_lex_state = 2},
  [35] = {.lex_state = 44, .external_lex_state = 2},
  [36] = {.lex_state = 44, .external_lex_state = 2},
  [37] = {.lex_state = 8, .external_lex_state = 2},
  [38] = {.lex_state = 44, .external_lex_state = 2},
  [39] = {.lex_state = 44, .external_lex_state = 2},
  [40] = {.lex_state = 44, .external_lex_state = 2},
  [41] = {.lex_state = 44, .external_lex_state = 2},
  [42] = {.lex_state = 44, .external_lex_state = 2},
  [43] = {.lex_state = 8, .external_lex_state = 2},
  [44] = {.lex_state = 8, .external_lex_state = 2},
  [45] = {.lex_state = 44, .external_lex_state = 2},
  [46] = {.lex_state = 44, .external_lex_state = 2},
  [47] = {.lex_state = 44, .external_lex_state = 2},
  [48] = {.lex_state = 44, .external_lex_state = 2},
  [49] = {.lex_state = 44, .external_lex_state = 2},
  [50] = {.lex_state = 44, .external_lex_state = 2},
  [51] = {.lex_state = 44, .external_lex_state = 2},
  [52] = {.lex_state = 44, .external_lex_state = 2},
  [53] = {.lex_state = 44, .external_lex_state = 2},
  [54] = {.lex_state = 8, .external_lex_state = 2},
  [55] = {.lex_state = 44, .external_lex_state = 2},
  [56] = {.lex_state = 44, .external_lex_state = 2},
  [57] = {.lex_state = 8, .external_lex_state = 2},
  [58] = {.lex_state = 44, .external_lex_state = 2},
  [59] = {.lex_state = 44, .external_lex_state = 2},
  [60] = {.lex_state = 44, .external_lex_state = 2},
  [61] = {.lex_state = 3, .external_lex_state = 2},
  [62] = {.lex_state = 3, .external_lex_state = 2},
  [63] = {.lex_state = 3, .external_lex_state = 2},
  [64] = {.lex_state = 3, .external_lex_state = 2},
  [65] = {.lex_state = 3, .external_lex_state = 2},
  [66] = {.lex_state = 3, .external_lex_state = 2},
  [67] = {.lex_state = 3, .external_lex_state = 2},
  [68] = {.lex_state = 3, .external_lex_state = 2},
  [69] = {.lex_state = 3, .external_lex_state = 2},
  [70] = {.lex_state = 8, .external_lex_state = 2},
  [71] = {.lex_state = 3, .external_lex_state = 2},
  [72] = {.lex_state = 8, .external_lex_state = 2},
  [73] = {.lex_state = 8, .external_lex_state = 2},
  [74] = {.lex_state = 3, .external_lex_state = 2},
  [75] = {.lex_state = 3, .external_lex_state = 2},
  [76] = {.lex_state = 8, .external_lex_state = 2},
  [77] = {.lex_state = 51, .external_lex_state = 2},
  [78] = {.lex_state = 8, .external_lex_state = 2},
  [79] = {.lex_state = 8, .external_lex_state = 2},
  [80] = {.lex_state = 51, .external_lex_state = 2},
  [81] = {.lex_state = 51, .external_lex_state = 2},
  [82] = {.lex_state = 51, .external_lex_state = 2},
  [83] = {.lex_state = 49, .external_lex_state = 2},
  [84] = {.lex_state = 49, .external_lex_state = 2},
  [85] = {.lex_state = 50, .external_lex_state = 2},
  [86] = {.lex_state = 50, .external_lex_state = 2},
  [87] = {.lex_state = 50, .external_lex_state = 2},
  [88] = {.lex_state = 50, .external_lex_state = 2},
  [89] = {.lex_state = 50, .external_lex_state = 2},
  [90] = {.lex_state = 50, .external_lex_state = 2},
  [91] = {.lex_state = 50, .external_lex_state = 2},
  [92] = {.lex_state = 50, .external_lex_state = 2},
  [93] = {.lex_state = 50, .external_lex_state = 2},
  [94] = {.lex_state = 50, .external_lex_state = 2},
  [95] = {.lex_state = 50, .external_lex_state = 2},
  [96] = {.lex_state = 50, .external_lex_state = 2},
  [97] = {.lex_state = 50, .external_lex_state = 2},
  [98] = {.lex_state = 50, .external_lex_state = 2},
  [99] = {.lex_state = 50, .external_lex_state = 2},
  [100] = {.lex_state = 50, .external_lex_state = 2},
  [101] = {.lex_state = 50, .external_lex_state = 2},
  [102] = {.lex_state = 50, .external_lex_state = 2},
  [103] = {.lex_state = 8, .external_lex_state = 2},
  [104] = {.lex_state = 50, .external_lex_state = 2},
  [105] = {.lex_state = 50, .external_lex_state = 2},
  [106] = {.lex_state = 50, .external_lex_state = 2},
  [107] = {.lex_state = 50, .external_lex_state = 2},
  [108] = {.lex_state = 50, .external_lex_state = 2},
  [109] = {.lex_state = 50, .external_lex_state = 2},
  [110] = {.lex_state = 50, .external_lex_state = 2},
  [111] = {.lex_state = 50, .external_lex_state = 2},
  [112] = {.lex_state = 50, .external_lex_state = 2},
  [113] = {.lex_state = 50, .external_lex_state = 2},
  [114] = {.lex_state = 50, .external_lex_state = 2},
  [115] = {.lex_state = 50, .external_lex_state = 2},
  [116] = {.lex_state = 50, .external_lex_state = 2},
  [117] = {.lex_state = 50, .external_lex_state = 2},
  [118] = {.lex_state = 50, .external_lex_state = 2},
  [119] = {.lex_state = 50, .external_lex_state = 2},
  [120] = {.lex_state = 50, .external_lex_state = 2},
  [121] = {.lex_state = 50, .external_lex_state = 2},
  [122] = {.lex_state = 50, .external_lex_state = 2},
  [123] = {.lex_state = 50, .external_lex_state = 2},
  [124] = {.lex_state = 50, .external_lex_state = 2},
  [125] = {.lex_state = 8, .external_lex_state = 2},
  [126] = {.lex_state = 50, .external_lex_state = 2},
  [127] = {.lex_state = 50, .external_lex_state = 2},
  [128] = {.lex_state = 8, .external_lex_state = 2},
  [129] = {.lex_state = 50, .external_lex_state = 2},
  [130] = {.lex_state = 50, .external_lex_state = 2},
  [131] = {.lex_state = 50, .external_lex_state = 2},
  [132] = {.lex_state = 50, .external_lex_state = 2},
  [133] = {.lex_state = 50, .external_lex_state = 2},
  [134] = {.lex_state = 50, .external_lex_state = 2},
  [135] = {.lex_state = 50, .external_lex_state = 2},
  [136] = {.lex_state = 50, .external_lex_state = 2},
  [137] = {.lex_state = 50, .external_lex_state = 2},
  [138] = {.lex_state = 50, .external_lex_state = 2},
  [139] = {.lex_state = 50, .external_lex_state = 2},
  [140] = {.lex_state = 50, .external_lex_state = 2},
  [141] = {.lex_state = 50, .external_lex_state = 2},
  [142] = {.lex_state = 50, .external_lex_state = 2},
  [143] = {.lex_state = 50, .external_lex_state = 2},
  [144] = {.lex_state = 50, .external_lex_state = 2},
  [145] = {.lex_state = 50, .external_lex_state = 2},
  [146] = {.lex_state = 50, .external_lex_state = 2},
  [147] = {.lex_state = 50, .external_lex_state = 2},
  [148] = {.lex_state = 50, .external_lex_state = 2},
  [149] = {.lex_state = 3, .external_lex_state = 2},
  [150] = {.lex_state = 50, .external_lex_state = 2},
  [151] = {.lex_state = 50, .external_lex_state = 2},
  [152] = {.lex_state = 50, .external_lex_state = 2},
  [153] = {.lex_state = 3, .external_lex_state = 2},
  [154] = {.lex_state = 8, .external_lex_state = 2},
  [155] = {.lex_state = 8, .external_lex_state = 2},
  [156] = {.lex_state = 8, .external_lex_state = 2},
  [157] = {.lex_state = 3, .external_lex_state = 2},
  [158] = {.lex_state = 8, .external_lex_state = 2},
  [159] = {.lex_state = 3, .external_lex_state = 2},
  [160] = {.lex_state = 8, .external_lex_state = 2},
  [161] = {.lex_state = 8, .external_lex_state = 2},
  [162] = {.lex_state = 8, .external_lex_state = 2},
  [163] = {.lex_state = 8, .external_lex_state = 2},
  [164] = {.lex_state = 8, .external_lex_state = 2},
  [165] = {.lex_state = 8, .external_lex_state = 2},
  [166] = {.lex_state = 8, .external_lex_state = 2},
  [167] = {.lex_state = 8, .external_lex_state = 2},
  [168] = {.lex_state = 3, .external_lex_state = 2},
  [169] = {.lex_state = 3, .external_lex_state = 2},
  [170] = {.lex_state = 3, .external_lex_state = 2},
  [171] = {.lex_state = 3, .external_lex_state = 2},
  [172] = {.lex_state = 3, .external_lex_state = 2},
  [173] = {.lex_state = 3, .external_lex_state = 2},
  [174] = {.lex_state = 3, .external_lex_state = 2},
  [175] = {.lex_state = 8, .external_lex_state = 2},
  [176] = {.lex_state = 8, .external_lex_state = 2},
  [177] = {.lex_state = 8, .external_lex_state = 2},
  [178] = {.lex_state = 8, .external_lex_state = 2},
  [179] = {.lex_state = 8, .external_lex_state = 2},
  [180] = {.lex_state = 8, .external_lex_state = 2},
  [181] = {.lex_state = 8, .external_lex_state = 2},
  [182] = {.lex_state = 3, .external_lex_state = 2},
  [183] = {.lex_state = 8, .external_lex_state = 2},
  [184] = {.lex_state = 8, .external_lex_state = 2},
  [185] = {.lex_state = 8, .external_lex_state = 2},
  [186] = {.lex_state = 3, .external_lex_state = 2},
  [187] = {.lex_state = 3, .external_lex_state = 2},
  [188] = {.lex_state = 8, .external_lex_state = 2},
  [189] = {.lex_state = 3, .external_lex_state = 2},
  [190] = {.lex_state = 3, .external_lex_state = 2},
  [191] = {.lex_state = 8, .external_lex_state = 2},
  [192] = {.lex_state = 3, .external_lex_state = 2},
  [193] = {.lex_state = 8, .external_lex_state = 2},
  [194] = {.lex_state = 8, .external_lex_state = 2},
  [195] = {.lex_state = 8, .external_lex_state = 2},
  [196] = {.lex_state = 3, .external_lex_state = 2},
  [197] = {.lex_state = 3, .external_lex_state = 2},
  [198] = {.lex_state = 3, .external_lex_state = 2},
  [199] = {.lex_state = 3, .external_lex_state = 2},
  [200] = {.lex_state = 3, .external_lex_state = 2},
  [201] = {.lex_state = 8, .external_lex_state = 2},
  [202] = {.lex_state = 3, .external_lex_state = 2},
  [203] = {.lex_state = 3, .external_lex_state = 2},
  [204] = {.lex_state = 3, .external_lex_state = 2},
  [205] = {.lex_state = 8, .external_lex_state = 2},
  [206] = {.lex_state = 8, .external_lex_state = 2},
  [207] = {.lex_state = 3, .external_lex_state = 2},
  [208] = {.lex_state = 8, .external_lex_state = 2},
  [209] = {.lex_state = 3, .external_lex_state = 2},
  [210] = {.lex_state = 8, .external_lex_state = 2},
  [211] = {.lex_state = 8, .external_lex_state = 2},
  [212] = {.lex_state = 8, .external_lex_state = 2},
  [213] = {.lex_state = 8, .external_lex_state = 2},
  [214] = {.lex_state = 8, .external_lex_state = 2},
  [215] = {.lex_state = 3, .external_lex_state = 2},
  [216] = {.lex_state = 8, .external_lex_state = 2},
  [217] = {.lex_state = 8, .external_lex_state = 2},
  [218] = {.lex_state = 8, .external_lex_state = 2},
  [219] = {.lex_state = 8, .external_lex_state = 2},
  [220] = {.lex_state = 8, .external_lex_state = 2},
  [221] = {.lex_state = 8, .external_lex_state = 2},
  [222] = {.lex_state = 8, .external_lex_state = 2},
  [223] = {.lex_state = 8, .external_lex_state = 2},
  [224] = {.lex_state = 8, .external_lex_state = 2},
  [225] = {.lex_state = 8, .external_lex_state = 2},
  [226] = {.lex_state = 8, .external_lex_state = 2},
  [227] = {.lex_state = 8, .external_lex_state = 2},
  [228] = {.lex_state = 8, .external_lex_state = 2},
  [229] = {.lex_state = 8, .external_lex_state = 2},
  [230] = {.lex_state = 8, .external_lex_state = 2},
  [231] = {.lex_state = 8, .external_lex_state = 2},
  [232] = {.lex_state = 8, .external_lex_state = 2},
  [233] = {.lex_state = 8, .external_lex_state = 2},
  [234] = {.lex_state = 8, .external_lex_state = 2},
  [235] = {.lex_state = 46, .external_lex_state = 2},
  [236] = {.lex_state = 46, .external_lex_state = 2},
  [237] = {.lex_state = 46, .external_lex_state = 2},
  [238] = {.lex_state = 46, .external_lex_state = 2},
  [239] = {.lex_state = 46, .external_lex_state = 2},
  [240] = {.lex_state = 46, .external_lex_state = 2},
  [241] = {.lex_state = 46, .external_lex_state = 2},
  [242] = {.lex_state = 46, .external_lex_state = 2},
  [243] = {.lex_state = 46, .external_lex_state = 2},
  [244] = {.lex_state = 46, .external_lex_state = 2},
  [245] = {.lex_state = 46, .external_lex_state = 2},
  [246] = {.lex_state = 46, .external_lex_state = 2},
  [247] = {.lex_state = 46, .external_lex_state = 2},
  [248] = {.lex_state = 46, .external_lex_state = 2},
  [249] = {.lex_state = 46, .external_lex_state = 2},
  [250] = {.lex_state = 46, .external_lex_state = 2},
  [251] = {.lex_state = 46, .external_lex_state = 2},
  [252] = {.lex_state = 46, .external_lex_state = 2},
  [253] = {.lex_state = 46, .external_lex_state = 2},
  [254] = {.lex_state = 46, .external_lex_state = 2},
  [255] = {.lex_state = 46, .external_lex_state = 2},
  [256] = {.lex_state = 46, .external_lex_state = 2},
  [257] = {.lex_state = 46, .external_lex_state = 2},
  [258] = {.lex_state = 1, .external_lex_state = 2},
  [259] = {.lex_state = 5, .external_lex_state = 2},
  [260] = {.lex_state = 5, .external_lex_state = 2},
  [261] = {.lex_state = 5, .external_lex_state = 2},
  [262] = {.lex_state = 4, .external_lex_state = 2},
  [263] = {.lex_state = 47, .external_lex_state = 2},
  [264] = {.lex_state = 47, .external_lex_state = 2},
  [265] = {.lex_state = 46, .external_lex_state = 2},
  [266] = {.lex_state = 47, .external_lex_state = 2},
  [267] = {.lex_state = 47, .external_lex_state = 2},
  [268] = {.lex_state = 47, .external_lex_state = 2},
  [269] = {.lex_state = 47, .external_lex_state = 2},
  [270] = {.lex_state = 47, .external_lex_state = 2},
  [271] = {.lex_state = 47, .external_lex_state = 2},
  [272] = {.lex_state = 47, .external_lex_state = 2},
  [273] = {.lex_state = 46, .external_lex_state = 2},
  [274] = {.lex_state = 47, .external_lex_state = 2},
  [275] = {.lex_state = 46, .external_lex_state = 2},
  [276] = {.lex_state = 46, .external_lex_state = 2},
  [277] = {.lex_state = 46, .external_lex_state = 2},
  [278] = {.lex_state = 46, .external_lex_state = 2},
  [279] = {.lex_state = 46, .external_lex_state = 2},
  [280] = {.lex_state = 6, .external_lex_state = 2},
  [281] = {.lex_state = 46, .external_lex_state = 2},
  [282] = {.lex_state = 46, .external_lex_state = 2},
  [283] = {.lex_state = 46, .external_lex_state = 2},
  [284] = {.lex_state = 46, .external_lex_state = 2},
  [285] = {.lex_state = 46, .external_lex_state = 2},
  [286] = {.lex_state = 46, .external_lex_state = 2},
  [287] = {.lex_state = 46, .external_lex_state = 2},
  [288] = {.lex_state = 46, .external_lex_state = 2},
  [289] = {.lex_state = 46, .external_lex_state = 2},
  [290] = {.lex_state = 46, .external_lex_state = 2},
  [291] = {.lex_state = 46, .external_lex_state = 2},
  [292] = {.lex_state = 46, .external_lex_state = 2},
  [293] = {.lex_state = 4, .external_lex_state = 2},
  [294] = {.lex_state = 46, .external_lex_state = 2},
  [295] = {.lex_state = 46, .external_lex_state = 2},
  [296] = {.lex_state = 6, .external_lex_state = 2},
  [297] = {.lex_state = 46, .external_lex_state = 2},
  [298] = {.lex_state = 46, .external_lex_state = 2},
  [299] = {.lex_state = 46, .external_lex_state = 2},
  [300] = {.lex_state = 46, .external_lex_state = 2},
  [301] = {.lex_state = 46, .external_lex_state = 2},
  [302] = {.lex_state = 46, .external_lex_state = 2},
  [303] = {.lex_state = 46, .external_lex_state = 2},
  [304] = {.lex_state = 9, .external_lex_state = 2},
  [305] = {.lex_state = 4, .external_lex_state = 2},
  [306] = {.lex_state = 4, .external_lex_state = 2},
  [307] = {.lex_state = 9, .external_lex_state = 2},
  [308] = {.lex_state = 9, .external_lex_state = 2},
  [309] = {.lex_state = 9, .external_lex_state = 2},
  [310] = {.lex_state = 4, .external_lex_state = 2},
  [311] = {.lex_state = 4, .external_lex_state = 2},
  [312] = {.lex_state = 4, .external_lex_state = 2},
  [313] = {.lex_state = 4, .external_lex_state = 2},
  [314] = {.lex_state = 4, .external_lex_state = 2},
  [315] = {.lex_state = 4, .external_lex_state = 2},
  [316] = {.lex_state = 9, .external_lex_state = 2},
  [317] = {.lex_state = 4, .external_lex_state = 2},
  [318] = {.lex_state = 10, .external_lex_state = 2},
  [319] = {.lex_state = 10, .external_lex_state = 2},
  [320] = {.lex_state = 10, .external_lex_state = 2},
  [321] = {.lex_state = 10, .external_lex_state = 2},
  [322] = {.lex_state = 10, .external_lex_state = 2},
  [323] = {.lex_state = 10, .external_lex_state = 2},
  [324] = {.lex_state = 10, .external_lex_state = 2},
  [325] = {.lex_state = 10, .external_lex_state = 2},
  [326] = {.lex_state = 10, .external_lex_state = 2},
  [327] = {.lex_state = 10, .external_lex_state = 2},
  [328] = {.lex_state = 10, .external_lex_state = 2},
  [329] = {.lex_state = 10, .external_lex_state = 2},
  [330] = {.lex_state = 4, .external_lex_state = 2},
  [331] = {.lex_state = 4, .external_lex_state = 2},
  [332] = {.lex_state = 4, .external_lex_state = 2},
  [333] = {.lex_state = 4, .external_lex_state = 2},
  [334] = {.lex_state = 4, .external_lex_state = 2},
  [335] = {.lex_state = 4, .external_lex_state = 2},
  [336] = {.lex_state = 4, .external_lex_state = 2},
  [337] = {.lex_state = 4, .external_lex_state = 2},
  [338] = {.lex_state = 4, .external_lex_state = 2},
  [339] = {.lex_state = 4, .external_lex_state = 2},
  [340] = {.lex_state = 4, .external_lex_state = 2},
  [341] = {.lex_state = 4, .external_lex_state = 2},
  [342] = {.lex_state = 4, .external_lex_state = 2},
  [343] = {.lex_state = 4, .external_lex_state = 2},
  [344] = {.lex_state = 4, .external_lex_state = 2},
  [345] = {.lex_state = 4, .external_lex_state = 2},
  [346] = {.lex_state = 4, .external_lex_state = 2},
  [347] = {.lex_state = 4, .external_lex_state = 2},
  [348] = {.lex_state = 4, .external_lex_state = 2},
  [349] = {.lex_state = 4, .external_lex_state = 2},
  [350] = {.lex_state = 4, .external_lex_state = 2},
  [351] = {.lex_state = 4, .external_lex_state = 2},
  [352] = {.lex_state = 4, .external_lex_state = 2},
  [353] = {.lex_state = 4, .external_lex_state = 2},
  [354] = {.lex_state = 4, .external_lex_state = 2},
  [355] = {.lex_state = 4, .external_lex_state = 2},
  [356] = {.lex_state = 4, .external_lex_state = 2},
  [357] = {.lex_state = 4, .external_lex_state = 2},
  [358] = {.lex_state = 4, .external_lex_state = 2},
  [359] = {.lex_state = 4, .external_lex_state = 2},
  [360] = {.lex_state = 4, .external_lex_state = 2},
  [361] = {.lex_state = 4, .external_lex_state = 2},
  [362] = {.lex_state = 4, .external_lex_state = 2},
  [363] = {.lex_state = 4, .external_lex_state = 2},
  [364] = {.lex_state = 4, .external_lex_state = 2},
  [365] = {.lex_state = 4, .external_lex_state = 2},
  [366] = {.lex_state = 4, .external_lex_state = 2},
  [367] = {.lex_state = 4, .external_lex_state = 2},
  [368] = {.lex_state = 4, .external_lex_state = 2},
  [369] = {.lex_state = 4, .external_lex_state = 2},
  [370] = {.lex_state = 4, .external_lex_state = 2},
  [371] = {.lex_state = 4, .external_lex_state = 2},
  [372] = {.lex_state = 5, .external_lex_state = 2},
  [373] = {.lex_state = 5, .external_lex_state = 2},
  [374] = {.lex_state = 5, .external_lex_state = 2},
  [375] = {.lex_state = 1, .external_lex_state = 1},
  [376] = {.lex_state = 1, .external_lex_state = 1},
  [377] = {.lex_state = 1, .external_lex_state = 1},
  [378] = {.lex_state = 1, .external_lex_state = 1},
  [379] = {.lex_state = 1, .external_lex_state = 1},
  [380] = {.lex_state = 1, .external_lex_state = 1},
  [381] = {.lex_state = 1, .external_lex_state = 1},
  [382] = {.lex_state = 1, .external_lex_state = 1},
  [383] = {.lex_state = 1, .external_lex_state = 1},
  [384] = {.lex_state = 46, .external_lex_state = 1},
  [385] = {.lex_state = 46, .external_lex_state = 1},
  [386] = {.lex_state = 46, .external_lex_state = 1},
  [387] = {.lex_state = 46, .external_lex_state = 1},
  [388] = {.lex_state = 46, .external_lex_state = 1},
  [389] = {.lex_state = 46, .external_lex_state = 2},
  [390] = {.lex_state = 5, .external_lex_state = 2},
  [391] = {.lex_state = 46, .external_lex_state = 2},
  [392] = {.lex_state = 5, .external_lex_state = 2},
  [393] = {.lex_state = 11, .external_lex_state = 2},
  [394] = {.lex_state = 46, .external_lex_state = 2},
  [395] = {.lex_state = 11, .external_lex_state = 2},
  [396] = {.lex_state = 11, .external_lex_state = 2},
  [397] = {.lex_state = 46, .external_lex_state = 2},
  [398] = {.lex_state = 5, .external_lex_state = 2},
  [399] = {.lex_state = 46, .external_lex_state = 2},
  [400] = {.lex_state = 46, .external_lex_state = 2},
  [401] = {.lex_state = 11, .external_lex_state = 2},
  [402] = {.lex_state = 46, .external_lex_state = 2},
  [403] = {.lex_state = 11, .external_lex_state = 2},
  [404] = {.lex_state = 46, .external_lex_state = 2},
  [405] = {.lex_state = 46, .external_lex_state = 2},
  [406] = {.lex_state = 46, .external_lex_state = 2},
  [407] = {.lex_state = 11, .external_lex_state = 2},
  [408] = {.lex_state = 11, .external_lex_state = 2},
  [409] = {.lex_state = 11, .external_lex_state = 2},
  [410] = {.lex_state = 11, .external_lex_state = 2},
  [411] = {.lex_state = 11, .external_lex_state = 2},
  [412] = {.lex_state = 5, .external_lex_state = 2},
  [413] = {.lex_state = 14, .external_lex_state = 2},
  [414] = {.lex_state = 46, .external_lex_state = 2},
  [415] = {.lex_state = 46, .external_lex_state = 2},
  [416] = {.lex_state = 14, .external_lex_state = 2},
  [417] = {.lex_state = 11, .external_lex_state = 2},
  [418] = {.lex_state = 11, .external_lex_state = 2},
  [419] = {.lex_state = 46, .external_lex_state = 2},
  [420] = {.lex_state = 11, .external_lex_state = 2},
  [421] = {.lex_state = 5, .external_lex_state = 2},
  [422] = {.lex_state = 0, .external_lex_state = 2},
  [423] = {.lex_state = 0, .external_lex_state = 2},
  [424] = {.lex_state = 0, .external_lex_state = 2},
  [425] = {.lex_state = 46, .external_lex_state = 2},
  [426] = {.lex_state = 5, .external_lex_state = 2},
  [427] = {.lex_state = 0, .external_lex_state = 2},
  [428] = {.lex_state = 5, .external_lex_state = 2},
  [429] = {.lex_state = 0, .external_lex_state = 2},
  [430] = {.lex_state = 0, .external_lex_state = 2},
  [431] = {.lex_state = 0, .external_lex_state = 2},
  [432] = {.lex_state = 0, .external_lex_state = 2},
  [433] = {.lex_state = 11, .external_lex_state = 2},
  [434] = {.lex_state = 0, .external_lex_state = 2},
  [435] = {.lex_state = 0, .external_lex_state = 2},
  [436] = {.lex_state = 0, .external_lex_state = 2},
  [437] = {.lex_state = 46, .external_lex_state = 2},
  [438] = {.lex_state = 0, .external_lex_state = 2},
  [439] = {.lex_state = 0, .external_lex_state = 2},
  [440] = {.lex_state = 0, .external_lex_state = 2},
  [441] = {.lex_state = 46, .external_lex_state = 2},
  [442] = {.lex_state = 0, .external_lex_state = 2},
  [443] = {.lex_state = 0, .external_lex_state = 2},
  [444] = {.lex_state = 0, .external_lex_state = 2},
  [445] = {.lex_state = 0, .external_lex_state = 2},
  [446] = {.lex_state = 0, .external_lex_state = 2},
  [447] = {.lex_state = 0, .external_lex_state = 2},
  [448] = {.lex_state = 5, .external_lex_state = 2},
  [449] = {.lex_state = 5, .external_lex_state = 2},
  [450] = {.lex_state = 0, .external_lex_state = 2},
  [451] = {.lex_state = 5, .external_lex_state = 2},
  [452] = {.lex_state = 0, .external_lex_state = 2},
  [453] = {.lex_state = 0, .external_lex_state = 2},
  [454] = {.lex_state = 0, .external_lex_state = 2},
  [455] = {.lex_state = 0, .external_lex_state = 2},
  [456] = {.lex_state = 0, .external_lex_state = 2},
  [457] = {.lex_state = 0, .external_lex_state = 2},
  [458] = {.lex_state = 46, .external_lex_state = 2},
  [459] = {.lex_state = 5, .external_lex_state = 2},
  [460] = {.lex_state = 5, .external_lex_state = 2},
  [461] = {.lex_state = 46, .external_lex_state = 2},
  [462] = {.lex_state = 46, .external_lex_state = 2},
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
    [sym_identifier] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [sym_line_break] = ACTIONS(1),
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
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA2] = ACTIONS(1),
    [anon_sym_SEMI2] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_DOT2] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_QMARK2] = ACTIONS(1),
    [anon_sym_BANG2] = ACTIONS(1),
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
    [sym_source_file] = STATE(444),
    [sym__markup] = STATE(257),
    [sym_quote] = STATE(257),
    [aux_sym__text] = STATE(257),
    [sym__code_mode] = STATE(257),
    [sym__code_block] = STATE(257),
    [sym_content_block] = STATE(257),
    [aux_sym_source_file_repeat1] = STATE(257),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__whitespace] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [sym_line_break] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
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
  [0] = 26,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_break,
    ACTIONS(31), 1,
      anon_sym_continue,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      sym_none,
    ACTIONS(45), 1,
      sym_int_literal,
    ACTIONS(47), 1,
      sym_float_literal,
    ACTIONS(49), 1,
      aux_sym_string_literal_token1,
    ACTIONS(51), 1,
      anon_sym_not,
    STATE(13), 1,
      aux_sym__statements_repeat1,
    STATE(159), 1,
      sym_expression,
    STATE(431), 1,
      sym__statements,
    STATE(445), 1,
      sym__unnamed_arguments,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(187), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(322), 8,
      sym__expression_statement,
      sym__control_flow,
      sym_break_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_if_expression,
      sym_while_expression,
      sym_for_expression,
    STATE(157), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [105] = 26,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_break,
    ACTIONS(31), 1,
      anon_sym_continue,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      sym_none,
    ACTIONS(45), 1,
      sym_int_literal,
    ACTIONS(47), 1,
      sym_float_literal,
    ACTIONS(49), 1,
      aux_sym_string_literal_token1,
    ACTIONS(51), 1,
      anon_sym_not,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      aux_sym__statements_repeat1,
    STATE(159), 1,
      sym_expression,
    STATE(445), 1,
      sym__unnamed_arguments,
    STATE(446), 1,
      sym__statements,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(187), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(322), 8,
      sym__expression_statement,
      sym__control_flow,
      sym_break_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_if_expression,
      sym_while_expression,
      sym_for_expression,
    STATE(157), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [210] = 26,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_break,
    ACTIONS(31), 1,
      anon_sym_continue,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      sym_none,
    ACTIONS(45), 1,
      sym_int_literal,
    ACTIONS(47), 1,
      sym_float_literal,
    ACTIONS(49), 1,
      aux_sym_string_literal_token1,
    ACTIONS(51), 1,
      anon_sym_not,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      aux_sym__statements_repeat1,
    STATE(159), 1,
      sym_expression,
    STATE(422), 1,
      sym__statements,
    STATE(445), 1,
      sym__unnamed_arguments,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(187), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(322), 8,
      sym__expression_statement,
      sym__control_flow,
      sym_break_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_if_expression,
      sym_while_expression,
      sym_for_expression,
    STATE(157), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [315] = 26,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_break,
    ACTIONS(31), 1,
      anon_sym_continue,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      sym_none,
    ACTIONS(45), 1,
      sym_int_literal,
    ACTIONS(47), 1,
      sym_float_literal,
    ACTIONS(49), 1,
      aux_sym_string_literal_token1,
    ACTIONS(51), 1,
      anon_sym_not,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      aux_sym__statements_repeat1,
    STATE(159), 1,
      sym_expression,
    STATE(439), 1,
      sym__statements,
    STATE(445), 1,
      sym__unnamed_arguments,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(187), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(322), 8,
      sym__expression_statement,
      sym__control_flow,
      sym_break_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_if_expression,
      sym_while_expression,
      sym_for_expression,
    STATE(157), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [420] = 26,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_break,
    ACTIONS(31), 1,
      anon_sym_continue,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      sym_none,
    ACTIONS(45), 1,
      sym_int_literal,
    ACTIONS(47), 1,
      sym_float_literal,
    ACTIONS(49), 1,
      aux_sym_string_literal_token1,
    ACTIONS(51), 1,
      anon_sym_not,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      aux_sym__statements_repeat1,
    STATE(159), 1,
      sym_expression,
    STATE(435), 1,
      sym__statements,
    STATE(445), 1,
      sym__unnamed_arguments,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(187), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(322), 8,
      sym__expression_statement,
      sym__control_flow,
      sym_break_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_if_expression,
      sym_while_expression,
      sym_for_expression,
    STATE(157), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [525] = 26,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_break,
    ACTIONS(31), 1,
      anon_sym_continue,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      sym_none,
    ACTIONS(45), 1,
      sym_int_literal,
    ACTIONS(47), 1,
      sym_float_literal,
    ACTIONS(49), 1,
      aux_sym_string_literal_token1,
    ACTIONS(51), 1,
      anon_sym_not,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      aux_sym__statements_repeat1,
    STATE(159), 1,
      sym_expression,
    STATE(445), 1,
      sym__unnamed_arguments,
    STATE(456), 1,
      sym__statements,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(187), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(322), 8,
      sym__expression_statement,
      sym__control_flow,
      sym_break_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_if_expression,
      sym_while_expression,
      sym_for_expression,
    STATE(157), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [630] = 26,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_break,
    ACTIONS(31), 1,
      anon_sym_continue,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      sym_none,
    ACTIONS(45), 1,
      sym_int_literal,
    ACTIONS(47), 1,
      sym_float_literal,
    ACTIONS(49), 1,
      aux_sym_string_literal_token1,
    ACTIONS(51), 1,
      anon_sym_not,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      aux_sym__statements_repeat1,
    STATE(159), 1,
      sym_expression,
    STATE(445), 1,
      sym__unnamed_arguments,
    STATE(450), 1,
      sym__statements,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(187), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(322), 8,
      sym__expression_statement,
      sym__control_flow,
      sym_break_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_if_expression,
      sym_while_expression,
      sym_for_expression,
    STATE(157), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [735] = 26,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_break,
    ACTIONS(31), 1,
      anon_sym_continue,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      sym_none,
    ACTIONS(45), 1,
      sym_int_literal,
    ACTIONS(47), 1,
      sym_float_literal,
    ACTIONS(49), 1,
      aux_sym_string_literal_token1,
    ACTIONS(51), 1,
      anon_sym_not,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      aux_sym__statements_repeat1,
    STATE(159), 1,
      sym_expression,
    STATE(440), 1,
      sym__statements,
    STATE(445), 1,
      sym__unnamed_arguments,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(187), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(322), 8,
      sym__expression_statement,
      sym__control_flow,
      sym_break_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_if_expression,
      sym_while_expression,
      sym_for_expression,
    STATE(157), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [840] = 26,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_break,
    ACTIONS(31), 1,
      anon_sym_continue,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      sym_none,
    ACTIONS(45), 1,
      sym_int_literal,
    ACTIONS(47), 1,
      sym_float_literal,
    ACTIONS(49), 1,
      aux_sym_string_literal_token1,
    ACTIONS(51), 1,
      anon_sym_not,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      aux_sym__statements_repeat1,
    STATE(159), 1,
      sym_expression,
    STATE(423), 1,
      sym__statements,
    STATE(445), 1,
      sym__unnamed_arguments,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(187), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(322), 8,
      sym__expression_statement,
      sym__control_flow,
      sym_break_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_if_expression,
      sym_while_expression,
      sym_for_expression,
    STATE(157), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [945] = 26,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_break,
    ACTIONS(31), 1,
      anon_sym_continue,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      sym_none,
    ACTIONS(45), 1,
      sym_int_literal,
    ACTIONS(47), 1,
      sym_float_literal,
    ACTIONS(49), 1,
      aux_sym_string_literal_token1,
    ACTIONS(51), 1,
      anon_sym_not,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      aux_sym__statements_repeat1,
    STATE(159), 1,
      sym_expression,
    STATE(436), 1,
      sym__statements,
    STATE(445), 1,
      sym__unnamed_arguments,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(187), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(322), 8,
      sym__expression_statement,
      sym__control_flow,
      sym_break_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_if_expression,
      sym_while_expression,
      sym_for_expression,
    STATE(157), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [1050] = 25,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(80), 1,
      anon_sym_RBRACE,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      anon_sym_break,
    ACTIONS(91), 1,
      anon_sym_continue,
    ACTIONS(94), 1,
      anon_sym_let,
    ACTIONS(97), 1,
      anon_sym_if,
    ACTIONS(100), 1,
      anon_sym_while,
    ACTIONS(103), 1,
      anon_sym_for,
    ACTIONS(106), 1,
      sym_none,
    ACTIONS(112), 1,
      sym_int_literal,
    ACTIONS(115), 1,
      sym_float_literal,
    ACTIONS(118), 1,
      aux_sym_string_literal_token1,
    ACTIONS(121), 1,
      anon_sym_not,
    STATE(12), 1,
      aux_sym__statements_repeat1,
    STATE(159), 1,
      sym_expression,
    STATE(445), 1,
      sym__unnamed_arguments,
    ACTIONS(74), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(109), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(187), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(322), 8,
      sym__expression_statement,
      sym__control_flow,
      sym_break_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_if_expression,
      sym_while_expression,
      sym_for_expression,
    STATE(157), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [1152] = 25,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_break,
    ACTIONS(31), 1,
      anon_sym_continue,
    ACTIONS(33), 1,
      anon_sym_let,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      sym_none,
    ACTIONS(45), 1,
      sym_int_literal,
    ACTIONS(47), 1,
      sym_float_literal,
    ACTIONS(49), 1,
      aux_sym_string_literal_token1,
    ACTIONS(51), 1,
      anon_sym_not,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      aux_sym__statements_repeat1,
    STATE(159), 1,
      sym_expression,
    STATE(445), 1,
      sym__unnamed_arguments,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(187), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(322), 8,
      sym__expression_statement,
      sym__control_flow,
      sym_break_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_if_expression,
      sym_while_expression,
      sym_for_expression,
    STATE(157), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [1254] = 24,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(130), 1,
      anon_sym_LBRACE,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(136), 1,
      anon_sym_break,
    ACTIONS(138), 1,
      anon_sym_continue,
    ACTIONS(140), 1,
      anon_sym_let,
    ACTIONS(142), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_while,
    ACTIONS(146), 1,
      anon_sym_for,
    ACTIONS(148), 1,
      sym_none,
    ACTIONS(152), 1,
      sym_int_literal,
    ACTIONS(154), 1,
      sym_float_literal,
    ACTIONS(156), 1,
      aux_sym_string_literal_token1,
    ACTIONS(158), 1,
      anon_sym_not,
    STATE(145), 1,
      sym_expression,
    STATE(443), 1,
      sym__unnamed_arguments,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(150), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(133), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(140), 3,
      sym_code_block,
      sym_content_block,
      sym_function_call,
    STATE(286), 8,
      sym__expression_statement,
      sym__control_flow,
      sym_break_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_if_expression,
      sym_while_expression,
      sym_for_expression,
    STATE(143), 11,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [1352] = 24,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(164), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      anon_sym_break,
    ACTIONS(172), 1,
      anon_sym_continue,
    ACTIONS(174), 1,
      anon_sym_let,
    ACTIONS(176), 1,
      anon_sym_if,
    ACTIONS(178), 1,
      anon_sym_while,
    ACTIONS(180), 1,
      anon_sym_for,
    ACTIONS(182), 1,
      sym_none,
    ACTIONS(186), 1,
      sym_int_literal,
    ACTIONS(188), 1,
      sym_float_literal,
    ACTIONS(190), 1,
      aux_sym_string_literal_token1,
    ACTIONS(192), 1,
      anon_sym_not,
    STATE(127), 1,
      sym_expression,
    STATE(453), 1,
      sym__unnamed_arguments,
    ACTIONS(162), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(86), 3,
      sym_code_block,
      sym_content_block,
      sym_function_call,
    STATE(132), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(303), 8,
      sym__expression_statement,
      sym__control_flow,
      sym_break_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_if_expression,
      sym_while_expression,
      sym_for_expression,
    STATE(126), 11,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [1450] = 10,
    ACTIONS(198), 1,
      anon_sym_LPAREN,
    ACTIONS(200), 1,
      anon_sym_EQ_GT,
    ACTIONS(202), 1,
      anon_sym_DOT2,
    ACTIONS(206), 1,
      anon_sym_BANG2,
    STATE(40), 1,
      sym_parameters,
    ACTIONS(204), 2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(208), 4,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(194), 16,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_COLON,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(196), 17,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [1518] = 10,
    ACTIONS(200), 1,
      anon_sym_EQ_GT,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(212), 1,
      anon_sym_DOT2,
    ACTIONS(216), 1,
      anon_sym_BANG2,
    STATE(53), 1,
      sym_parameters,
    ACTIONS(214), 2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(218), 4,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(194), 16,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_COLON,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(196), 17,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [1586] = 11,
    ACTIONS(200), 1,
      anon_sym_EQ_GT,
    ACTIONS(220), 1,
      anon_sym_EQ,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(224), 1,
      anon_sym_DOT2,
    ACTIONS(228), 1,
      anon_sym_BANG2,
    STATE(66), 1,
      sym_parameters,
    ACTIONS(226), 2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(230), 4,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(194), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(196), 21,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
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
  [1655] = 6,
    ACTIONS(238), 1,
      anon_sym_PERCENT,
    STATE(111), 1,
      sym_unit,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(236), 8,
      anon_sym_in,
      anon_sym_pt,
      anon_sym_mm,
      anon_sym_cm,
      anon_sym_deg,
      anon_sym_rad,
      anon_sym_em,
      anon_sym_fr,
    ACTIONS(232), 11,
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
    ACTIONS(234), 21,
      anon_sym_DQUOTE,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1713] = 6,
    ACTIONS(242), 1,
      anon_sym_PERCENT,
    STATE(147), 1,
      sym_unit,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(240), 8,
      anon_sym_in,
      anon_sym_pt,
      anon_sym_mm,
      anon_sym_cm,
      anon_sym_deg,
      anon_sym_rad,
      anon_sym_em,
      anon_sym_fr,
    ACTIONS(232), 11,
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
    ACTIONS(234), 21,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1771] = 6,
    ACTIONS(246), 1,
      anon_sym_PERCENT,
    STATE(172), 1,
      sym_unit,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(244), 8,
      anon_sym_in,
      anon_sym_pt,
      anon_sym_mm,
      anon_sym_cm,
      anon_sym_deg,
      anon_sym_rad,
      anon_sym_em,
      anon_sym_fr,
    ACTIONS(234), 14,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(232), 17,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [1828] = 8,
    ACTIONS(198), 1,
      anon_sym_LPAREN,
    ACTIONS(248), 1,
      anon_sym_DOT2,
    ACTIONS(252), 1,
      anon_sym_BANG2,
    STATE(33), 1,
      sym_parameters,
    ACTIONS(250), 2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(196), 14,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(194), 19,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1887] = 8,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(254), 1,
      anon_sym_DOT2,
    ACTIONS(258), 1,
      anon_sym_BANG2,
    STATE(56), 1,
      sym_parameters,
    ACTIONS(256), 2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(196), 14,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(194), 19,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1946] = 5,
    ACTIONS(262), 1,
      sym_identifier,
    STATE(52), 1,
      sym_function_call,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(264), 15,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_BANG2,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(260), 22,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DOT2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1999] = 5,
    ACTIONS(266), 1,
      sym_identifier,
    STATE(47), 1,
      sym_function_call,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(264), 15,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_BANG2,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(260), 22,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2052] = 5,
    ACTIONS(262), 1,
      sym_identifier,
    STATE(55), 1,
      sym_function_call,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(270), 15,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_BANG2,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(268), 22,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DOT2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2105] = 5,
    ACTIONS(266), 1,
      sym_identifier,
    STATE(60), 1,
      sym_function_call,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(270), 15,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_BANG2,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(268), 22,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2158] = 21,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(282), 1,
      anon_sym_RPAREN,
    ACTIONS(284), 1,
      anon_sym_DOT_DOT,
    ACTIONS(286), 1,
      sym_none,
    ACTIONS(290), 1,
      sym_int_literal,
    ACTIONS(292), 1,
      sym_float_literal,
    ACTIONS(294), 1,
      aux_sym_string_literal_token1,
    ACTIONS(296), 1,
      anon_sym_not,
    STATE(366), 1,
      sym_expression,
    STATE(410), 1,
      aux_sym__weird_edge_case,
    STATE(438), 1,
      sym__array,
    STATE(454), 1,
      sym__unnamed_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(288), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(406), 2,
      sym__parameter,
      sym_asssigned_parameter,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(341), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(336), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [2242] = 21,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DOT_DOT,
    ACTIONS(286), 1,
      sym_none,
    ACTIONS(290), 1,
      sym_int_literal,
    ACTIONS(292), 1,
      sym_float_literal,
    ACTIONS(294), 1,
      aux_sym_string_literal_token1,
    ACTIONS(296), 1,
      anon_sym_not,
    ACTIONS(298), 1,
      anon_sym_RPAREN,
    STATE(365), 1,
      sym_expression,
    STATE(395), 1,
      aux_sym__weird_edge_case,
    STATE(454), 1,
      sym__unnamed_arguments,
    STATE(455), 1,
      sym__array,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(288), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(406), 2,
      sym__parameter,
      sym_asssigned_parameter,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(341), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(336), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [2326] = 21,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DOT_DOT,
    ACTIONS(286), 1,
      sym_none,
    ACTIONS(290), 1,
      sym_int_literal,
    ACTIONS(292), 1,
      sym_float_literal,
    ACTIONS(294), 1,
      aux_sym_string_literal_token1,
    ACTIONS(296), 1,
      anon_sym_not,
    ACTIONS(300), 1,
      anon_sym_RPAREN,
    STATE(367), 1,
      sym_expression,
    STATE(409), 1,
      aux_sym__weird_edge_case,
    STATE(424), 1,
      sym__array,
    STATE(454), 1,
      sym__unnamed_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(288), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(406), 2,
      sym__parameter,
      sym_asssigned_parameter,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(341), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(336), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [2410] = 21,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DOT_DOT,
    ACTIONS(286), 1,
      sym_none,
    ACTIONS(290), 1,
      sym_int_literal,
    ACTIONS(292), 1,
      sym_float_literal,
    ACTIONS(294), 1,
      aux_sym_string_literal_token1,
    ACTIONS(296), 1,
      anon_sym_not,
    ACTIONS(302), 1,
      anon_sym_RPAREN,
    STATE(368), 1,
      sym_expression,
    STATE(403), 1,
      aux_sym__weird_edge_case,
    STATE(454), 1,
      sym__unnamed_arguments,
    STATE(457), 1,
      sym__array,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(288), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(406), 2,
      sym__parameter,
      sym_asssigned_parameter,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(341), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(336), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [2494] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(304), 15,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_BANG2,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(306), 22,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2541] = 6,
    ACTIONS(312), 1,
      anon_sym_DOT2,
    ACTIONS(316), 1,
      anon_sym_BANG2,
    ACTIONS(314), 2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(310), 14,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(308), 19,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2594] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(318), 15,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_BANG2,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(320), 22,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2641] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(270), 15,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_BANG2,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(268), 22,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2688] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(264), 15,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_BANG2,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(260), 22,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2735] = 20,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DOT_DOT,
    ACTIONS(286), 1,
      sym_none,
    ACTIONS(290), 1,
      sym_int_literal,
    ACTIONS(292), 1,
      sym_float_literal,
    ACTIONS(294), 1,
      aux_sym_string_literal_token1,
    ACTIONS(296), 1,
      anon_sym_not,
    ACTIONS(322), 1,
      sym_identifier,
    ACTIONS(324), 1,
      anon_sym_RPAREN,
    STATE(371), 1,
      sym_expression,
    STATE(452), 1,
      sym__parameters,
    STATE(454), 1,
      sym__unnamed_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(288), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(402), 2,
      sym__parameter,
      sym_asssigned_parameter,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(341), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(336), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [2816] = 5,
    ACTIONS(332), 1,
      anon_sym_BANG2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(330), 3,
      anon_sym_DOT2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
    ACTIONS(328), 14,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(326), 19,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2867] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(336), 15,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_BANG2,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(334), 22,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DOT2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2914] = 6,
    ACTIONS(338), 1,
      anon_sym_DOT2,
    ACTIONS(342), 1,
      anon_sym_BANG2,
    ACTIONS(340), 2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(310), 14,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(308), 19,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACK,
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
    ACTIONS(318), 15,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_BANG2,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(320), 22,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DOT2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3014] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(270), 15,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_BANG2,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(268), 22,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DOT2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3061] = 20,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DOT_DOT,
    ACTIONS(286), 1,
      sym_none,
    ACTIONS(290), 1,
      sym_int_literal,
    ACTIONS(292), 1,
      sym_float_literal,
    ACTIONS(294), 1,
      aux_sym_string_literal_token1,
    ACTIONS(296), 1,
      anon_sym_not,
    ACTIONS(322), 1,
      sym_identifier,
    ACTIONS(344), 1,
      anon_sym_RPAREN,
    STATE(371), 1,
      sym_expression,
    STATE(432), 1,
      sym__parameters,
    STATE(454), 1,
      sym__unnamed_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(288), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(402), 2,
      sym__parameter,
      sym_asssigned_parameter,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(341), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(336), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [3142] = 20,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DOT_DOT,
    ACTIONS(286), 1,
      sym_none,
    ACTIONS(290), 1,
      sym_int_literal,
    ACTIONS(292), 1,
      sym_float_literal,
    ACTIONS(294), 1,
      aux_sym_string_literal_token1,
    ACTIONS(296), 1,
      anon_sym_not,
    ACTIONS(322), 1,
      sym_identifier,
    ACTIONS(346), 1,
      anon_sym_RPAREN,
    STATE(371), 1,
      sym_expression,
    STATE(434), 1,
      sym__parameters,
    STATE(454), 1,
      sym__unnamed_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(288), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(402), 2,
      sym__parameter,
      sym_asssigned_parameter,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(341), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(336), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [3223] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(348), 15,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_BANG2,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(350), 22,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3270] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(264), 15,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_BANG2,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(260), 22,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DOT2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3317] = 5,
    ACTIONS(358), 1,
      anon_sym_BANG2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(356), 3,
      anon_sym_DOT2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
    ACTIONS(352), 14,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(354), 19,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3368] = 5,
    ACTIONS(362), 1,
      anon_sym_BANG2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(360), 3,
      anon_sym_DOT2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
    ACTIONS(328), 14,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(326), 19,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3419] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(304), 15,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_BANG2,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(306), 22,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DOT2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3466] = 5,
    ACTIONS(366), 1,
      anon_sym_BANG2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(364), 3,
      anon_sym_DOT2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
    ACTIONS(352), 14,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(354), 19,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3517] = 5,
    ACTIONS(370), 1,
      anon_sym_BANG2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(368), 3,
      anon_sym_DOT2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
    ACTIONS(352), 14,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(354), 19,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3568] = 5,
    ACTIONS(374), 1,
      anon_sym_BANG2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(372), 3,
      anon_sym_DOT2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
    ACTIONS(352), 14,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(354), 19,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3619] = 6,
    ACTIONS(376), 1,
      anon_sym_DOT2,
    ACTIONS(380), 1,
      anon_sym_BANG2,
    ACTIONS(378), 2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(310), 14,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(308), 19,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3672] = 20,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DOT_DOT,
    ACTIONS(286), 1,
      sym_none,
    ACTIONS(290), 1,
      sym_int_literal,
    ACTIONS(292), 1,
      sym_float_literal,
    ACTIONS(294), 1,
      aux_sym_string_literal_token1,
    ACTIONS(296), 1,
      anon_sym_not,
    ACTIONS(322), 1,
      sym_identifier,
    ACTIONS(382), 1,
      anon_sym_RPAREN,
    STATE(371), 1,
      sym_expression,
    STATE(427), 1,
      sym__parameters,
    STATE(454), 1,
      sym__unnamed_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(288), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(402), 2,
      sym__parameter,
      sym_asssigned_parameter,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(341), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(336), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [3753] = 5,
    ACTIONS(386), 1,
      anon_sym_BANG2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(384), 3,
      anon_sym_DOT2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
    ACTIONS(328), 14,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(326), 19,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3804] = 6,
    ACTIONS(388), 1,
      anon_sym_DOT2,
    ACTIONS(392), 1,
      anon_sym_BANG2,
    ACTIONS(390), 2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(310), 14,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(308), 19,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3857] = 20,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DOT_DOT,
    ACTIONS(286), 1,
      sym_none,
    ACTIONS(290), 1,
      sym_int_literal,
    ACTIONS(292), 1,
      sym_float_literal,
    ACTIONS(294), 1,
      aux_sym_string_literal_token1,
    ACTIONS(296), 1,
      anon_sym_not,
    ACTIONS(322), 1,
      sym_identifier,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
    STATE(371), 1,
      sym_expression,
    STATE(442), 1,
      sym__parameters,
    STATE(454), 1,
      sym__unnamed_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(288), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(402), 2,
      sym__parameter,
      sym_asssigned_parameter,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(341), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(336), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [3938] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(348), 15,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_BANG2,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(350), 22,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DOT2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3985] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(336), 15,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_BANG2,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(334), 22,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4032] = 5,
    ACTIONS(398), 1,
      anon_sym_BANG2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(396), 3,
      anon_sym_DOT2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
    ACTIONS(328), 14,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(326), 19,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4083] = 5,
    ACTIONS(400), 1,
      sym_identifier,
    STATE(74), 1,
      sym_function_call,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(268), 16,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(270), 19,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      anon_sym_DOT2,
      anon_sym_BANG2,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [4134] = 8,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(224), 1,
      anon_sym_DOT2,
    ACTIONS(228), 1,
      anon_sym_BANG2,
    STATE(66), 1,
      sym_parameters,
    ACTIONS(226), 2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(194), 13,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(196), 18,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [4191] = 5,
    ACTIONS(400), 1,
      sym_identifier,
    STATE(68), 1,
      sym_function_call,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(260), 16,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(264), 19,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      anon_sym_DOT2,
      anon_sym_BANG2,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [4242] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(320), 16,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(318), 20,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      anon_sym_DOT2,
      anon_sym_BANG2,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [4288] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(350), 16,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(348), 20,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      anon_sym_DOT2,
      anon_sym_BANG2,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [4334] = 6,
    ACTIONS(402), 1,
      anon_sym_DOT2,
    ACTIONS(406), 1,
      anon_sym_BANG2,
    ACTIONS(404), 2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(308), 14,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(310), 18,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [4386] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(260), 16,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(264), 20,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      anon_sym_DOT2,
      anon_sym_BANG2,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [4432] = 5,
    ACTIONS(408), 2,
      anon_sym_DOT2,
      anon_sym_BANG2,
    ACTIONS(410), 2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(354), 14,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(352), 18,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [4482] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(268), 16,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(270), 20,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      anon_sym_DOT2,
      anon_sym_BANG2,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [4528] = 19,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DOT_DOT,
    ACTIONS(286), 1,
      sym_none,
    ACTIONS(290), 1,
      sym_int_literal,
    ACTIONS(292), 1,
      sym_float_literal,
    ACTIONS(294), 1,
      aux_sym_string_literal_token1,
    ACTIONS(296), 1,
      anon_sym_not,
    ACTIONS(322), 1,
      sym_identifier,
    ACTIONS(412), 1,
      anon_sym_RPAREN,
    STATE(371), 1,
      sym_expression,
    STATE(454), 1,
      sym__unnamed_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(288), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(414), 2,
      sym__parameter,
      sym_asssigned_parameter,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(341), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(336), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [4606] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(306), 16,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(304), 20,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      anon_sym_DOT2,
      anon_sym_BANG2,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [4652] = 19,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DOT_DOT,
    ACTIONS(286), 1,
      sym_none,
    ACTIONS(290), 1,
      sym_int_literal,
    ACTIONS(292), 1,
      sym_float_literal,
    ACTIONS(294), 1,
      aux_sym_string_literal_token1,
    ACTIONS(296), 1,
      anon_sym_not,
    ACTIONS(322), 1,
      sym_identifier,
    ACTIONS(414), 1,
      anon_sym_RPAREN,
    STATE(371), 1,
      sym_expression,
    STATE(454), 1,
      sym__unnamed_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(288), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(414), 2,
      sym__parameter,
      sym_asssigned_parameter,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(341), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(336), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [4730] = 19,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DOT_DOT,
    ACTIONS(286), 1,
      sym_none,
    ACTIONS(290), 1,
      sym_int_literal,
    ACTIONS(292), 1,
      sym_float_literal,
    ACTIONS(294), 1,
      aux_sym_string_literal_token1,
    ACTIONS(296), 1,
      anon_sym_not,
    ACTIONS(322), 1,
      sym_identifier,
    ACTIONS(416), 1,
      anon_sym_RPAREN,
    STATE(371), 1,
      sym_expression,
    STATE(454), 1,
      sym__unnamed_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(288), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(414), 2,
      sym__parameter,
      sym_asssigned_parameter,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(341), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(336), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [4808] = 5,
    ACTIONS(418), 2,
      anon_sym_DOT2,
      anon_sym_BANG2,
    ACTIONS(420), 2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(326), 14,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(328), 18,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [4858] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(334), 16,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(336), 20,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      anon_sym_DOT2,
      anon_sym_BANG2,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [4904] = 19,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DOT_DOT,
    ACTIONS(286), 1,
      sym_none,
    ACTIONS(290), 1,
      sym_int_literal,
    ACTIONS(292), 1,
      sym_float_literal,
    ACTIONS(294), 1,
      aux_sym_string_literal_token1,
    ACTIONS(296), 1,
      anon_sym_not,
    ACTIONS(322), 1,
      sym_identifier,
    ACTIONS(422), 1,
      anon_sym_RPAREN,
    STATE(371), 1,
      sym_expression,
    STATE(454), 1,
      sym__unnamed_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(288), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(414), 2,
      sym__parameter,
      sym_asssigned_parameter,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(341), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(336), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [4982] = 5,
    ACTIONS(262), 1,
      sym_identifier,
    STATE(50), 1,
      sym_function_call,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(264), 12,
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
    ACTIONS(260), 21,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5031] = 18,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DOT_DOT,
    ACTIONS(286), 1,
      sym_none,
    ACTIONS(290), 1,
      sym_int_literal,
    ACTIONS(292), 1,
      sym_float_literal,
    ACTIONS(294), 1,
      aux_sym_string_literal_token1,
    ACTIONS(296), 1,
      anon_sym_not,
    ACTIONS(322), 1,
      sym_identifier,
    STATE(371), 1,
      sym_expression,
    STATE(454), 1,
      sym__unnamed_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(288), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(414), 2,
      sym__parameter,
      sym_asssigned_parameter,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(341), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(336), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [5106] = 18,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_DOT_DOT,
    ACTIONS(286), 1,
      sym_none,
    ACTIONS(290), 1,
      sym_int_literal,
    ACTIONS(292), 1,
      sym_float_literal,
    ACTIONS(294), 1,
      aux_sym_string_literal_token1,
    ACTIONS(296), 1,
      anon_sym_not,
    ACTIONS(322), 1,
      sym_identifier,
    STATE(371), 1,
      sym_expression,
    STATE(454), 1,
      sym__unnamed_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(288), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(415), 2,
      sym__parameter,
      sym_asssigned_parameter,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(341), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(336), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [5181] = 5,
    ACTIONS(266), 1,
      sym_identifier,
    STATE(51), 1,
      sym_function_call,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(264), 12,
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
    ACTIONS(260), 21,
      anon_sym_DQUOTE,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5230] = 5,
    ACTIONS(266), 1,
      sym_identifier,
    STATE(48), 1,
      sym_function_call,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(270), 12,
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
    ACTIONS(268), 21,
      anon_sym_DQUOTE,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5279] = 5,
    ACTIONS(262), 1,
      sym_identifier,
    STATE(38), 1,
      sym_function_call,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(270), 12,
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
    ACTIONS(268), 21,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5328] = 4,
    ACTIONS(428), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(424), 12,
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
    ACTIONS(426), 21,
      anon_sym_DQUOTE,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5374] = 4,
    ACTIONS(428), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(424), 12,
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
    ACTIONS(426), 21,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5420] = 10,
    ACTIONS(434), 1,
      anon_sym_SLASH,
    ACTIONS(438), 1,
      anon_sym_STAR,
    ACTIONS(442), 1,
      anon_sym_not,
    ACTIONS(444), 1,
      anon_sym_and,
    ACTIONS(436), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(440), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(446), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(432), 6,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_or,
    ACTIONS(430), 14,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
  [5477] = 5,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(452), 4,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(454), 5,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(448), 8,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
    ACTIONS(450), 16,
      anon_sym_DQUOTE,
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
  [5524] = 9,
    ACTIONS(456), 1,
      anon_sym_SLASH,
    ACTIONS(460), 1,
      anon_sym_STAR,
    ACTIONS(464), 1,
      anon_sym_not,
    ACTIONS(458), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(462), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(466), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(432), 7,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(430), 14,
      anon_sym_DQUOTE,
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
  [5579] = 6,
    ACTIONS(456), 1,
      anon_sym_SLASH,
    ACTIONS(460), 1,
      anon_sym_STAR,
    ACTIONS(458), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(468), 11,
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
    ACTIONS(470), 18,
      anon_sym_DQUOTE,
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
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5628] = 5,
    ACTIONS(456), 1,
      anon_sym_SLASH,
    ACTIONS(460), 1,
      anon_sym_STAR,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(472), 11,
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
    ACTIONS(474), 20,
      anon_sym_DQUOTE,
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
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5675] = 11,
    ACTIONS(434), 1,
      anon_sym_SLASH,
    ACTIONS(438), 1,
      anon_sym_STAR,
    ACTIONS(442), 1,
      anon_sym_not,
    ACTIONS(444), 1,
      anon_sym_and,
    ACTIONS(480), 1,
      anon_sym_or,
    ACTIONS(436), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(440), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(446), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(478), 5,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_BANG,
    ACTIONS(476), 14,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
  [5734] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(270), 12,
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
    ACTIONS(268), 21,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5777] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(484), 12,
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
    ACTIONS(482), 21,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5820] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(472), 12,
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
    ACTIONS(474), 21,
      anon_sym_DQUOTE,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [5863] = 11,
    ACTIONS(456), 1,
      anon_sym_SLASH,
    ACTIONS(460), 1,
      anon_sym_STAR,
    ACTIONS(464), 1,
      anon_sym_not,
    ACTIONS(490), 1,
      anon_sym_and,
    ACTIONS(492), 1,
      anon_sym_or,
    ACTIONS(458), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(462), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(466), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(486), 5,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_BANG,
    ACTIONS(488), 14,
      anon_sym_DQUOTE,
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
  [5922] = 11,
    ACTIONS(456), 1,
      anon_sym_SLASH,
    ACTIONS(460), 1,
      anon_sym_STAR,
    ACTIONS(464), 1,
      anon_sym_not,
    ACTIONS(490), 1,
      anon_sym_and,
    ACTIONS(492), 1,
      anon_sym_or,
    ACTIONS(458), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(462), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(466), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(494), 5,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_BANG,
    ACTIONS(496), 14,
      anon_sym_DQUOTE,
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
  [5981] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(498), 12,
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
    ACTIONS(500), 21,
      anon_sym_DQUOTE,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6024] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(502), 12,
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
    ACTIONS(504), 21,
      anon_sym_DQUOTE,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6067] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(424), 12,
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
    ACTIONS(426), 21,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6110] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(508), 12,
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
    ACTIONS(506), 21,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6153] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(424), 12,
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
    ACTIONS(426), 21,
      anon_sym_DQUOTE,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6196] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(484), 12,
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
    ACTIONS(482), 21,
      anon_sym_DQUOTE,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6239] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(270), 12,
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
    ACTIONS(268), 21,
      anon_sym_DQUOTE,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6282] = 17,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      sym_none,
    ACTIONS(290), 1,
      sym_int_literal,
    ACTIONS(292), 1,
      sym_float_literal,
    ACTIONS(294), 1,
      aux_sym_string_literal_token1,
    ACTIONS(296), 1,
      anon_sym_not,
    ACTIONS(510), 1,
      sym_identifier,
    ACTIONS(512), 1,
      anon_sym_RPAREN,
    STATE(369), 1,
      sym_expression,
    STATE(454), 1,
      sym__unnamed_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(288), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(341), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(336), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [6353] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(502), 12,
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
    ACTIONS(504), 21,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6396] = 11,
    ACTIONS(456), 1,
      anon_sym_SLASH,
    ACTIONS(460), 1,
      anon_sym_STAR,
    ACTIONS(464), 1,
      anon_sym_not,
    ACTIONS(490), 1,
      anon_sym_and,
    ACTIONS(492), 1,
      anon_sym_or,
    ACTIONS(458), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(462), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(466), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(478), 5,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_BANG,
    ACTIONS(476), 14,
      anon_sym_DQUOTE,
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
  [6455] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(336), 12,
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
    ACTIONS(334), 21,
      anon_sym_DQUOTE,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6498] = 6,
    ACTIONS(456), 1,
      anon_sym_SLASH,
    ACTIONS(460), 1,
      anon_sym_STAR,
    ACTIONS(458), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(514), 11,
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
    ACTIONS(516), 18,
      anon_sym_DQUOTE,
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
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6547] = 11,
    ACTIONS(456), 1,
      anon_sym_SLASH,
    ACTIONS(460), 1,
      anon_sym_STAR,
    ACTIONS(464), 1,
      anon_sym_not,
    ACTIONS(490), 1,
      anon_sym_and,
    ACTIONS(492), 1,
      anon_sym_or,
    ACTIONS(458), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(462), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(466), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(518), 5,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_BANG,
    ACTIONS(520), 14,
      anon_sym_DQUOTE,
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
  [6606] = 9,
    ACTIONS(456), 1,
      anon_sym_SLASH,
    ACTIONS(460), 1,
      anon_sym_STAR,
    ACTIONS(464), 1,
      anon_sym_not,
    ACTIONS(458), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(462), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(466), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(522), 7,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(524), 14,
      anon_sym_DQUOTE,
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
  [6661] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(526), 12,
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
    ACTIONS(528), 21,
      anon_sym_DQUOTE,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6704] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(530), 12,
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
    ACTIONS(532), 21,
      anon_sym_DQUOTE,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6747] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(534), 12,
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
    ACTIONS(536), 21,
      anon_sym_DQUOTE,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6790] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(498), 12,
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
    ACTIONS(500), 21,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6833] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(508), 12,
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
    ACTIONS(506), 21,
      anon_sym_DQUOTE,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6876] = 11,
    ACTIONS(434), 1,
      anon_sym_SLASH,
    ACTIONS(438), 1,
      anon_sym_STAR,
    ACTIONS(442), 1,
      anon_sym_not,
    ACTIONS(444), 1,
      anon_sym_and,
    ACTIONS(480), 1,
      anon_sym_or,
    ACTIONS(436), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(440), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(446), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(494), 5,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_BANG,
    ACTIONS(496), 14,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
  [6935] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(472), 12,
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
    ACTIONS(474), 21,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [6978] = 5,
    ACTIONS(434), 1,
      anon_sym_SLASH,
    ACTIONS(438), 1,
      anon_sym_STAR,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(472), 11,
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
    ACTIONS(474), 20,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
      sym_escape_sequence,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7025] = 6,
    ACTIONS(434), 1,
      anon_sym_SLASH,
    ACTIONS(438), 1,
      anon_sym_STAR,
    ACTIONS(436), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(468), 11,
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
    ACTIONS(470), 18,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7074] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(538), 12,
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
    ACTIONS(540), 21,
      anon_sym_DQUOTE,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7117] = 9,
    ACTIONS(434), 1,
      anon_sym_SLASH,
    ACTIONS(438), 1,
      anon_sym_STAR,
    ACTIONS(442), 1,
      anon_sym_not,
    ACTIONS(436), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(440), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(446), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(432), 7,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(430), 14,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
  [7172] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(542), 12,
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
    ACTIONS(544), 21,
      anon_sym_DQUOTE,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7215] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(318), 12,
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
    ACTIONS(320), 21,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7258] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(318), 12,
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
    ACTIONS(320), 21,
      anon_sym_DQUOTE,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7301] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(264), 12,
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
    ACTIONS(260), 21,
      anon_sym_DQUOTE,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7344] = 17,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      sym_none,
    ACTIONS(290), 1,
      sym_int_literal,
    ACTIONS(292), 1,
      sym_float_literal,
    ACTIONS(294), 1,
      aux_sym_string_literal_token1,
    ACTIONS(296), 1,
      anon_sym_not,
    ACTIONS(546), 1,
      sym_identifier,
    STATE(370), 1,
      sym_expression,
    STATE(419), 1,
      sym_asssigned_parameter,
    STATE(454), 1,
      sym__unnamed_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(288), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(341), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(336), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [7415] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(452), 12,
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
    ACTIONS(454), 21,
      anon_sym_DQUOTE,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7458] = 11,
    ACTIONS(456), 1,
      anon_sym_SLASH,
    ACTIONS(460), 1,
      anon_sym_STAR,
    ACTIONS(464), 1,
      anon_sym_not,
    ACTIONS(490), 1,
      anon_sym_and,
    ACTIONS(492), 1,
      anon_sym_or,
    ACTIONS(458), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(462), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(466), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(548), 5,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_BANG,
    ACTIONS(550), 14,
      anon_sym_DQUOTE,
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
  [7517] = 17,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      sym_none,
    ACTIONS(290), 1,
      sym_int_literal,
    ACTIONS(292), 1,
      sym_float_literal,
    ACTIONS(294), 1,
      aux_sym_string_literal_token1,
    ACTIONS(296), 1,
      anon_sym_not,
    ACTIONS(510), 1,
      sym_identifier,
    ACTIONS(552), 1,
      anon_sym_RPAREN,
    STATE(369), 1,
      sym_expression,
    STATE(454), 1,
      sym__unnamed_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(288), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(341), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(336), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [7588] = 10,
    ACTIONS(456), 1,
      anon_sym_SLASH,
    ACTIONS(460), 1,
      anon_sym_STAR,
    ACTIONS(464), 1,
      anon_sym_not,
    ACTIONS(490), 1,
      anon_sym_and,
    ACTIONS(458), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(462), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(466), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(432), 6,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_or,
    ACTIONS(430), 14,
      anon_sym_DQUOTE,
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
  [7645] = 11,
    ACTIONS(434), 1,
      anon_sym_SLASH,
    ACTIONS(438), 1,
      anon_sym_STAR,
    ACTIONS(442), 1,
      anon_sym_not,
    ACTIONS(444), 1,
      anon_sym_and,
    ACTIONS(480), 1,
      anon_sym_or,
    ACTIONS(436), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(440), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(446), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(486), 5,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_BANG,
    ACTIONS(488), 14,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
  [7704] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(554), 12,
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
    ACTIONS(556), 21,
      anon_sym_DQUOTE,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7747] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(232), 12,
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
    ACTIONS(234), 21,
      anon_sym_DQUOTE,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7790] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(232), 12,
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
    ACTIONS(234), 21,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7833] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(538), 12,
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
    ACTIONS(540), 21,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7876] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(554), 12,
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
    ACTIONS(556), 21,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7919] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(542), 12,
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
    ACTIONS(544), 21,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [7962] = 6,
    ACTIONS(434), 1,
      anon_sym_SLASH,
    ACTIONS(438), 1,
      anon_sym_STAR,
    ACTIONS(436), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(514), 11,
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
    ACTIONS(516), 18,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8011] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(526), 12,
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
    ACTIONS(528), 21,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8054] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(336), 12,
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
    ACTIONS(334), 21,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8097] = 5,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(452), 4,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(454), 5,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(448), 8,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
    ACTIONS(450), 16,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
  [8144] = 11,
    ACTIONS(434), 1,
      anon_sym_SLASH,
    ACTIONS(438), 1,
      anon_sym_STAR,
    ACTIONS(442), 1,
      anon_sym_not,
    ACTIONS(444), 1,
      anon_sym_and,
    ACTIONS(480), 1,
      anon_sym_or,
    ACTIONS(436), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(440), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(446), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(518), 5,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_BANG,
    ACTIONS(520), 14,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
  [8203] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(558), 12,
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
    ACTIONS(560), 21,
      anon_sym_DQUOTE,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8246] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(452), 12,
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
    ACTIONS(454), 21,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8289] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(264), 12,
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
    ACTIONS(260), 21,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8332] = 11,
    ACTIONS(434), 1,
      anon_sym_SLASH,
    ACTIONS(438), 1,
      anon_sym_STAR,
    ACTIONS(442), 1,
      anon_sym_not,
    ACTIONS(444), 1,
      anon_sym_and,
    ACTIONS(480), 1,
      anon_sym_or,
    ACTIONS(436), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(440), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(446), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(548), 5,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_BANG,
    ACTIONS(550), 14,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
  [8391] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(534), 12,
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
    ACTIONS(536), 21,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8434] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(530), 12,
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
    ACTIONS(532), 21,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8477] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(562), 12,
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
    ACTIONS(564), 21,
      anon_sym_DQUOTE,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8520] = 4,
    ACTIONS(428), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(426), 14,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(424), 18,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [8565] = 9,
    ACTIONS(434), 1,
      anon_sym_SLASH,
    ACTIONS(438), 1,
      anon_sym_STAR,
    ACTIONS(442), 1,
      anon_sym_not,
    ACTIONS(436), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(440), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(446), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(522), 7,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym__,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(524), 14,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
  [8620] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(562), 12,
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
    ACTIONS(564), 21,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8663] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(558), 12,
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
    ACTIONS(560), 21,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [8706] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(560), 14,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(558), 18,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [8748] = 16,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(130), 1,
      anon_sym_LBRACE,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(148), 1,
      sym_none,
    ACTIONS(152), 1,
      sym_int_literal,
    ACTIONS(154), 1,
      sym_float_literal,
    ACTIONS(156), 1,
      aux_sym_string_literal_token1,
    ACTIONS(158), 1,
      anon_sym_not,
    STATE(150), 1,
      sym_expression,
    STATE(443), 1,
      sym__unnamed_arguments,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(150), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(133), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(143), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [8816] = 16,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(130), 1,
      anon_sym_LBRACE,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(148), 1,
      sym_none,
    ACTIONS(152), 1,
      sym_int_literal,
    ACTIONS(154), 1,
      sym_float_literal,
    ACTIONS(156), 1,
      aux_sym_string_literal_token1,
    ACTIONS(158), 1,
      anon_sym_not,
    STATE(85), 1,
      sym_expression,
    STATE(443), 1,
      sym__unnamed_arguments,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(150), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(133), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(143), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [8884] = 16,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym_none,
    ACTIONS(45), 1,
      sym_int_literal,
    ACTIONS(47), 1,
      sym_float_literal,
    ACTIONS(49), 1,
      aux_sym_string_literal_token1,
    ACTIONS(51), 1,
      anon_sym_not,
    STATE(174), 1,
      sym_expression,
    STATE(445), 1,
      sym__unnamed_arguments,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(187), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(157), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [8952] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(454), 14,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(452), 18,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [8994] = 16,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      sym_none,
    ACTIONS(290), 1,
      sym_int_literal,
    ACTIONS(292), 1,
      sym_float_literal,
    ACTIONS(294), 1,
      aux_sym_string_literal_token1,
    ACTIONS(296), 1,
      anon_sym_not,
    ACTIONS(510), 1,
      sym_identifier,
    STATE(346), 1,
      sym_expression,
    STATE(454), 1,
      sym__unnamed_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(288), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(341), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(336), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [9062] = 11,
    ACTIONS(566), 1,
      anon_sym_SLASH,
    ACTIONS(570), 1,
      anon_sym_STAR,
    ACTIONS(574), 1,
      anon_sym_not,
    ACTIONS(576), 1,
      anon_sym_and,
    ACTIONS(578), 1,
      anon_sym_or,
    ACTIONS(568), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(572), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(580), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(550), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
    ACTIONS(548), 11,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
  [9120] = 16,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(164), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      sym_none,
    ACTIONS(186), 1,
      sym_int_literal,
    ACTIONS(188), 1,
      sym_float_literal,
    ACTIONS(190), 1,
      aux_sym_string_literal_token1,
    ACTIONS(192), 1,
      anon_sym_not,
    STATE(107), 1,
      sym_expression,
    STATE(453), 1,
      sym__unnamed_arguments,
    ACTIONS(162), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(132), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(126), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [9188] = 16,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      sym_none,
    ACTIONS(290), 1,
      sym_int_literal,
    ACTIONS(292), 1,
      sym_float_literal,
    ACTIONS(294), 1,
      aux_sym_string_literal_token1,
    ACTIONS(296), 1,
      anon_sym_not,
    ACTIONS(510), 1,
      sym_identifier,
    STATE(348), 1,
      sym_expression,
    STATE(454), 1,
      sym__unnamed_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(288), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(341), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(336), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [9256] = 16,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      sym_none,
    ACTIONS(290), 1,
      sym_int_literal,
    ACTIONS(292), 1,
      sym_float_literal,
    ACTIONS(294), 1,
      aux_sym_string_literal_token1,
    ACTIONS(296), 1,
      anon_sym_not,
    ACTIONS(510), 1,
      sym_identifier,
    STATE(355), 1,
      sym_expression,
    STATE(454), 1,
      sym__unnamed_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(288), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(341), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(336), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [9324] = 16,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym_none,
    ACTIONS(45), 1,
      sym_int_literal,
    ACTIONS(47), 1,
      sym_float_literal,
    ACTIONS(49), 1,
      aux_sym_string_literal_token1,
    ACTIONS(51), 1,
      anon_sym_not,
    STATE(182), 1,
      sym_expression,
    STATE(445), 1,
      sym__unnamed_arguments,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(187), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(157), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [9392] = 16,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(130), 1,
      anon_sym_LBRACE,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(148), 1,
      sym_none,
    ACTIONS(152), 1,
      sym_int_literal,
    ACTIONS(154), 1,
      sym_float_literal,
    ACTIONS(156), 1,
      aux_sym_string_literal_token1,
    ACTIONS(158), 1,
      anon_sym_not,
    STATE(120), 1,
      sym_expression,
    STATE(443), 1,
      sym__unnamed_arguments,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(150), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(133), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(143), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [9460] = 16,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      sym_none,
    ACTIONS(290), 1,
      sym_int_literal,
    ACTIONS(292), 1,
      sym_float_literal,
    ACTIONS(294), 1,
      aux_sym_string_literal_token1,
    ACTIONS(296), 1,
      anon_sym_not,
    ACTIONS(510), 1,
      sym_identifier,
    STATE(339), 1,
      sym_expression,
    STATE(454), 1,
      sym__unnamed_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(288), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(341), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(336), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [9528] = 16,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym_none,
    ACTIONS(45), 1,
      sym_int_literal,
    ACTIONS(47), 1,
      sym_float_literal,
    ACTIONS(49), 1,
      aux_sym_string_literal_token1,
    ACTIONS(51), 1,
      anon_sym_not,
    STATE(186), 1,
      sym_expression,
    STATE(445), 1,
      sym__unnamed_arguments,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(187), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(157), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [9596] = 16,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(130), 1,
      anon_sym_LBRACE,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(148), 1,
      sym_none,
    ACTIONS(152), 1,
      sym_int_literal,
    ACTIONS(154), 1,
      sym_float_literal,
    ACTIONS(156), 1,
      aux_sym_string_literal_token1,
    ACTIONS(158), 1,
      anon_sym_not,
    STATE(118), 1,
      sym_expression,
    STATE(443), 1,
      sym__unnamed_arguments,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(150), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(133), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(143), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [9664] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(544), 14,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(542), 18,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [9706] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(540), 14,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(538), 18,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [9748] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(506), 14,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(508), 18,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [9790] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(536), 14,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(534), 18,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [9832] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(532), 14,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(530), 18,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [9874] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(528), 14,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(526), 18,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [9916] = 9,
    ACTIONS(566), 1,
      anon_sym_SLASH,
    ACTIONS(570), 1,
      anon_sym_STAR,
    ACTIONS(574), 1,
      anon_sym_not,
    ACTIONS(568), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(572), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(580), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(524), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
    ACTIONS(522), 13,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_and,
      anon_sym_or,
  [9970] = 16,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym_none,
    ACTIONS(45), 1,
      sym_int_literal,
    ACTIONS(47), 1,
      sym_float_literal,
    ACTIONS(49), 1,
      aux_sym_string_literal_token1,
    ACTIONS(51), 1,
      anon_sym_not,
    STATE(197), 1,
      sym_expression,
    STATE(445), 1,
      sym__unnamed_arguments,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(187), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(157), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [10038] = 16,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym_none,
    ACTIONS(45), 1,
      sym_int_literal,
    ACTIONS(47), 1,
      sym_float_literal,
    ACTIONS(49), 1,
      aux_sym_string_literal_token1,
    ACTIONS(51), 1,
      anon_sym_not,
    STATE(198), 1,
      sym_expression,
    STATE(445), 1,
      sym__unnamed_arguments,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(187), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(157), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [10106] = 16,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym_none,
    ACTIONS(45), 1,
      sym_int_literal,
    ACTIONS(47), 1,
      sym_float_literal,
    ACTIONS(49), 1,
      aux_sym_string_literal_token1,
    ACTIONS(51), 1,
      anon_sym_not,
    STATE(199), 1,
      sym_expression,
    STATE(445), 1,
      sym__unnamed_arguments,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(187), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(157), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [10174] = 16,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym_none,
    ACTIONS(45), 1,
      sym_int_literal,
    ACTIONS(47), 1,
      sym_float_literal,
    ACTIONS(49), 1,
      aux_sym_string_literal_token1,
    ACTIONS(51), 1,
      anon_sym_not,
    STATE(200), 1,
      sym_expression,
    STATE(445), 1,
      sym__unnamed_arguments,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(187), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(157), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [10242] = 16,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym_none,
    ACTIONS(45), 1,
      sym_int_literal,
    ACTIONS(47), 1,
      sym_float_literal,
    ACTIONS(49), 1,
      aux_sym_string_literal_token1,
    ACTIONS(51), 1,
      anon_sym_not,
    STATE(202), 1,
      sym_expression,
    STATE(445), 1,
      sym__unnamed_arguments,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(187), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(157), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [10310] = 16,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym_none,
    ACTIONS(45), 1,
      sym_int_literal,
    ACTIONS(47), 1,
      sym_float_literal,
    ACTIONS(49), 1,
      aux_sym_string_literal_token1,
    ACTIONS(51), 1,
      anon_sym_not,
    STATE(203), 1,
      sym_expression,
    STATE(445), 1,
      sym__unnamed_arguments,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(187), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(157), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [10378] = 16,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      sym_none,
    ACTIONS(290), 1,
      sym_int_literal,
    ACTIONS(292), 1,
      sym_float_literal,
    ACTIONS(294), 1,
      aux_sym_string_literal_token1,
    ACTIONS(296), 1,
      anon_sym_not,
    ACTIONS(510), 1,
      sym_identifier,
    STATE(344), 1,
      sym_expression,
    STATE(454), 1,
      sym__unnamed_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(288), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(341), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(336), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [10446] = 11,
    ACTIONS(566), 1,
      anon_sym_SLASH,
    ACTIONS(570), 1,
      anon_sym_STAR,
    ACTIONS(574), 1,
      anon_sym_not,
    ACTIONS(576), 1,
      anon_sym_and,
    ACTIONS(578), 1,
      anon_sym_or,
    ACTIONS(568), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(572), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(580), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(520), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
    ACTIONS(518), 11,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
  [10504] = 16,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(130), 1,
      anon_sym_LBRACE,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(148), 1,
      sym_none,
    ACTIONS(152), 1,
      sym_int_literal,
    ACTIONS(154), 1,
      sym_float_literal,
    ACTIONS(156), 1,
      aux_sym_string_literal_token1,
    ACTIONS(158), 1,
      anon_sym_not,
    STATE(117), 1,
      sym_expression,
    STATE(443), 1,
      sym__unnamed_arguments,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(150), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(133), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(143), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [10572] = 16,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(130), 1,
      anon_sym_LBRACE,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(148), 1,
      sym_none,
    ACTIONS(152), 1,
      sym_int_literal,
    ACTIONS(154), 1,
      sym_float_literal,
    ACTIONS(156), 1,
      aux_sym_string_literal_token1,
    ACTIONS(158), 1,
      anon_sym_not,
    STATE(116), 1,
      sym_expression,
    STATE(443), 1,
      sym__unnamed_arguments,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(150), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(133), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(143), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [10640] = 16,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(130), 1,
      anon_sym_LBRACE,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(148), 1,
      sym_none,
    ACTIONS(152), 1,
      sym_int_literal,
    ACTIONS(154), 1,
      sym_float_literal,
    ACTIONS(156), 1,
      aux_sym_string_literal_token1,
    ACTIONS(158), 1,
      anon_sym_not,
    STATE(115), 1,
      sym_expression,
    STATE(443), 1,
      sym__unnamed_arguments,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(150), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(133), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(143), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [10708] = 11,
    ACTIONS(566), 1,
      anon_sym_SLASH,
    ACTIONS(570), 1,
      anon_sym_STAR,
    ACTIONS(574), 1,
      anon_sym_not,
    ACTIONS(576), 1,
      anon_sym_and,
    ACTIONS(578), 1,
      anon_sym_or,
    ACTIONS(568), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(572), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(580), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(476), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
    ACTIONS(478), 11,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
  [10766] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(234), 14,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(232), 18,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [10808] = 16,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      sym_none,
    ACTIONS(290), 1,
      sym_int_literal,
    ACTIONS(292), 1,
      sym_float_literal,
    ACTIONS(294), 1,
      aux_sym_string_literal_token1,
    ACTIONS(296), 1,
      anon_sym_not,
    ACTIONS(510), 1,
      sym_identifier,
    STATE(342), 1,
      sym_expression,
    STATE(454), 1,
      sym__unnamed_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(288), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(341), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(336), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [10876] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(482), 14,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(484), 18,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [10918] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(426), 14,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(424), 18,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [10960] = 16,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      sym_none,
    ACTIONS(290), 1,
      sym_int_literal,
    ACTIONS(292), 1,
      sym_float_literal,
    ACTIONS(294), 1,
      aux_sym_string_literal_token1,
    ACTIONS(296), 1,
      anon_sym_not,
    ACTIONS(510), 1,
      sym_identifier,
    STATE(338), 1,
      sym_expression,
    STATE(454), 1,
      sym__unnamed_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(288), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(341), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(336), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [11028] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(504), 14,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(502), 18,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [11070] = 16,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym_none,
    ACTIONS(45), 1,
      sym_int_literal,
    ACTIONS(47), 1,
      sym_float_literal,
    ACTIONS(49), 1,
      aux_sym_string_literal_token1,
    ACTIONS(51), 1,
      anon_sym_not,
    STATE(207), 1,
      sym_expression,
    STATE(445), 1,
      sym__unnamed_arguments,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(187), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(157), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [11138] = 16,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(130), 1,
      anon_sym_LBRACE,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(148), 1,
      sym_none,
    ACTIONS(152), 1,
      sym_int_literal,
    ACTIONS(154), 1,
      sym_float_literal,
    ACTIONS(156), 1,
      aux_sym_string_literal_token1,
    ACTIONS(158), 1,
      anon_sym_not,
    STATE(130), 1,
      sym_expression,
    STATE(443), 1,
      sym__unnamed_arguments,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(150), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(133), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(143), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [11206] = 16,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(164), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      sym_none,
    ACTIONS(186), 1,
      sym_int_literal,
    ACTIONS(188), 1,
      sym_float_literal,
    ACTIONS(190), 1,
      aux_sym_string_literal_token1,
    ACTIONS(192), 1,
      anon_sym_not,
    STATE(94), 1,
      sym_expression,
    STATE(453), 1,
      sym__unnamed_arguments,
    ACTIONS(162), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(132), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(126), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [11274] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(500), 14,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(498), 18,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [11316] = 11,
    ACTIONS(566), 1,
      anon_sym_SLASH,
    ACTIONS(570), 1,
      anon_sym_STAR,
    ACTIONS(574), 1,
      anon_sym_not,
    ACTIONS(576), 1,
      anon_sym_and,
    ACTIONS(578), 1,
      anon_sym_or,
    ACTIONS(568), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(572), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(580), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(496), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
    ACTIONS(494), 11,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
  [11374] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(474), 14,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(472), 18,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [11416] = 5,
    ACTIONS(566), 1,
      anon_sym_SLASH,
    ACTIONS(570), 1,
      anon_sym_STAR,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(474), 13,
      anon_sym_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(472), 17,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [11462] = 6,
    ACTIONS(566), 1,
      anon_sym_SLASH,
    ACTIONS(570), 1,
      anon_sym_STAR,
    ACTIONS(568), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(470), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(468), 17,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [11510] = 16,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym_none,
    ACTIONS(45), 1,
      sym_int_literal,
    ACTIONS(47), 1,
      sym_float_literal,
    ACTIONS(49), 1,
      aux_sym_string_literal_token1,
    ACTIONS(51), 1,
      anon_sym_not,
    STATE(209), 1,
      sym_expression,
    STATE(445), 1,
      sym__unnamed_arguments,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(187), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(157), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [11578] = 9,
    ACTIONS(566), 1,
      anon_sym_SLASH,
    ACTIONS(570), 1,
      anon_sym_STAR,
    ACTIONS(574), 1,
      anon_sym_not,
    ACTIONS(568), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(572), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(580), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(430), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
    ACTIONS(432), 13,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_and,
      anon_sym_or,
  [11632] = 10,
    ACTIONS(566), 1,
      anon_sym_SLASH,
    ACTIONS(570), 1,
      anon_sym_STAR,
    ACTIONS(574), 1,
      anon_sym_not,
    ACTIONS(576), 1,
      anon_sym_and,
    ACTIONS(568), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(572), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(580), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(430), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
    ACTIONS(432), 12,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_or,
  [11688] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(564), 14,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(562), 18,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [11730] = 16,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym_none,
    ACTIONS(45), 1,
      sym_int_literal,
    ACTIONS(47), 1,
      sym_float_literal,
    ACTIONS(49), 1,
      aux_sym_string_literal_token1,
    ACTIONS(51), 1,
      anon_sym_not,
    STATE(168), 1,
      sym_expression,
    STATE(445), 1,
      sym__unnamed_arguments,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(187), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(157), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [11798] = 16,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(164), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      sym_none,
    ACTIONS(186), 1,
      sym_int_literal,
    ACTIONS(188), 1,
      sym_float_literal,
    ACTIONS(190), 1,
      aux_sym_string_literal_token1,
    ACTIONS(192), 1,
      anon_sym_not,
    STATE(129), 1,
      sym_expression,
    STATE(453), 1,
      sym__unnamed_arguments,
    ACTIONS(162), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(132), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(126), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [11866] = 11,
    ACTIONS(566), 1,
      anon_sym_SLASH,
    ACTIONS(570), 1,
      anon_sym_STAR,
    ACTIONS(574), 1,
      anon_sym_not,
    ACTIONS(576), 1,
      anon_sym_and,
    ACTIONS(578), 1,
      anon_sym_or,
    ACTIONS(568), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(572), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
    ACTIONS(580), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(488), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
    ACTIONS(486), 11,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
  [11924] = 16,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(164), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      sym_none,
    ACTIONS(186), 1,
      sym_int_literal,
    ACTIONS(188), 1,
      sym_float_literal,
    ACTIONS(190), 1,
      aux_sym_string_literal_token1,
    ACTIONS(192), 1,
      anon_sym_not,
    STATE(87), 1,
      sym_expression,
    STATE(453), 1,
      sym__unnamed_arguments,
    ACTIONS(162), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(132), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(126), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [11992] = 6,
    ACTIONS(566), 1,
      anon_sym_SLASH,
    ACTIONS(570), 1,
      anon_sym_STAR,
    ACTIONS(568), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(516), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(514), 17,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [12040] = 16,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(130), 1,
      anon_sym_LBRACE,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(148), 1,
      sym_none,
    ACTIONS(152), 1,
      sym_int_literal,
    ACTIONS(154), 1,
      sym_float_literal,
    ACTIONS(156), 1,
      aux_sym_string_literal_token1,
    ACTIONS(158), 1,
      anon_sym_not,
    STATE(90), 1,
      sym_expression,
    STATE(443), 1,
      sym__unnamed_arguments,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(150), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(133), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(143), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [12108] = 16,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(164), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      sym_none,
    ACTIONS(186), 1,
      sym_int_literal,
    ACTIONS(188), 1,
      sym_float_literal,
    ACTIONS(190), 1,
      aux_sym_string_literal_token1,
    ACTIONS(192), 1,
      anon_sym_not,
    STATE(88), 1,
      sym_expression,
    STATE(453), 1,
      sym__unnamed_arguments,
    ACTIONS(162), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(132), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(126), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [12176] = 16,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      sym_none,
    ACTIONS(290), 1,
      sym_int_literal,
    ACTIONS(292), 1,
      sym_float_literal,
    ACTIONS(294), 1,
      aux_sym_string_literal_token1,
    ACTIONS(296), 1,
      anon_sym_not,
    ACTIONS(510), 1,
      sym_identifier,
    STATE(369), 1,
      sym_expression,
    STATE(454), 1,
      sym__unnamed_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(288), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(341), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(336), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [12244] = 16,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(164), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      sym_none,
    ACTIONS(186), 1,
      sym_int_literal,
    ACTIONS(188), 1,
      sym_float_literal,
    ACTIONS(190), 1,
      aux_sym_string_literal_token1,
    ACTIONS(192), 1,
      anon_sym_not,
    STATE(89), 1,
      sym_expression,
    STATE(453), 1,
      sym__unnamed_arguments,
    ACTIONS(162), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(132), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(126), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [12312] = 16,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      sym_none,
    ACTIONS(290), 1,
      sym_int_literal,
    ACTIONS(292), 1,
      sym_float_literal,
    ACTIONS(294), 1,
      aux_sym_string_literal_token1,
    ACTIONS(296), 1,
      anon_sym_not,
    ACTIONS(510), 1,
      sym_identifier,
    STATE(332), 1,
      sym_expression,
    STATE(454), 1,
      sym__unnamed_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(288), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(341), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(336), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [12380] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(556), 14,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(554), 18,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_in,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [12422] = 16,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(164), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      sym_none,
    ACTIONS(186), 1,
      sym_int_literal,
    ACTIONS(188), 1,
      sym_float_literal,
    ACTIONS(190), 1,
      aux_sym_string_literal_token1,
    ACTIONS(192), 1,
      anon_sym_not,
    STATE(93), 1,
      sym_expression,
    STATE(453), 1,
      sym__unnamed_arguments,
    ACTIONS(162), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(132), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(126), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [12490] = 16,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(164), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      sym_none,
    ACTIONS(186), 1,
      sym_int_literal,
    ACTIONS(188), 1,
      sym_float_literal,
    ACTIONS(190), 1,
      aux_sym_string_literal_token1,
    ACTIONS(192), 1,
      anon_sym_not,
    STATE(95), 1,
      sym_expression,
    STATE(453), 1,
      sym__unnamed_arguments,
    ACTIONS(162), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(132), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(126), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [12558] = 16,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      sym_none,
    ACTIONS(290), 1,
      sym_int_literal,
    ACTIONS(292), 1,
      sym_float_literal,
    ACTIONS(294), 1,
      aux_sym_string_literal_token1,
    ACTIONS(296), 1,
      anon_sym_not,
    ACTIONS(510), 1,
      sym_identifier,
    STATE(354), 1,
      sym_expression,
    STATE(454), 1,
      sym__unnamed_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(288), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(341), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(336), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [12626] = 16,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      sym_none,
    ACTIONS(290), 1,
      sym_int_literal,
    ACTIONS(292), 1,
      sym_float_literal,
    ACTIONS(294), 1,
      aux_sym_string_literal_token1,
    ACTIONS(296), 1,
      anon_sym_not,
    ACTIONS(510), 1,
      sym_identifier,
    STATE(353), 1,
      sym_expression,
    STATE(454), 1,
      sym__unnamed_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(288), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(341), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(336), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [12694] = 16,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      sym_none,
    ACTIONS(290), 1,
      sym_int_literal,
    ACTIONS(292), 1,
      sym_float_literal,
    ACTIONS(294), 1,
      aux_sym_string_literal_token1,
    ACTIONS(296), 1,
      anon_sym_not,
    ACTIONS(510), 1,
      sym_identifier,
    STATE(335), 1,
      sym_expression,
    STATE(454), 1,
      sym__unnamed_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(288), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(341), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(336), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [12762] = 16,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      sym_none,
    ACTIONS(290), 1,
      sym_int_literal,
    ACTIONS(292), 1,
      sym_float_literal,
    ACTIONS(294), 1,
      aux_sym_string_literal_token1,
    ACTIONS(296), 1,
      anon_sym_not,
    ACTIONS(510), 1,
      sym_identifier,
    STATE(349), 1,
      sym_expression,
    STATE(454), 1,
      sym__unnamed_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(288), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(341), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(336), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [12830] = 16,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      sym_none,
    ACTIONS(290), 1,
      sym_int_literal,
    ACTIONS(292), 1,
      sym_float_literal,
    ACTIONS(294), 1,
      aux_sym_string_literal_token1,
    ACTIONS(296), 1,
      anon_sym_not,
    ACTIONS(510), 1,
      sym_identifier,
    STATE(331), 1,
      sym_expression,
    STATE(454), 1,
      sym__unnamed_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(288), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(341), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(336), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [12898] = 16,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(164), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      sym_none,
    ACTIONS(186), 1,
      sym_int_literal,
    ACTIONS(188), 1,
      sym_float_literal,
    ACTIONS(190), 1,
      aux_sym_string_literal_token1,
    ACTIONS(192), 1,
      anon_sym_not,
    STATE(109), 1,
      sym_expression,
    STATE(453), 1,
      sym__unnamed_arguments,
    ACTIONS(162), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(132), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(126), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [12966] = 16,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      sym_none,
    ACTIONS(290), 1,
      sym_int_literal,
    ACTIONS(292), 1,
      sym_float_literal,
    ACTIONS(294), 1,
      aux_sym_string_literal_token1,
    ACTIONS(296), 1,
      anon_sym_not,
    ACTIONS(510), 1,
      sym_identifier,
    STATE(345), 1,
      sym_expression,
    STATE(454), 1,
      sym__unnamed_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(288), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(341), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(336), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [13034] = 16,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      sym_none,
    ACTIONS(290), 1,
      sym_int_literal,
    ACTIONS(292), 1,
      sym_float_literal,
    ACTIONS(294), 1,
      aux_sym_string_literal_token1,
    ACTIONS(296), 1,
      anon_sym_not,
    ACTIONS(510), 1,
      sym_identifier,
    STATE(347), 1,
      sym_expression,
    STATE(454), 1,
      sym__unnamed_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(288), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(341), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(336), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [13102] = 16,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(164), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      sym_none,
    ACTIONS(186), 1,
      sym_int_literal,
    ACTIONS(188), 1,
      sym_float_literal,
    ACTIONS(190), 1,
      aux_sym_string_literal_token1,
    ACTIONS(192), 1,
      anon_sym_not,
    STATE(121), 1,
      sym_expression,
    STATE(453), 1,
      sym__unnamed_arguments,
    ACTIONS(162), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(132), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(126), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [13170] = 16,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      sym_none,
    ACTIONS(290), 1,
      sym_int_literal,
    ACTIONS(292), 1,
      sym_float_literal,
    ACTIONS(294), 1,
      aux_sym_string_literal_token1,
    ACTIONS(296), 1,
      anon_sym_not,
    ACTIONS(510), 1,
      sym_identifier,
    STATE(350), 1,
      sym_expression,
    STATE(454), 1,
      sym__unnamed_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(288), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(341), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(336), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [13238] = 16,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      sym_none,
    ACTIONS(290), 1,
      sym_int_literal,
    ACTIONS(292), 1,
      sym_float_literal,
    ACTIONS(294), 1,
      aux_sym_string_literal_token1,
    ACTIONS(296), 1,
      anon_sym_not,
    ACTIONS(510), 1,
      sym_identifier,
    STATE(356), 1,
      sym_expression,
    STATE(454), 1,
      sym__unnamed_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(288), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(341), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(336), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [13306] = 16,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      sym_none,
    ACTIONS(290), 1,
      sym_int_literal,
    ACTIONS(292), 1,
      sym_float_literal,
    ACTIONS(294), 1,
      aux_sym_string_literal_token1,
    ACTIONS(296), 1,
      anon_sym_not,
    ACTIONS(510), 1,
      sym_identifier,
    STATE(357), 1,
      sym_expression,
    STATE(454), 1,
      sym__unnamed_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(288), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(341), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(336), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [13374] = 16,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(164), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      sym_none,
    ACTIONS(186), 1,
      sym_int_literal,
    ACTIONS(188), 1,
      sym_float_literal,
    ACTIONS(190), 1,
      aux_sym_string_literal_token1,
    ACTIONS(192), 1,
      anon_sym_not,
    STATE(105), 1,
      sym_expression,
    STATE(453), 1,
      sym__unnamed_arguments,
    ACTIONS(162), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(132), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(126), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [13442] = 16,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      sym_none,
    ACTIONS(290), 1,
      sym_int_literal,
    ACTIONS(292), 1,
      sym_float_literal,
    ACTIONS(294), 1,
      aux_sym_string_literal_token1,
    ACTIONS(296), 1,
      anon_sym_not,
    ACTIONS(510), 1,
      sym_identifier,
    STATE(358), 1,
      sym_expression,
    STATE(454), 1,
      sym__unnamed_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(288), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(341), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(336), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [13510] = 16,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(130), 1,
      anon_sym_LBRACE,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(148), 1,
      sym_none,
    ACTIONS(152), 1,
      sym_int_literal,
    ACTIONS(154), 1,
      sym_float_literal,
    ACTIONS(156), 1,
      aux_sym_string_literal_token1,
    ACTIONS(158), 1,
      anon_sym_not,
    STATE(136), 1,
      sym_expression,
    STATE(443), 1,
      sym__unnamed_arguments,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(150), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(133), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(143), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [13578] = 16,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      sym_none,
    ACTIONS(290), 1,
      sym_int_literal,
    ACTIONS(292), 1,
      sym_float_literal,
    ACTIONS(294), 1,
      aux_sym_string_literal_token1,
    ACTIONS(296), 1,
      anon_sym_not,
    ACTIONS(510), 1,
      sym_identifier,
    STATE(359), 1,
      sym_expression,
    STATE(454), 1,
      sym__unnamed_arguments,
    ACTIONS(274), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(288), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(341), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(336), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [13646] = 16,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(130), 1,
      anon_sym_LBRACE,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(148), 1,
      sym_none,
    ACTIONS(152), 1,
      sym_int_literal,
    ACTIONS(154), 1,
      sym_float_literal,
    ACTIONS(156), 1,
      aux_sym_string_literal_token1,
    ACTIONS(158), 1,
      anon_sym_not,
    STATE(137), 1,
      sym_expression,
    STATE(443), 1,
      sym__unnamed_arguments,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(150), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(133), 3,
      sym_boolean_literal,
      sym_numeric,
      sym_string_literal,
    STATE(143), 14,
      sym_code_block,
      sym_content_block,
      sym_parenthesized_expression,
      sym_array,
      sym_unnamed_function,
      sym__literal,
      sym_assignment,
      sym_function_call,
      sym_unary_operator,
      sym_not_operator,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_augmented_assignment,
  [13714] = 8,
    ACTIONS(584), 1,
      anon_sym_DQUOTE,
    ACTIONS(588), 1,
      anon_sym_POUND,
    ACTIONS(590), 1,
      anon_sym_LBRACK,
    ACTIONS(592), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(582), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(250), 7,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(586), 16,
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
  [13765] = 8,
    ACTIONS(594), 1,
      ts_builtin_sym_end,
    ACTIONS(599), 1,
      anon_sym_DQUOTE,
    ACTIONS(605), 1,
      anon_sym_POUND,
    ACTIONS(608), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(596), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(236), 7,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(602), 16,
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
  [13816] = 8,
    ACTIONS(584), 1,
      anon_sym_DQUOTE,
    ACTIONS(588), 1,
      anon_sym_POUND,
    ACTIONS(590), 1,
      anon_sym_LBRACK,
    ACTIONS(615), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(611), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(241), 7,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(613), 16,
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
  [13867] = 8,
    ACTIONS(584), 1,
      anon_sym_DQUOTE,
    ACTIONS(588), 1,
      anon_sym_POUND,
    ACTIONS(590), 1,
      anon_sym_LBRACK,
    ACTIONS(621), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(617), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(237), 7,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(619), 16,
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
  [13918] = 8,
    ACTIONS(584), 1,
      anon_sym_DQUOTE,
    ACTIONS(588), 1,
      anon_sym_POUND,
    ACTIONS(590), 1,
      anon_sym_LBRACK,
    ACTIONS(623), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(611), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(241), 7,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(613), 16,
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
  [13969] = 8,
    ACTIONS(584), 1,
      anon_sym_DQUOTE,
    ACTIONS(588), 1,
      anon_sym_POUND,
    ACTIONS(590), 1,
      anon_sym_LBRACK,
    ACTIONS(629), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(625), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(239), 7,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(627), 16,
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
  [14020] = 8,
    ACTIONS(594), 1,
      anon_sym_RBRACK,
    ACTIONS(634), 1,
      anon_sym_DQUOTE,
    ACTIONS(640), 1,
      anon_sym_POUND,
    ACTIONS(643), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(631), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(241), 7,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(637), 16,
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
  [14071] = 8,
    ACTIONS(584), 1,
      anon_sym_DQUOTE,
    ACTIONS(588), 1,
      anon_sym_POUND,
    ACTIONS(590), 1,
      anon_sym_LBRACK,
    ACTIONS(646), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(611), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(241), 7,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(613), 16,
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
  [14122] = 8,
    ACTIONS(584), 1,
      anon_sym_DQUOTE,
    ACTIONS(588), 1,
      anon_sym_POUND,
    ACTIONS(590), 1,
      anon_sym_LBRACK,
    ACTIONS(652), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(648), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(244), 7,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(650), 16,
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
  [14173] = 8,
    ACTIONS(584), 1,
      anon_sym_DQUOTE,
    ACTIONS(588), 1,
      anon_sym_POUND,
    ACTIONS(590), 1,
      anon_sym_LBRACK,
    ACTIONS(654), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(611), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(241), 7,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(613), 16,
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
  [14224] = 8,
    ACTIONS(584), 1,
      anon_sym_DQUOTE,
    ACTIONS(588), 1,
      anon_sym_POUND,
    ACTIONS(590), 1,
      anon_sym_LBRACK,
    ACTIONS(660), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(656), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(242), 7,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(658), 16,
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
  [14275] = 8,
    ACTIONS(584), 1,
      anon_sym_DQUOTE,
    ACTIONS(588), 1,
      anon_sym_POUND,
    ACTIONS(590), 1,
      anon_sym_LBRACK,
    ACTIONS(662), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(611), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(241), 7,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(613), 16,
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
  [14326] = 8,
    ACTIONS(584), 1,
      anon_sym_DQUOTE,
    ACTIONS(588), 1,
      anon_sym_POUND,
    ACTIONS(590), 1,
      anon_sym_LBRACK,
    ACTIONS(664), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(611), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(241), 7,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(613), 16,
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
  [14377] = 8,
    ACTIONS(584), 1,
      anon_sym_DQUOTE,
    ACTIONS(588), 1,
      anon_sym_POUND,
    ACTIONS(590), 1,
      anon_sym_LBRACK,
    ACTIONS(666), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(611), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(241), 7,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(613), 16,
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
  [14428] = 8,
    ACTIONS(584), 1,
      anon_sym_DQUOTE,
    ACTIONS(588), 1,
      anon_sym_POUND,
    ACTIONS(590), 1,
      anon_sym_LBRACK,
    ACTIONS(672), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(668), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(246), 7,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(670), 16,
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
  [14479] = 8,
    ACTIONS(584), 1,
      anon_sym_DQUOTE,
    ACTIONS(588), 1,
      anon_sym_POUND,
    ACTIONS(590), 1,
      anon_sym_LBRACK,
    ACTIONS(674), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(611), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(241), 7,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(613), 16,
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
  [14530] = 8,
    ACTIONS(584), 1,
      anon_sym_DQUOTE,
    ACTIONS(588), 1,
      anon_sym_POUND,
    ACTIONS(590), 1,
      anon_sym_LBRACK,
    ACTIONS(676), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(611), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(241), 7,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(613), 16,
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
  [14581] = 8,
    ACTIONS(584), 1,
      anon_sym_DQUOTE,
    ACTIONS(588), 1,
      anon_sym_POUND,
    ACTIONS(590), 1,
      anon_sym_LBRACK,
    ACTIONS(682), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(678), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(256), 7,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(680), 16,
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
  [14632] = 8,
    ACTIONS(584), 1,
      anon_sym_DQUOTE,
    ACTIONS(588), 1,
      anon_sym_POUND,
    ACTIONS(590), 1,
      anon_sym_LBRACK,
    ACTIONS(688), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(684), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(251), 7,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(686), 16,
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
  [14683] = 8,
    ACTIONS(584), 1,
      anon_sym_DQUOTE,
    ACTIONS(588), 1,
      anon_sym_POUND,
    ACTIONS(590), 1,
      anon_sym_LBRACK,
    ACTIONS(694), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(690), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(247), 7,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(692), 16,
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
  [14734] = 8,
    ACTIONS(584), 1,
      anon_sym_DQUOTE,
    ACTIONS(588), 1,
      anon_sym_POUND,
    ACTIONS(590), 1,
      anon_sym_LBRACK,
    ACTIONS(700), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(696), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(248), 7,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(698), 16,
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
  [14785] = 8,
    ACTIONS(584), 1,
      anon_sym_DQUOTE,
    ACTIONS(588), 1,
      anon_sym_POUND,
    ACTIONS(590), 1,
      anon_sym_LBRACK,
    ACTIONS(702), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(611), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(241), 7,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(613), 16,
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
  [14836] = 8,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(704), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(706), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    STATE(236), 7,
      sym__markup,
      sym_quote,
      aux_sym__text,
      sym__code_mode,
      sym__code_block,
      sym_content_block,
      aux_sym_source_file_repeat1,
    ACTIONS(708), 16,
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
  [14887] = 16,
    ACTIONS(200), 1,
      anon_sym_EQ_GT,
    ACTIONS(710), 1,
      sym_identifier,
    ACTIONS(712), 1,
      anon_sym_COLON,
    ACTIONS(714), 1,
      anon_sym_EQ,
    ACTIONS(716), 1,
      anon_sym_COMMA,
    ACTIONS(718), 1,
      anon_sym_LPAREN,
    ACTIONS(720), 1,
      anon_sym_RPAREN,
    ACTIONS(722), 1,
      anon_sym_COMMA2,
    ACTIONS(724), 1,
      anon_sym_DOT2,
    ACTIONS(728), 1,
      anon_sym_BANG2,
    STATE(313), 1,
      sym_parameters,
    ACTIONS(726), 2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(194), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(730), 4,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(196), 10,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
  [14954] = 11,
    ACTIONS(200), 1,
      anon_sym_EQ_GT,
    ACTIONS(714), 1,
      anon_sym_EQ,
    ACTIONS(718), 1,
      anon_sym_LPAREN,
    ACTIONS(724), 1,
      anon_sym_DOT2,
    ACTIONS(728), 1,
      anon_sym_BANG2,
    STATE(313), 1,
      sym_parameters,
    ACTIONS(726), 2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(730), 4,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(196), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
    ACTIONS(194), 12,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [15010] = 13,
    ACTIONS(200), 1,
      anon_sym_EQ_GT,
    ACTIONS(712), 1,
      anon_sym_COLON,
    ACTIONS(714), 1,
      anon_sym_EQ,
    ACTIONS(718), 1,
      anon_sym_LPAREN,
    ACTIONS(724), 1,
      anon_sym_DOT2,
    ACTIONS(728), 1,
      anon_sym_BANG2,
    STATE(313), 1,
      sym_parameters,
    ACTIONS(726), 2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
    ACTIONS(732), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(730), 4,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(196), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
    ACTIONS(194), 8,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [15069] = 13,
    ACTIONS(200), 1,
      anon_sym_EQ_GT,
    ACTIONS(712), 1,
      anon_sym_COLON,
    ACTIONS(714), 1,
      anon_sym_EQ,
    ACTIONS(718), 1,
      anon_sym_LPAREN,
    ACTIONS(724), 1,
      anon_sym_DOT2,
    ACTIONS(728), 1,
      anon_sym_BANG2,
    STATE(313), 1,
      sym_parameters,
    ACTIONS(720), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(726), 2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(730), 4,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(196), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
    ACTIONS(194), 8,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [15128] = 5,
    STATE(333), 1,
      sym_unit,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(232), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(734), 9,
      anon_sym_in,
      anon_sym_pt,
      anon_sym_mm,
      anon_sym_cm,
      anon_sym_deg,
      anon_sym_rad,
      anon_sym_em,
      anon_sym_fr,
      anon_sym_PERCENT,
    ACTIONS(234), 14,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [15169] = 5,
    ACTIONS(740), 1,
      anon_sym_else,
    STATE(278), 1,
      sym_else_clause,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(738), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(736), 20,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
  [15209] = 5,
    ACTIONS(742), 1,
      anon_sym_else,
    STATE(300), 1,
      sym_else_clause,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(738), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(736), 20,
      anon_sym_DQUOTE,
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
  [15249] = 6,
    ACTIONS(746), 1,
      sym_line_break,
    STATE(265), 1,
      aux_sym__text,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(748), 3,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(744), 5,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_escape_sequence,
    ACTIONS(751), 15,
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
  [15290] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(562), 5,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_else,
    ACTIONS(564), 20,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
  [15325] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(558), 5,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_else,
    ACTIONS(560), 20,
      anon_sym_DQUOTE,
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
  [15360] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(562), 5,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_else,
    ACTIONS(564), 20,
      anon_sym_DQUOTE,
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
  [15395] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(484), 5,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_else,
    ACTIONS(482), 20,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
  [15430] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(558), 5,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_else,
    ACTIONS(560), 20,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
  [15465] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(538), 5,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_else,
    ACTIONS(540), 20,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
  [15500] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(538), 5,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_else,
    ACTIONS(540), 20,
      anon_sym_DQUOTE,
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
  [15535] = 6,
    ACTIONS(746), 1,
      sym_line_break,
    STATE(273), 1,
      aux_sym__text,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(754), 3,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(744), 5,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_escape_sequence,
    ACTIONS(757), 15,
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
  [15576] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(484), 5,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_else,
    ACTIONS(482), 20,
      anon_sym_DQUOTE,
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
  [15611] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(760), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(762), 20,
      anon_sym_DQUOTE,
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
  [15645] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(538), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(540), 20,
      anon_sym_DQUOTE,
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
  [15679] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(766), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(764), 20,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
  [15713] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(770), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(768), 20,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
  [15747] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(558), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(560), 20,
      anon_sym_DQUOTE,
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
  [15781] = 5,
    ACTIONS(772), 1,
      sym_identifier,
    STATE(314), 1,
      sym_function_call,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(264), 8,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
      anon_sym_BANG2,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(260), 14,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_DOT2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [15819] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(776), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(774), 20,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
  [15853] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(766), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(764), 20,
      anon_sym_DQUOTE,
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
  [15887] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(780), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(778), 20,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
  [15921] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(784), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(782), 20,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
  [15955] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(788), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(786), 20,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
  [15989] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(448), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(450), 20,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
  [16023] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(792), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(790), 20,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
  [16057] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(760), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(762), 20,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
  [16091] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(788), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(786), 20,
      anon_sym_DQUOTE,
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
  [16125] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(562), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(564), 20,
      anon_sym_DQUOTE,
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
  [16159] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(558), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(560), 20,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
  [16193] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(538), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(540), 20,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
  [16227] = 8,
    ACTIONS(718), 1,
      anon_sym_LPAREN,
    ACTIONS(724), 1,
      anon_sym_DOT2,
    ACTIONS(728), 1,
      anon_sym_BANG2,
    STATE(313), 1,
      sym_parameters,
    ACTIONS(726), 2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(196), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(194), 15,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [16271] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(784), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(782), 20,
      anon_sym_DQUOTE,
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
  [16305] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(562), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(564), 20,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
  [16339] = 5,
    ACTIONS(772), 1,
      sym_identifier,
    STATE(312), 1,
      sym_function_call,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(270), 8,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
      anon_sym_BANG2,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(268), 14,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_DOT2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [16377] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(484), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(482), 20,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
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
  [16411] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(780), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(778), 20,
      anon_sym_DQUOTE,
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
  [16445] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(484), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(482), 20,
      anon_sym_DQUOTE,
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
  [16479] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(770), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(768), 20,
      anon_sym_DQUOTE,
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
  [16513] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(776), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(774), 20,
      anon_sym_DQUOTE,
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
  [16547] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(792), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(790), 20,
      anon_sym_DQUOTE,
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
  [16581] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(448), 4,
      sym_line_break,
      aux_sym__text_token1,
      anon_sym_SLASH,
      anon_sym__,
    ACTIONS(450), 20,
      anon_sym_DQUOTE,
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
  [16615] = 5,
    ACTIONS(794), 1,
      anon_sym_else,
    STATE(325), 1,
      sym_else_clause,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(736), 9,
      anon_sym_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
    ACTIONS(738), 12,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
  [16652] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(270), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG2,
    ACTIONS(268), 18,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_DOT2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [16684] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(348), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG2,
    ACTIONS(350), 18,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_DOT2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [16716] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(560), 9,
      anon_sym_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
    ACTIONS(558), 13,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
  [16748] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(540), 9,
      anon_sym_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
    ACTIONS(538), 13,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
  [16780] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(564), 9,
      anon_sym_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
    ACTIONS(562), 13,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
  [16812] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(304), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG2,
    ACTIONS(306), 18,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_DOT2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [16844] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(318), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG2,
    ACTIONS(320), 18,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_DOT2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [16876] = 5,
    ACTIONS(798), 1,
      anon_sym_BANG2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(328), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(796), 3,
      anon_sym_DOT2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
    ACTIONS(326), 15,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [16912] = 6,
    ACTIONS(800), 1,
      anon_sym_DOT2,
    ACTIONS(804), 1,
      anon_sym_BANG2,
    ACTIONS(802), 2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(310), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(308), 15,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [16950] = 5,
    ACTIONS(808), 1,
      anon_sym_BANG2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(352), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(806), 3,
      anon_sym_DOT2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
    ACTIONS(354), 15,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [16986] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(336), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG2,
    ACTIONS(334), 18,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_DOT2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [17018] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(482), 9,
      anon_sym_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
    ACTIONS(484), 13,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
  [17050] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(264), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG2,
    ACTIONS(260), 18,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_DOT2,
      anon_sym_SQUOTE,
      anon_sym_QMARK2,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [17082] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(790), 9,
      anon_sym_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
    ACTIONS(792), 12,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
  [17113] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(560), 9,
      anon_sym_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
    ACTIONS(558), 12,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
  [17144] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(764), 9,
      anon_sym_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
    ACTIONS(766), 12,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
  [17175] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(782), 9,
      anon_sym_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
    ACTIONS(784), 12,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
  [17206] = 4,
    ACTIONS(814), 1,
      anon_sym_SEMI2,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(812), 8,
      anon_sym_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
    ACTIONS(810), 12,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
  [17239] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(540), 9,
      anon_sym_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
    ACTIONS(538), 12,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
  [17270] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(564), 9,
      anon_sym_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
    ACTIONS(562), 12,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
  [17301] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(768), 9,
      anon_sym_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
    ACTIONS(770), 12,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
  [17332] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(762), 9,
      anon_sym_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
    ACTIONS(760), 12,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
  [17363] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(778), 9,
      anon_sym_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
    ACTIONS(780), 12,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
  [17394] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(482), 9,
      anon_sym_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SEMI2,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
    ACTIONS(484), 12,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
  [17425] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(80), 8,
      anon_sym_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_float_literal,
      aux_sym_string_literal_token1,
      anon_sym_PLUS,
    ACTIONS(816), 12,
      sym_identifier,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      sym_none,
      anon_sym_true,
      anon_sym_false,
      sym_int_literal,
      anon_sym_not,
  [17455] = 4,
    ACTIONS(428), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(424), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(426), 15,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [17486] = 8,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(828), 1,
      anon_sym_not,
    ACTIONS(820), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(824), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(826), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(430), 6,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [17524] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(542), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(544), 15,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [17552] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(530), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(532), 15,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [17580] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(526), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 15,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [17608] = 8,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(828), 1,
      anon_sym_not,
    ACTIONS(820), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(824), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(826), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(524), 6,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [17646] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(452), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(454), 15,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [17674] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(558), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(560), 15,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [17702] = 6,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(514), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(820), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(516), 12,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [17736] = 12,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(828), 1,
      anon_sym_not,
    ACTIONS(830), 1,
      anon_sym_LBRACE,
    ACTIONS(832), 1,
      anon_sym_LBRACK,
    ACTIONS(834), 1,
      anon_sym_and,
    ACTIONS(836), 1,
      anon_sym_or,
    ACTIONS(820), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(824), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(318), 2,
      sym_code_block,
      sym_content_block,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(826), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [17782] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(508), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(506), 15,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [17810] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(232), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(234), 15,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [17838] = 12,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(828), 1,
      anon_sym_not,
    ACTIONS(834), 1,
      anon_sym_and,
    ACTIONS(836), 1,
      anon_sym_or,
    ACTIONS(838), 1,
      anon_sym_LBRACE,
    ACTIONS(840), 1,
      anon_sym_LBRACK,
    ACTIONS(820), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(824), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(304), 2,
      sym_code_block,
      sym_content_block,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(826), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [17884] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(554), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(556), 15,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [17912] = 12,
    ACTIONS(590), 1,
      anon_sym_LBRACK,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(828), 1,
      anon_sym_not,
    ACTIONS(834), 1,
      anon_sym_and,
    ACTIONS(836), 1,
      anon_sym_or,
    ACTIONS(842), 1,
      anon_sym_LBRACE,
    ACTIONS(820), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(824), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(275), 2,
      sym_code_block,
      sym_content_block,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(826), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [17958] = 10,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(828), 1,
      anon_sym_not,
    ACTIONS(834), 1,
      anon_sym_and,
    ACTIONS(836), 1,
      anon_sym_or,
    ACTIONS(820), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(824), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(520), 4,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
    ACTIONS(826), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [18000] = 12,
    ACTIONS(590), 1,
      anon_sym_LBRACK,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(828), 1,
      anon_sym_not,
    ACTIONS(834), 1,
      anon_sym_and,
    ACTIONS(836), 1,
      anon_sym_or,
    ACTIONS(842), 1,
      anon_sym_LBRACE,
    ACTIONS(820), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(824), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(302), 2,
      sym_code_block,
      sym_content_block,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(826), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [18046] = 12,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(828), 1,
      anon_sym_not,
    ACTIONS(834), 1,
      anon_sym_and,
    ACTIONS(836), 1,
      anon_sym_or,
    ACTIONS(844), 1,
      anon_sym_LBRACE,
    ACTIONS(846), 1,
      anon_sym_LBRACK,
    ACTIONS(820), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(824), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(263), 2,
      sym_code_block,
      sym_content_block,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(826), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [18092] = 12,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(828), 1,
      anon_sym_not,
    ACTIONS(834), 1,
      anon_sym_and,
    ACTIONS(836), 1,
      anon_sym_or,
    ACTIONS(848), 1,
      anon_sym_LBRACE,
    ACTIONS(850), 1,
      anon_sym_LBRACK,
    ACTIONS(820), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(824), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(264), 2,
      sym_code_block,
      sym_content_block,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(826), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [18138] = 12,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(828), 1,
      anon_sym_not,
    ACTIONS(834), 1,
      anon_sym_and,
    ACTIONS(836), 1,
      anon_sym_or,
    ACTIONS(852), 1,
      anon_sym_LBRACE,
    ACTIONS(820), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(824), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(287), 2,
      sym_code_block,
      sym_content_block,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(826), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [18184] = 10,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(828), 1,
      anon_sym_not,
    ACTIONS(834), 1,
      anon_sym_and,
    ACTIONS(836), 1,
      anon_sym_or,
    ACTIONS(820), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(824), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(476), 4,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
    ACTIONS(826), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [18226] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(562), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(564), 15,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [18254] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(534), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(536), 15,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [18282] = 9,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(828), 1,
      anon_sym_not,
    ACTIONS(834), 1,
      anon_sym_and,
    ACTIONS(820), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(824), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(430), 5,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_or,
    ACTIONS(826), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [18322] = 12,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(828), 1,
      anon_sym_not,
    ACTIONS(834), 1,
      anon_sym_and,
    ACTIONS(836), 1,
      anon_sym_or,
    ACTIONS(852), 1,
      anon_sym_LBRACE,
    ACTIONS(820), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(824), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(288), 2,
      sym_code_block,
      sym_content_block,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(826), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [18368] = 12,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(828), 1,
      anon_sym_not,
    ACTIONS(830), 1,
      anon_sym_LBRACE,
    ACTIONS(832), 1,
      anon_sym_LBRACK,
    ACTIONS(834), 1,
      anon_sym_and,
    ACTIONS(836), 1,
      anon_sym_or,
    ACTIONS(820), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(824), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(326), 2,
      sym_code_block,
      sym_content_block,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(826), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [18414] = 6,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(468), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(820), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(470), 12,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [18448] = 5,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(472), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(474), 14,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [18480] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(472), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(474), 15,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [18508] = 10,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(828), 1,
      anon_sym_not,
    ACTIONS(834), 1,
      anon_sym_and,
    ACTIONS(836), 1,
      anon_sym_or,
    ACTIONS(820), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(824), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(496), 4,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
    ACTIONS(826), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [18550] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(498), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(500), 15,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [18578] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(502), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(504), 15,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [18606] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(424), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(426), 15,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [18634] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(484), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(482), 15,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [18662] = 3,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(538), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(540), 15,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [18690] = 12,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(828), 1,
      anon_sym_not,
    ACTIONS(834), 1,
      anon_sym_and,
    ACTIONS(836), 1,
      anon_sym_or,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(856), 1,
      anon_sym_RPAREN,
    STATE(389), 1,
      aux_sym__array_repeat1,
    ACTIONS(820), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(824), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(826), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [18735] = 12,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(828), 1,
      anon_sym_not,
    ACTIONS(834), 1,
      anon_sym_and,
    ACTIONS(836), 1,
      anon_sym_or,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(858), 1,
      anon_sym_RPAREN,
    STATE(389), 1,
      aux_sym__array_repeat1,
    ACTIONS(820), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(824), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(826), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [18780] = 12,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(828), 1,
      anon_sym_not,
    ACTIONS(834), 1,
      anon_sym_and,
    ACTIONS(836), 1,
      anon_sym_or,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(860), 1,
      anon_sym_RPAREN,
    STATE(389), 1,
      aux_sym__array_repeat1,
    ACTIONS(820), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(824), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(826), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [18825] = 12,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(828), 1,
      anon_sym_not,
    ACTIONS(834), 1,
      anon_sym_and,
    ACTIONS(836), 1,
      anon_sym_or,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(862), 1,
      anon_sym_RPAREN,
    STATE(389), 1,
      aux_sym__array_repeat1,
    ACTIONS(820), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(824), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(826), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [18870] = 10,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(828), 1,
      anon_sym_not,
    ACTIONS(834), 1,
      anon_sym_and,
    ACTIONS(836), 1,
      anon_sym_or,
    ACTIONS(820), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(824), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(864), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(826), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [18910] = 10,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(828), 1,
      anon_sym_not,
    ACTIONS(834), 1,
      anon_sym_and,
    ACTIONS(836), 1,
      anon_sym_or,
    ACTIONS(732), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(820), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(824), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(826), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [18950] = 10,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_STAR,
    ACTIONS(828), 1,
      anon_sym_not,
    ACTIONS(834), 1,
      anon_sym_and,
    ACTIONS(836), 1,
      anon_sym_or,
    ACTIONS(720), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(820), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(824), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(826), 5,
      anon_sym_in,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [18990] = 5,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(852), 1,
      anon_sym_LBRACE,
    ACTIONS(866), 1,
      anon_sym_if,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(283), 3,
      sym_code_block,
      sym_content_block,
      sym_if_expression,
  [19010] = 5,
    ACTIONS(830), 1,
      anon_sym_LBRACE,
    ACTIONS(832), 1,
      anon_sym_LBRACK,
    ACTIONS(868), 1,
      anon_sym_if,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(327), 3,
      sym_code_block,
      sym_content_block,
      sym_if_expression,
  [19030] = 5,
    ACTIONS(590), 1,
      anon_sym_LBRACK,
    ACTIONS(842), 1,
      anon_sym_LBRACE,
    ACTIONS(870), 1,
      anon_sym_if,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
    STATE(298), 3,
      sym_code_block,
      sym_content_block,
      sym_if_expression,
  [19050] = 5,
    ACTIONS(872), 1,
      anon_sym_DQUOTE,
    ACTIONS(874), 1,
      sym__not_an_escape_sequence,
    STATE(381), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(876), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19069] = 5,
    ACTIONS(878), 1,
      anon_sym_DQUOTE,
    ACTIONS(880), 1,
      sym__not_an_escape_sequence,
    STATE(380), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(882), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19088] = 5,
    ACTIONS(884), 1,
      anon_sym_DQUOTE,
    ACTIONS(886), 1,
      sym__not_an_escape_sequence,
    STATE(377), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(889), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19107] = 5,
    ACTIONS(892), 1,
      anon_sym_DQUOTE,
    ACTIONS(894), 1,
      sym__not_an_escape_sequence,
    STATE(383), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(896), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19126] = 5,
    ACTIONS(898), 1,
      anon_sym_DQUOTE,
    ACTIONS(900), 1,
      sym__not_an_escape_sequence,
    STATE(377), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(902), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19145] = 5,
    ACTIONS(900), 1,
      sym__not_an_escape_sequence,
    ACTIONS(904), 1,
      anon_sym_DQUOTE,
    STATE(377), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(902), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19164] = 5,
    ACTIONS(900), 1,
      sym__not_an_escape_sequence,
    ACTIONS(906), 1,
      anon_sym_DQUOTE,
    STATE(377), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(902), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19183] = 5,
    ACTIONS(908), 1,
      anon_sym_DQUOTE,
    ACTIONS(910), 1,
      sym__not_an_escape_sequence,
    STATE(379), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(912), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19202] = 5,
    ACTIONS(900), 1,
      sym__not_an_escape_sequence,
    ACTIONS(914), 1,
      anon_sym_DQUOTE,
    STATE(377), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(902), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19221] = 4,
    ACTIONS(916), 1,
      anon_sym_DQUOTE,
    STATE(386), 1,
      aux_sym_quote_repeat1,
    ACTIONS(918), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19237] = 4,
    ACTIONS(920), 1,
      anon_sym_DQUOTE,
    STATE(385), 1,
      aux_sym_quote_repeat1,
    ACTIONS(922), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19253] = 4,
    ACTIONS(925), 1,
      anon_sym_DQUOTE,
    STATE(385), 1,
      aux_sym_quote_repeat1,
    ACTIONS(927), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19269] = 4,
    ACTIONS(929), 1,
      anon_sym_DQUOTE,
    STATE(385), 1,
      aux_sym_quote_repeat1,
    ACTIONS(927), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19285] = 4,
    ACTIONS(931), 1,
      anon_sym_DQUOTE,
    STATE(387), 1,
      aux_sym_quote_repeat1,
    ACTIONS(933), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19301] = 4,
    ACTIONS(512), 1,
      anon_sym_RPAREN,
    ACTIONS(935), 1,
      anon_sym_COMMA,
    STATE(404), 1,
      aux_sym__array_repeat1,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19316] = 4,
    ACTIONS(937), 1,
      anon_sym_COMMA,
    ACTIONS(939), 1,
      anon_sym_in,
    STATE(392), 1,
      aux_sym_pattern_list_repeat1,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19331] = 4,
    ACTIONS(416), 1,
      anon_sym_RPAREN,
    ACTIONS(941), 1,
      anon_sym_COMMA,
    STATE(399), 1,
      aux_sym__unnamed_arguments_repeat1,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19346] = 4,
    ACTIONS(943), 1,
      anon_sym_COMMA,
    ACTIONS(946), 1,
      anon_sym_in,
    STATE(392), 1,
      aux_sym_pattern_list_repeat1,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19361] = 4,
    ACTIONS(948), 1,
      sym_identifier,
    STATE(428), 1,
      sym_pattern,
    STATE(449), 1,
      sym_pattern_list,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19376] = 4,
    ACTIONS(950), 1,
      anon_sym_EQ,
    ACTIONS(952), 1,
      anon_sym_LPAREN,
    STATE(441), 1,
      sym_parameters,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19391] = 4,
    ACTIONS(954), 1,
      sym_identifier,
    ACTIONS(956), 1,
      anon_sym_RPAREN,
    STATE(407), 1,
      aux_sym__weird_edge_case,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19406] = 4,
    ACTIONS(948), 1,
      sym_identifier,
    STATE(449), 1,
      sym_pattern_list,
    STATE(460), 1,
      sym_pattern,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19421] = 4,
    ACTIONS(952), 1,
      anon_sym_LPAREN,
    ACTIONS(958), 1,
      anon_sym_EQ,
    STATE(441), 1,
      sym_parameters,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19436] = 4,
    ACTIONS(960), 1,
      anon_sym_COMMA,
    ACTIONS(962), 1,
      anon_sym_in,
    STATE(390), 1,
      aux_sym_pattern_list_repeat1,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19451] = 4,
    ACTIONS(964), 1,
      anon_sym_COMMA,
    ACTIONS(967), 1,
      anon_sym_RPAREN,
    STATE(399), 1,
      aux_sym__unnamed_arguments_repeat1,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19466] = 4,
    ACTIONS(952), 1,
      anon_sym_LPAREN,
    ACTIONS(969), 1,
      anon_sym_EQ,
    STATE(441), 1,
      sym_parameters,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19481] = 4,
    ACTIONS(948), 1,
      sym_identifier,
    STATE(449), 1,
      sym_pattern_list,
    STATE(459), 1,
      sym_pattern,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19496] = 4,
    ACTIONS(971), 1,
      anon_sym_COMMA,
    ACTIONS(973), 1,
      anon_sym_RPAREN,
    STATE(405), 1,
      aux_sym__unnamed_arguments_repeat1,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19511] = 4,
    ACTIONS(954), 1,
      sym_identifier,
    ACTIONS(975), 1,
      anon_sym_RPAREN,
    STATE(407), 1,
      aux_sym__weird_edge_case,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19526] = 4,
    ACTIONS(864), 1,
      anon_sym_RPAREN,
    ACTIONS(977), 1,
      anon_sym_COMMA,
    STATE(404), 1,
      aux_sym__array_repeat1,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19541] = 4,
    ACTIONS(422), 1,
      anon_sym_RPAREN,
    ACTIONS(980), 1,
      anon_sym_COMMA,
    STATE(399), 1,
      aux_sym__unnamed_arguments_repeat1,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19556] = 4,
    ACTIONS(982), 1,
      anon_sym_COMMA,
    ACTIONS(984), 1,
      anon_sym_RPAREN,
    STATE(391), 1,
      aux_sym__unnamed_arguments_repeat1,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19571] = 4,
    ACTIONS(986), 1,
      sym_identifier,
    ACTIONS(989), 1,
      anon_sym_RPAREN,
    STATE(407), 1,
      aux_sym__weird_edge_case,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19586] = 3,
    ACTIONS(722), 1,
      anon_sym_COMMA2,
    ACTIONS(991), 2,
      sym_identifier,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19599] = 4,
    ACTIONS(954), 1,
      sym_identifier,
    ACTIONS(993), 1,
      anon_sym_RPAREN,
    STATE(407), 1,
      aux_sym__weird_edge_case,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19614] = 4,
    ACTIONS(954), 1,
      sym_identifier,
    ACTIONS(995), 1,
      anon_sym_RPAREN,
    STATE(407), 1,
      aux_sym__weird_edge_case,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19629] = 3,
    ACTIONS(997), 1,
      sym_identifier,
    STATE(461), 1,
      sym_function,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19641] = 2,
    ACTIONS(946), 2,
      anon_sym_COMMA,
      anon_sym_in,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19651] = 3,
    ACTIONS(999), 1,
      sym_identifier,
    ACTIONS(1001), 1,
      anon_sym_in,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19663] = 2,
    ACTIONS(967), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19673] = 2,
    ACTIONS(1003), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19683] = 3,
    ACTIONS(999), 1,
      sym_identifier,
    ACTIONS(1005), 1,
      anon_sym_in,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19695] = 3,
    ACTIONS(1007), 1,
      sym_identifier,
    STATE(425), 1,
      sym_function,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19707] = 2,
    ACTIONS(989), 2,
      sym_identifier,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19717] = 2,
    ACTIONS(732), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19727] = 3,
    ACTIONS(1009), 1,
      sym_identifier,
    STATE(437), 1,
      sym_function,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19739] = 2,
    ACTIONS(1011), 1,
      anon_sym_in,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19748] = 2,
    ACTIONS(1013), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19757] = 2,
    ACTIONS(1015), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19766] = 2,
    ACTIONS(1017), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19775] = 2,
    ACTIONS(958), 1,
      anon_sym_EQ,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19784] = 2,
    ACTIONS(1019), 1,
      anon_sym_in,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19793] = 2,
    ACTIONS(1021), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19802] = 2,
    ACTIONS(1023), 1,
      anon_sym_in,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19811] = 2,
    ACTIONS(1025), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19820] = 2,
    ACTIONS(1027), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19829] = 2,
    ACTIONS(1029), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19838] = 2,
    ACTIONS(1031), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19847] = 2,
    ACTIONS(1033), 1,
      sym_identifier,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19856] = 2,
    ACTIONS(1035), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19865] = 2,
    ACTIONS(1037), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19874] = 2,
    ACTIONS(1039), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19883] = 2,
    ACTIONS(950), 1,
      anon_sym_EQ,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19892] = 2,
    ACTIONS(1041), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19901] = 2,
    ACTIONS(1043), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19910] = 2,
    ACTIONS(1045), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19919] = 2,
    ACTIONS(1047), 1,
      anon_sym_EQ,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19928] = 2,
    ACTIONS(1049), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19937] = 2,
    ACTIONS(1051), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19946] = 2,
    ACTIONS(1053), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19955] = 2,
    ACTIONS(1055), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19964] = 2,
    ACTIONS(1057), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19973] = 2,
    ACTIONS(428), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19982] = 2,
    ACTIONS(1059), 1,
      anon_sym_in,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [19991] = 2,
    ACTIONS(962), 1,
      anon_sym_in,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20000] = 2,
    ACTIONS(1061), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20009] = 2,
    ACTIONS(1063), 1,
      anon_sym_in,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20018] = 2,
    ACTIONS(1065), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20027] = 2,
    ACTIONS(1067), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20036] = 2,
    ACTIONS(1069), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20045] = 2,
    ACTIONS(1071), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20054] = 2,
    ACTIONS(1073), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20063] = 2,
    ACTIONS(1075), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20072] = 2,
    ACTIONS(306), 1,
      anon_sym_EQ,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20081] = 2,
    ACTIONS(1077), 1,
      anon_sym_in,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20090] = 2,
    ACTIONS(1079), 1,
      anon_sym_in,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20099] = 2,
    ACTIONS(969), 1,
      anon_sym_EQ,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
  [20108] = 2,
    ACTIONS(350), 1,
      anon_sym_EQ,
    ACTIONS(3), 3,
      sym_block_comment,
      sym__whitespace,
      sym_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 105,
  [SMALL_STATE(4)] = 210,
  [SMALL_STATE(5)] = 315,
  [SMALL_STATE(6)] = 420,
  [SMALL_STATE(7)] = 525,
  [SMALL_STATE(8)] = 630,
  [SMALL_STATE(9)] = 735,
  [SMALL_STATE(10)] = 840,
  [SMALL_STATE(11)] = 945,
  [SMALL_STATE(12)] = 1050,
  [SMALL_STATE(13)] = 1152,
  [SMALL_STATE(14)] = 1254,
  [SMALL_STATE(15)] = 1352,
  [SMALL_STATE(16)] = 1450,
  [SMALL_STATE(17)] = 1518,
  [SMALL_STATE(18)] = 1586,
  [SMALL_STATE(19)] = 1655,
  [SMALL_STATE(20)] = 1713,
  [SMALL_STATE(21)] = 1771,
  [SMALL_STATE(22)] = 1828,
  [SMALL_STATE(23)] = 1887,
  [SMALL_STATE(24)] = 1946,
  [SMALL_STATE(25)] = 1999,
  [SMALL_STATE(26)] = 2052,
  [SMALL_STATE(27)] = 2105,
  [SMALL_STATE(28)] = 2158,
  [SMALL_STATE(29)] = 2242,
  [SMALL_STATE(30)] = 2326,
  [SMALL_STATE(31)] = 2410,
  [SMALL_STATE(32)] = 2494,
  [SMALL_STATE(33)] = 2541,
  [SMALL_STATE(34)] = 2594,
  [SMALL_STATE(35)] = 2641,
  [SMALL_STATE(36)] = 2688,
  [SMALL_STATE(37)] = 2735,
  [SMALL_STATE(38)] = 2816,
  [SMALL_STATE(39)] = 2867,
  [SMALL_STATE(40)] = 2914,
  [SMALL_STATE(41)] = 2967,
  [SMALL_STATE(42)] = 3014,
  [SMALL_STATE(43)] = 3061,
  [SMALL_STATE(44)] = 3142,
  [SMALL_STATE(45)] = 3223,
  [SMALL_STATE(46)] = 3270,
  [SMALL_STATE(47)] = 3317,
  [SMALL_STATE(48)] = 3368,
  [SMALL_STATE(49)] = 3419,
  [SMALL_STATE(50)] = 3466,
  [SMALL_STATE(51)] = 3517,
  [SMALL_STATE(52)] = 3568,
  [SMALL_STATE(53)] = 3619,
  [SMALL_STATE(54)] = 3672,
  [SMALL_STATE(55)] = 3753,
  [SMALL_STATE(56)] = 3804,
  [SMALL_STATE(57)] = 3857,
  [SMALL_STATE(58)] = 3938,
  [SMALL_STATE(59)] = 3985,
  [SMALL_STATE(60)] = 4032,
  [SMALL_STATE(61)] = 4083,
  [SMALL_STATE(62)] = 4134,
  [SMALL_STATE(63)] = 4191,
  [SMALL_STATE(64)] = 4242,
  [SMALL_STATE(65)] = 4288,
  [SMALL_STATE(66)] = 4334,
  [SMALL_STATE(67)] = 4386,
  [SMALL_STATE(68)] = 4432,
  [SMALL_STATE(69)] = 4482,
  [SMALL_STATE(70)] = 4528,
  [SMALL_STATE(71)] = 4606,
  [SMALL_STATE(72)] = 4652,
  [SMALL_STATE(73)] = 4730,
  [SMALL_STATE(74)] = 4808,
  [SMALL_STATE(75)] = 4858,
  [SMALL_STATE(76)] = 4904,
  [SMALL_STATE(77)] = 4982,
  [SMALL_STATE(78)] = 5031,
  [SMALL_STATE(79)] = 5106,
  [SMALL_STATE(80)] = 5181,
  [SMALL_STATE(81)] = 5230,
  [SMALL_STATE(82)] = 5279,
  [SMALL_STATE(83)] = 5328,
  [SMALL_STATE(84)] = 5374,
  [SMALL_STATE(85)] = 5420,
  [SMALL_STATE(86)] = 5477,
  [SMALL_STATE(87)] = 5524,
  [SMALL_STATE(88)] = 5579,
  [SMALL_STATE(89)] = 5628,
  [SMALL_STATE(90)] = 5675,
  [SMALL_STATE(91)] = 5734,
  [SMALL_STATE(92)] = 5777,
  [SMALL_STATE(93)] = 5820,
  [SMALL_STATE(94)] = 5863,
  [SMALL_STATE(95)] = 5922,
  [SMALL_STATE(96)] = 5981,
  [SMALL_STATE(97)] = 6024,
  [SMALL_STATE(98)] = 6067,
  [SMALL_STATE(99)] = 6110,
  [SMALL_STATE(100)] = 6153,
  [SMALL_STATE(101)] = 6196,
  [SMALL_STATE(102)] = 6239,
  [SMALL_STATE(103)] = 6282,
  [SMALL_STATE(104)] = 6353,
  [SMALL_STATE(105)] = 6396,
  [SMALL_STATE(106)] = 6455,
  [SMALL_STATE(107)] = 6498,
  [SMALL_STATE(108)] = 6547,
  [SMALL_STATE(109)] = 6606,
  [SMALL_STATE(110)] = 6661,
  [SMALL_STATE(111)] = 6704,
  [SMALL_STATE(112)] = 6747,
  [SMALL_STATE(113)] = 6790,
  [SMALL_STATE(114)] = 6833,
  [SMALL_STATE(115)] = 6876,
  [SMALL_STATE(116)] = 6935,
  [SMALL_STATE(117)] = 6978,
  [SMALL_STATE(118)] = 7025,
  [SMALL_STATE(119)] = 7074,
  [SMALL_STATE(120)] = 7117,
  [SMALL_STATE(121)] = 7172,
  [SMALL_STATE(122)] = 7215,
  [SMALL_STATE(123)] = 7258,
  [SMALL_STATE(124)] = 7301,
  [SMALL_STATE(125)] = 7344,
  [SMALL_STATE(126)] = 7415,
  [SMALL_STATE(127)] = 7458,
  [SMALL_STATE(128)] = 7517,
  [SMALL_STATE(129)] = 7588,
  [SMALL_STATE(130)] = 7645,
  [SMALL_STATE(131)] = 7704,
  [SMALL_STATE(132)] = 7747,
  [SMALL_STATE(133)] = 7790,
  [SMALL_STATE(134)] = 7833,
  [SMALL_STATE(135)] = 7876,
  [SMALL_STATE(136)] = 7919,
  [SMALL_STATE(137)] = 7962,
  [SMALL_STATE(138)] = 8011,
  [SMALL_STATE(139)] = 8054,
  [SMALL_STATE(140)] = 8097,
  [SMALL_STATE(141)] = 8144,
  [SMALL_STATE(142)] = 8203,
  [SMALL_STATE(143)] = 8246,
  [SMALL_STATE(144)] = 8289,
  [SMALL_STATE(145)] = 8332,
  [SMALL_STATE(146)] = 8391,
  [SMALL_STATE(147)] = 8434,
  [SMALL_STATE(148)] = 8477,
  [SMALL_STATE(149)] = 8520,
  [SMALL_STATE(150)] = 8565,
  [SMALL_STATE(151)] = 8620,
  [SMALL_STATE(152)] = 8663,
  [SMALL_STATE(153)] = 8706,
  [SMALL_STATE(154)] = 8748,
  [SMALL_STATE(155)] = 8816,
  [SMALL_STATE(156)] = 8884,
  [SMALL_STATE(157)] = 8952,
  [SMALL_STATE(158)] = 8994,
  [SMALL_STATE(159)] = 9062,
  [SMALL_STATE(160)] = 9120,
  [SMALL_STATE(161)] = 9188,
  [SMALL_STATE(162)] = 9256,
  [SMALL_STATE(163)] = 9324,
  [SMALL_STATE(164)] = 9392,
  [SMALL_STATE(165)] = 9460,
  [SMALL_STATE(166)] = 9528,
  [SMALL_STATE(167)] = 9596,
  [SMALL_STATE(168)] = 9664,
  [SMALL_STATE(169)] = 9706,
  [SMALL_STATE(170)] = 9748,
  [SMALL_STATE(171)] = 9790,
  [SMALL_STATE(172)] = 9832,
  [SMALL_STATE(173)] = 9874,
  [SMALL_STATE(174)] = 9916,
  [SMALL_STATE(175)] = 9970,
  [SMALL_STATE(176)] = 10038,
  [SMALL_STATE(177)] = 10106,
  [SMALL_STATE(178)] = 10174,
  [SMALL_STATE(179)] = 10242,
  [SMALL_STATE(180)] = 10310,
  [SMALL_STATE(181)] = 10378,
  [SMALL_STATE(182)] = 10446,
  [SMALL_STATE(183)] = 10504,
  [SMALL_STATE(184)] = 10572,
  [SMALL_STATE(185)] = 10640,
  [SMALL_STATE(186)] = 10708,
  [SMALL_STATE(187)] = 10766,
  [SMALL_STATE(188)] = 10808,
  [SMALL_STATE(189)] = 10876,
  [SMALL_STATE(190)] = 10918,
  [SMALL_STATE(191)] = 10960,
  [SMALL_STATE(192)] = 11028,
  [SMALL_STATE(193)] = 11070,
  [SMALL_STATE(194)] = 11138,
  [SMALL_STATE(195)] = 11206,
  [SMALL_STATE(196)] = 11274,
  [SMALL_STATE(197)] = 11316,
  [SMALL_STATE(198)] = 11374,
  [SMALL_STATE(199)] = 11416,
  [SMALL_STATE(200)] = 11462,
  [SMALL_STATE(201)] = 11510,
  [SMALL_STATE(202)] = 11578,
  [SMALL_STATE(203)] = 11632,
  [SMALL_STATE(204)] = 11688,
  [SMALL_STATE(205)] = 11730,
  [SMALL_STATE(206)] = 11798,
  [SMALL_STATE(207)] = 11866,
  [SMALL_STATE(208)] = 11924,
  [SMALL_STATE(209)] = 11992,
  [SMALL_STATE(210)] = 12040,
  [SMALL_STATE(211)] = 12108,
  [SMALL_STATE(212)] = 12176,
  [SMALL_STATE(213)] = 12244,
  [SMALL_STATE(214)] = 12312,
  [SMALL_STATE(215)] = 12380,
  [SMALL_STATE(216)] = 12422,
  [SMALL_STATE(217)] = 12490,
  [SMALL_STATE(218)] = 12558,
  [SMALL_STATE(219)] = 12626,
  [SMALL_STATE(220)] = 12694,
  [SMALL_STATE(221)] = 12762,
  [SMALL_STATE(222)] = 12830,
  [SMALL_STATE(223)] = 12898,
  [SMALL_STATE(224)] = 12966,
  [SMALL_STATE(225)] = 13034,
  [SMALL_STATE(226)] = 13102,
  [SMALL_STATE(227)] = 13170,
  [SMALL_STATE(228)] = 13238,
  [SMALL_STATE(229)] = 13306,
  [SMALL_STATE(230)] = 13374,
  [SMALL_STATE(231)] = 13442,
  [SMALL_STATE(232)] = 13510,
  [SMALL_STATE(233)] = 13578,
  [SMALL_STATE(234)] = 13646,
  [SMALL_STATE(235)] = 13714,
  [SMALL_STATE(236)] = 13765,
  [SMALL_STATE(237)] = 13816,
  [SMALL_STATE(238)] = 13867,
  [SMALL_STATE(239)] = 13918,
  [SMALL_STATE(240)] = 13969,
  [SMALL_STATE(241)] = 14020,
  [SMALL_STATE(242)] = 14071,
  [SMALL_STATE(243)] = 14122,
  [SMALL_STATE(244)] = 14173,
  [SMALL_STATE(245)] = 14224,
  [SMALL_STATE(246)] = 14275,
  [SMALL_STATE(247)] = 14326,
  [SMALL_STATE(248)] = 14377,
  [SMALL_STATE(249)] = 14428,
  [SMALL_STATE(250)] = 14479,
  [SMALL_STATE(251)] = 14530,
  [SMALL_STATE(252)] = 14581,
  [SMALL_STATE(253)] = 14632,
  [SMALL_STATE(254)] = 14683,
  [SMALL_STATE(255)] = 14734,
  [SMALL_STATE(256)] = 14785,
  [SMALL_STATE(257)] = 14836,
  [SMALL_STATE(258)] = 14887,
  [SMALL_STATE(259)] = 14954,
  [SMALL_STATE(260)] = 15010,
  [SMALL_STATE(261)] = 15069,
  [SMALL_STATE(262)] = 15128,
  [SMALL_STATE(263)] = 15169,
  [SMALL_STATE(264)] = 15209,
  [SMALL_STATE(265)] = 15249,
  [SMALL_STATE(266)] = 15290,
  [SMALL_STATE(267)] = 15325,
  [SMALL_STATE(268)] = 15360,
  [SMALL_STATE(269)] = 15395,
  [SMALL_STATE(270)] = 15430,
  [SMALL_STATE(271)] = 15465,
  [SMALL_STATE(272)] = 15500,
  [SMALL_STATE(273)] = 15535,
  [SMALL_STATE(274)] = 15576,
  [SMALL_STATE(275)] = 15611,
  [SMALL_STATE(276)] = 15645,
  [SMALL_STATE(277)] = 15679,
  [SMALL_STATE(278)] = 15713,
  [SMALL_STATE(279)] = 15747,
  [SMALL_STATE(280)] = 15781,
  [SMALL_STATE(281)] = 15819,
  [SMALL_STATE(282)] = 15853,
  [SMALL_STATE(283)] = 15887,
  [SMALL_STATE(284)] = 15921,
  [SMALL_STATE(285)] = 15955,
  [SMALL_STATE(286)] = 15989,
  [SMALL_STATE(287)] = 16023,
  [SMALL_STATE(288)] = 16057,
  [SMALL_STATE(289)] = 16091,
  [SMALL_STATE(290)] = 16125,
  [SMALL_STATE(291)] = 16159,
  [SMALL_STATE(292)] = 16193,
  [SMALL_STATE(293)] = 16227,
  [SMALL_STATE(294)] = 16271,
  [SMALL_STATE(295)] = 16305,
  [SMALL_STATE(296)] = 16339,
  [SMALL_STATE(297)] = 16377,
  [SMALL_STATE(298)] = 16411,
  [SMALL_STATE(299)] = 16445,
  [SMALL_STATE(300)] = 16479,
  [SMALL_STATE(301)] = 16513,
  [SMALL_STATE(302)] = 16547,
  [SMALL_STATE(303)] = 16581,
  [SMALL_STATE(304)] = 16615,
  [SMALL_STATE(305)] = 16652,
  [SMALL_STATE(306)] = 16684,
  [SMALL_STATE(307)] = 16716,
  [SMALL_STATE(308)] = 16748,
  [SMALL_STATE(309)] = 16780,
  [SMALL_STATE(310)] = 16812,
  [SMALL_STATE(311)] = 16844,
  [SMALL_STATE(312)] = 16876,
  [SMALL_STATE(313)] = 16912,
  [SMALL_STATE(314)] = 16950,
  [SMALL_STATE(315)] = 16986,
  [SMALL_STATE(316)] = 17018,
  [SMALL_STATE(317)] = 17050,
  [SMALL_STATE(318)] = 17082,
  [SMALL_STATE(319)] = 17113,
  [SMALL_STATE(320)] = 17144,
  [SMALL_STATE(321)] = 17175,
  [SMALL_STATE(322)] = 17206,
  [SMALL_STATE(323)] = 17239,
  [SMALL_STATE(324)] = 17270,
  [SMALL_STATE(325)] = 17301,
  [SMALL_STATE(326)] = 17332,
  [SMALL_STATE(327)] = 17363,
  [SMALL_STATE(328)] = 17394,
  [SMALL_STATE(329)] = 17425,
  [SMALL_STATE(330)] = 17455,
  [SMALL_STATE(331)] = 17486,
  [SMALL_STATE(332)] = 17524,
  [SMALL_STATE(333)] = 17552,
  [SMALL_STATE(334)] = 17580,
  [SMALL_STATE(335)] = 17608,
  [SMALL_STATE(336)] = 17646,
  [SMALL_STATE(337)] = 17674,
  [SMALL_STATE(338)] = 17702,
  [SMALL_STATE(339)] = 17736,
  [SMALL_STATE(340)] = 17782,
  [SMALL_STATE(341)] = 17810,
  [SMALL_STATE(342)] = 17838,
  [SMALL_STATE(343)] = 17884,
  [SMALL_STATE(344)] = 17912,
  [SMALL_STATE(345)] = 17958,
  [SMALL_STATE(346)] = 18000,
  [SMALL_STATE(347)] = 18046,
  [SMALL_STATE(348)] = 18092,
  [SMALL_STATE(349)] = 18138,
  [SMALL_STATE(350)] = 18184,
  [SMALL_STATE(351)] = 18226,
  [SMALL_STATE(352)] = 18254,
  [SMALL_STATE(353)] = 18282,
  [SMALL_STATE(354)] = 18322,
  [SMALL_STATE(355)] = 18368,
  [SMALL_STATE(356)] = 18414,
  [SMALL_STATE(357)] = 18448,
  [SMALL_STATE(358)] = 18480,
  [SMALL_STATE(359)] = 18508,
  [SMALL_STATE(360)] = 18550,
  [SMALL_STATE(361)] = 18578,
  [SMALL_STATE(362)] = 18606,
  [SMALL_STATE(363)] = 18634,
  [SMALL_STATE(364)] = 18662,
  [SMALL_STATE(365)] = 18690,
  [SMALL_STATE(366)] = 18735,
  [SMALL_STATE(367)] = 18780,
  [SMALL_STATE(368)] = 18825,
  [SMALL_STATE(369)] = 18870,
  [SMALL_STATE(370)] = 18910,
  [SMALL_STATE(371)] = 18950,
  [SMALL_STATE(372)] = 18990,
  [SMALL_STATE(373)] = 19010,
  [SMALL_STATE(374)] = 19030,
  [SMALL_STATE(375)] = 19050,
  [SMALL_STATE(376)] = 19069,
  [SMALL_STATE(377)] = 19088,
  [SMALL_STATE(378)] = 19107,
  [SMALL_STATE(379)] = 19126,
  [SMALL_STATE(380)] = 19145,
  [SMALL_STATE(381)] = 19164,
  [SMALL_STATE(382)] = 19183,
  [SMALL_STATE(383)] = 19202,
  [SMALL_STATE(384)] = 19221,
  [SMALL_STATE(385)] = 19237,
  [SMALL_STATE(386)] = 19253,
  [SMALL_STATE(387)] = 19269,
  [SMALL_STATE(388)] = 19285,
  [SMALL_STATE(389)] = 19301,
  [SMALL_STATE(390)] = 19316,
  [SMALL_STATE(391)] = 19331,
  [SMALL_STATE(392)] = 19346,
  [SMALL_STATE(393)] = 19361,
  [SMALL_STATE(394)] = 19376,
  [SMALL_STATE(395)] = 19391,
  [SMALL_STATE(396)] = 19406,
  [SMALL_STATE(397)] = 19421,
  [SMALL_STATE(398)] = 19436,
  [SMALL_STATE(399)] = 19451,
  [SMALL_STATE(400)] = 19466,
  [SMALL_STATE(401)] = 19481,
  [SMALL_STATE(402)] = 19496,
  [SMALL_STATE(403)] = 19511,
  [SMALL_STATE(404)] = 19526,
  [SMALL_STATE(405)] = 19541,
  [SMALL_STATE(406)] = 19556,
  [SMALL_STATE(407)] = 19571,
  [SMALL_STATE(408)] = 19586,
  [SMALL_STATE(409)] = 19599,
  [SMALL_STATE(410)] = 19614,
  [SMALL_STATE(411)] = 19629,
  [SMALL_STATE(412)] = 19641,
  [SMALL_STATE(413)] = 19651,
  [SMALL_STATE(414)] = 19663,
  [SMALL_STATE(415)] = 19673,
  [SMALL_STATE(416)] = 19683,
  [SMALL_STATE(417)] = 19695,
  [SMALL_STATE(418)] = 19707,
  [SMALL_STATE(419)] = 19717,
  [SMALL_STATE(420)] = 19727,
  [SMALL_STATE(421)] = 19739,
  [SMALL_STATE(422)] = 19748,
  [SMALL_STATE(423)] = 19757,
  [SMALL_STATE(424)] = 19766,
  [SMALL_STATE(425)] = 19775,
  [SMALL_STATE(426)] = 19784,
  [SMALL_STATE(427)] = 19793,
  [SMALL_STATE(428)] = 19802,
  [SMALL_STATE(429)] = 19811,
  [SMALL_STATE(430)] = 19820,
  [SMALL_STATE(431)] = 19829,
  [SMALL_STATE(432)] = 19838,
  [SMALL_STATE(433)] = 19847,
  [SMALL_STATE(434)] = 19856,
  [SMALL_STATE(435)] = 19865,
  [SMALL_STATE(436)] = 19874,
  [SMALL_STATE(437)] = 19883,
  [SMALL_STATE(438)] = 19892,
  [SMALL_STATE(439)] = 19901,
  [SMALL_STATE(440)] = 19910,
  [SMALL_STATE(441)] = 19919,
  [SMALL_STATE(442)] = 19928,
  [SMALL_STATE(443)] = 19937,
  [SMALL_STATE(444)] = 19946,
  [SMALL_STATE(445)] = 19955,
  [SMALL_STATE(446)] = 19964,
  [SMALL_STATE(447)] = 19973,
  [SMALL_STATE(448)] = 19982,
  [SMALL_STATE(449)] = 19991,
  [SMALL_STATE(450)] = 20000,
  [SMALL_STATE(451)] = 20009,
  [SMALL_STATE(452)] = 20018,
  [SMALL_STATE(453)] = 20027,
  [SMALL_STATE(454)] = 20036,
  [SMALL_STATE(455)] = 20045,
  [SMALL_STATE(456)] = 20054,
  [SMALL_STATE(457)] = 20063,
  [SMALL_STATE(458)] = 20072,
  [SMALL_STATE(459)] = 20081,
  [SMALL_STATE(460)] = 20090,
  [SMALL_STATE(461)] = 20099,
  [SMALL_STATE(462)] = 20108,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(18),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(205),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(9),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(240),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(28),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(321),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(320),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(420),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(188),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(165),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(401),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(187),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(215),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(21),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(21),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(382),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(156),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statements, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1, .production_id = 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1, .production_id = 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unnamed_arguments, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 1),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 1),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 2),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 2),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 3),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 2),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 12),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 12),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 12),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 12),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 6),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 6),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 3),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 2),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unnamed_arguments, 3),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_operator, 3, .production_id = 7),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_operator, 3, .production_id = 7),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__code_block, 2),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__code_block, 2),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 3, .production_id = 7),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 3, .production_id = 7),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 3, .production_id = 7),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 3, .production_id = 7),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_augmented_assignment, 3, .production_id = 7),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_augmented_assignment, 3, .production_id = 7),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 3),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 3),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 4, .production_id = 14),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 4, .production_id = 14),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unnamed_function, 3, .production_id = 11),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unnamed_function, 3, .production_id = 11),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array, 2),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 4, .production_id = 16),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 4, .production_id = 16),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 5),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 5),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_operator, 2, .production_id = 4),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_operator, 2, .production_id = 4),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric, 2),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 2),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 1),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 2),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 2),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operator, 2, .production_id = 3),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operator, 2, .production_id = 3),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_statement, 1),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 1),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array, 3),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content_block, 2),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content_block, 2),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content_block, 3),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content_block, 3),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [596] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(236),
  [599] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(384),
  [602] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(236),
  [605] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(235),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [631] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(241),
  [634] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(388),
  [637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(241),
  [640] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(245),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__weird_edge_case, 1),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter, 1),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 1),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 3, .production_id = 9),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 3, .production_id = 9),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text, 2),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__text, 2),
  [748] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text, 2), SHIFT_REPEAT(265),
  [751] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text, 2), SHIFT_REPEAT(265),
  [754] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text, 2), SHIFT_REPEAT(273),
  [757] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text, 2), SHIFT_REPEAT(273),
  [760] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_expression, 5, .production_id = 17),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_expression, 5, .production_id = 17),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue_statement, 1),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue_statement, 1),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 4, .production_id = 15),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 4, .production_id = 15),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 3),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 3),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2),
  [780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break_statement, 1),
  [784] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_break_statement, 1),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2),
  [788] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_expression, 3, .production_id = 10),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_expression, 3, .production_id = 10),
  [794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [810] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 1),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 1),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__array_repeat1, 2),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [874] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [880] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [886] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(377),
  [889] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(377),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [894] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [900] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2),
  [922] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2), SHIFT_REPEAT(385),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_list, 2),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [943] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_list_repeat1, 2), SHIFT_REPEAT(433),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_list_repeat1, 2),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [964] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unnamed_arguments_repeat1, 2), SHIFT_REPEAT(78),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__unnamed_arguments_repeat1, 2),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 1),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [977] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__array_repeat1, 2), SHIFT_REPEAT(212),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [986] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__weird_edge_case, 2), SHIFT_REPEAT(408),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__weird_edge_case, 2),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__weird_edge_case, 1),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [999] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [1001] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_list, 3),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asssigned_parameter, 3, .production_id = 13),
  [1005] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_list, 2),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unnamed_arguments, 5),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unnamed_arguments, 4),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 2, .production_id = 8),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1053] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
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
