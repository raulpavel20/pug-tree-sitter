#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 353
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 101
#define ALIAS_COUNT 0
#define TOKEN_COUNT 50
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_extends = 1,
  sym_include = 2,
  sym_block = 3,
  anon_sym_doctype = 4,
  anon_sym_DQUOTE = 5,
  aux_sym_string_token1 = 6,
  aux_sym_string_token2 = 7,
  anon_sym_SQUOTE = 8,
  aux_sym_string_token3 = 9,
  sym_number = 10,
  anon_sym_true = 11,
  anon_sym_false = 12,
  sym_null = 13,
  sym_undefined = 14,
  anon_sym_SLASH_SLASH = 15,
  anon_sym_SLASH_SLASH_DASH = 16,
  anon_sym_mixin = 17,
  anon_sym_LPAREN = 18,
  anon_sym_RPAREN = 19,
  aux_sym_mixin_name_token1 = 20,
  anon_sym_COMMA = 21,
  anon_sym_PLUS = 22,
  anon_sym_LBRACK = 23,
  anon_sym_RBRACK = 24,
  anon_sym_LBRACE = 25,
  anon_sym_RBRACE = 26,
  anon_sym_COLON = 27,
  sym_key = 28,
  anon_sym_EQ = 29,
  anon_sym_if = 30,
  anon_sym_elseif = 31,
  anon_sym_else = 32,
  anon_sym_each = 33,
  anon_sym_in = 34,
  aux_sym_loop_variable_token1 = 35,
  sym_condition = 36,
  anon_sym_POUND_LBRACE = 37,
  sym_expression = 38,
  aux_sym_inline_text_token1 = 39,
  sym_reference = 40,
  sym_tag_name = 41,
  sym_class_or_id = 42,
  sym_attribute_name = 43,
  aux_sym_quoted_attribute_value_token1 = 44,
  sym_unquoted_attribute_value = 45,
  sym__space = 46,
  sym__newline = 47,
  sym__indent = 48,
  sym__dedent = 49,
  sym_source_file = 50,
  sym_doctype = 51,
  sym_string = 52,
  sym_boolean = 53,
  sym__js_primitive = 54,
  sym_comment = 55,
  sym_block_expansion = 56,
  sym__extends_statement = 57,
  sym__include_statement = 58,
  sym__block_statement = 59,
  sym_mixin_definition = 60,
  sym_mixin_name = 61,
  sym_mixin_parameters = 62,
  sym_parameter = 63,
  sym_mixin_call = 64,
  sym_arguments = 65,
  sym__argument_choice = 66,
  sym_array = 67,
  sym__array_element = 68,
  sym_object = 69,
  sym_pair = 70,
  sym_tag = 71,
  sym_conditional = 72,
  sym_if_statement = 73,
  sym_else_if_statement = 74,
  sym_else_statement = 75,
  sym_loop = 76,
  sym_each_statement = 77,
  sym_loop_variable = 78,
  sym_loop_index = 79,
  sym_loop_source = 80,
  sym_interpolation = 81,
  sym_inline_text = 82,
  sym_attributes = 83,
  sym_attribute = 84,
  sym_quoted_attribute_value = 85,
  sym_children = 86,
  sym__children_choice = 87,
  aux_sym_source_file_repeat1 = 88,
  aux_sym_string_repeat1 = 89,
  aux_sym_string_repeat2 = 90,
  aux_sym_mixin_parameters_repeat1 = 91,
  aux_sym_arguments_repeat1 = 92,
  aux_sym_array_repeat1 = 93,
  aux_sym_object_repeat1 = 94,
  aux_sym_tag_repeat1 = 95,
  aux_sym_conditional_repeat1 = 96,
  aux_sym_inline_text_repeat1 = 97,
  aux_sym_attributes_repeat1 = 98,
  aux_sym_quoted_attribute_value_repeat1 = 99,
  aux_sym_children_repeat1 = 100,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_extends] = "extends",
  [sym_include] = "include",
  [sym_block] = "block",
  [anon_sym_doctype] = "doctype",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token3] = "string_token3",
  [sym_number] = "number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_null] = "null",
  [sym_undefined] = "undefined",
  [anon_sym_SLASH_SLASH] = "//",
  [anon_sym_SLASH_SLASH_DASH] = "//-",
  [anon_sym_mixin] = "mixin",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_mixin_name_token1] = "mixin_name_token1",
  [anon_sym_COMMA] = ",",
  [anon_sym_PLUS] = "+",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [sym_key] = "key",
  [anon_sym_EQ] = "=",
  [anon_sym_if] = "if",
  [anon_sym_elseif] = "else if",
  [anon_sym_else] = "else",
  [anon_sym_each] = "each",
  [anon_sym_in] = "in",
  [aux_sym_loop_variable_token1] = "loop_variable_token1",
  [sym_condition] = "condition",
  [anon_sym_POUND_LBRACE] = "#{",
  [sym_expression] = "expression",
  [aux_sym_inline_text_token1] = "inline_text_token1",
  [sym_reference] = "reference",
  [sym_tag_name] = "tag_name",
  [sym_class_or_id] = "class_or_id",
  [sym_attribute_name] = "attribute_name",
  [aux_sym_quoted_attribute_value_token1] = "quoted_attribute_value_token1",
  [sym_unquoted_attribute_value] = "unquoted_attribute_value",
  [sym__space] = "_space",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym_source_file] = "source_file",
  [sym_doctype] = "doctype",
  [sym_string] = "string",
  [sym_boolean] = "boolean",
  [sym__js_primitive] = "_js_primitive",
  [sym_comment] = "comment",
  [sym_block_expansion] = "block_expansion",
  [sym__extends_statement] = "_extends_statement",
  [sym__include_statement] = "_include_statement",
  [sym__block_statement] = "_block_statement",
  [sym_mixin_definition] = "mixin_definition",
  [sym_mixin_name] = "mixin_name",
  [sym_mixin_parameters] = "mixin_parameters",
  [sym_parameter] = "parameter",
  [sym_mixin_call] = "mixin_call",
  [sym_arguments] = "arguments",
  [sym__argument_choice] = "_argument_choice",
  [sym_array] = "array",
  [sym__array_element] = "_array_element",
  [sym_object] = "object",
  [sym_pair] = "pair",
  [sym_tag] = "tag",
  [sym_conditional] = "conditional",
  [sym_if_statement] = "if_statement",
  [sym_else_if_statement] = "else_if_statement",
  [sym_else_statement] = "else_statement",
  [sym_loop] = "loop",
  [sym_each_statement] = "each_statement",
  [sym_loop_variable] = "loop_variable",
  [sym_loop_index] = "loop_index",
  [sym_loop_source] = "loop_source",
  [sym_interpolation] = "interpolation",
  [sym_inline_text] = "inline_text",
  [sym_attributes] = "attributes",
  [sym_attribute] = "attribute",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [sym_children] = "children",
  [sym__children_choice] = "_children_choice",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [aux_sym_mixin_parameters_repeat1] = "mixin_parameters_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_tag_repeat1] = "tag_repeat1",
  [aux_sym_conditional_repeat1] = "conditional_repeat1",
  [aux_sym_inline_text_repeat1] = "inline_text_repeat1",
  [aux_sym_attributes_repeat1] = "attributes_repeat1",
  [aux_sym_quoted_attribute_value_repeat1] = "quoted_attribute_value_repeat1",
  [aux_sym_children_repeat1] = "children_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_extends] = sym_extends,
  [sym_include] = sym_include,
  [sym_block] = sym_block,
  [anon_sym_doctype] = anon_sym_doctype,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token3] = aux_sym_string_token3,
  [sym_number] = sym_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_null] = sym_null,
  [sym_undefined] = sym_undefined,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [anon_sym_SLASH_SLASH_DASH] = anon_sym_SLASH_SLASH_DASH,
  [anon_sym_mixin] = anon_sym_mixin,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_mixin_name_token1] = aux_sym_mixin_name_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_key] = sym_key,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_elseif] = anon_sym_elseif,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_each] = anon_sym_each,
  [anon_sym_in] = anon_sym_in,
  [aux_sym_loop_variable_token1] = aux_sym_loop_variable_token1,
  [sym_condition] = sym_condition,
  [anon_sym_POUND_LBRACE] = anon_sym_POUND_LBRACE,
  [sym_expression] = sym_expression,
  [aux_sym_inline_text_token1] = aux_sym_inline_text_token1,
  [sym_reference] = sym_reference,
  [sym_tag_name] = sym_tag_name,
  [sym_class_or_id] = sym_class_or_id,
  [sym_attribute_name] = sym_attribute_name,
  [aux_sym_quoted_attribute_value_token1] = aux_sym_quoted_attribute_value_token1,
  [sym_unquoted_attribute_value] = sym_unquoted_attribute_value,
  [sym__space] = sym__space,
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym_source_file] = sym_source_file,
  [sym_doctype] = sym_doctype,
  [sym_string] = sym_string,
  [sym_boolean] = sym_boolean,
  [sym__js_primitive] = sym__js_primitive,
  [sym_comment] = sym_comment,
  [sym_block_expansion] = sym_block_expansion,
  [sym__extends_statement] = sym__extends_statement,
  [sym__include_statement] = sym__include_statement,
  [sym__block_statement] = sym__block_statement,
  [sym_mixin_definition] = sym_mixin_definition,
  [sym_mixin_name] = sym_mixin_name,
  [sym_mixin_parameters] = sym_mixin_parameters,
  [sym_parameter] = sym_parameter,
  [sym_mixin_call] = sym_mixin_call,
  [sym_arguments] = sym_arguments,
  [sym__argument_choice] = sym__argument_choice,
  [sym_array] = sym_array,
  [sym__array_element] = sym__array_element,
  [sym_object] = sym_object,
  [sym_pair] = sym_pair,
  [sym_tag] = sym_tag,
  [sym_conditional] = sym_conditional,
  [sym_if_statement] = sym_if_statement,
  [sym_else_if_statement] = sym_else_if_statement,
  [sym_else_statement] = sym_else_statement,
  [sym_loop] = sym_loop,
  [sym_each_statement] = sym_each_statement,
  [sym_loop_variable] = sym_loop_variable,
  [sym_loop_index] = sym_loop_index,
  [sym_loop_source] = sym_loop_source,
  [sym_interpolation] = sym_interpolation,
  [sym_inline_text] = sym_inline_text,
  [sym_attributes] = sym_attributes,
  [sym_attribute] = sym_attribute,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [sym_children] = sym_children,
  [sym__children_choice] = sym__children_choice,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
  [aux_sym_mixin_parameters_repeat1] = aux_sym_mixin_parameters_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_tag_repeat1] = aux_sym_tag_repeat1,
  [aux_sym_conditional_repeat1] = aux_sym_conditional_repeat1,
  [aux_sym_inline_text_repeat1] = aux_sym_inline_text_repeat1,
  [aux_sym_attributes_repeat1] = aux_sym_attributes_repeat1,
  [aux_sym_quoted_attribute_value_repeat1] = aux_sym_quoted_attribute_value_repeat1,
  [aux_sym_children_repeat1] = aux_sym_children_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_extends] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_doctype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
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
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_undefined] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mixin] = {
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
  [aux_sym_mixin_name_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elseif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_each] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_loop_variable_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_inline_text_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_class_or_id] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_quoted_attribute_value_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_unquoted_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_doctype] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym__js_primitive] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym__extends_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__include_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__block_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_mixin_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_mixin_name] = {
    .visible = true,
    .named = true,
  },
  [sym_mixin_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_mixin_call] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym__argument_choice] = {
    .visible = false,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym__array_element] = {
    .visible = false,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_else_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_else_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_loop] = {
    .visible = true,
    .named = true,
  },
  [sym_each_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_loop_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_loop_index] = {
    .visible = true,
    .named = true,
  },
  [sym_loop_source] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_text] = {
    .visible = true,
    .named = true,
  },
  [sym_attributes] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_children] = {
    .visible = true,
    .named = true,
  },
  [sym__children_choice] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mixin_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_conditional_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inline_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attributes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_children_repeat1] = {
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
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 4,
  [7] = 7,
  [8] = 8,
  [9] = 4,
  [10] = 4,
  [11] = 5,
  [12] = 12,
  [13] = 7,
  [14] = 14,
  [15] = 15,
  [16] = 8,
  [17] = 17,
  [18] = 8,
  [19] = 19,
  [20] = 7,
  [21] = 21,
  [22] = 12,
  [23] = 15,
  [24] = 24,
  [25] = 14,
  [26] = 26,
  [27] = 17,
  [28] = 15,
  [29] = 14,
  [30] = 30,
  [31] = 14,
  [32] = 32,
  [33] = 33,
  [34] = 19,
  [35] = 12,
  [36] = 15,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 15,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 14,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 17,
  [55] = 55,
  [56] = 21,
  [57] = 57,
  [58] = 26,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 24,
  [65] = 65,
  [66] = 66,
  [67] = 21,
  [68] = 68,
  [69] = 42,
  [70] = 19,
  [71] = 30,
  [72] = 24,
  [73] = 21,
  [74] = 39,
  [75] = 41,
  [76] = 40,
  [77] = 37,
  [78] = 78,
  [79] = 78,
  [80] = 78,
  [81] = 32,
  [82] = 68,
  [83] = 78,
  [84] = 38,
  [85] = 68,
  [86] = 33,
  [87] = 26,
  [88] = 32,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 61,
  [99] = 39,
  [100] = 49,
  [101] = 45,
  [102] = 55,
  [103] = 103,
  [104] = 40,
  [105] = 48,
  [106] = 52,
  [107] = 53,
  [108] = 108,
  [109] = 109,
  [110] = 51,
  [111] = 44,
  [112] = 57,
  [113] = 59,
  [114] = 62,
  [115] = 115,
  [116] = 116,
  [117] = 63,
  [118] = 66,
  [119] = 43,
  [120] = 120,
  [121] = 121,
  [122] = 65,
  [123] = 14,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 15,
  [129] = 129,
  [130] = 60,
  [131] = 37,
  [132] = 132,
  [133] = 133,
  [134] = 47,
  [135] = 21,
  [136] = 136,
  [137] = 137,
  [138] = 42,
  [139] = 33,
  [140] = 61,
  [141] = 45,
  [142] = 48,
  [143] = 143,
  [144] = 57,
  [145] = 127,
  [146] = 47,
  [147] = 147,
  [148] = 59,
  [149] = 149,
  [150] = 150,
  [151] = 63,
  [152] = 124,
  [153] = 132,
  [154] = 65,
  [155] = 49,
  [156] = 52,
  [157] = 92,
  [158] = 44,
  [159] = 103,
  [160] = 115,
  [161] = 161,
  [162] = 116,
  [163] = 91,
  [164] = 66,
  [165] = 97,
  [166] = 126,
  [167] = 95,
  [168] = 129,
  [169] = 89,
  [170] = 62,
  [171] = 133,
  [172] = 55,
  [173] = 108,
  [174] = 53,
  [175] = 109,
  [176] = 137,
  [177] = 177,
  [178] = 178,
  [179] = 90,
  [180] = 21,
  [181] = 96,
  [182] = 136,
  [183] = 60,
  [184] = 125,
  [185] = 137,
  [186] = 43,
  [187] = 51,
  [188] = 94,
  [189] = 121,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 103,
  [196] = 91,
  [197] = 137,
  [198] = 90,
  [199] = 121,
  [200] = 200,
  [201] = 201,
  [202] = 94,
  [203] = 126,
  [204] = 204,
  [205] = 133,
  [206] = 206,
  [207] = 125,
  [208] = 116,
  [209] = 209,
  [210] = 96,
  [211] = 211,
  [212] = 212,
  [213] = 136,
  [214] = 97,
  [215] = 95,
  [216] = 92,
  [217] = 129,
  [218] = 109,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 223,
  [226] = 226,
  [227] = 226,
  [228] = 222,
  [229] = 223,
  [230] = 226,
  [231] = 231,
  [232] = 222,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 235,
  [240] = 240,
  [241] = 240,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 235,
  [246] = 246,
  [247] = 240,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 21,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 283,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 280,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 291,
  [296] = 296,
  [297] = 286,
  [298] = 298,
  [299] = 277,
  [300] = 283,
  [301] = 286,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 303,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 304,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 312,
  [323] = 321,
  [324] = 314,
  [325] = 303,
  [326] = 326,
  [327] = 310,
  [328] = 318,
  [329] = 329,
  [330] = 309,
  [331] = 331,
  [332] = 307,
  [333] = 314,
  [334] = 309,
  [335] = 304,
  [336] = 318,
  [337] = 337,
  [338] = 321,
  [339] = 312,
  [340] = 309,
  [341] = 309,
  [342] = 309,
  [343] = 309,
  [344] = 316,
  [345] = 302,
  [346] = 346,
  [347] = 316,
  [348] = 302,
  [349] = 302,
  [350] = 302,
  [351] = 302,
  [352] = 302,
};

static inline bool sym_expression_character_set_1(int32_t c) {
  return (c < ','
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : c <= '\r')
      : (c <= ' ' || (c >= '(' && c <= ')')))
    : (c <= ',' || (c < '{'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(83);
      if (lookahead == '"') ADVANCE(99);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '\'') ADVANCE(103);
      if (lookahead == '(') ADVANCE(121);
      if (lookahead == ')') ADVANCE(122);
      if (lookahead == '+') ADVANCE(125);
      if (lookahead == ',') ADVANCE(124);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ':') ADVANCE(131);
      if (lookahead == '=') ADVANCE(133);
      if (lookahead == '[') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(69);
      if (lookahead == ']') ADVANCE(128);
      if (lookahead == 'b') ADVANCE(40);
      if (lookahead == 'd') ADVANCE(46);
      if (lookahead == 'e') ADVANCE(15);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 'm') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == 't') ADVANCE(49);
      if (lookahead == 'u') ADVANCE(42);
      if (lookahead == '{') ADVANCE(129);
      if (lookahead == '}') ADVANCE(130);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '#') ADVANCE(59);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(193);
      if (lookahead != 0) ADVANCE(194);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(99);
      if (lookahead == '\\') ADVANCE(69);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\'') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(69);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(105);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(150);
      if (lookahead != 0) ADVANCE(151);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(99);
      if (lookahead == '#') ADVANCE(59);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(261);
      if (lookahead != 0) ADVANCE(262);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(99);
      if (lookahead == '\'') ADVANCE(103);
      if (lookahead == ')') ADVANCE(122);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(66);
      if (lookahead == '[') ADVANCE(127);
      if (lookahead == ']') ADVANCE(128);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == 't') ADVANCE(49);
      if (lookahead == 'u') ADVANCE(42);
      if (lookahead == '{') ADVANCE(129);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(99);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != ')') ADVANCE(263);
      END_STATE();
    case 8:
      if (lookahead == ')') ADVANCE(122);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 9:
      if (lookahead == ')') ADVANCE(122);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 10:
      if (lookahead == '+') ADVANCE(125);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'b') ADVANCE(245);
      if (lookahead == 'e') ADVANCE(227);
      if (lookahead == 'i') ADVANCE(239);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(113);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(16);
      if (lookahead == 'l') ADVANCE(50);
      if (lookahead == 'x') ADVANCE(54);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(32);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(53);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(135);
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 30:
      if (lookahead == 'f') ADVANCE(139);
      END_STATE();
    case 31:
      if (lookahead == 'f') ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == 'h') ADVANCE(144);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 37:
      if (lookahead == 'k') ADVANCE(91);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 48:
      if (lookahead == 'p') ADVANCE(26);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 55:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 56:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 57:
      if (lookahead == 'x') ADVANCE(34);
      END_STATE();
    case 58:
      if (lookahead == 'y') ADVANCE(48);
      END_STATE();
    case 59:
      if (lookahead == '{') ADVANCE(152);
      END_STATE();
    case 60:
      if (lookahead == '{') ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 61:
      if (lookahead == '}') ADVANCE(130);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(61)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 62:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 63:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(63)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 64:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(64)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(153);
      END_STATE();
    case 65:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(65)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 68:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 69:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 70:
      if (eof) ADVANCE(83);
      if (lookahead == '\n') SKIP(70)
      if (lookahead == '#') ADVANCE(59);
      if (lookahead == '+') ADVANCE(126);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == '=') ADVANCE(134);
      if (lookahead == 'b') ADVANCE(176);
      if (lookahead == 'd') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead == 'i') ADVANCE(170);
      if (lookahead == 'm') ADVANCE(172);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0) ADVANCE(194);
      END_STATE();
    case 71:
      if (eof) ADVANCE(83);
      if (lookahead == '\n') SKIP(72)
      if (lookahead == ' ') ADVANCE(264);
      if (lookahead == '#') ADVANCE(59);
      if (lookahead == '+') ADVANCE(126);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == 'b') ADVANCE(176);
      if (lookahead == 'd') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead == 'i') ADVANCE(170);
      if (lookahead == 'm') ADVANCE(172);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0) ADVANCE(194);
      END_STATE();
    case 72:
      if (eof) ADVANCE(83);
      if (lookahead == '\n') SKIP(72)
      if (lookahead == '#') ADVANCE(59);
      if (lookahead == '+') ADVANCE(126);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == 'b') ADVANCE(176);
      if (lookahead == 'd') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead == 'i') ADVANCE(170);
      if (lookahead == 'm') ADVANCE(172);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0) ADVANCE(194);
      END_STATE();
    case 73:
      if (eof) ADVANCE(83);
      if (lookahead == '\n') SKIP(73)
      if (lookahead == '#') ADVANCE(59);
      if (lookahead == '+') ADVANCE(126);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == '=') ADVANCE(134);
      if (lookahead == 'b') ADVANCE(176);
      if (lookahead == 'd') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == 'i') ADVANCE(170);
      if (lookahead == 'm') ADVANCE(172);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0) ADVANCE(194);
      END_STATE();
    case 74:
      if (eof) ADVANCE(83);
      if (lookahead == '\n') SKIP(75)
      if (lookahead == ' ') ADVANCE(264);
      if (lookahead == '#') ADVANCE(59);
      if (lookahead == '+') ADVANCE(126);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == 'b') ADVANCE(176);
      if (lookahead == 'd') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == 'i') ADVANCE(170);
      if (lookahead == 'm') ADVANCE(172);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0) ADVANCE(194);
      END_STATE();
    case 75:
      if (eof) ADVANCE(83);
      if (lookahead == '\n') SKIP(75)
      if (lookahead == '#') ADVANCE(59);
      if (lookahead == '+') ADVANCE(126);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == 'b') ADVANCE(176);
      if (lookahead == 'd') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == 'i') ADVANCE(170);
      if (lookahead == 'm') ADVANCE(172);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0) ADVANCE(194);
      END_STATE();
    case 76:
      if (eof) ADVANCE(83);
      if (lookahead == ' ') ADVANCE(264);
      if (lookahead == '#' ||
          lookahead == '.') ADVANCE(68);
      if (lookahead == '(') ADVANCE(121);
      if (lookahead == '+') ADVANCE(125);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '=') ADVANCE(133);
      if (lookahead == 'b') ADVANCE(245);
      if (lookahead == 'd') ADVANCE(248);
      if (lookahead == 'e') ADVANCE(226);
      if (lookahead == 'i') ADVANCE(238);
      if (lookahead == 'm') ADVANCE(241);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(81)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 77:
      if (eof) ADVANCE(83);
      if (lookahead == ' ') ADVANCE(264);
      if (lookahead == '#' ||
          lookahead == '.') ADVANCE(68);
      if (lookahead == '(') ADVANCE(121);
      if (lookahead == '+') ADVANCE(125);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '=') ADVANCE(133);
      if (lookahead == 'b') ADVANCE(245);
      if (lookahead == 'd') ADVANCE(248);
      if (lookahead == 'e') ADVANCE(225);
      if (lookahead == 'i') ADVANCE(238);
      if (lookahead == 'm') ADVANCE(241);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(82)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 78:
      if (eof) ADVANCE(83);
      if (lookahead == '(') ADVANCE(121);
      if (lookahead == '+') ADVANCE(125);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '=') ADVANCE(133);
      if (lookahead == 'b') ADVANCE(245);
      if (lookahead == 'd') ADVANCE(248);
      if (lookahead == 'e') ADVANCE(226);
      if (lookahead == 'i') ADVANCE(238);
      if (lookahead == 'm') ADVANCE(241);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(78)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 79:
      if (eof) ADVANCE(83);
      if (lookahead == '(') ADVANCE(121);
      if (lookahead == '+') ADVANCE(125);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '=') ADVANCE(133);
      if (lookahead == 'b') ADVANCE(245);
      if (lookahead == 'd') ADVANCE(248);
      if (lookahead == 'e') ADVANCE(225);
      if (lookahead == 'i') ADVANCE(238);
      if (lookahead == 'm') ADVANCE(241);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(79)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 80:
      if (eof) ADVANCE(83);
      if (lookahead == '+') ADVANCE(125);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'b') ADVANCE(211);
      if (lookahead == 'd') ADVANCE(214);
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead == 'i') ADVANCE(205);
      if (lookahead == 'm') ADVANCE(207);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(224);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(80)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 81:
      if (eof) ADVANCE(83);
      if (lookahead == '#' ||
          lookahead == '.') ADVANCE(68);
      if (lookahead == '(') ADVANCE(121);
      if (lookahead == '+') ADVANCE(125);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '=') ADVANCE(133);
      if (lookahead == 'b') ADVANCE(245);
      if (lookahead == 'd') ADVANCE(248);
      if (lookahead == 'e') ADVANCE(226);
      if (lookahead == 'i') ADVANCE(238);
      if (lookahead == 'm') ADVANCE(241);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(81)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 82:
      if (eof) ADVANCE(83);
      if (lookahead == '#' ||
          lookahead == '.') ADVANCE(68);
      if (lookahead == '(') ADVANCE(121);
      if (lookahead == '+') ADVANCE(125);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '=') ADVANCE(133);
      if (lookahead == 'b') ADVANCE(245);
      if (lookahead == 'd') ADVANCE(248);
      if (lookahead == 'e') ADVANCE(225);
      if (lookahead == 'i') ADVANCE(238);
      if (lookahead == 'm') ADVANCE(241);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(82)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_extends);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_extends);
      if (lookahead == '-') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_extends);
      if (lookahead == '-') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_extends);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_include);
      if (lookahead == '-') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_include);
      if (lookahead == '-') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_include);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_block);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_block);
      if (lookahead == '-') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_block);
      if (lookahead == '-') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_block);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_doctype);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(100);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_string_token3);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(104);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(66);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_undefined);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '-') ADVANCE(115);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_mixin);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_mixin);
      if (lookahead == '-') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_mixin);
      if (lookahead == '-') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_mixin);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_mixin_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(192);
      if (lookahead == '-') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '-') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_each);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_each);
      if (lookahead == '-') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_each);
      if (lookahead == '-') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_each);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_loop_variable_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_condition);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(151);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_condition);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_expression);
      if (!sym_expression_character_set_1(lookahead)) ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '+') ADVANCE(126);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == '=') ADVANCE(134);
      if (lookahead == 'b') ADVANCE(176);
      if (lookahead == 'd') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead == 'i') ADVANCE(170);
      if (lookahead == 'm') ADVANCE(172);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '+') ADVANCE(126);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == '=') ADVANCE(134);
      if (lookahead == 'b') ADVANCE(176);
      if (lookahead == 'd') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == 'i') ADVANCE(170);
      if (lookahead == 'm') ADVANCE(172);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '+') ADVANCE(126);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == 'b') ADVANCE(176);
      if (lookahead == 'd') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead == 'i') ADVANCE(170);
      if (lookahead == 'm') ADVANCE(172);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '+') ADVANCE(126);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == 'b') ADVANCE(176);
      if (lookahead == 'd') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == 'i') ADVANCE(170);
      if (lookahead == 'm') ADVANCE(172);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == 'a') ADVANCE(160);
      if (lookahead == 'l') ADVANCE(182);
      if (lookahead == 'x') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == 'a') ADVANCE(160);
      if (lookahead == 'x') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == 'c') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == 'c') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == 'c') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == 'c') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == 'd') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == 'd') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == 'e') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == 'e') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == 'e') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == 'e') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == 'f') ADVANCE(137);
      if (lookahead == 'n') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == 'h') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == 'i') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == 'i') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == 'k') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == 'l') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == 'l') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == 'n') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == 'n') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == 'o') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == 'o') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == 's') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == 's') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == 't') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == 't') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == 'u') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == 'x') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == 'y') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '/') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == 'f') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == 'i') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == 'x') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == 'c') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == 'c') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == 'c') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == 'c') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == 'd') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == 'd') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == 'e') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == 'e') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == 'e') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'n') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == 'h') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == 'i') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == 'i') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == 'k') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == 'l') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == 'l') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == 'n') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == 'n') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == 'o') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == 'o') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == 'p') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == 's') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == 't') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == 't') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == 'u') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == 'x') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == 'y') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'a') ADVANCE(228);
      if (lookahead == 'l') ADVANCE(252);
      if (lookahead == 'x') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'a') ADVANCE(228);
      if (lookahead == 'x') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'a') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'c') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'c') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'c') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'c') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'd') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'd') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'f') ADVANCE(136);
      if (lookahead == 'n') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'f') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'h') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'k') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'l') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'l') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'o') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'o') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'p') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 's') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 's') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 't') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 't') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'u') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'x') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'y') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_class_or_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(262);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_unquoted_attribute_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ')') ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == ' ') ADVANCE(264);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 78},
  [2] = {.lex_state = 78},
  [3] = {.lex_state = 78},
  [4] = {.lex_state = 79, .external_lex_state = 2},
  [5] = {.lex_state = 79, .external_lex_state = 2},
  [6] = {.lex_state = 79, .external_lex_state = 2},
  [7] = {.lex_state = 77, .external_lex_state = 1},
  [8] = {.lex_state = 77, .external_lex_state = 1},
  [9] = {.lex_state = 78, .external_lex_state = 2},
  [10] = {.lex_state = 78, .external_lex_state = 2},
  [11] = {.lex_state = 78, .external_lex_state = 2},
  [12] = {.lex_state = 77, .external_lex_state = 1},
  [13] = {.lex_state = 76, .external_lex_state = 1},
  [14] = {.lex_state = 70, .external_lex_state = 1},
  [15] = {.lex_state = 70, .external_lex_state = 1},
  [16] = {.lex_state = 76, .external_lex_state = 1},
  [17] = {.lex_state = 71, .external_lex_state = 2},
  [18] = {.lex_state = 76, .external_lex_state = 3},
  [19] = {.lex_state = 72, .external_lex_state = 2},
  [20] = {.lex_state = 76, .external_lex_state = 3},
  [21] = {.lex_state = 70, .external_lex_state = 1},
  [22] = {.lex_state = 76, .external_lex_state = 1},
  [23] = {.lex_state = 73, .external_lex_state = 1},
  [24] = {.lex_state = 77, .external_lex_state = 1},
  [25] = {.lex_state = 73, .external_lex_state = 1},
  [26] = {.lex_state = 77, .external_lex_state = 1},
  [27] = {.lex_state = 74, .external_lex_state = 2},
  [28] = {.lex_state = 72, .external_lex_state = 2},
  [29] = {.lex_state = 72, .external_lex_state = 2},
  [30] = {.lex_state = 79, .external_lex_state = 2},
  [31] = {.lex_state = 73, .external_lex_state = 3},
  [32] = {.lex_state = 79, .external_lex_state = 1},
  [33] = {.lex_state = 77, .external_lex_state = 1},
  [34] = {.lex_state = 75, .external_lex_state = 2},
  [35] = {.lex_state = 76, .external_lex_state = 3},
  [36] = {.lex_state = 73, .external_lex_state = 3},
  [37] = {.lex_state = 79, .external_lex_state = 1},
  [38] = {.lex_state = 79, .external_lex_state = 2},
  [39] = {.lex_state = 77, .external_lex_state = 1},
  [40] = {.lex_state = 79, .external_lex_state = 1},
  [41] = {.lex_state = 79, .external_lex_state = 2},
  [42] = {.lex_state = 79, .external_lex_state = 1},
  [43] = {.lex_state = 79, .external_lex_state = 1},
  [44] = {.lex_state = 79, .external_lex_state = 1},
  [45] = {.lex_state = 79, .external_lex_state = 1},
  [46] = {.lex_state = 75, .external_lex_state = 2},
  [47] = {.lex_state = 79, .external_lex_state = 1},
  [48] = {.lex_state = 79, .external_lex_state = 1},
  [49] = {.lex_state = 79, .external_lex_state = 1},
  [50] = {.lex_state = 75, .external_lex_state = 2},
  [51] = {.lex_state = 79, .external_lex_state = 1},
  [52] = {.lex_state = 79, .external_lex_state = 1},
  [53] = {.lex_state = 79, .external_lex_state = 1},
  [54] = {.lex_state = 74},
  [55] = {.lex_state = 79, .external_lex_state = 1},
  [56] = {.lex_state = 73, .external_lex_state = 1},
  [57] = {.lex_state = 79, .external_lex_state = 1},
  [58] = {.lex_state = 76, .external_lex_state = 1},
  [59] = {.lex_state = 79, .external_lex_state = 1},
  [60] = {.lex_state = 79, .external_lex_state = 1},
  [61] = {.lex_state = 79, .external_lex_state = 1},
  [62] = {.lex_state = 79, .external_lex_state = 1},
  [63] = {.lex_state = 79, .external_lex_state = 1},
  [64] = {.lex_state = 76, .external_lex_state = 1},
  [65] = {.lex_state = 79, .external_lex_state = 1},
  [66] = {.lex_state = 79, .external_lex_state = 1},
  [67] = {.lex_state = 72, .external_lex_state = 2},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 78, .external_lex_state = 1},
  [70] = {.lex_state = 75},
  [71] = {.lex_state = 79},
  [72] = {.lex_state = 76, .external_lex_state = 3},
  [73] = {.lex_state = 73, .external_lex_state = 3},
  [74] = {.lex_state = 76, .external_lex_state = 1},
  [75] = {.lex_state = 79},
  [76] = {.lex_state = 78, .external_lex_state = 1},
  [77] = {.lex_state = 78, .external_lex_state = 1},
  [78] = {.lex_state = 10, .external_lex_state = 4},
  [79] = {.lex_state = 10, .external_lex_state = 4},
  [80] = {.lex_state = 10, .external_lex_state = 4},
  [81] = {.lex_state = 78, .external_lex_state = 1},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 10, .external_lex_state = 4},
  [84] = {.lex_state = 79},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 76, .external_lex_state = 1},
  [87] = {.lex_state = 76, .external_lex_state = 3},
  [88] = {.lex_state = 78, .external_lex_state = 3},
  [89] = {.lex_state = 79, .external_lex_state = 2},
  [90] = {.lex_state = 79, .external_lex_state = 2},
  [91] = {.lex_state = 79, .external_lex_state = 2},
  [92] = {.lex_state = 79, .external_lex_state = 2},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 79, .external_lex_state = 2},
  [95] = {.lex_state = 79, .external_lex_state = 2},
  [96] = {.lex_state = 79, .external_lex_state = 2},
  [97] = {.lex_state = 79, .external_lex_state = 2},
  [98] = {.lex_state = 78, .external_lex_state = 1},
  [99] = {.lex_state = 76, .external_lex_state = 3},
  [100] = {.lex_state = 78, .external_lex_state = 1},
  [101] = {.lex_state = 78, .external_lex_state = 1},
  [102] = {.lex_state = 78, .external_lex_state = 1},
  [103] = {.lex_state = 79, .external_lex_state = 2},
  [104] = {.lex_state = 78, .external_lex_state = 3},
  [105] = {.lex_state = 78, .external_lex_state = 1},
  [106] = {.lex_state = 78, .external_lex_state = 1},
  [107] = {.lex_state = 78, .external_lex_state = 1},
  [108] = {.lex_state = 79, .external_lex_state = 2},
  [109] = {.lex_state = 79, .external_lex_state = 2},
  [110] = {.lex_state = 78, .external_lex_state = 1},
  [111] = {.lex_state = 78, .external_lex_state = 1},
  [112] = {.lex_state = 78, .external_lex_state = 1},
  [113] = {.lex_state = 78, .external_lex_state = 1},
  [114] = {.lex_state = 78, .external_lex_state = 1},
  [115] = {.lex_state = 79, .external_lex_state = 2},
  [116] = {.lex_state = 79, .external_lex_state = 2},
  [117] = {.lex_state = 78, .external_lex_state = 1},
  [118] = {.lex_state = 78, .external_lex_state = 1},
  [119] = {.lex_state = 78, .external_lex_state = 1},
  [120] = {.lex_state = 78, .external_lex_state = 3},
  [121] = {.lex_state = 79, .external_lex_state = 2},
  [122] = {.lex_state = 78, .external_lex_state = 1},
  [123] = {.lex_state = 75},
  [124] = {.lex_state = 79, .external_lex_state = 2},
  [125] = {.lex_state = 79, .external_lex_state = 2},
  [126] = {.lex_state = 79, .external_lex_state = 2},
  [127] = {.lex_state = 79, .external_lex_state = 2},
  [128] = {.lex_state = 75},
  [129] = {.lex_state = 79, .external_lex_state = 2},
  [130] = {.lex_state = 78, .external_lex_state = 1},
  [131] = {.lex_state = 78, .external_lex_state = 3},
  [132] = {.lex_state = 79, .external_lex_state = 2},
  [133] = {.lex_state = 79, .external_lex_state = 2},
  [134] = {.lex_state = 78, .external_lex_state = 1},
  [135] = {.lex_state = 75, .external_lex_state = 2},
  [136] = {.lex_state = 79, .external_lex_state = 2},
  [137] = {.lex_state = 79, .external_lex_state = 2},
  [138] = {.lex_state = 78, .external_lex_state = 3},
  [139] = {.lex_state = 76, .external_lex_state = 3},
  [140] = {.lex_state = 78, .external_lex_state = 3},
  [141] = {.lex_state = 78, .external_lex_state = 3},
  [142] = {.lex_state = 78, .external_lex_state = 3},
  [143] = {.lex_state = 6},
  [144] = {.lex_state = 78, .external_lex_state = 3},
  [145] = {.lex_state = 79, .external_lex_state = 4},
  [146] = {.lex_state = 78, .external_lex_state = 3},
  [147] = {.lex_state = 6},
  [148] = {.lex_state = 78, .external_lex_state = 3},
  [149] = {.lex_state = 78, .external_lex_state = 3},
  [150] = {.lex_state = 78, .external_lex_state = 3},
  [151] = {.lex_state = 78, .external_lex_state = 3},
  [152] = {.lex_state = 79, .external_lex_state = 4},
  [153] = {.lex_state = 79, .external_lex_state = 4},
  [154] = {.lex_state = 78, .external_lex_state = 3},
  [155] = {.lex_state = 78, .external_lex_state = 5},
  [156] = {.lex_state = 78, .external_lex_state = 5},
  [157] = {.lex_state = 78, .external_lex_state = 2},
  [158] = {.lex_state = 78, .external_lex_state = 5},
  [159] = {.lex_state = 78, .external_lex_state = 2},
  [160] = {.lex_state = 79},
  [161] = {.lex_state = 78, .external_lex_state = 5},
  [162] = {.lex_state = 78, .external_lex_state = 2},
  [163] = {.lex_state = 78, .external_lex_state = 2},
  [164] = {.lex_state = 78, .external_lex_state = 5},
  [165] = {.lex_state = 78, .external_lex_state = 2},
  [166] = {.lex_state = 78, .external_lex_state = 2},
  [167] = {.lex_state = 78, .external_lex_state = 2},
  [168] = {.lex_state = 78, .external_lex_state = 2},
  [169] = {.lex_state = 79},
  [170] = {.lex_state = 78, .external_lex_state = 5},
  [171] = {.lex_state = 78, .external_lex_state = 2},
  [172] = {.lex_state = 78, .external_lex_state = 5},
  [173] = {.lex_state = 79},
  [174] = {.lex_state = 78, .external_lex_state = 5},
  [175] = {.lex_state = 78, .external_lex_state = 2},
  [176] = {.lex_state = 79},
  [177] = {.lex_state = 78, .external_lex_state = 5},
  [178] = {.lex_state = 78, .external_lex_state = 5},
  [179] = {.lex_state = 78, .external_lex_state = 2},
  [180] = {.lex_state = 75},
  [181] = {.lex_state = 78, .external_lex_state = 2},
  [182] = {.lex_state = 78, .external_lex_state = 2},
  [183] = {.lex_state = 78, .external_lex_state = 5},
  [184] = {.lex_state = 78, .external_lex_state = 2},
  [185] = {.lex_state = 78, .external_lex_state = 2},
  [186] = {.lex_state = 78, .external_lex_state = 5},
  [187] = {.lex_state = 78, .external_lex_state = 5},
  [188] = {.lex_state = 78, .external_lex_state = 2},
  [189] = {.lex_state = 78, .external_lex_state = 2},
  [190] = {.lex_state = 78, .external_lex_state = 4},
  [191] = {.lex_state = 78, .external_lex_state = 4},
  [192] = {.lex_state = 80},
  [193] = {.lex_state = 78},
  [194] = {.lex_state = 78},
  [195] = {.lex_state = 78},
  [196] = {.lex_state = 78},
  [197] = {.lex_state = 78},
  [198] = {.lex_state = 78},
  [199] = {.lex_state = 78},
  [200] = {.lex_state = 78},
  [201] = {.lex_state = 78},
  [202] = {.lex_state = 78},
  [203] = {.lex_state = 78},
  [204] = {.lex_state = 78},
  [205] = {.lex_state = 78},
  [206] = {.lex_state = 78},
  [207] = {.lex_state = 78},
  [208] = {.lex_state = 78},
  [209] = {.lex_state = 78},
  [210] = {.lex_state = 78},
  [211] = {.lex_state = 78},
  [212] = {.lex_state = 78},
  [213] = {.lex_state = 78},
  [214] = {.lex_state = 78},
  [215] = {.lex_state = 78},
  [216] = {.lex_state = 78},
  [217] = {.lex_state = 78},
  [218] = {.lex_state = 78},
  [219] = {.lex_state = 78},
  [220] = {.lex_state = 6},
  [221] = {.lex_state = 5},
  [222] = {.lex_state = 1},
  [223] = {.lex_state = 1},
  [224] = {.lex_state = 5},
  [225] = {.lex_state = 1},
  [226] = {.lex_state = 1},
  [227] = {.lex_state = 1},
  [228] = {.lex_state = 1},
  [229] = {.lex_state = 1},
  [230] = {.lex_state = 1},
  [231] = {.lex_state = 5},
  [232] = {.lex_state = 1},
  [233] = {.lex_state = 2},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 8},
  [236] = {.lex_state = 2},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 3},
  [239] = {.lex_state = 8},
  [240] = {.lex_state = 8},
  [241] = {.lex_state = 8},
  [242] = {.lex_state = 8},
  [243] = {.lex_state = 9},
  [244] = {.lex_state = 3},
  [245] = {.lex_state = 8},
  [246] = {.lex_state = 2},
  [247] = {.lex_state = 8},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 3},
  [250] = {.lex_state = 7},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 61},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 5},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 63},
  [272] = {.lex_state = 63},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 8},
  [275] = {.lex_state = 63},
  [276] = {.lex_state = 63},
  [277] = {.lex_state = 0, .external_lex_state = 5},
  [278] = {.lex_state = 9},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0, .external_lex_state = 5},
  [281] = {.lex_state = 0, .external_lex_state = 5},
  [282] = {.lex_state = 61},
  [283] = {.lex_state = 0, .external_lex_state = 5},
  [284] = {.lex_state = 0, .external_lex_state = 5},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 9},
  [287] = {.lex_state = 9},
  [288] = {.lex_state = 0, .external_lex_state = 5},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0, .external_lex_state = 5},
  [292] = {.lex_state = 8},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0, .external_lex_state = 5},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 9},
  [298] = {.lex_state = 8},
  [299] = {.lex_state = 0, .external_lex_state = 5},
  [300] = {.lex_state = 0, .external_lex_state = 5},
  [301] = {.lex_state = 9},
  [302] = {.lex_state = 64},
  [303] = {.lex_state = 64},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 64},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 4},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 4},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 64},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 64},
  [315] = {.lex_state = 0, .external_lex_state = 4},
  [316] = {.lex_state = 0, .external_lex_state = 4},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 64},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 64},
  [322] = {.lex_state = 64},
  [323] = {.lex_state = 64},
  [324] = {.lex_state = 64},
  [325] = {.lex_state = 64},
  [326] = {.lex_state = 0, .external_lex_state = 4},
  [327] = {.lex_state = 4},
  [328] = {.lex_state = 64},
  [329] = {.lex_state = 65},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 65},
  [332] = {.lex_state = 4},
  [333] = {.lex_state = 64},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 64},
  [337] = {.lex_state = 0, .external_lex_state = 4},
  [338] = {.lex_state = 64},
  [339] = {.lex_state = 64},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0, .external_lex_state = 4},
  [345] = {.lex_state = 64},
  [346] = {.lex_state = 65},
  [347] = {.lex_state = 0, .external_lex_state = 4},
  [348] = {.lex_state = 64},
  [349] = {.lex_state = 64},
  [350] = {.lex_state = 64},
  [351] = {.lex_state = 64},
  [352] = {.lex_state = 64},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_extends] = ACTIONS(1),
    [sym_block] = ACTIONS(1),
    [anon_sym_doctype] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_undefined] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH] = ACTIONS(1),
    [anon_sym_mixin] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_elseif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_each] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_POUND_LBRACE] = ACTIONS(1),
    [sym_class_or_id] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(311),
    [sym_doctype] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_block_expansion] = STATE(3),
    [sym__extends_statement] = STATE(206),
    [sym__include_statement] = STATE(206),
    [sym__block_statement] = STATE(206),
    [sym_mixin_definition] = STATE(3),
    [sym_mixin_call] = STATE(3),
    [sym_tag] = STATE(3),
    [sym_conditional] = STATE(3),
    [sym_if_statement] = STATE(71),
    [sym_loop] = STATE(3),
    [sym_each_statement] = STATE(316),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_extends] = ACTIONS(5),
    [sym_include] = ACTIONS(7),
    [sym_block] = ACTIONS(9),
    [anon_sym_doctype] = ACTIONS(11),
    [anon_sym_SLASH_SLASH] = ACTIONS(13),
    [anon_sym_SLASH_SLASH_DASH] = ACTIONS(15),
    [anon_sym_mixin] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_each] = ACTIONS(23),
    [sym_tag_name] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      sym_extends,
    ACTIONS(32), 1,
      sym_include,
    ACTIONS(35), 1,
      sym_block,
    ACTIONS(38), 1,
      anon_sym_doctype,
    ACTIONS(41), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(44), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(47), 1,
      anon_sym_mixin,
    ACTIONS(50), 1,
      anon_sym_PLUS,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(56), 1,
      anon_sym_each,
    ACTIONS(59), 1,
      sym_tag_name,
    STATE(71), 1,
      sym_if_statement,
    STATE(316), 1,
      sym_each_statement,
    STATE(206), 3,
      sym__extends_statement,
      sym__include_statement,
      sym__block_statement,
    STATE(2), 9,
      sym_doctype,
      sym_comment,
      sym_block_expansion,
      sym_mixin_definition,
      sym_mixin_call,
      sym_tag,
      sym_conditional,
      sym_loop,
      aux_sym_source_file_repeat1,
  [59] = 16,
    ACTIONS(5), 1,
      sym_extends,
    ACTIONS(7), 1,
      sym_include,
    ACTIONS(9), 1,
      sym_block,
    ACTIONS(11), 1,
      anon_sym_doctype,
    ACTIONS(13), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(17), 1,
      anon_sym_mixin,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_each,
    ACTIONS(25), 1,
      sym_tag_name,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    STATE(71), 1,
      sym_if_statement,
    STATE(316), 1,
      sym_each_statement,
    STATE(206), 3,
      sym__extends_statement,
      sym__include_statement,
      sym__block_statement,
    STATE(2), 9,
      sym_doctype,
      sym_comment,
      sym_block_expansion,
      sym_mixin_definition,
      sym_mixin_call,
      sym_tag,
      sym_conditional,
      sym_loop,
      aux_sym_source_file_repeat1,
  [118] = 14,
    ACTIONS(23), 1,
      anon_sym_each,
    ACTIONS(68), 1,
      sym_block,
    ACTIONS(70), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(72), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(74), 1,
      anon_sym_PLUS,
    ACTIONS(76), 1,
      anon_sym_if,
    ACTIONS(78), 1,
      sym_tag_name,
    ACTIONS(80), 1,
      sym__newline,
    ACTIONS(82), 1,
      sym__dedent,
    STATE(30), 1,
      sym_if_statement,
    STATE(347), 1,
      sym_each_statement,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(66), 5,
      sym_extends,
      sym_include,
      anon_sym_doctype,
      anon_sym_mixin,
      anon_sym_else,
    STATE(5), 7,
      sym_comment,
      sym_mixin_call,
      sym_tag,
      sym_conditional,
      sym_loop,
      sym__children_choice,
      aux_sym_children_repeat1,
  [172] = 13,
    ACTIONS(88), 1,
      sym_block,
    ACTIONS(91), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(94), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(97), 1,
      anon_sym_PLUS,
    ACTIONS(100), 1,
      anon_sym_if,
    ACTIONS(103), 1,
      anon_sym_each,
    ACTIONS(106), 1,
      sym_tag_name,
    ACTIONS(109), 1,
      sym__newline,
    STATE(30), 1,
      sym_if_statement,
    STATE(347), 1,
      sym_each_statement,
    ACTIONS(84), 3,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(86), 5,
      sym_extends,
      sym_include,
      anon_sym_doctype,
      anon_sym_mixin,
      anon_sym_else,
    STATE(5), 7,
      sym_comment,
      sym_mixin_call,
      sym_tag,
      sym_conditional,
      sym_loop,
      sym__children_choice,
      aux_sym_children_repeat1,
  [224] = 14,
    ACTIONS(23), 1,
      anon_sym_each,
    ACTIONS(68), 1,
      sym_block,
    ACTIONS(70), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(72), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(74), 1,
      anon_sym_PLUS,
    ACTIONS(76), 1,
      anon_sym_if,
    ACTIONS(78), 1,
      sym_tag_name,
    ACTIONS(80), 1,
      sym__newline,
    ACTIONS(112), 1,
      sym__dedent,
    STATE(30), 1,
      sym_if_statement,
    STATE(347), 1,
      sym_each_statement,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(66), 5,
      sym_extends,
      sym_include,
      anon_sym_doctype,
      anon_sym_mixin,
      anon_sym_else,
    STATE(5), 7,
      sym_comment,
      sym_mixin_call,
      sym_tag,
      sym_conditional,
      sym_loop,
      sym__children_choice,
      aux_sym_children_repeat1,
  [278] = 11,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      anon_sym_EQ,
    ACTIONS(122), 1,
      sym_class_or_id,
    ACTIONS(124), 1,
      sym__space,
    ACTIONS(126), 1,
      sym__newline,
    ACTIONS(128), 1,
      sym__indent,
    STATE(12), 1,
      aux_sym_tag_repeat1,
    STATE(24), 1,
      sym_attributes,
    STATE(121), 1,
      sym_children,
    ACTIONS(114), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(116), 13,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_mixin,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [325] = 11,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      sym__indent,
    ACTIONS(134), 1,
      anon_sym_EQ,
    ACTIONS(136), 1,
      sym_class_or_id,
    ACTIONS(138), 1,
      sym__space,
    ACTIONS(140), 1,
      sym__newline,
    STATE(7), 1,
      aux_sym_tag_repeat1,
    STATE(26), 1,
      sym_attributes,
    STATE(94), 1,
      sym_children,
    ACTIONS(130), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(132), 13,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_mixin,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [372] = 14,
    ACTIONS(23), 1,
      anon_sym_each,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 1,
      anon_sym_if,
    ACTIONS(142), 1,
      sym_block,
    ACTIONS(144), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(146), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(148), 1,
      anon_sym_PLUS,
    ACTIONS(150), 1,
      sym_tag_name,
    ACTIONS(152), 1,
      sym__newline,
    ACTIONS(154), 1,
      sym__dedent,
    STATE(30), 1,
      sym_if_statement,
    STATE(344), 1,
      sym_each_statement,
    ACTIONS(66), 4,
      sym_extends,
      sym_include,
      anon_sym_doctype,
      anon_sym_mixin,
    STATE(11), 7,
      sym_comment,
      sym_mixin_call,
      sym_tag,
      sym_conditional,
      sym_loop,
      sym__children_choice,
      aux_sym_children_repeat1,
  [424] = 14,
    ACTIONS(23), 1,
      anon_sym_each,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 1,
      anon_sym_if,
    ACTIONS(142), 1,
      sym_block,
    ACTIONS(144), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(146), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(148), 1,
      anon_sym_PLUS,
    ACTIONS(150), 1,
      sym_tag_name,
    ACTIONS(152), 1,
      sym__newline,
    ACTIONS(156), 1,
      sym__dedent,
    STATE(30), 1,
      sym_if_statement,
    STATE(344), 1,
      sym_each_statement,
    ACTIONS(66), 4,
      sym_extends,
      sym_include,
      anon_sym_doctype,
      anon_sym_mixin,
    STATE(11), 7,
      sym_comment,
      sym_mixin_call,
      sym_tag,
      sym_conditional,
      sym_loop,
      sym__children_choice,
      aux_sym_children_repeat1,
  [476] = 13,
    ACTIONS(100), 1,
      anon_sym_if,
    ACTIONS(103), 1,
      anon_sym_each,
    ACTIONS(158), 1,
      sym_block,
    ACTIONS(161), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(164), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(167), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      sym_tag_name,
    ACTIONS(173), 1,
      sym__newline,
    STATE(30), 1,
      sym_if_statement,
    STATE(344), 1,
      sym_each_statement,
    ACTIONS(84), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(86), 4,
      sym_extends,
      sym_include,
      anon_sym_doctype,
      anon_sym_mixin,
    STATE(11), 7,
      sym_comment,
      sym_mixin_call,
      sym_tag,
      sym_conditional,
      sym_loop,
      sym__children_choice,
      aux_sym_children_repeat1,
  [526] = 4,
    ACTIONS(180), 1,
      sym_class_or_id,
    STATE(12), 1,
      aux_sym_tag_repeat1,
    ACTIONS(176), 5,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
      sym__space,
    ACTIONS(178), 15,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_mixin,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [557] = 11,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_EQ,
    ACTIONS(187), 1,
      sym_class_or_id,
    ACTIONS(189), 1,
      sym__space,
    ACTIONS(191), 1,
      sym__newline,
    ACTIONS(193), 1,
      sym__indent,
    STATE(22), 1,
      aux_sym_tag_repeat1,
    STATE(64), 1,
      sym_attributes,
    STATE(189), 1,
      sym_children,
    ACTIONS(114), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(116), 11,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_mixin,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [602] = 5,
    ACTIONS(199), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(202), 1,
      aux_sym_inline_text_token1,
    STATE(14), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
    ACTIONS(195), 4,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(197), 14,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_mixin,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [635] = 5,
    ACTIONS(209), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(211), 1,
      aux_sym_inline_text_token1,
    STATE(14), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
    ACTIONS(205), 4,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(207), 14,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_mixin,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [668] = 11,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      sym__indent,
    ACTIONS(213), 1,
      anon_sym_EQ,
    ACTIONS(215), 1,
      sym_class_or_id,
    ACTIONS(217), 1,
      sym__space,
    ACTIONS(219), 1,
      sym__newline,
    STATE(13), 1,
      aux_sym_tag_repeat1,
    STATE(58), 1,
      sym_attributes,
    STATE(188), 1,
      sym_children,
    ACTIONS(130), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(132), 11,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_mixin,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [713] = 7,
    ACTIONS(225), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(227), 1,
      aux_sym_inline_text_token1,
    ACTIONS(229), 1,
      sym__space,
    STATE(96), 1,
      sym_inline_text,
    STATE(28), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
    ACTIONS(221), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(223), 13,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_mixin,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [750] = 11,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(233), 1,
      anon_sym_EQ,
    ACTIONS(235), 1,
      sym_class_or_id,
    ACTIONS(237), 1,
      sym__space,
    ACTIONS(239), 1,
      sym__newline,
    ACTIONS(241), 1,
      sym__indent,
    STATE(20), 1,
      aux_sym_tag_repeat1,
    STATE(87), 1,
      sym_attributes,
    STATE(202), 1,
      sym_children,
    ACTIONS(132), 11,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_mixin,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [794] = 6,
    ACTIONS(225), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(227), 1,
      aux_sym_inline_text_token1,
    STATE(91), 1,
      sym_inline_text,
    STATE(28), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
    ACTIONS(243), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(245), 13,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_mixin,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [828] = 11,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(241), 1,
      sym__indent,
    ACTIONS(247), 1,
      anon_sym_EQ,
    ACTIONS(249), 1,
      sym_class_or_id,
    ACTIONS(251), 1,
      sym__space,
    ACTIONS(253), 1,
      sym__newline,
    STATE(35), 1,
      aux_sym_tag_repeat1,
    STATE(72), 1,
      sym_attributes,
    STATE(199), 1,
      sym_children,
    ACTIONS(116), 11,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_mixin,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [872] = 2,
    ACTIONS(255), 4,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(257), 16,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_mixin,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_each,
      anon_sym_POUND_LBRACE,
      aux_sym_inline_text_token1,
      sym_tag_name,
  [897] = 4,
    ACTIONS(259), 1,
      sym_class_or_id,
    STATE(22), 1,
      aux_sym_tag_repeat1,
    ACTIONS(176), 5,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
      sym__space,
    ACTIONS(178), 13,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_mixin,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [926] = 5,
    ACTIONS(262), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(264), 1,
      aux_sym_inline_text_token1,
    STATE(25), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
    ACTIONS(205), 4,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(207), 12,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_mixin,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [957] = 7,
    ACTIONS(128), 1,
      sym__indent,
    ACTIONS(270), 1,
      anon_sym_EQ,
    ACTIONS(272), 1,
      sym__space,
    ACTIONS(274), 1,
      sym__newline,
    STATE(133), 1,
      sym_children,
    ACTIONS(266), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(268), 13,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_mixin,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [992] = 5,
    ACTIONS(276), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(279), 1,
      aux_sym_inline_text_token1,
    STATE(25), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
    ACTIONS(195), 4,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(197), 12,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_mixin,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [1023] = 7,
    ACTIONS(120), 1,
      anon_sym_EQ,
    ACTIONS(124), 1,
      sym__space,
    ACTIONS(126), 1,
      sym__newline,
    ACTIONS(128), 1,
      sym__indent,
    STATE(121), 1,
      sym_children,
    ACTIONS(114), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(116), 13,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_mixin,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [1058] = 7,
    ACTIONS(282), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(284), 1,
      aux_sym_inline_text_token1,
    ACTIONS(286), 1,
      sym__space,
    STATE(181), 1,
      sym_inline_text,
    STATE(46), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
    ACTIONS(221), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(223), 11,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_mixin,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [1093] = 5,
    ACTIONS(225), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(288), 1,
      aux_sym_inline_text_token1,
    STATE(29), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
    ACTIONS(205), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(207), 13,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_mixin,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [1124] = 5,
    ACTIONS(290), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(293), 1,
      aux_sym_inline_text_token1,
    STATE(29), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
    ACTIONS(195), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(197), 13,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_mixin,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [1155] = 5,
    ACTIONS(300), 1,
      anon_sym_elseif,
    ACTIONS(302), 1,
      anon_sym_else,
    STATE(38), 3,
      sym_else_if_statement,
      sym_else_statement,
      aux_sym_conditional_repeat1,
    ACTIONS(296), 5,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(298), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [1185] = 5,
    ACTIONS(304), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(307), 1,
      aux_sym_inline_text_token1,
    STATE(31), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
    ACTIONS(195), 3,
      sym__newline,
      sym__indent,
      ts_builtin_sym_end,
    ACTIONS(197), 12,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_mixin,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [1215] = 6,
    ACTIONS(128), 1,
      sym__indent,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    ACTIONS(316), 1,
      sym__newline,
    STATE(90), 1,
      sym_children,
    ACTIONS(310), 5,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(312), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [1247] = 2,
    ACTIONS(318), 5,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
      sym__space,
    ACTIONS(320), 14,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_mixin,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [1271] = 6,
    ACTIONS(282), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(284), 1,
      aux_sym_inline_text_token1,
    STATE(163), 1,
      sym_inline_text,
    STATE(46), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
    ACTIONS(243), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(245), 11,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_mixin,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [1303] = 4,
    ACTIONS(322), 1,
      sym_class_or_id,
    STATE(35), 1,
      aux_sym_tag_repeat1,
    ACTIONS(176), 4,
      sym__newline,
      sym__indent,
      ts_builtin_sym_end,
      sym__space,
    ACTIONS(178), 13,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_mixin,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [1331] = 5,
    ACTIONS(325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(327), 1,
      aux_sym_inline_text_token1,
    STATE(31), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
    ACTIONS(205), 3,
      sym__newline,
      sym__indent,
      ts_builtin_sym_end,
    ACTIONS(207), 12,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_mixin,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [1361] = 6,
    ACTIONS(128), 1,
      sym__indent,
    ACTIONS(333), 1,
      anon_sym_EQ,
    ACTIONS(335), 1,
      sym__newline,
    STATE(103), 1,
      sym_children,
    ACTIONS(329), 5,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(331), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [1393] = 5,
    ACTIONS(300), 1,
      anon_sym_elseif,
    ACTIONS(302), 1,
      anon_sym_else,
    STATE(41), 3,
      sym_else_if_statement,
      sym_else_statement,
      aux_sym_conditional_repeat1,
    ACTIONS(337), 5,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(339), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [1423] = 2,
    ACTIONS(341), 5,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
      sym__space,
    ACTIONS(343), 14,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_mixin,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [1447] = 6,
    ACTIONS(128), 1,
      sym__indent,
    ACTIONS(349), 1,
      anon_sym_EQ,
    ACTIONS(351), 1,
      sym__newline,
    STATE(126), 1,
      sym_children,
    ACTIONS(345), 5,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(347), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [1479] = 5,
    ACTIONS(357), 1,
      anon_sym_elseif,
    ACTIONS(360), 1,
      anon_sym_else,
    STATE(41), 3,
      sym_else_if_statement,
      sym_else_statement,
      aux_sym_conditional_repeat1,
    ACTIONS(353), 5,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(355), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [1509] = 6,
    ACTIONS(128), 1,
      sym__indent,
    ACTIONS(274), 1,
      sym__newline,
    ACTIONS(363), 1,
      anon_sym_EQ,
    STATE(133), 1,
      sym_children,
    ACTIONS(266), 5,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(268), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [1541] = 4,
    ACTIONS(128), 1,
      sym__indent,
    STATE(133), 1,
      sym_children,
    ACTIONS(266), 6,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(268), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [1568] = 4,
    ACTIONS(128), 1,
      sym__indent,
    STATE(103), 1,
      sym_children,
    ACTIONS(329), 6,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(331), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [1595] = 5,
    ACTIONS(128), 1,
      sym__indent,
    ACTIONS(369), 1,
      sym__newline,
    STATE(95), 1,
      sym_children,
    ACTIONS(365), 5,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(367), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [1624] = 5,
    ACTIONS(282), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(371), 1,
      aux_sym_inline_text_token1,
    STATE(50), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
    ACTIONS(205), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(207), 11,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_mixin,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [1653] = 2,
    ACTIONS(373), 8,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(375), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [1676] = 5,
    ACTIONS(128), 1,
      sym__indent,
    ACTIONS(381), 1,
      sym__newline,
    STATE(109), 1,
      sym_children,
    ACTIONS(377), 5,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(379), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [1705] = 4,
    ACTIONS(128), 1,
      sym__indent,
    STATE(97), 1,
      sym_children,
    ACTIONS(383), 6,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(385), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [1732] = 5,
    ACTIONS(387), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(390), 1,
      aux_sym_inline_text_token1,
    STATE(50), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
    ACTIONS(195), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(197), 11,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_mixin,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [1761] = 4,
    ACTIONS(128), 1,
      sym__indent,
    STATE(136), 1,
      sym_children,
    ACTIONS(393), 6,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(395), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [1788] = 4,
    ACTIONS(128), 1,
      sym__indent,
    STATE(109), 1,
      sym_children,
    ACTIONS(377), 6,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(379), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [1815] = 4,
    ACTIONS(128), 1,
      sym__indent,
    STATE(92), 1,
      sym_children,
    ACTIONS(397), 6,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(399), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [1842] = 7,
    ACTIONS(221), 1,
      ts_builtin_sym_end,
    ACTIONS(401), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(403), 1,
      aux_sym_inline_text_token1,
    ACTIONS(405), 1,
      sym__space,
    STATE(210), 1,
      sym_inline_text,
    STATE(128), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
    ACTIONS(223), 11,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_mixin,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [1875] = 4,
    ACTIONS(128), 1,
      sym__indent,
    STATE(95), 1,
      sym_children,
    ACTIONS(365), 6,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(367), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [1902] = 2,
    ACTIONS(255), 4,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(257), 14,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_mixin,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_each,
      anon_sym_POUND_LBRACE,
      aux_sym_inline_text_token1,
      sym_tag_name,
  [1925] = 5,
    ACTIONS(128), 1,
      sym__indent,
    ACTIONS(335), 1,
      sym__newline,
    STATE(103), 1,
      sym_children,
    ACTIONS(329), 5,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(331), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [1954] = 7,
    ACTIONS(185), 1,
      anon_sym_EQ,
    ACTIONS(189), 1,
      sym__space,
    ACTIONS(191), 1,
      sym__newline,
    ACTIONS(193), 1,
      sym__indent,
    STATE(189), 1,
      sym_children,
    ACTIONS(114), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(116), 11,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_mixin,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [1987] = 5,
    ACTIONS(128), 1,
      sym__indent,
    ACTIONS(411), 1,
      sym__newline,
    STATE(116), 1,
      sym_children,
    ACTIONS(407), 5,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(409), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [2016] = 4,
    ACTIONS(128), 1,
      sym__indent,
    STATE(121), 1,
      sym_children,
    ACTIONS(114), 6,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(116), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [2043] = 5,
    ACTIONS(128), 1,
      sym__indent,
    ACTIONS(274), 1,
      sym__newline,
    STATE(133), 1,
      sym_children,
    ACTIONS(266), 5,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(268), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [2072] = 4,
    ACTIONS(128), 1,
      sym__indent,
    STATE(116), 1,
      sym_children,
    ACTIONS(407), 6,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(409), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [2099] = 5,
    ACTIONS(128), 1,
      sym__indent,
    ACTIONS(351), 1,
      sym__newline,
    STATE(126), 1,
      sym_children,
    ACTIONS(345), 5,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(347), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [2128] = 7,
    ACTIONS(193), 1,
      sym__indent,
    ACTIONS(413), 1,
      anon_sym_EQ,
    ACTIONS(415), 1,
      sym__space,
    ACTIONS(417), 1,
      sym__newline,
    STATE(171), 1,
      sym_children,
    ACTIONS(266), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(268), 11,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_mixin,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2161] = 5,
    ACTIONS(128), 1,
      sym__indent,
    ACTIONS(423), 1,
      sym__newline,
    STATE(129), 1,
      sym_children,
    ACTIONS(419), 5,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(421), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [2190] = 4,
    ACTIONS(128), 1,
      sym__indent,
    STATE(126), 1,
      sym_children,
    ACTIONS(345), 6,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(347), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [2217] = 2,
    ACTIONS(255), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(257), 15,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_mixin,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_each,
      anon_sym_POUND_LBRACE,
      aux_sym_inline_text_token1,
      sym_tag_name,
  [2240] = 9,
    ACTIONS(425), 1,
      anon_sym_DQUOTE,
    ACTIONS(427), 1,
      anon_sym_SQUOTE,
    ACTIONS(433), 1,
      anon_sym_RPAREN,
    ACTIONS(435), 1,
      anon_sym_LBRACK,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    STATE(317), 1,
      sym_arguments,
    ACTIONS(431), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(429), 3,
      sym_number,
      sym_null,
      sym_undefined,
    STATE(257), 6,
      sym_string,
      sym_boolean,
      sym__js_primitive,
      sym__argument_choice,
      sym_array,
      sym_object,
  [2276] = 6,
    ACTIONS(193), 1,
      sym__indent,
    ACTIONS(417), 1,
      sym__newline,
    ACTIONS(439), 1,
      anon_sym_EQ,
    STATE(171), 1,
      sym_children,
    ACTIONS(266), 4,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(268), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2306] = 6,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
    ACTIONS(401), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(403), 1,
      aux_sym_inline_text_token1,
    STATE(196), 1,
      sym_inline_text,
    STATE(128), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
    ACTIONS(245), 11,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_mixin,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2336] = 5,
    ACTIONS(441), 1,
      anon_sym_elseif,
    ACTIONS(443), 1,
      anon_sym_else,
    ACTIONS(296), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    STATE(84), 3,
      sym_else_if_statement,
      sym_else_statement,
      aux_sym_conditional_repeat1,
    ACTIONS(298), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2364] = 7,
    ACTIONS(241), 1,
      sym__indent,
    ACTIONS(266), 1,
      ts_builtin_sym_end,
    ACTIONS(445), 1,
      anon_sym_EQ,
    ACTIONS(447), 1,
      sym__space,
    ACTIONS(449), 1,
      sym__newline,
    STATE(205), 1,
      sym_children,
    ACTIONS(268), 11,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_mixin,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2396] = 2,
    ACTIONS(255), 3,
      sym__newline,
      sym__indent,
      ts_builtin_sym_end,
    ACTIONS(257), 14,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_mixin,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_each,
      anon_sym_POUND_LBRACE,
      aux_sym_inline_text_token1,
      sym_tag_name,
  [2418] = 2,
    ACTIONS(341), 5,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
      sym__space,
    ACTIONS(343), 12,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_mixin,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2440] = 5,
    ACTIONS(451), 1,
      anon_sym_elseif,
    ACTIONS(454), 1,
      anon_sym_else,
    ACTIONS(353), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    STATE(75), 3,
      sym_else_if_statement,
      sym_else_statement,
      aux_sym_conditional_repeat1,
    ACTIONS(355), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2468] = 6,
    ACTIONS(193), 1,
      sym__indent,
    ACTIONS(457), 1,
      anon_sym_EQ,
    ACTIONS(459), 1,
      sym__newline,
    STATE(166), 1,
      sym_children,
    ACTIONS(345), 4,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(347), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2498] = 6,
    ACTIONS(193), 1,
      sym__indent,
    ACTIONS(461), 1,
      anon_sym_EQ,
    ACTIONS(463), 1,
      sym__newline,
    STATE(159), 1,
      sym_children,
    ACTIONS(329), 4,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(331), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2528] = 11,
    ACTIONS(23), 1,
      anon_sym_each,
    ACTIONS(70), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(72), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(74), 1,
      anon_sym_PLUS,
    ACTIONS(76), 1,
      anon_sym_if,
    ACTIONS(78), 1,
      sym_tag_name,
    ACTIONS(465), 1,
      sym_block,
    ACTIONS(467), 1,
      sym__newline,
    STATE(30), 1,
      sym_if_statement,
    STATE(347), 1,
      sym_each_statement,
    STATE(6), 7,
      sym_comment,
      sym_mixin_call,
      sym_tag,
      sym_conditional,
      sym_loop,
      sym__children_choice,
      aux_sym_children_repeat1,
  [2568] = 11,
    ACTIONS(23), 1,
      anon_sym_each,
    ACTIONS(76), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(146), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(148), 1,
      anon_sym_PLUS,
    ACTIONS(150), 1,
      sym_tag_name,
    ACTIONS(469), 1,
      sym_block,
    ACTIONS(471), 1,
      sym__newline,
    STATE(30), 1,
      sym_if_statement,
    STATE(344), 1,
      sym_each_statement,
    STATE(9), 7,
      sym_comment,
      sym_mixin_call,
      sym_tag,
      sym_conditional,
      sym_loop,
      sym__children_choice,
      aux_sym_children_repeat1,
  [2608] = 11,
    ACTIONS(23), 1,
      anon_sym_each,
    ACTIONS(76), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(146), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(148), 1,
      anon_sym_PLUS,
    ACTIONS(150), 1,
      sym_tag_name,
    ACTIONS(473), 1,
      sym_block,
    ACTIONS(475), 1,
      sym__newline,
    STATE(30), 1,
      sym_if_statement,
    STATE(344), 1,
      sym_each_statement,
    STATE(10), 7,
      sym_comment,
      sym_mixin_call,
      sym_tag,
      sym_conditional,
      sym_loop,
      sym__children_choice,
      aux_sym_children_repeat1,
  [2648] = 6,
    ACTIONS(193), 1,
      sym__indent,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(479), 1,
      sym__newline,
    STATE(179), 1,
      sym_children,
    ACTIONS(310), 4,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(312), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2678] = 9,
    ACTIONS(425), 1,
      anon_sym_DQUOTE,
    ACTIONS(427), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_LBRACK,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    ACTIONS(481), 1,
      anon_sym_RPAREN,
    STATE(304), 1,
      sym_arguments,
    ACTIONS(431), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(429), 3,
      sym_number,
      sym_null,
      sym_undefined,
    STATE(257), 6,
      sym_string,
      sym_boolean,
      sym__js_primitive,
      sym__argument_choice,
      sym_array,
      sym_object,
  [2714] = 11,
    ACTIONS(23), 1,
      anon_sym_each,
    ACTIONS(70), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(72), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(74), 1,
      anon_sym_PLUS,
    ACTIONS(76), 1,
      anon_sym_if,
    ACTIONS(78), 1,
      sym_tag_name,
    ACTIONS(483), 1,
      sym_block,
    ACTIONS(485), 1,
      sym__newline,
    STATE(30), 1,
      sym_if_statement,
    STATE(347), 1,
      sym_each_statement,
    STATE(4), 7,
      sym_comment,
      sym_mixin_call,
      sym_tag,
      sym_conditional,
      sym_loop,
      sym__children_choice,
      aux_sym_children_repeat1,
  [2754] = 5,
    ACTIONS(441), 1,
      anon_sym_elseif,
    ACTIONS(443), 1,
      anon_sym_else,
    ACTIONS(337), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    STATE(75), 3,
      sym_else_if_statement,
      sym_else_statement,
      aux_sym_conditional_repeat1,
    ACTIONS(339), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2782] = 9,
    ACTIONS(425), 1,
      anon_sym_DQUOTE,
    ACTIONS(427), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_LBRACK,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    ACTIONS(487), 1,
      anon_sym_RPAREN,
    STATE(335), 1,
      sym_arguments,
    ACTIONS(431), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(429), 3,
      sym_number,
      sym_null,
      sym_undefined,
    STATE(257), 6,
      sym_string,
      sym_boolean,
      sym__js_primitive,
      sym__argument_choice,
      sym_array,
      sym_object,
  [2818] = 2,
    ACTIONS(318), 5,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
      sym__space,
    ACTIONS(320), 12,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_mixin,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2840] = 7,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    ACTIONS(241), 1,
      sym__indent,
    ACTIONS(247), 1,
      anon_sym_EQ,
    ACTIONS(251), 1,
      sym__space,
    ACTIONS(253), 1,
      sym__newline,
    STATE(199), 1,
      sym_children,
    ACTIONS(116), 11,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_mixin,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2872] = 6,
    ACTIONS(241), 1,
      sym__indent,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      sym__newline,
    STATE(198), 1,
      sym_children,
    ACTIONS(310), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(312), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2901] = 2,
    ACTIONS(493), 6,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(495), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [2922] = 2,
    ACTIONS(393), 6,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(395), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [2943] = 2,
    ACTIONS(497), 6,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(499), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [2964] = 2,
    ACTIONS(501), 6,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(503), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [2985] = 8,
    ACTIONS(425), 1,
      anon_sym_DQUOTE,
    ACTIONS(427), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_LBRACK,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    ACTIONS(507), 1,
      anon_sym_RBRACK,
    ACTIONS(431), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(505), 3,
      sym_number,
      sym_null,
      sym_undefined,
    STATE(254), 6,
      sym_string,
      sym_boolean,
      sym__js_primitive,
      sym_array,
      sym__array_element,
      sym_object,
  [3018] = 2,
    ACTIONS(114), 6,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(116), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [3039] = 2,
    ACTIONS(383), 6,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(385), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [3060] = 2,
    ACTIONS(243), 6,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(245), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [3081] = 2,
    ACTIONS(509), 6,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(511), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [3102] = 5,
    ACTIONS(193), 1,
      sym__indent,
    ACTIONS(417), 1,
      sym__newline,
    STATE(171), 1,
      sym_children,
    ACTIONS(266), 4,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(268), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [3129] = 2,
    ACTIONS(341), 4,
      sym__newline,
      sym__indent,
      ts_builtin_sym_end,
      sym__space,
    ACTIONS(343), 12,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_mixin,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [3150] = 4,
    ACTIONS(193), 1,
      sym__indent,
    STATE(165), 1,
      sym_children,
    ACTIONS(383), 5,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(385), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [3175] = 5,
    ACTIONS(193), 1,
      sym__indent,
    ACTIONS(513), 1,
      sym__newline,
    STATE(167), 1,
      sym_children,
    ACTIONS(365), 4,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(367), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [3202] = 4,
    ACTIONS(193), 1,
      sym__indent,
    STATE(167), 1,
      sym_children,
    ACTIONS(365), 5,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(367), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [3227] = 2,
    ACTIONS(377), 6,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(379), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [3248] = 6,
    ACTIONS(241), 1,
      sym__indent,
    ACTIONS(515), 1,
      anon_sym_EQ,
    ACTIONS(517), 1,
      sym__newline,
    STATE(203), 1,
      sym_children,
    ACTIONS(345), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(347), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [3277] = 5,
    ACTIONS(193), 1,
      sym__indent,
    ACTIONS(519), 1,
      sym__newline,
    STATE(175), 1,
      sym_children,
    ACTIONS(377), 4,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(379), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [3304] = 4,
    ACTIONS(193), 1,
      sym__indent,
    STATE(175), 1,
      sym_children,
    ACTIONS(377), 5,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(379), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [3329] = 4,
    ACTIONS(193), 1,
      sym__indent,
    STATE(157), 1,
      sym_children,
    ACTIONS(397), 5,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(399), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [3354] = 2,
    ACTIONS(521), 6,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(523), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [3375] = 2,
    ACTIONS(365), 6,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(367), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [3396] = 4,
    ACTIONS(193), 1,
      sym__indent,
    STATE(182), 1,
      sym_children,
    ACTIONS(393), 5,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(395), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [3421] = 4,
    ACTIONS(193), 1,
      sym__indent,
    STATE(159), 1,
      sym_children,
    ACTIONS(329), 5,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(331), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [3446] = 5,
    ACTIONS(193), 1,
      sym__indent,
    ACTIONS(463), 1,
      sym__newline,
    STATE(159), 1,
      sym_children,
    ACTIONS(329), 4,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(331), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [3473] = 5,
    ACTIONS(193), 1,
      sym__indent,
    ACTIONS(525), 1,
      sym__newline,
    STATE(162), 1,
      sym_children,
    ACTIONS(407), 4,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(409), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [3500] = 4,
    ACTIONS(193), 1,
      sym__indent,
    STATE(162), 1,
      sym_children,
    ACTIONS(407), 5,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(409), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [3525] = 2,
    ACTIONS(527), 6,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(529), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [3546] = 2,
    ACTIONS(397), 6,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(399), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [3567] = 5,
    ACTIONS(193), 1,
      sym__indent,
    ACTIONS(459), 1,
      sym__newline,
    STATE(166), 1,
      sym_children,
    ACTIONS(345), 4,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(347), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [3594] = 4,
    ACTIONS(193), 1,
      sym__indent,
    STATE(166), 1,
      sym_children,
    ACTIONS(345), 5,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(347), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [3619] = 4,
    ACTIONS(193), 1,
      sym__indent,
    STATE(171), 1,
      sym_children,
    ACTIONS(266), 5,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(268), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [3644] = 6,
    ACTIONS(241), 1,
      sym__indent,
    ACTIONS(535), 1,
      anon_sym_LPAREN,
    ACTIONS(537), 1,
      sym__newline,
    STATE(212), 1,
      sym_children,
    ACTIONS(531), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(533), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [3673] = 2,
    ACTIONS(266), 6,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(268), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [3694] = 5,
    ACTIONS(193), 1,
      sym__indent,
    ACTIONS(539), 1,
      sym__newline,
    STATE(168), 1,
      sym_children,
    ACTIONS(419), 4,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(421), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [3721] = 5,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    ACTIONS(541), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(544), 1,
      aux_sym_inline_text_token1,
    STATE(123), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
    ACTIONS(197), 11,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_mixin,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [3748] = 3,
    ACTIONS(551), 1,
      sym__newline,
    ACTIONS(547), 5,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(549), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [3771] = 2,
    ACTIONS(553), 6,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(555), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [3792] = 2,
    ACTIONS(329), 6,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(331), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [3813] = 3,
    ACTIONS(561), 1,
      sym__newline,
    ACTIONS(557), 5,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(559), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [3836] = 5,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    ACTIONS(401), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(563), 1,
      aux_sym_inline_text_token1,
    STATE(123), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
    ACTIONS(207), 11,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_mixin,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [3863] = 2,
    ACTIONS(407), 6,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(409), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [3884] = 4,
    ACTIONS(193), 1,
      sym__indent,
    STATE(189), 1,
      sym_children,
    ACTIONS(114), 5,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(116), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [3909] = 6,
    ACTIONS(241), 1,
      sym__indent,
    ACTIONS(565), 1,
      anon_sym_EQ,
    ACTIONS(567), 1,
      sym__newline,
    STATE(195), 1,
      sym_children,
    ACTIONS(329), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(331), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [3938] = 3,
    ACTIONS(573), 1,
      sym__newline,
    ACTIONS(569), 5,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(571), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [3961] = 2,
    ACTIONS(345), 6,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(347), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [3982] = 2,
    ACTIONS(373), 7,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_LPAREN,
      anon_sym_PLUS,
    ACTIONS(375), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [4003] = 2,
    ACTIONS(255), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(257), 13,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_mixin,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_each,
      anon_sym_POUND_LBRACE,
      aux_sym_inline_text_token1,
      sym_tag_name,
  [4024] = 2,
    ACTIONS(419), 6,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(421), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [4045] = 2,
    ACTIONS(575), 6,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(577), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [4066] = 6,
    ACTIONS(241), 1,
      sym__indent,
    ACTIONS(449), 1,
      sym__newline,
    ACTIONS(579), 1,
      anon_sym_EQ,
    STATE(205), 1,
      sym_children,
    ACTIONS(266), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(268), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [4095] = 2,
    ACTIONS(318), 4,
      sym__newline,
      sym__indent,
      ts_builtin_sym_end,
      sym__space,
    ACTIONS(320), 12,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_mixin,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [4116] = 5,
    ACTIONS(241), 1,
      sym__indent,
    ACTIONS(449), 1,
      sym__newline,
    STATE(205), 1,
      sym_children,
    ACTIONS(266), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(268), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [4142] = 5,
    ACTIONS(241), 1,
      sym__indent,
    ACTIONS(581), 1,
      sym__newline,
    STATE(215), 1,
      sym_children,
    ACTIONS(365), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(367), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [4168] = 5,
    ACTIONS(241), 1,
      sym__indent,
    ACTIONS(583), 1,
      sym__newline,
    STATE(218), 1,
      sym_children,
    ACTIONS(377), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(379), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [4194] = 7,
    ACTIONS(425), 1,
      anon_sym_DQUOTE,
    ACTIONS(427), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_LBRACK,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    ACTIONS(431), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(585), 3,
      sym_number,
      sym_null,
      sym_undefined,
    STATE(273), 6,
      sym_string,
      sym_boolean,
      sym__js_primitive,
      sym_array,
      sym__array_element,
      sym_object,
  [4224] = 5,
    ACTIONS(241), 1,
      sym__indent,
    ACTIONS(567), 1,
      sym__newline,
    STATE(195), 1,
      sym_children,
    ACTIONS(329), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(331), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [4250] = 3,
    ACTIONS(587), 1,
      sym__newline,
    ACTIONS(557), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(559), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [4272] = 2,
    ACTIONS(373), 6,
      sym__newline,
      sym__indent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_LPAREN,
      anon_sym_PLUS,
    ACTIONS(375), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [4292] = 7,
    ACTIONS(425), 1,
      anon_sym_DQUOTE,
    ACTIONS(427), 1,
      anon_sym_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_LBRACK,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    ACTIONS(431), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(589), 3,
      sym_number,
      sym_null,
      sym_undefined,
    STATE(279), 6,
      sym_string,
      sym_boolean,
      sym__js_primitive,
      sym__argument_choice,
      sym_array,
      sym_object,
  [4322] = 5,
    ACTIONS(241), 1,
      sym__indent,
    ACTIONS(591), 1,
      sym__newline,
    STATE(208), 1,
      sym_children,
    ACTIONS(407), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(409), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [4348] = 5,
    ACTIONS(241), 1,
      sym__indent,
    ACTIONS(597), 1,
      sym__newline,
    STATE(204), 1,
      sym_children,
    ACTIONS(593), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(595), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [4374] = 5,
    ACTIONS(241), 1,
      sym__indent,
    ACTIONS(603), 1,
      sym__newline,
    STATE(193), 1,
      sym_children,
    ACTIONS(599), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(601), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [4400] = 5,
    ACTIONS(241), 1,
      sym__indent,
    ACTIONS(517), 1,
      sym__newline,
    STATE(203), 1,
      sym_children,
    ACTIONS(345), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(347), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [4426] = 3,
    ACTIONS(605), 1,
      sym__newline,
    ACTIONS(547), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(549), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [4448] = 3,
    ACTIONS(607), 1,
      sym__newline,
    ACTIONS(569), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(571), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [4470] = 5,
    ACTIONS(241), 1,
      sym__indent,
    ACTIONS(609), 1,
      sym__newline,
    STATE(217), 1,
      sym_children,
    ACTIONS(419), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(421), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [4496] = 4,
    ACTIONS(241), 1,
      sym__indent,
    STATE(214), 1,
      sym_children,
    ACTIONS(383), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(385), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [4519] = 4,
    ACTIONS(241), 1,
      sym__indent,
    STATE(218), 1,
      sym_children,
    ACTIONS(377), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(379), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [4542] = 2,
    ACTIONS(501), 5,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(503), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [4561] = 4,
    ACTIONS(241), 1,
      sym__indent,
    STATE(195), 1,
      sym_children,
    ACTIONS(329), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(331), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [4584] = 2,
    ACTIONS(377), 5,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(379), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [4603] = 2,
    ACTIONS(527), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(529), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [4622] = 4,
    ACTIONS(241), 1,
      sym__indent,
    STATE(193), 1,
      sym_children,
    ACTIONS(599), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(601), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [4645] = 2,
    ACTIONS(397), 5,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(399), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [4664] = 2,
    ACTIONS(497), 5,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(499), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [4683] = 4,
    ACTIONS(241), 1,
      sym__indent,
    STATE(203), 1,
      sym_children,
    ACTIONS(345), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(347), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [4706] = 2,
    ACTIONS(509), 5,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(511), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [4725] = 2,
    ACTIONS(329), 5,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(331), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [4744] = 2,
    ACTIONS(383), 5,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(385), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [4763] = 2,
    ACTIONS(407), 5,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(409), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [4782] = 2,
    ACTIONS(493), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(495), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [4801] = 4,
    ACTIONS(241), 1,
      sym__indent,
    STATE(208), 1,
      sym_children,
    ACTIONS(407), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(409), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [4824] = 2,
    ACTIONS(345), 5,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(347), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [4843] = 4,
    ACTIONS(241), 1,
      sym__indent,
    STATE(215), 1,
      sym_children,
    ACTIONS(365), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(367), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [4866] = 2,
    ACTIONS(521), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(523), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [4885] = 4,
    ACTIONS(241), 1,
      sym__indent,
    STATE(216), 1,
      sym_children,
    ACTIONS(397), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(399), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [4908] = 2,
    ACTIONS(365), 5,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(367), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [4927] = 2,
    ACTIONS(575), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
      anon_sym_elseif,
    ACTIONS(577), 10,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [4946] = 4,
    ACTIONS(241), 1,
      sym__indent,
    STATE(201), 1,
      sym_children,
    ACTIONS(611), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(613), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [4969] = 4,
    ACTIONS(241), 1,
      sym__indent,
    STATE(194), 1,
      sym_children,
    ACTIONS(615), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(617), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [4992] = 2,
    ACTIONS(393), 5,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(395), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [5011] = 2,
    ACTIONS(255), 1,
      ts_builtin_sym_end,
    ACTIONS(257), 13,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_mixin,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_each,
      anon_sym_POUND_LBRACE,
      aux_sym_inline_text_token1,
      sym_tag_name,
  [5030] = 2,
    ACTIONS(243), 5,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(245), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [5049] = 2,
    ACTIONS(419), 5,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(421), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [5068] = 4,
    ACTIONS(241), 1,
      sym__indent,
    STATE(199), 1,
      sym_children,
    ACTIONS(114), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(116), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [5091] = 2,
    ACTIONS(553), 5,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(555), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [5110] = 2,
    ACTIONS(575), 5,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(577), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [5129] = 4,
    ACTIONS(241), 1,
      sym__indent,
    STATE(205), 1,
      sym_children,
    ACTIONS(266), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(268), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [5152] = 4,
    ACTIONS(241), 1,
      sym__indent,
    STATE(213), 1,
      sym_children,
    ACTIONS(393), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(395), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [5175] = 2,
    ACTIONS(114), 5,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(116), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [5194] = 2,
    ACTIONS(266), 5,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(268), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [5213] = 3,
    ACTIONS(623), 1,
      sym__newline,
    ACTIONS(619), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(621), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [5233] = 3,
    ACTIONS(629), 1,
      sym__newline,
    ACTIONS(625), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(627), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [5253] = 3,
    ACTIONS(635), 1,
      sym_reference,
    ACTIONS(631), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(633), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [5273] = 2,
    ACTIONS(611), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(613), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [5290] = 2,
    ACTIONS(593), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(595), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [5307] = 2,
    ACTIONS(377), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(379), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [5324] = 2,
    ACTIONS(497), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(499), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [5341] = 2,
    ACTIONS(575), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(577), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [5358] = 2,
    ACTIONS(393), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(395), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [5375] = 2,
    ACTIONS(266), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(268), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [5392] = 2,
    ACTIONS(637), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(639), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [5409] = 2,
    ACTIONS(641), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(643), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [5426] = 2,
    ACTIONS(114), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(116), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [5443] = 2,
    ACTIONS(329), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(331), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [5460] = 2,
    ACTIONS(599), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(601), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [5477] = 2,
    ACTIONS(345), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(347), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [5494] = 2,
    ACTIONS(645), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(647), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [5511] = 2,
    ACTIONS(553), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(555), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [5528] = 2,
    ACTIONS(397), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(399), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [5545] = 2,
    ACTIONS(649), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(651), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [5562] = 2,
    ACTIONS(243), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(245), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [5579] = 2,
    ACTIONS(653), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(655), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [5596] = 2,
    ACTIONS(615), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(617), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [5613] = 2,
    ACTIONS(419), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(421), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [5630] = 2,
    ACTIONS(509), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(511), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [5647] = 2,
    ACTIONS(383), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(385), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [5664] = 2,
    ACTIONS(501), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(503), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [5681] = 2,
    ACTIONS(407), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(409), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [5698] = 2,
    ACTIONS(365), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(367), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [5715] = 2,
    ACTIONS(657), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_PLUS,
    ACTIONS(659), 9,
      sym_extends,
      sym_include,
      sym_block,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      anon_sym_mixin,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [5732] = 5,
    ACTIONS(425), 1,
      anon_sym_DQUOTE,
    ACTIONS(427), 1,
      anon_sym_SQUOTE,
    ACTIONS(431), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(661), 3,
      sym_number,
      sym_null,
      sym_undefined,
    STATE(285), 3,
      sym_string,
      sym_boolean,
      sym__js_primitive,
  [5753] = 4,
    ACTIONS(663), 1,
      anon_sym_DQUOTE,
    ACTIONS(665), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(668), 1,
      aux_sym_quoted_attribute_value_token1,
    STATE(221), 2,
      sym_interpolation,
      aux_sym_quoted_attribute_value_repeat1,
  [5767] = 4,
    ACTIONS(325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(671), 1,
      aux_sym_inline_text_token1,
    STATE(131), 1,
      sym_inline_text,
    STATE(36), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
  [5781] = 4,
    ACTIONS(325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(671), 1,
      aux_sym_inline_text_token1,
    STATE(138), 1,
      sym_inline_text,
    STATE(36), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
  [5795] = 4,
    ACTIONS(673), 1,
      anon_sym_DQUOTE,
    ACTIONS(675), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(677), 1,
      aux_sym_quoted_attribute_value_token1,
    STATE(231), 2,
      sym_interpolation,
      aux_sym_quoted_attribute_value_repeat1,
  [5809] = 4,
    ACTIONS(262), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(679), 1,
      aux_sym_inline_text_token1,
    STATE(69), 1,
      sym_inline_text,
    STATE(23), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
  [5823] = 4,
    ACTIONS(262), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(679), 1,
      aux_sym_inline_text_token1,
    STATE(76), 1,
      sym_inline_text,
    STATE(23), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
  [5837] = 4,
    ACTIONS(325), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(671), 1,
      aux_sym_inline_text_token1,
    STATE(104), 1,
      sym_inline_text,
    STATE(36), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
  [5851] = 4,
    ACTIONS(262), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(679), 1,
      aux_sym_inline_text_token1,
    STATE(77), 1,
      sym_inline_text,
    STATE(23), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
  [5865] = 4,
    ACTIONS(209), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(681), 1,
      aux_sym_inline_text_token1,
    STATE(42), 1,
      sym_inline_text,
    STATE(15), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
  [5879] = 4,
    ACTIONS(209), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(681), 1,
      aux_sym_inline_text_token1,
    STATE(40), 1,
      sym_inline_text,
    STATE(15), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
  [5893] = 4,
    ACTIONS(675), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(683), 1,
      anon_sym_DQUOTE,
    ACTIONS(685), 1,
      aux_sym_quoted_attribute_value_token1,
    STATE(221), 2,
      sym_interpolation,
      aux_sym_quoted_attribute_value_repeat1,
  [5907] = 4,
    ACTIONS(209), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(681), 1,
      aux_sym_inline_text_token1,
    STATE(37), 1,
      sym_inline_text,
    STATE(15), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
  [5921] = 4,
    ACTIONS(687), 1,
      anon_sym_DQUOTE,
    ACTIONS(689), 1,
      aux_sym_string_token1,
    ACTIONS(691), 1,
      aux_sym_string_token2,
    STATE(236), 1,
      aux_sym_string_repeat1,
  [5934] = 1,
    ACTIONS(693), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [5941] = 3,
    ACTIONS(695), 1,
      anon_sym_RPAREN,
    ACTIONS(697), 1,
      sym_attribute_name,
    STATE(242), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [5952] = 4,
    ACTIONS(699), 1,
      anon_sym_DQUOTE,
    ACTIONS(701), 1,
      aux_sym_string_token1,
    ACTIONS(703), 1,
      aux_sym_string_token2,
    STATE(246), 1,
      aux_sym_string_repeat1,
  [5965] = 1,
    ACTIONS(705), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [5972] = 4,
    ACTIONS(699), 1,
      anon_sym_SQUOTE,
    ACTIONS(707), 1,
      aux_sym_string_token2,
    ACTIONS(709), 1,
      aux_sym_string_token3,
    STATE(244), 1,
      aux_sym_string_repeat2,
  [5985] = 3,
    ACTIONS(697), 1,
      sym_attribute_name,
    ACTIONS(711), 1,
      anon_sym_RPAREN,
    STATE(242), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [5996] = 3,
    ACTIONS(697), 1,
      sym_attribute_name,
    ACTIONS(713), 1,
      anon_sym_RPAREN,
    STATE(235), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [6007] = 3,
    ACTIONS(697), 1,
      sym_attribute_name,
    ACTIONS(715), 1,
      anon_sym_RPAREN,
    STATE(239), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [6018] = 3,
    ACTIONS(717), 1,
      anon_sym_RPAREN,
    ACTIONS(719), 1,
      sym_attribute_name,
    STATE(242), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [6029] = 4,
    ACTIONS(722), 1,
      anon_sym_RPAREN,
    ACTIONS(724), 1,
      aux_sym_mixin_name_token1,
    STATE(255), 1,
      sym_parameter,
    STATE(319), 1,
      sym_mixin_parameters,
  [6042] = 4,
    ACTIONS(726), 1,
      aux_sym_string_token2,
    ACTIONS(729), 1,
      anon_sym_SQUOTE,
    ACTIONS(731), 1,
      aux_sym_string_token3,
    STATE(244), 1,
      aux_sym_string_repeat2,
  [6055] = 3,
    ACTIONS(697), 1,
      sym_attribute_name,
    ACTIONS(734), 1,
      anon_sym_RPAREN,
    STATE(242), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [6066] = 4,
    ACTIONS(736), 1,
      anon_sym_DQUOTE,
    ACTIONS(738), 1,
      aux_sym_string_token1,
    ACTIONS(741), 1,
      aux_sym_string_token2,
    STATE(246), 1,
      aux_sym_string_repeat1,
  [6079] = 3,
    ACTIONS(697), 1,
      sym_attribute_name,
    ACTIONS(744), 1,
      anon_sym_RPAREN,
    STATE(245), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [6090] = 1,
    ACTIONS(746), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [6097] = 4,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(748), 1,
      aux_sym_string_token2,
    ACTIONS(750), 1,
      aux_sym_string_token3,
    STATE(238), 1,
      aux_sym_string_repeat2,
  [6110] = 3,
    ACTIONS(752), 1,
      anon_sym_DQUOTE,
    ACTIONS(754), 1,
      sym_unquoted_attribute_value,
    STATE(292), 1,
      sym_quoted_attribute_value,
  [6120] = 1,
    ACTIONS(756), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6126] = 3,
    ACTIONS(758), 1,
      anon_sym_RBRACE,
    ACTIONS(760), 1,
      sym_key,
    STATE(260), 1,
      sym_pair,
  [6136] = 3,
    ACTIONS(762), 1,
      anon_sym_RPAREN,
    ACTIONS(764), 1,
      anon_sym_COMMA,
    STATE(253), 1,
      aux_sym_mixin_parameters_repeat1,
  [6146] = 3,
    ACTIONS(767), 1,
      anon_sym_COMMA,
    ACTIONS(769), 1,
      anon_sym_RBRACK,
    STATE(270), 1,
      aux_sym_array_repeat1,
  [6156] = 3,
    ACTIONS(771), 1,
      anon_sym_RPAREN,
    ACTIONS(773), 1,
      anon_sym_COMMA,
    STATE(267), 1,
      aux_sym_mixin_parameters_repeat1,
  [6166] = 2,
    ACTIONS(255), 1,
      aux_sym_quoted_attribute_value_token1,
    ACTIONS(257), 2,
      anon_sym_DQUOTE,
      anon_sym_POUND_LBRACE,
  [6174] = 3,
    ACTIONS(775), 1,
      anon_sym_RPAREN,
    ACTIONS(777), 1,
      anon_sym_COMMA,
    STATE(261), 1,
      aux_sym_arguments_repeat1,
  [6184] = 1,
    ACTIONS(779), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6190] = 3,
    ACTIONS(781), 1,
      anon_sym_COMMA,
    ACTIONS(784), 1,
      anon_sym_RBRACE,
    STATE(259), 1,
      aux_sym_object_repeat1,
  [6200] = 3,
    ACTIONS(786), 1,
      anon_sym_COMMA,
    ACTIONS(788), 1,
      anon_sym_RBRACE,
    STATE(265), 1,
      aux_sym_object_repeat1,
  [6210] = 3,
    ACTIONS(777), 1,
      anon_sym_COMMA,
    ACTIONS(790), 1,
      anon_sym_RPAREN,
    STATE(269), 1,
      aux_sym_arguments_repeat1,
  [6220] = 1,
    ACTIONS(792), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6226] = 1,
    ACTIONS(794), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6232] = 1,
    ACTIONS(796), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6238] = 3,
    ACTIONS(786), 1,
      anon_sym_COMMA,
    ACTIONS(798), 1,
      anon_sym_RBRACE,
    STATE(259), 1,
      aux_sym_object_repeat1,
  [6248] = 3,
    ACTIONS(800), 1,
      anon_sym_COMMA,
    ACTIONS(803), 1,
      anon_sym_RBRACK,
    STATE(266), 1,
      aux_sym_array_repeat1,
  [6258] = 3,
    ACTIONS(773), 1,
      anon_sym_COMMA,
    ACTIONS(805), 1,
      anon_sym_RPAREN,
    STATE(253), 1,
      aux_sym_mixin_parameters_repeat1,
  [6268] = 1,
    ACTIONS(807), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6274] = 3,
    ACTIONS(809), 1,
      anon_sym_RPAREN,
    ACTIONS(811), 1,
      anon_sym_COMMA,
    STATE(269), 1,
      aux_sym_arguments_repeat1,
  [6284] = 3,
    ACTIONS(767), 1,
      anon_sym_COMMA,
    ACTIONS(814), 1,
      anon_sym_RBRACK,
    STATE(266), 1,
      aux_sym_array_repeat1,
  [6294] = 2,
    ACTIONS(816), 1,
      aux_sym_loop_variable_token1,
    STATE(337), 1,
      sym_loop_source,
  [6301] = 2,
    ACTIONS(818), 1,
      aux_sym_loop_variable_token1,
    STATE(289), 1,
      sym_loop_variable,
  [6308] = 1,
    ACTIONS(803), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6313] = 1,
    ACTIONS(820), 2,
      anon_sym_RPAREN,
      sym_attribute_name,
  [6318] = 2,
    ACTIONS(816), 1,
      aux_sym_loop_variable_token1,
    STATE(326), 1,
      sym_loop_source,
  [6325] = 2,
    ACTIONS(822), 1,
      aux_sym_loop_variable_token1,
    STATE(313), 1,
      sym_loop_index,
  [6332] = 2,
    ACTIONS(824), 1,
      sym__indent,
    STATE(169), 1,
      sym_children,
  [6339] = 2,
    ACTIONS(724), 1,
      aux_sym_mixin_name_token1,
    STATE(296), 1,
      sym_parameter,
  [6346] = 1,
    ACTIONS(809), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6351] = 2,
    ACTIONS(824), 1,
      sym__indent,
    STATE(173), 1,
      sym_children,
  [6358] = 2,
    ACTIONS(241), 1,
      sym__indent,
    STATE(209), 1,
      sym_children,
  [6365] = 2,
    ACTIONS(760), 1,
      sym_key,
    STATE(293), 1,
      sym_pair,
  [6372] = 2,
    ACTIONS(241), 1,
      sym__indent,
    STATE(207), 1,
      sym_children,
  [6379] = 2,
    ACTIONS(128), 1,
      sym__indent,
    STATE(125), 1,
      sym_children,
  [6386] = 1,
    ACTIONS(826), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [6391] = 2,
    ACTIONS(828), 1,
      aux_sym_mixin_name_token1,
    STATE(32), 1,
      sym_mixin_name,
  [6398] = 2,
    ACTIONS(830), 1,
      aux_sym_mixin_name_token1,
    STATE(120), 1,
      sym_mixin_name,
  [6405] = 2,
    ACTIONS(128), 1,
      sym__indent,
    STATE(108), 1,
      sym_children,
  [6412] = 2,
    ACTIONS(832), 1,
      anon_sym_COMMA,
    ACTIONS(834), 1,
      anon_sym_in,
  [6419] = 1,
    ACTIONS(836), 2,
      anon_sym_COMMA,
      anon_sym_in,
  [6424] = 2,
    ACTIONS(824), 1,
      sym__indent,
    STATE(160), 1,
      sym_children,
  [6431] = 1,
    ACTIONS(838), 2,
      anon_sym_RPAREN,
      sym_attribute_name,
  [6436] = 1,
    ACTIONS(784), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [6441] = 1,
    ACTIONS(840), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6446] = 2,
    ACTIONS(128), 1,
      sym__indent,
    STATE(115), 1,
      sym_children,
  [6453] = 1,
    ACTIONS(762), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6458] = 2,
    ACTIONS(830), 1,
      aux_sym_mixin_name_token1,
    STATE(88), 1,
      sym_mixin_name,
  [6465] = 1,
    ACTIONS(842), 2,
      anon_sym_RPAREN,
      sym_attribute_name,
  [6470] = 2,
    ACTIONS(128), 1,
      sym__indent,
    STATE(89), 1,
      sym_children,
  [6477] = 2,
    ACTIONS(193), 1,
      sym__indent,
    STATE(184), 1,
      sym_children,
  [6484] = 2,
    ACTIONS(844), 1,
      aux_sym_mixin_name_token1,
    STATE(81), 1,
      sym_mixin_name,
  [6491] = 1,
    ACTIONS(846), 1,
      sym_expression,
  [6495] = 1,
    ACTIONS(848), 1,
      sym_expression,
  [6499] = 1,
    ACTIONS(850), 1,
      anon_sym_RPAREN,
  [6503] = 1,
    ACTIONS(852), 1,
      sym_expression,
  [6507] = 1,
    ACTIONS(854), 1,
      anon_sym_in,
  [6511] = 1,
    ACTIONS(856), 1,
      sym_condition,
  [6515] = 1,
    ACTIONS(858), 1,
      anon_sym_EQ,
  [6519] = 1,
    ACTIONS(860), 1,
      anon_sym_RBRACE,
  [6523] = 1,
    ACTIONS(862), 1,
      sym_condition,
  [6527] = 1,
    ACTIONS(864), 1,
      ts_builtin_sym_end,
  [6531] = 1,
    ACTIONS(866), 1,
      sym_expression,
  [6535] = 1,
    ACTIONS(868), 1,
      anon_sym_in,
  [6539] = 1,
    ACTIONS(870), 1,
      sym_expression,
  [6543] = 1,
    ACTIONS(872), 1,
      sym__newline,
  [6547] = 1,
    ACTIONS(874), 1,
      sym__newline,
  [6551] = 1,
    ACTIONS(876), 1,
      anon_sym_RPAREN,
  [6555] = 1,
    ACTIONS(878), 1,
      sym_expression,
  [6559] = 1,
    ACTIONS(880), 1,
      anon_sym_RPAREN,
  [6563] = 1,
    ACTIONS(882), 1,
      anon_sym_COLON,
  [6567] = 1,
    ACTIONS(884), 1,
      sym_expression,
  [6571] = 1,
    ACTIONS(886), 1,
      sym_expression,
  [6575] = 1,
    ACTIONS(888), 1,
      sym_expression,
  [6579] = 1,
    ACTIONS(890), 1,
      sym_expression,
  [6583] = 1,
    ACTIONS(892), 1,
      sym_expression,
  [6587] = 1,
    ACTIONS(894), 1,
      sym__newline,
  [6591] = 1,
    ACTIONS(896), 1,
      sym_condition,
  [6595] = 1,
    ACTIONS(898), 1,
      sym_expression,
  [6599] = 1,
    ACTIONS(900), 1,
      sym_reference,
  [6603] = 1,
    ACTIONS(902), 1,
      anon_sym_RBRACE,
  [6607] = 1,
    ACTIONS(904), 1,
      sym_reference,
  [6611] = 1,
    ACTIONS(906), 1,
      sym_condition,
  [6615] = 1,
    ACTIONS(908), 1,
      sym_expression,
  [6619] = 1,
    ACTIONS(910), 1,
      anon_sym_RBRACE,
  [6623] = 1,
    ACTIONS(912), 1,
      anon_sym_RPAREN,
  [6627] = 1,
    ACTIONS(914), 1,
      sym_expression,
  [6631] = 1,
    ACTIONS(916), 1,
      sym__newline,
  [6635] = 1,
    ACTIONS(918), 1,
      sym_expression,
  [6639] = 1,
    ACTIONS(920), 1,
      sym_expression,
  [6643] = 1,
    ACTIONS(922), 1,
      anon_sym_RBRACE,
  [6647] = 1,
    ACTIONS(924), 1,
      anon_sym_RBRACE,
  [6651] = 1,
    ACTIONS(926), 1,
      anon_sym_RBRACE,
  [6655] = 1,
    ACTIONS(928), 1,
      anon_sym_RBRACE,
  [6659] = 1,
    ACTIONS(930), 1,
      sym__newline,
  [6663] = 1,
    ACTIONS(932), 1,
      sym_expression,
  [6667] = 1,
    ACTIONS(934), 1,
      sym_reference,
  [6671] = 1,
    ACTIONS(936), 1,
      sym__newline,
  [6675] = 1,
    ACTIONS(938), 1,
      sym_expression,
  [6679] = 1,
    ACTIONS(940), 1,
      sym_expression,
  [6683] = 1,
    ACTIONS(942), 1,
      sym_expression,
  [6687] = 1,
    ACTIONS(944), 1,
      sym_expression,
  [6691] = 1,
    ACTIONS(946), 1,
      sym_expression,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 59,
  [SMALL_STATE(4)] = 118,
  [SMALL_STATE(5)] = 172,
  [SMALL_STATE(6)] = 224,
  [SMALL_STATE(7)] = 278,
  [SMALL_STATE(8)] = 325,
  [SMALL_STATE(9)] = 372,
  [SMALL_STATE(10)] = 424,
  [SMALL_STATE(11)] = 476,
  [SMALL_STATE(12)] = 526,
  [SMALL_STATE(13)] = 557,
  [SMALL_STATE(14)] = 602,
  [SMALL_STATE(15)] = 635,
  [SMALL_STATE(16)] = 668,
  [SMALL_STATE(17)] = 713,
  [SMALL_STATE(18)] = 750,
  [SMALL_STATE(19)] = 794,
  [SMALL_STATE(20)] = 828,
  [SMALL_STATE(21)] = 872,
  [SMALL_STATE(22)] = 897,
  [SMALL_STATE(23)] = 926,
  [SMALL_STATE(24)] = 957,
  [SMALL_STATE(25)] = 992,
  [SMALL_STATE(26)] = 1023,
  [SMALL_STATE(27)] = 1058,
  [SMALL_STATE(28)] = 1093,
  [SMALL_STATE(29)] = 1124,
  [SMALL_STATE(30)] = 1155,
  [SMALL_STATE(31)] = 1185,
  [SMALL_STATE(32)] = 1215,
  [SMALL_STATE(33)] = 1247,
  [SMALL_STATE(34)] = 1271,
  [SMALL_STATE(35)] = 1303,
  [SMALL_STATE(36)] = 1331,
  [SMALL_STATE(37)] = 1361,
  [SMALL_STATE(38)] = 1393,
  [SMALL_STATE(39)] = 1423,
  [SMALL_STATE(40)] = 1447,
  [SMALL_STATE(41)] = 1479,
  [SMALL_STATE(42)] = 1509,
  [SMALL_STATE(43)] = 1541,
  [SMALL_STATE(44)] = 1568,
  [SMALL_STATE(45)] = 1595,
  [SMALL_STATE(46)] = 1624,
  [SMALL_STATE(47)] = 1653,
  [SMALL_STATE(48)] = 1676,
  [SMALL_STATE(49)] = 1705,
  [SMALL_STATE(50)] = 1732,
  [SMALL_STATE(51)] = 1761,
  [SMALL_STATE(52)] = 1788,
  [SMALL_STATE(53)] = 1815,
  [SMALL_STATE(54)] = 1842,
  [SMALL_STATE(55)] = 1875,
  [SMALL_STATE(56)] = 1902,
  [SMALL_STATE(57)] = 1925,
  [SMALL_STATE(58)] = 1954,
  [SMALL_STATE(59)] = 1987,
  [SMALL_STATE(60)] = 2016,
  [SMALL_STATE(61)] = 2043,
  [SMALL_STATE(62)] = 2072,
  [SMALL_STATE(63)] = 2099,
  [SMALL_STATE(64)] = 2128,
  [SMALL_STATE(65)] = 2161,
  [SMALL_STATE(66)] = 2190,
  [SMALL_STATE(67)] = 2217,
  [SMALL_STATE(68)] = 2240,
  [SMALL_STATE(69)] = 2276,
  [SMALL_STATE(70)] = 2306,
  [SMALL_STATE(71)] = 2336,
  [SMALL_STATE(72)] = 2364,
  [SMALL_STATE(73)] = 2396,
  [SMALL_STATE(74)] = 2418,
  [SMALL_STATE(75)] = 2440,
  [SMALL_STATE(76)] = 2468,
  [SMALL_STATE(77)] = 2498,
  [SMALL_STATE(78)] = 2528,
  [SMALL_STATE(79)] = 2568,
  [SMALL_STATE(80)] = 2608,
  [SMALL_STATE(81)] = 2648,
  [SMALL_STATE(82)] = 2678,
  [SMALL_STATE(83)] = 2714,
  [SMALL_STATE(84)] = 2754,
  [SMALL_STATE(85)] = 2782,
  [SMALL_STATE(86)] = 2818,
  [SMALL_STATE(87)] = 2840,
  [SMALL_STATE(88)] = 2872,
  [SMALL_STATE(89)] = 2901,
  [SMALL_STATE(90)] = 2922,
  [SMALL_STATE(91)] = 2943,
  [SMALL_STATE(92)] = 2964,
  [SMALL_STATE(93)] = 2985,
  [SMALL_STATE(94)] = 3018,
  [SMALL_STATE(95)] = 3039,
  [SMALL_STATE(96)] = 3060,
  [SMALL_STATE(97)] = 3081,
  [SMALL_STATE(98)] = 3102,
  [SMALL_STATE(99)] = 3129,
  [SMALL_STATE(100)] = 3150,
  [SMALL_STATE(101)] = 3175,
  [SMALL_STATE(102)] = 3202,
  [SMALL_STATE(103)] = 3227,
  [SMALL_STATE(104)] = 3248,
  [SMALL_STATE(105)] = 3277,
  [SMALL_STATE(106)] = 3304,
  [SMALL_STATE(107)] = 3329,
  [SMALL_STATE(108)] = 3354,
  [SMALL_STATE(109)] = 3375,
  [SMALL_STATE(110)] = 3396,
  [SMALL_STATE(111)] = 3421,
  [SMALL_STATE(112)] = 3446,
  [SMALL_STATE(113)] = 3473,
  [SMALL_STATE(114)] = 3500,
  [SMALL_STATE(115)] = 3525,
  [SMALL_STATE(116)] = 3546,
  [SMALL_STATE(117)] = 3567,
  [SMALL_STATE(118)] = 3594,
  [SMALL_STATE(119)] = 3619,
  [SMALL_STATE(120)] = 3644,
  [SMALL_STATE(121)] = 3673,
  [SMALL_STATE(122)] = 3694,
  [SMALL_STATE(123)] = 3721,
  [SMALL_STATE(124)] = 3748,
  [SMALL_STATE(125)] = 3771,
  [SMALL_STATE(126)] = 3792,
  [SMALL_STATE(127)] = 3813,
  [SMALL_STATE(128)] = 3836,
  [SMALL_STATE(129)] = 3863,
  [SMALL_STATE(130)] = 3884,
  [SMALL_STATE(131)] = 3909,
  [SMALL_STATE(132)] = 3938,
  [SMALL_STATE(133)] = 3961,
  [SMALL_STATE(134)] = 3982,
  [SMALL_STATE(135)] = 4003,
  [SMALL_STATE(136)] = 4024,
  [SMALL_STATE(137)] = 4045,
  [SMALL_STATE(138)] = 4066,
  [SMALL_STATE(139)] = 4095,
  [SMALL_STATE(140)] = 4116,
  [SMALL_STATE(141)] = 4142,
  [SMALL_STATE(142)] = 4168,
  [SMALL_STATE(143)] = 4194,
  [SMALL_STATE(144)] = 4224,
  [SMALL_STATE(145)] = 4250,
  [SMALL_STATE(146)] = 4272,
  [SMALL_STATE(147)] = 4292,
  [SMALL_STATE(148)] = 4322,
  [SMALL_STATE(149)] = 4348,
  [SMALL_STATE(150)] = 4374,
  [SMALL_STATE(151)] = 4400,
  [SMALL_STATE(152)] = 4426,
  [SMALL_STATE(153)] = 4448,
  [SMALL_STATE(154)] = 4470,
  [SMALL_STATE(155)] = 4496,
  [SMALL_STATE(156)] = 4519,
  [SMALL_STATE(157)] = 4542,
  [SMALL_STATE(158)] = 4561,
  [SMALL_STATE(159)] = 4584,
  [SMALL_STATE(160)] = 4603,
  [SMALL_STATE(161)] = 4622,
  [SMALL_STATE(162)] = 4645,
  [SMALL_STATE(163)] = 4664,
  [SMALL_STATE(164)] = 4683,
  [SMALL_STATE(165)] = 4706,
  [SMALL_STATE(166)] = 4725,
  [SMALL_STATE(167)] = 4744,
  [SMALL_STATE(168)] = 4763,
  [SMALL_STATE(169)] = 4782,
  [SMALL_STATE(170)] = 4801,
  [SMALL_STATE(171)] = 4824,
  [SMALL_STATE(172)] = 4843,
  [SMALL_STATE(173)] = 4866,
  [SMALL_STATE(174)] = 4885,
  [SMALL_STATE(175)] = 4908,
  [SMALL_STATE(176)] = 4927,
  [SMALL_STATE(177)] = 4946,
  [SMALL_STATE(178)] = 4969,
  [SMALL_STATE(179)] = 4992,
  [SMALL_STATE(180)] = 5011,
  [SMALL_STATE(181)] = 5030,
  [SMALL_STATE(182)] = 5049,
  [SMALL_STATE(183)] = 5068,
  [SMALL_STATE(184)] = 5091,
  [SMALL_STATE(185)] = 5110,
  [SMALL_STATE(186)] = 5129,
  [SMALL_STATE(187)] = 5152,
  [SMALL_STATE(188)] = 5175,
  [SMALL_STATE(189)] = 5194,
  [SMALL_STATE(190)] = 5213,
  [SMALL_STATE(191)] = 5233,
  [SMALL_STATE(192)] = 5253,
  [SMALL_STATE(193)] = 5273,
  [SMALL_STATE(194)] = 5290,
  [SMALL_STATE(195)] = 5307,
  [SMALL_STATE(196)] = 5324,
  [SMALL_STATE(197)] = 5341,
  [SMALL_STATE(198)] = 5358,
  [SMALL_STATE(199)] = 5375,
  [SMALL_STATE(200)] = 5392,
  [SMALL_STATE(201)] = 5409,
  [SMALL_STATE(202)] = 5426,
  [SMALL_STATE(203)] = 5443,
  [SMALL_STATE(204)] = 5460,
  [SMALL_STATE(205)] = 5477,
  [SMALL_STATE(206)] = 5494,
  [SMALL_STATE(207)] = 5511,
  [SMALL_STATE(208)] = 5528,
  [SMALL_STATE(209)] = 5545,
  [SMALL_STATE(210)] = 5562,
  [SMALL_STATE(211)] = 5579,
  [SMALL_STATE(212)] = 5596,
  [SMALL_STATE(213)] = 5613,
  [SMALL_STATE(214)] = 5630,
  [SMALL_STATE(215)] = 5647,
  [SMALL_STATE(216)] = 5664,
  [SMALL_STATE(217)] = 5681,
  [SMALL_STATE(218)] = 5698,
  [SMALL_STATE(219)] = 5715,
  [SMALL_STATE(220)] = 5732,
  [SMALL_STATE(221)] = 5753,
  [SMALL_STATE(222)] = 5767,
  [SMALL_STATE(223)] = 5781,
  [SMALL_STATE(224)] = 5795,
  [SMALL_STATE(225)] = 5809,
  [SMALL_STATE(226)] = 5823,
  [SMALL_STATE(227)] = 5837,
  [SMALL_STATE(228)] = 5851,
  [SMALL_STATE(229)] = 5865,
  [SMALL_STATE(230)] = 5879,
  [SMALL_STATE(231)] = 5893,
  [SMALL_STATE(232)] = 5907,
  [SMALL_STATE(233)] = 5921,
  [SMALL_STATE(234)] = 5934,
  [SMALL_STATE(235)] = 5941,
  [SMALL_STATE(236)] = 5952,
  [SMALL_STATE(237)] = 5965,
  [SMALL_STATE(238)] = 5972,
  [SMALL_STATE(239)] = 5985,
  [SMALL_STATE(240)] = 5996,
  [SMALL_STATE(241)] = 6007,
  [SMALL_STATE(242)] = 6018,
  [SMALL_STATE(243)] = 6029,
  [SMALL_STATE(244)] = 6042,
  [SMALL_STATE(245)] = 6055,
  [SMALL_STATE(246)] = 6066,
  [SMALL_STATE(247)] = 6079,
  [SMALL_STATE(248)] = 6090,
  [SMALL_STATE(249)] = 6097,
  [SMALL_STATE(250)] = 6110,
  [SMALL_STATE(251)] = 6120,
  [SMALL_STATE(252)] = 6126,
  [SMALL_STATE(253)] = 6136,
  [SMALL_STATE(254)] = 6146,
  [SMALL_STATE(255)] = 6156,
  [SMALL_STATE(256)] = 6166,
  [SMALL_STATE(257)] = 6174,
  [SMALL_STATE(258)] = 6184,
  [SMALL_STATE(259)] = 6190,
  [SMALL_STATE(260)] = 6200,
  [SMALL_STATE(261)] = 6210,
  [SMALL_STATE(262)] = 6220,
  [SMALL_STATE(263)] = 6226,
  [SMALL_STATE(264)] = 6232,
  [SMALL_STATE(265)] = 6238,
  [SMALL_STATE(266)] = 6248,
  [SMALL_STATE(267)] = 6258,
  [SMALL_STATE(268)] = 6268,
  [SMALL_STATE(269)] = 6274,
  [SMALL_STATE(270)] = 6284,
  [SMALL_STATE(271)] = 6294,
  [SMALL_STATE(272)] = 6301,
  [SMALL_STATE(273)] = 6308,
  [SMALL_STATE(274)] = 6313,
  [SMALL_STATE(275)] = 6318,
  [SMALL_STATE(276)] = 6325,
  [SMALL_STATE(277)] = 6332,
  [SMALL_STATE(278)] = 6339,
  [SMALL_STATE(279)] = 6346,
  [SMALL_STATE(280)] = 6351,
  [SMALL_STATE(281)] = 6358,
  [SMALL_STATE(282)] = 6365,
  [SMALL_STATE(283)] = 6372,
  [SMALL_STATE(284)] = 6379,
  [SMALL_STATE(285)] = 6386,
  [SMALL_STATE(286)] = 6391,
  [SMALL_STATE(287)] = 6398,
  [SMALL_STATE(288)] = 6405,
  [SMALL_STATE(289)] = 6412,
  [SMALL_STATE(290)] = 6419,
  [SMALL_STATE(291)] = 6424,
  [SMALL_STATE(292)] = 6431,
  [SMALL_STATE(293)] = 6436,
  [SMALL_STATE(294)] = 6441,
  [SMALL_STATE(295)] = 6446,
  [SMALL_STATE(296)] = 6453,
  [SMALL_STATE(297)] = 6458,
  [SMALL_STATE(298)] = 6465,
  [SMALL_STATE(299)] = 6470,
  [SMALL_STATE(300)] = 6477,
  [SMALL_STATE(301)] = 6484,
  [SMALL_STATE(302)] = 6491,
  [SMALL_STATE(303)] = 6495,
  [SMALL_STATE(304)] = 6499,
  [SMALL_STATE(305)] = 6503,
  [SMALL_STATE(306)] = 6507,
  [SMALL_STATE(307)] = 6511,
  [SMALL_STATE(308)] = 6515,
  [SMALL_STATE(309)] = 6519,
  [SMALL_STATE(310)] = 6523,
  [SMALL_STATE(311)] = 6527,
  [SMALL_STATE(312)] = 6531,
  [SMALL_STATE(313)] = 6535,
  [SMALL_STATE(314)] = 6539,
  [SMALL_STATE(315)] = 6543,
  [SMALL_STATE(316)] = 6547,
  [SMALL_STATE(317)] = 6551,
  [SMALL_STATE(318)] = 6555,
  [SMALL_STATE(319)] = 6559,
  [SMALL_STATE(320)] = 6563,
  [SMALL_STATE(321)] = 6567,
  [SMALL_STATE(322)] = 6571,
  [SMALL_STATE(323)] = 6575,
  [SMALL_STATE(324)] = 6579,
  [SMALL_STATE(325)] = 6583,
  [SMALL_STATE(326)] = 6587,
  [SMALL_STATE(327)] = 6591,
  [SMALL_STATE(328)] = 6595,
  [SMALL_STATE(329)] = 6599,
  [SMALL_STATE(330)] = 6603,
  [SMALL_STATE(331)] = 6607,
  [SMALL_STATE(332)] = 6611,
  [SMALL_STATE(333)] = 6615,
  [SMALL_STATE(334)] = 6619,
  [SMALL_STATE(335)] = 6623,
  [SMALL_STATE(336)] = 6627,
  [SMALL_STATE(337)] = 6631,
  [SMALL_STATE(338)] = 6635,
  [SMALL_STATE(339)] = 6639,
  [SMALL_STATE(340)] = 6643,
  [SMALL_STATE(341)] = 6647,
  [SMALL_STATE(342)] = 6651,
  [SMALL_STATE(343)] = 6655,
  [SMALL_STATE(344)] = 6659,
  [SMALL_STATE(345)] = 6663,
  [SMALL_STATE(346)] = 6667,
  [SMALL_STATE(347)] = 6671,
  [SMALL_STATE(348)] = 6675,
  [SMALL_STATE(349)] = 6679,
  [SMALL_STATE(350)] = 6683,
  [SMALL_STATE(351)] = 6687,
  [SMALL_STATE(352)] = 6691,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(329),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(346),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(331),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(192),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(287),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(297),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(310),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(272),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(5),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(17),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(17),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(286),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(327),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(272),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(8),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(5),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(11),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(27),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(27),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(301),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(16),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(11),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(12),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_text_repeat1, 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_text_repeat1, 2),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_text_repeat1, 2), SHIFT_REPEAT(352),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_text_repeat1, 2), SHIFT_REPEAT(14),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_text, 1),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_text, 1),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(22),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_text_repeat1, 2), SHIFT_REPEAT(349),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_text_repeat1, 2), SHIFT_REPEAT(25),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_text_repeat1, 2), SHIFT_REPEAT(350),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_text_repeat1, 2), SHIFT_REPEAT(29),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 1),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 1),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_text_repeat1, 2), SHIFT_REPEAT(345),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_text_repeat1, 2), SHIFT_REPEAT(31),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_call, 2),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixin_call, 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(35),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 2),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(307),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(124),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 7),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 7),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_name, 1),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixin_name, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 8),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 8),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_text_repeat1, 2), SHIFT_REPEAT(348),
  [390] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_text_repeat1, 2), SHIFT_REPEAT(50),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_call, 3),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixin_call, 3),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_call, 6),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixin_call, 6),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_call, 5),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixin_call, 5),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_call, 4),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixin_call, 4),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(332),
  [454] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(152),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_call, 7),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixin_call, 7),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 9),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 9),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_statement, 4),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_statement, 4),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 3),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 3),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_definition, 2),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixin_definition, 2),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [541] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_text_repeat1, 2), SHIFT_REPEAT(302),
  [544] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_text_repeat1, 2), SHIFT_REPEAT(123),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 1),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 1),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop, 3),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop, 3),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_statement, 2),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_statement, 2),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 2),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 2),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 3),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_definition, 4),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixin_definition, 4),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_definition, 5),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixin_definition, 5),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_definition, 6),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixin_definition, 6),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_definition, 3),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixin_definition, 3),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_statement, 2),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_statement, 2),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__include_statement, 2),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__include_statement, 2),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 1),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 1),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__include_statement, 3),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__include_statement, 3),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_definition, 7),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixin_definition, 7),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_expansion, 1),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_expansion, 1),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_statement, 4),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_statement, 4),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 2),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 2),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__extends_statement, 2),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__extends_statement, 2),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 2),
  [665] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 2), SHIFT_REPEAT(351),
  [668] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 2), SHIFT_REPEAT(221),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [719] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(308),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [726] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(244),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [731] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(244),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [738] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(246),
  [741] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(246),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mixin_parameters_repeat1, 2),
  [764] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mixin_parameters_repeat1, 2), SHIFT_REPEAT(278),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_parameters, 1),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [781] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(282),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [800] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(143),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixin_parameters, 2),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [811] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(147),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_variable, 1),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_index, 1),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [864] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_source, 1),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_statement, 4),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_statement, 6),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__newline = 0,
  ts_external_token__indent = 1,
  ts_external_token__dedent = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
};

static const bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
  },
  [2] = {
    [ts_external_token__newline] = true,
    [ts_external_token__dedent] = true,
  },
  [3] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
  },
  [4] = {
    [ts_external_token__newline] = true,
  },
  [5] = {
    [ts_external_token__indent] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_pug_external_scanner_create(void);
void tree_sitter_pug_external_scanner_destroy(void *);
bool tree_sitter_pug_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_pug_external_scanner_serialize(void *, char *);
void tree_sitter_pug_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_pug(void) {
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
      tree_sitter_pug_external_scanner_create,
      tree_sitter_pug_external_scanner_destroy,
      tree_sitter_pug_external_scanner_scan,
      tree_sitter_pug_external_scanner_serialize,
      tree_sitter_pug_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
