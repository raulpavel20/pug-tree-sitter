#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 224
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_extends = 1,
  anon_sym_include = 2,
  anon_sym_block = 3,
  anon_sym_EQ = 4,
  anon_sym_if = 5,
  anon_sym_elseif = 6,
  anon_sym_else = 7,
  anon_sym_each = 8,
  anon_sym_COMMA = 9,
  anon_sym_in = 10,
  aux_sym_loop_variable_token1 = 11,
  sym_condition = 12,
  anon_sym_POUND_LBRACE = 13,
  anon_sym_RBRACE = 14,
  sym_expression = 15,
  aux_sym_inline_text_token1 = 16,
  sym_reference = 17,
  sym_tag_name = 18,
  sym_class_or_id = 19,
  anon_sym_LPAREN = 20,
  anon_sym_RPAREN = 21,
  sym_attribute_name = 22,
  anon_sym_DQUOTE = 23,
  aux_sym_quoted_attribute_value_token1 = 24,
  sym_unquoted_attribute_value = 25,
  sym__space = 26,
  sym__newline = 27,
  sym__indent = 28,
  sym__dedent = 29,
  sym_source_file = 30,
  sym_block_expansion = 31,
  sym_extends_statement = 32,
  sym_include_statement = 33,
  sym_block_statement = 34,
  sym_tag = 35,
  sym_conditional = 36,
  sym_if_statement = 37,
  sym_else_if_statement = 38,
  sym_else_statement = 39,
  sym_loop = 40,
  sym_each_statement = 41,
  sym_loop_variable = 42,
  sym_loop_index = 43,
  sym_loop_source = 44,
  sym_interpolation = 45,
  sym_inline_text = 46,
  sym_attributes = 47,
  sym_attribute = 48,
  sym_quoted_attribute_value = 49,
  sym_children = 50,
  sym__children_choice = 51,
  aux_sym_source_file_repeat1 = 52,
  aux_sym_tag_repeat1 = 53,
  aux_sym_conditional_repeat1 = 54,
  aux_sym_inline_text_repeat1 = 55,
  aux_sym_attributes_repeat1 = 56,
  aux_sym_quoted_attribute_value_repeat1 = 57,
  aux_sym_children_repeat1 = 58,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_extends] = "extends",
  [anon_sym_include] = "include",
  [anon_sym_block] = "block",
  [anon_sym_EQ] = "=",
  [anon_sym_if] = "if",
  [anon_sym_elseif] = "else if",
  [anon_sym_else] = "else",
  [anon_sym_each] = "each",
  [anon_sym_COMMA] = ",",
  [anon_sym_in] = "in",
  [aux_sym_loop_variable_token1] = "loop_variable_token1",
  [sym_condition] = "condition",
  [anon_sym_POUND_LBRACE] = "#{",
  [anon_sym_RBRACE] = "}",
  [sym_expression] = "expression",
  [aux_sym_inline_text_token1] = "inline_text_token1",
  [sym_reference] = "reference",
  [sym_tag_name] = "tag_name",
  [sym_class_or_id] = "class_or_id",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_attribute_name] = "attribute_name",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_attribute_value_token1] = "quoted_attribute_value_token1",
  [sym_unquoted_attribute_value] = "unquoted_attribute_value",
  [sym__space] = "_space",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym_source_file] = "source_file",
  [sym_block_expansion] = "block_expansion",
  [sym_extends_statement] = "extends_statement",
  [sym_include_statement] = "include_statement",
  [sym_block_statement] = "block_statement",
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
  [aux_sym_tag_repeat1] = "tag_repeat1",
  [aux_sym_conditional_repeat1] = "conditional_repeat1",
  [aux_sym_inline_text_repeat1] = "inline_text_repeat1",
  [aux_sym_attributes_repeat1] = "attributes_repeat1",
  [aux_sym_quoted_attribute_value_repeat1] = "quoted_attribute_value_repeat1",
  [aux_sym_children_repeat1] = "children_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_extends] = anon_sym_extends,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_block] = anon_sym_block,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_elseif] = anon_sym_elseif,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_each] = anon_sym_each,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_in] = anon_sym_in,
  [aux_sym_loop_variable_token1] = aux_sym_loop_variable_token1,
  [sym_condition] = sym_condition,
  [anon_sym_POUND_LBRACE] = anon_sym_POUND_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_expression] = sym_expression,
  [aux_sym_inline_text_token1] = aux_sym_inline_text_token1,
  [sym_reference] = sym_reference,
  [sym_tag_name] = sym_tag_name,
  [sym_class_or_id] = sym_class_or_id,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_attribute_name] = sym_attribute_name,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_attribute_value_token1] = aux_sym_quoted_attribute_value_token1,
  [sym_unquoted_attribute_value] = sym_unquoted_attribute_value,
  [sym__space] = sym__space,
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym_source_file] = sym_source_file,
  [sym_block_expansion] = sym_block_expansion,
  [sym_extends_statement] = sym_extends_statement,
  [sym_include_statement] = sym_include_statement,
  [sym_block_statement] = sym_block_statement,
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
  [anon_sym_extends] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_block] = {
    .visible = true,
    .named = false,
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
  [anon_sym_COMMA] = {
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
  [anon_sym_RBRACE] = {
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
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
  [sym_block_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym_extends_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_include_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_block_statement] = {
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
  [5] = 4,
  [6] = 6,
  [7] = 3,
  [8] = 2,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 2,
  [15] = 3,
  [16] = 4,
  [17] = 4,
  [18] = 6,
  [19] = 13,
  [20] = 12,
  [21] = 10,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 12,
  [28] = 10,
  [29] = 29,
  [30] = 13,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 24,
  [38] = 38,
  [39] = 22,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 23,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 35,
  [52] = 32,
  [53] = 31,
  [54] = 22,
  [55] = 25,
  [56] = 29,
  [57] = 26,
  [58] = 24,
  [59] = 23,
  [60] = 34,
  [61] = 33,
  [62] = 33,
  [63] = 40,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 43,
  [68] = 68,
  [69] = 34,
  [70] = 70,
  [71] = 38,
  [72] = 72,
  [73] = 35,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 36,
  [78] = 45,
  [79] = 79,
  [80] = 76,
  [81] = 81,
  [82] = 82,
  [83] = 76,
  [84] = 76,
  [85] = 85,
  [86] = 25,
  [87] = 41,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 29,
  [92] = 50,
  [93] = 49,
  [94] = 48,
  [95] = 44,
  [96] = 96,
  [97] = 47,
  [98] = 42,
  [99] = 96,
  [100] = 72,
  [101] = 38,
  [102] = 41,
  [103] = 74,
  [104] = 36,
  [105] = 44,
  [106] = 49,
  [107] = 40,
  [108] = 88,
  [109] = 45,
  [110] = 85,
  [111] = 42,
  [112] = 81,
  [113] = 90,
  [114] = 50,
  [115] = 48,
  [116] = 65,
  [117] = 82,
  [118] = 89,
  [119] = 64,
  [120] = 66,
  [121] = 47,
  [122] = 79,
  [123] = 68,
  [124] = 82,
  [125] = 70,
  [126] = 43,
  [127] = 75,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 89,
  [132] = 132,
  [133] = 82,
  [134] = 75,
  [135] = 135,
  [136] = 70,
  [137] = 79,
  [138] = 85,
  [139] = 139,
  [140] = 66,
  [141] = 65,
  [142] = 81,
  [143] = 64,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 146,
  [148] = 148,
  [149] = 148,
  [150] = 148,
  [151] = 151,
  [152] = 152,
  [153] = 144,
  [154] = 146,
  [155] = 144,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 157,
  [160] = 157,
  [161] = 158,
  [162] = 158,
  [163] = 163,
  [164] = 24,
  [165] = 165,
  [166] = 166,
  [167] = 165,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 174,
  [176] = 176,
  [177] = 176,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 174,
  [183] = 171,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 187,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 189,
  [199] = 199,
  [200] = 199,
  [201] = 201,
  [202] = 201,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 190,
  [207] = 190,
  [208] = 193,
  [209] = 203,
  [210] = 204,
  [211] = 211,
  [212] = 189,
  [213] = 199,
  [214] = 201,
  [215] = 203,
  [216] = 204,
  [217] = 199,
  [218] = 197,
  [219] = 219,
  [220] = 219,
  [221] = 197,
  [222] = 219,
  [223] = 219,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(39);
      if (lookahead == '"') ADVANCE(127);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '(') ADVANCE(124);
      if (lookahead == ')') ADVANCE(125);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == 'b') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == '}') ADVANCE(67);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '#') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(96);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(69);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(127);
      if (lookahead == '#') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(128);
      if (lookahead != 0) ADVANCE(129);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(127);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != ')') ADVANCE(130);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(125);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(9);
      if (lookahead == 'l') ADVANCE(23);
      if (lookahead == 'x') ADVANCE(25);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == 'i') ADVANCE(111);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 15:
      if (lookahead == 'f') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 16:
      if (lookahead == 'f') ADVANCE(53);
      END_STATE();
    case 17:
      if (lookahead == 'h') ADVANCE(58);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == 'k') ADVANCE(45);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 26:
      if (lookahead == '{') ADVANCE(66);
      END_STATE();
    case 27:
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 28:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 29:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 30:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 31:
      if (eof) ADVANCE(39);
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == 'b') ADVANCE(83);
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead == 'i') ADVANCE(80);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 32:
      if (eof) ADVANCE(39);
      if (lookahead == '\n') SKIP(32)
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == 'b') ADVANCE(83);
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == 'i') ADVANCE(80);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 33:
      if (eof) ADVANCE(39);
      if (lookahead == ' ') ADVANCE(131);
      if (lookahead == '#' ||
          lookahead == '.') ADVANCE(30);
      if (lookahead == '(') ADVANCE(124);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == 'b') ADVANCE(114);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 'i') ADVANCE(110);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(37)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 34:
      if (eof) ADVANCE(39);
      if (lookahead == ' ') ADVANCE(131);
      if (lookahead == '#' ||
          lookahead == '.') ADVANCE(30);
      if (lookahead == '(') ADVANCE(124);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == 'b') ADVANCE(114);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(110);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(38)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 35:
      if (eof) ADVANCE(39);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == 'b') ADVANCE(114);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 'i') ADVANCE(110);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 36:
      if (eof) ADVANCE(39);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == 'b') ADVANCE(114);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(110);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(36)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 37:
      if (eof) ADVANCE(39);
      if (lookahead == '#' ||
          lookahead == '.') ADVANCE(30);
      if (lookahead == '(') ADVANCE(124);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == 'b') ADVANCE(114);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 'i') ADVANCE(110);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(37)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 38:
      if (eof) ADVANCE(39);
      if (lookahead == '#' ||
          lookahead == '.') ADVANCE(30);
      if (lookahead == '(') ADVANCE(124);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == 'b') ADVANCE(114);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(110);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(38)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_extends);
      if (lookahead == '-') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_extends);
      if (lookahead == '-') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(97);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '-') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '-') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(97);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_block);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_block);
      if (lookahead == '-') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_block);
      if (lookahead == '-') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(97);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(97);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(97);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(97);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(18);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '-') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(95);
      if (lookahead == '-') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(97);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_each);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_each);
      if (lookahead == '-') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_each);
      if (lookahead == '-') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(97);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_loop_variable_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_condition);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_condition);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_expression);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_expression);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(91);
      if (lookahead == 'a') ADVANCE(72);
      if (lookahead == 'l') ADVANCE(87);
      if (lookahead == 'x') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(97);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(91);
      if (lookahead == 'a') ADVANCE(72);
      if (lookahead == 'x') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(97);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(91);
      if (lookahead == 'c') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(97);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(91);
      if (lookahead == 'c') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(97);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(91);
      if (lookahead == 'c') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(97);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(91);
      if (lookahead == 'd') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(97);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(91);
      if (lookahead == 'd') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(97);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(97);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(97);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(97);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(91);
      if (lookahead == 'f') ADVANCE(52);
      if (lookahead == 'n') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(97);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(91);
      if (lookahead == 'h') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(97);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(91);
      if (lookahead == 'k') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(97);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(91);
      if (lookahead == 'l') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(97);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(91);
      if (lookahead == 'l') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(97);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(91);
      if (lookahead == 'n') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(97);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(97);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(91);
      if (lookahead == 's') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(97);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(91);
      if (lookahead == 's') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(97);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(91);
      if (lookahead == 't') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(97);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(91);
      if (lookahead == 'u') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(97);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(97);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == 'b') ADVANCE(83);
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(97);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == 'b') ADVANCE(83);
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(97);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == 'f') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(97);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == 'i') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(97);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'a') ADVANCE(102);
      if (lookahead == 'l') ADVANCE(119);
      if (lookahead == 'x') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'a') ADVANCE(102);
      if (lookahead == 'x') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'a') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'c') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'c') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'c') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'd') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'd') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'e') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'e') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'e') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(51);
      if (lookahead == 'n') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'h') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'k') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'l') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'l') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'n') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'o') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 's') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 's') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 't') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'u') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_class_or_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_unquoted_attribute_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ')') ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == ' ') ADVANCE(131);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 35},
  [2] = {.lex_state = 34, .external_lex_state = 1},
  [3] = {.lex_state = 34, .external_lex_state = 1},
  [4] = {.lex_state = 36, .external_lex_state = 2},
  [5] = {.lex_state = 36, .external_lex_state = 2},
  [6] = {.lex_state = 36, .external_lex_state = 2},
  [7] = {.lex_state = 33, .external_lex_state = 1},
  [8] = {.lex_state = 33, .external_lex_state = 1},
  [9] = {.lex_state = 35},
  [10] = {.lex_state = 31, .external_lex_state = 1},
  [11] = {.lex_state = 35},
  [12] = {.lex_state = 34, .external_lex_state = 1},
  [13] = {.lex_state = 31, .external_lex_state = 1},
  [14] = {.lex_state = 33, .external_lex_state = 3},
  [15] = {.lex_state = 33, .external_lex_state = 3},
  [16] = {.lex_state = 35, .external_lex_state = 2},
  [17] = {.lex_state = 35, .external_lex_state = 2},
  [18] = {.lex_state = 35, .external_lex_state = 2},
  [19] = {.lex_state = 32, .external_lex_state = 1},
  [20] = {.lex_state = 33, .external_lex_state = 1},
  [21] = {.lex_state = 32, .external_lex_state = 1},
  [22] = {.lex_state = 34, .external_lex_state = 1},
  [23] = {.lex_state = 34, .external_lex_state = 1},
  [24] = {.lex_state = 31, .external_lex_state = 1},
  [25] = {.lex_state = 36, .external_lex_state = 1},
  [26] = {.lex_state = 36, .external_lex_state = 2},
  [27] = {.lex_state = 33, .external_lex_state = 3},
  [28] = {.lex_state = 32, .external_lex_state = 3},
  [29] = {.lex_state = 36, .external_lex_state = 1},
  [30] = {.lex_state = 32, .external_lex_state = 3},
  [31] = {.lex_state = 36, .external_lex_state = 2},
  [32] = {.lex_state = 36, .external_lex_state = 2},
  [33] = {.lex_state = 36, .external_lex_state = 1},
  [34] = {.lex_state = 34, .external_lex_state = 1},
  [35] = {.lex_state = 34, .external_lex_state = 1},
  [36] = {.lex_state = 36, .external_lex_state = 1},
  [37] = {.lex_state = 32, .external_lex_state = 1},
  [38] = {.lex_state = 36, .external_lex_state = 1},
  [39] = {.lex_state = 33, .external_lex_state = 1},
  [40] = {.lex_state = 36, .external_lex_state = 1},
  [41] = {.lex_state = 36, .external_lex_state = 1},
  [42] = {.lex_state = 36, .external_lex_state = 1},
  [43] = {.lex_state = 36, .external_lex_state = 1},
  [44] = {.lex_state = 36, .external_lex_state = 1},
  [45] = {.lex_state = 36, .external_lex_state = 1},
  [46] = {.lex_state = 33, .external_lex_state = 1},
  [47] = {.lex_state = 36, .external_lex_state = 1},
  [48] = {.lex_state = 36, .external_lex_state = 1},
  [49] = {.lex_state = 36, .external_lex_state = 1},
  [50] = {.lex_state = 36, .external_lex_state = 1},
  [51] = {.lex_state = 33, .external_lex_state = 1},
  [52] = {.lex_state = 36},
  [53] = {.lex_state = 36},
  [54] = {.lex_state = 33, .external_lex_state = 3},
  [55] = {.lex_state = 35, .external_lex_state = 1},
  [56] = {.lex_state = 35, .external_lex_state = 1},
  [57] = {.lex_state = 36},
  [58] = {.lex_state = 32, .external_lex_state = 3},
  [59] = {.lex_state = 33, .external_lex_state = 3},
  [60] = {.lex_state = 33, .external_lex_state = 1},
  [61] = {.lex_state = 35, .external_lex_state = 1},
  [62] = {.lex_state = 35, .external_lex_state = 3},
  [63] = {.lex_state = 35, .external_lex_state = 1},
  [64] = {.lex_state = 36, .external_lex_state = 2},
  [65] = {.lex_state = 36, .external_lex_state = 2},
  [66] = {.lex_state = 36, .external_lex_state = 2},
  [67] = {.lex_state = 35, .external_lex_state = 1},
  [68] = {.lex_state = 36, .external_lex_state = 2},
  [69] = {.lex_state = 33, .external_lex_state = 3},
  [70] = {.lex_state = 36, .external_lex_state = 2},
  [71] = {.lex_state = 35, .external_lex_state = 1},
  [72] = {.lex_state = 36, .external_lex_state = 2},
  [73] = {.lex_state = 33, .external_lex_state = 3},
  [74] = {.lex_state = 36, .external_lex_state = 2},
  [75] = {.lex_state = 36, .external_lex_state = 2},
  [76] = {.lex_state = 14, .external_lex_state = 4},
  [77] = {.lex_state = 35, .external_lex_state = 1},
  [78] = {.lex_state = 35, .external_lex_state = 1},
  [79] = {.lex_state = 36, .external_lex_state = 2},
  [80] = {.lex_state = 14, .external_lex_state = 4},
  [81] = {.lex_state = 36, .external_lex_state = 2},
  [82] = {.lex_state = 36, .external_lex_state = 2},
  [83] = {.lex_state = 14, .external_lex_state = 4},
  [84] = {.lex_state = 14, .external_lex_state = 4},
  [85] = {.lex_state = 36, .external_lex_state = 2},
  [86] = {.lex_state = 35, .external_lex_state = 3},
  [87] = {.lex_state = 35, .external_lex_state = 1},
  [88] = {.lex_state = 36, .external_lex_state = 2},
  [89] = {.lex_state = 36, .external_lex_state = 2},
  [90] = {.lex_state = 36, .external_lex_state = 2},
  [91] = {.lex_state = 35, .external_lex_state = 3},
  [92] = {.lex_state = 35, .external_lex_state = 1},
  [93] = {.lex_state = 35, .external_lex_state = 1},
  [94] = {.lex_state = 35, .external_lex_state = 1},
  [95] = {.lex_state = 35, .external_lex_state = 1},
  [96] = {.lex_state = 36, .external_lex_state = 2},
  [97] = {.lex_state = 35, .external_lex_state = 1},
  [98] = {.lex_state = 35, .external_lex_state = 1},
  [99] = {.lex_state = 36, .external_lex_state = 4},
  [100] = {.lex_state = 36, .external_lex_state = 4},
  [101] = {.lex_state = 35, .external_lex_state = 3},
  [102] = {.lex_state = 35, .external_lex_state = 3},
  [103] = {.lex_state = 36, .external_lex_state = 4},
  [104] = {.lex_state = 35, .external_lex_state = 3},
  [105] = {.lex_state = 35, .external_lex_state = 3},
  [106] = {.lex_state = 35, .external_lex_state = 3},
  [107] = {.lex_state = 35, .external_lex_state = 5},
  [108] = {.lex_state = 36},
  [109] = {.lex_state = 35, .external_lex_state = 5},
  [110] = {.lex_state = 35, .external_lex_state = 2},
  [111] = {.lex_state = 35, .external_lex_state = 5},
  [112] = {.lex_state = 35, .external_lex_state = 2},
  [113] = {.lex_state = 36},
  [114] = {.lex_state = 35, .external_lex_state = 5},
  [115] = {.lex_state = 35, .external_lex_state = 5},
  [116] = {.lex_state = 35, .external_lex_state = 2},
  [117] = {.lex_state = 35, .external_lex_state = 2},
  [118] = {.lex_state = 35, .external_lex_state = 2},
  [119] = {.lex_state = 35, .external_lex_state = 2},
  [120] = {.lex_state = 35, .external_lex_state = 2},
  [121] = {.lex_state = 35, .external_lex_state = 5},
  [122] = {.lex_state = 35, .external_lex_state = 2},
  [123] = {.lex_state = 36},
  [124] = {.lex_state = 36},
  [125] = {.lex_state = 35, .external_lex_state = 2},
  [126] = {.lex_state = 35, .external_lex_state = 5},
  [127] = {.lex_state = 35, .external_lex_state = 2},
  [128] = {.lex_state = 35, .external_lex_state = 4},
  [129] = {.lex_state = 35, .external_lex_state = 4},
  [130] = {.lex_state = 35},
  [131] = {.lex_state = 35},
  [132] = {.lex_state = 35},
  [133] = {.lex_state = 35},
  [134] = {.lex_state = 35},
  [135] = {.lex_state = 35},
  [136] = {.lex_state = 35},
  [137] = {.lex_state = 35},
  [138] = {.lex_state = 35},
  [139] = {.lex_state = 35},
  [140] = {.lex_state = 35},
  [141] = {.lex_state = 35},
  [142] = {.lex_state = 35},
  [143] = {.lex_state = 35},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 6},
  [157] = {.lex_state = 6},
  [158] = {.lex_state = 6},
  [159] = {.lex_state = 6},
  [160] = {.lex_state = 6},
  [161] = {.lex_state = 6},
  [162] = {.lex_state = 6},
  [163] = {.lex_state = 5},
  [164] = {.lex_state = 4},
  [165] = {.lex_state = 0, .external_lex_state = 5},
  [166] = {.lex_state = 28},
  [167] = {.lex_state = 0, .external_lex_state = 5},
  [168] = {.lex_state = 6},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0, .external_lex_state = 5},
  [172] = {.lex_state = 6},
  [173] = {.lex_state = 6},
  [174] = {.lex_state = 0, .external_lex_state = 5},
  [175] = {.lex_state = 0, .external_lex_state = 5},
  [176] = {.lex_state = 0, .external_lex_state = 5},
  [177] = {.lex_state = 0, .external_lex_state = 5},
  [178] = {.lex_state = 0, .external_lex_state = 5},
  [179] = {.lex_state = 28},
  [180] = {.lex_state = 28},
  [181] = {.lex_state = 28},
  [182] = {.lex_state = 0, .external_lex_state = 5},
  [183] = {.lex_state = 0, .external_lex_state = 5},
  [184] = {.lex_state = 0, .external_lex_state = 4},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 2},
  [188] = {.lex_state = 2},
  [189] = {.lex_state = 3},
  [190] = {.lex_state = 3},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0, .external_lex_state = 4},
  [193] = {.lex_state = 2},
  [194] = {.lex_state = 0, .external_lex_state = 4},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 29},
  [197] = {.lex_state = 0, .external_lex_state = 4},
  [198] = {.lex_state = 3},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 3},
  [202] = {.lex_state = 3},
  [203] = {.lex_state = 3},
  [204] = {.lex_state = 3},
  [205] = {.lex_state = 29},
  [206] = {.lex_state = 3},
  [207] = {.lex_state = 3},
  [208] = {.lex_state = 2},
  [209] = {.lex_state = 3},
  [210] = {.lex_state = 3},
  [211] = {.lex_state = 29},
  [212] = {.lex_state = 3},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 3},
  [215] = {.lex_state = 3},
  [216] = {.lex_state = 3},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0, .external_lex_state = 4},
  [219] = {.lex_state = 3},
  [220] = {.lex_state = 3},
  [221] = {.lex_state = 0, .external_lex_state = 4},
  [222] = {.lex_state = 3},
  [223] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_extends] = ACTIONS(1),
    [anon_sym_block] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_elseif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_each] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_POUND_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_class_or_id] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(191),
    [sym_block_expansion] = STATE(9),
    [sym_extends_statement] = STATE(130),
    [sym_include_statement] = STATE(130),
    [sym_block_statement] = STATE(130),
    [sym_tag] = STATE(9),
    [sym_conditional] = STATE(9),
    [sym_if_statement] = STATE(52),
    [sym_loop] = STATE(9),
    [sym_each_statement] = STATE(197),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_extends] = ACTIONS(5),
    [anon_sym_include] = ACTIONS(7),
    [anon_sym_block] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_each] = ACTIONS(13),
    [sym_tag_name] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(21), 1,
      anon_sym_EQ,
    ACTIONS(23), 1,
      sym_class_or_id,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym__space,
    ACTIONS(29), 1,
      sym__newline,
    ACTIONS(31), 1,
      sym__indent,
    STATE(12), 1,
      aux_sym_tag_repeat1,
    STATE(22), 1,
      sym_attributes,
    STATE(85), 1,
      sym_children,
    ACTIONS(17), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(19), 8,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [42] = 11,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      sym__indent,
    ACTIONS(37), 1,
      anon_sym_EQ,
    ACTIONS(39), 1,
      sym_class_or_id,
    ACTIONS(41), 1,
      sym__space,
    ACTIONS(43), 1,
      sym__newline,
    STATE(2), 1,
      aux_sym_tag_repeat1,
    STATE(23), 1,
      sym_attributes,
    STATE(89), 1,
      sym_children,
    ACTIONS(33), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(35), 8,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [84] = 10,
    ACTIONS(13), 1,
      anon_sym_each,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(51), 1,
      sym_tag_name,
    ACTIONS(53), 1,
      sym__newline,
    ACTIONS(55), 1,
      sym__dedent,
    STATE(32), 1,
      sym_if_statement,
    STATE(221), 1,
      sym_each_statement,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(47), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_else,
    STATE(6), 5,
      sym_tag,
      sym_conditional,
      sym_loop,
      sym__children_choice,
      aux_sym_children_repeat1,
  [123] = 10,
    ACTIONS(13), 1,
      anon_sym_each,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(51), 1,
      sym_tag_name,
    ACTIONS(53), 1,
      sym__newline,
    ACTIONS(57), 1,
      sym__dedent,
    STATE(32), 1,
      sym_if_statement,
    STATE(221), 1,
      sym_each_statement,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(47), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_else,
    STATE(6), 5,
      sym_tag,
      sym_conditional,
      sym_loop,
      sym__children_choice,
      aux_sym_children_repeat1,
  [162] = 9,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(66), 1,
      anon_sym_each,
    ACTIONS(69), 1,
      sym_tag_name,
    ACTIONS(72), 1,
      sym__newline,
    STATE(32), 1,
      sym_if_statement,
    STATE(221), 1,
      sym_each_statement,
    ACTIONS(59), 3,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(61), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_else,
    STATE(6), 5,
      sym_tag,
      sym_conditional,
      sym_loop,
      sym__children_choice,
      aux_sym_children_repeat1,
  [199] = 11,
    ACTIONS(75), 1,
      anon_sym_EQ,
    ACTIONS(77), 1,
      sym_class_or_id,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      sym__space,
    ACTIONS(83), 1,
      sym__newline,
    ACTIONS(85), 1,
      sym__indent,
    STATE(8), 1,
      aux_sym_tag_repeat1,
    STATE(46), 1,
      sym_attributes,
    STATE(118), 1,
      sym_children,
    ACTIONS(33), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(35), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [239] = 11,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      sym__indent,
    ACTIONS(87), 1,
      anon_sym_EQ,
    ACTIONS(89), 1,
      sym_class_or_id,
    ACTIONS(91), 1,
      sym__space,
    ACTIONS(93), 1,
      sym__newline,
    STATE(20), 1,
      aux_sym_tag_repeat1,
    STATE(39), 1,
      sym_attributes,
    STATE(110), 1,
      sym_children,
    ACTIONS(17), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(19), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [279] = 11,
    ACTIONS(5), 1,
      anon_sym_extends,
    ACTIONS(7), 1,
      anon_sym_include,
    ACTIONS(9), 1,
      anon_sym_block,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_each,
    ACTIONS(15), 1,
      sym_tag_name,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    STATE(52), 1,
      sym_if_statement,
    STATE(197), 1,
      sym_each_statement,
    STATE(130), 3,
      sym_extends_statement,
      sym_include_statement,
      sym_block_statement,
    STATE(11), 5,
      sym_block_expansion,
      sym_tag,
      sym_conditional,
      sym_loop,
      aux_sym_source_file_repeat1,
  [319] = 5,
    ACTIONS(101), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(104), 1,
      aux_sym_inline_text_token1,
    STATE(10), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
    ACTIONS(97), 4,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(99), 9,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [347] = 11,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 1,
      anon_sym_extends,
    ACTIONS(112), 1,
      anon_sym_include,
    ACTIONS(115), 1,
      anon_sym_block,
    ACTIONS(118), 1,
      anon_sym_if,
    ACTIONS(121), 1,
      anon_sym_each,
    ACTIONS(124), 1,
      sym_tag_name,
    STATE(52), 1,
      sym_if_statement,
    STATE(197), 1,
      sym_each_statement,
    STATE(130), 3,
      sym_extends_statement,
      sym_include_statement,
      sym_block_statement,
    STATE(11), 5,
      sym_block_expansion,
      sym_tag,
      sym_conditional,
      sym_loop,
      aux_sym_source_file_repeat1,
  [387] = 4,
    ACTIONS(131), 1,
      sym_class_or_id,
    STATE(12), 1,
      aux_sym_tag_repeat1,
    ACTIONS(127), 5,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
      sym__space,
    ACTIONS(129), 10,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
      anon_sym_LPAREN,
  [413] = 5,
    ACTIONS(138), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(140), 1,
      aux_sym_inline_text_token1,
    STATE(10), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
    ACTIONS(134), 4,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(136), 9,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [441] = 11,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(142), 1,
      anon_sym_EQ,
    ACTIONS(144), 1,
      sym_class_or_id,
    ACTIONS(146), 1,
      anon_sym_LPAREN,
    ACTIONS(148), 1,
      sym__space,
    ACTIONS(150), 1,
      sym__newline,
    ACTIONS(152), 1,
      sym__indent,
    STATE(27), 1,
      aux_sym_tag_repeat1,
    STATE(54), 1,
      sym_attributes,
    STATE(138), 1,
      sym_children,
    ACTIONS(19), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [480] = 11,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(146), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 1,
      sym__indent,
    ACTIONS(154), 1,
      anon_sym_EQ,
    ACTIONS(156), 1,
      sym_class_or_id,
    ACTIONS(158), 1,
      sym__space,
    ACTIONS(160), 1,
      sym__newline,
    STATE(14), 1,
      aux_sym_tag_repeat1,
    STATE(59), 1,
      sym_attributes,
    STATE(131), 1,
      sym_children,
    ACTIONS(35), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [519] = 10,
    ACTIONS(13), 1,
      anon_sym_each,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(162), 1,
      sym_tag_name,
    ACTIONS(164), 1,
      sym__newline,
    ACTIONS(166), 1,
      sym__dedent,
    STATE(32), 1,
      sym_if_statement,
    STATE(218), 1,
      sym_each_statement,
    ACTIONS(47), 3,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
    STATE(18), 5,
      sym_tag,
      sym_conditional,
      sym_loop,
      sym__children_choice,
      aux_sym_children_repeat1,
  [556] = 10,
    ACTIONS(13), 1,
      anon_sym_each,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(162), 1,
      sym_tag_name,
    ACTIONS(164), 1,
      sym__newline,
    ACTIONS(168), 1,
      sym__dedent,
    STATE(32), 1,
      sym_if_statement,
    STATE(218), 1,
      sym_each_statement,
    ACTIONS(47), 3,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
    STATE(18), 5,
      sym_tag,
      sym_conditional,
      sym_loop,
      sym__children_choice,
      aux_sym_children_repeat1,
  [593] = 9,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(66), 1,
      anon_sym_each,
    ACTIONS(170), 1,
      sym_tag_name,
    ACTIONS(173), 1,
      sym__newline,
    STATE(32), 1,
      sym_if_statement,
    STATE(218), 1,
      sym_each_statement,
    ACTIONS(59), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(61), 3,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
    STATE(18), 5,
      sym_tag,
      sym_conditional,
      sym_loop,
      sym__children_choice,
      aux_sym_children_repeat1,
  [628] = 5,
    ACTIONS(176), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(178), 1,
      aux_sym_inline_text_token1,
    STATE(21), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
    ACTIONS(134), 4,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(136), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [654] = 4,
    ACTIONS(180), 1,
      sym_class_or_id,
    STATE(20), 1,
      aux_sym_tag_repeat1,
    ACTIONS(127), 5,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
      sym__space,
    ACTIONS(129), 8,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
      anon_sym_LPAREN,
  [678] = 5,
    ACTIONS(183), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(186), 1,
      aux_sym_inline_text_token1,
    STATE(21), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
    ACTIONS(97), 4,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(99), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [704] = 7,
    ACTIONS(31), 1,
      sym__indent,
    ACTIONS(193), 1,
      anon_sym_EQ,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(197), 1,
      sym__newline,
    STATE(75), 1,
      sym_children,
    ACTIONS(189), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(191), 8,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [734] = 7,
    ACTIONS(21), 1,
      anon_sym_EQ,
    ACTIONS(27), 1,
      sym__space,
    ACTIONS(29), 1,
      sym__newline,
    ACTIONS(31), 1,
      sym__indent,
    STATE(85), 1,
      sym_children,
    ACTIONS(17), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(19), 8,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [764] = 2,
    ACTIONS(199), 4,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(201), 11,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_each,
      anon_sym_POUND_LBRACE,
      aux_sym_inline_text_token1,
      sym_tag_name,
  [784] = 6,
    ACTIONS(31), 1,
      sym__indent,
    ACTIONS(207), 1,
      anon_sym_EQ,
    ACTIONS(209), 1,
      sym__newline,
    STATE(66), 1,
      sym_children,
    ACTIONS(203), 3,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(205), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [811] = 5,
    ACTIONS(215), 1,
      anon_sym_elseif,
    ACTIONS(218), 1,
      anon_sym_else,
    ACTIONS(211), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    STATE(26), 3,
      sym_else_if_statement,
      sym_else_statement,
      aux_sym_conditional_repeat1,
    ACTIONS(213), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [836] = 4,
    ACTIONS(221), 1,
      sym_class_or_id,
    STATE(27), 1,
      aux_sym_tag_repeat1,
    ACTIONS(127), 4,
      sym__newline,
      sym__indent,
      ts_builtin_sym_end,
      sym__space,
    ACTIONS(129), 8,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
      anon_sym_LPAREN,
  [859] = 5,
    ACTIONS(224), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(227), 1,
      aux_sym_inline_text_token1,
    STATE(28), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
    ACTIONS(97), 3,
      sym__newline,
      sym__indent,
      ts_builtin_sym_end,
    ACTIONS(99), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [884] = 6,
    ACTIONS(31), 1,
      sym__indent,
    ACTIONS(197), 1,
      sym__newline,
    ACTIONS(230), 1,
      anon_sym_EQ,
    STATE(75), 1,
      sym_children,
    ACTIONS(189), 3,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(191), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [911] = 5,
    ACTIONS(232), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(234), 1,
      aux_sym_inline_text_token1,
    STATE(28), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
    ACTIONS(134), 3,
      sym__newline,
      sym__indent,
      ts_builtin_sym_end,
    ACTIONS(136), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [936] = 5,
    ACTIONS(240), 1,
      anon_sym_elseif,
    ACTIONS(242), 1,
      anon_sym_else,
    ACTIONS(236), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    STATE(26), 3,
      sym_else_if_statement,
      sym_else_statement,
      aux_sym_conditional_repeat1,
    ACTIONS(238), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [961] = 5,
    ACTIONS(240), 1,
      anon_sym_elseif,
    ACTIONS(242), 1,
      anon_sym_else,
    ACTIONS(244), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    STATE(31), 3,
      sym_else_if_statement,
      sym_else_statement,
      aux_sym_conditional_repeat1,
    ACTIONS(246), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [986] = 6,
    ACTIONS(31), 1,
      sym__indent,
    ACTIONS(252), 1,
      anon_sym_EQ,
    ACTIONS(254), 1,
      sym__newline,
    STATE(70), 1,
      sym_children,
    ACTIONS(248), 3,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(250), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [1013] = 2,
    ACTIONS(256), 5,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
      sym__space,
    ACTIONS(258), 9,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [1032] = 2,
    ACTIONS(260), 5,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
      sym__space,
    ACTIONS(262), 9,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [1051] = 5,
    ACTIONS(31), 1,
      sym__indent,
    ACTIONS(209), 1,
      sym__newline,
    STATE(66), 1,
      sym_children,
    ACTIONS(203), 3,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(205), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [1075] = 2,
    ACTIONS(199), 4,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(201), 9,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_each,
      anon_sym_POUND_LBRACE,
      aux_sym_inline_text_token1,
      sym_tag_name,
  [1093] = 5,
    ACTIONS(31), 1,
      sym__indent,
    ACTIONS(254), 1,
      sym__newline,
    STATE(70), 1,
      sym_children,
    ACTIONS(248), 3,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(250), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [1117] = 7,
    ACTIONS(85), 1,
      sym__indent,
    ACTIONS(264), 1,
      anon_sym_EQ,
    ACTIONS(266), 1,
      sym__space,
    ACTIONS(268), 1,
      sym__newline,
    STATE(127), 1,
      sym_children,
    ACTIONS(189), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(191), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [1145] = 4,
    ACTIONS(31), 1,
      sym__indent,
    STATE(66), 1,
      sym_children,
    ACTIONS(203), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(205), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [1167] = 5,
    ACTIONS(31), 1,
      sym__indent,
    ACTIONS(197), 1,
      sym__newline,
    STATE(75), 1,
      sym_children,
    ACTIONS(189), 3,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(191), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [1191] = 4,
    ACTIONS(31), 1,
      sym__indent,
    STATE(65), 1,
      sym_children,
    ACTIONS(270), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(272), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [1213] = 4,
    ACTIONS(31), 1,
      sym__indent,
    STATE(70), 1,
      sym_children,
    ACTIONS(248), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(250), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [1235] = 5,
    ACTIONS(31), 1,
      sym__indent,
    ACTIONS(274), 1,
      sym__newline,
    STATE(65), 1,
      sym_children,
    ACTIONS(270), 3,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(272), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [1259] = 4,
    ACTIONS(31), 1,
      sym__indent,
    STATE(75), 1,
      sym_children,
    ACTIONS(189), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(191), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [1281] = 7,
    ACTIONS(85), 1,
      sym__indent,
    ACTIONS(87), 1,
      anon_sym_EQ,
    ACTIONS(91), 1,
      sym__space,
    ACTIONS(93), 1,
      sym__newline,
    STATE(110), 1,
      sym_children,
    ACTIONS(17), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(19), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [1309] = 4,
    ACTIONS(31), 1,
      sym__indent,
    STATE(85), 1,
      sym_children,
    ACTIONS(17), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(19), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [1331] = 4,
    ACTIONS(31), 1,
      sym__indent,
    STATE(64), 1,
      sym_children,
    ACTIONS(276), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(278), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [1353] = 5,
    ACTIONS(31), 1,
      sym__indent,
    ACTIONS(280), 1,
      sym__newline,
    STATE(64), 1,
      sym_children,
    ACTIONS(276), 3,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(278), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [1377] = 4,
    ACTIONS(31), 1,
      sym__indent,
    STATE(81), 1,
      sym_children,
    ACTIONS(282), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(284), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [1399] = 2,
    ACTIONS(260), 5,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
      sym__space,
    ACTIONS(262), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [1416] = 5,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
    ACTIONS(286), 1,
      anon_sym_elseif,
    ACTIONS(288), 1,
      anon_sym_else,
    STATE(53), 3,
      sym_else_if_statement,
      sym_else_statement,
      aux_sym_conditional_repeat1,
    ACTIONS(246), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [1439] = 5,
    ACTIONS(236), 1,
      ts_builtin_sym_end,
    ACTIONS(286), 1,
      anon_sym_elseif,
    ACTIONS(288), 1,
      anon_sym_else,
    STATE(57), 3,
      sym_else_if_statement,
      sym_else_statement,
      aux_sym_conditional_repeat1,
    ACTIONS(238), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [1462] = 7,
    ACTIONS(152), 1,
      sym__indent,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    ACTIONS(290), 1,
      anon_sym_EQ,
    ACTIONS(292), 1,
      sym__space,
    ACTIONS(294), 1,
      sym__newline,
    STATE(134), 1,
      sym_children,
    ACTIONS(191), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [1489] = 6,
    ACTIONS(85), 1,
      sym__indent,
    ACTIONS(296), 1,
      anon_sym_EQ,
    ACTIONS(298), 1,
      sym__newline,
    STATE(120), 1,
      sym_children,
    ACTIONS(203), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(205), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [1514] = 6,
    ACTIONS(85), 1,
      sym__indent,
    ACTIONS(268), 1,
      sym__newline,
    ACTIONS(300), 1,
      anon_sym_EQ,
    STATE(127), 1,
      sym_children,
    ACTIONS(189), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(191), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [1539] = 5,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    ACTIONS(302), 1,
      anon_sym_elseif,
    ACTIONS(305), 1,
      anon_sym_else,
    STATE(57), 3,
      sym_else_if_statement,
      sym_else_statement,
      aux_sym_conditional_repeat1,
    ACTIONS(213), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [1562] = 2,
    ACTIONS(199), 3,
      sym__newline,
      sym__indent,
      ts_builtin_sym_end,
    ACTIONS(201), 9,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_each,
      anon_sym_POUND_LBRACE,
      aux_sym_inline_text_token1,
      sym_tag_name,
  [1579] = 7,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(142), 1,
      anon_sym_EQ,
    ACTIONS(148), 1,
      sym__space,
    ACTIONS(150), 1,
      sym__newline,
    ACTIONS(152), 1,
      sym__indent,
    STATE(138), 1,
      sym_children,
    ACTIONS(19), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [1606] = 2,
    ACTIONS(256), 5,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
      sym__space,
    ACTIONS(258), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [1623] = 6,
    ACTIONS(85), 1,
      sym__indent,
    ACTIONS(308), 1,
      anon_sym_EQ,
    ACTIONS(310), 1,
      sym__newline,
    STATE(125), 1,
      sym_children,
    ACTIONS(248), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(250), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [1648] = 6,
    ACTIONS(152), 1,
      sym__indent,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    ACTIONS(312), 1,
      anon_sym_EQ,
    ACTIONS(314), 1,
      sym__newline,
    STATE(136), 1,
      sym_children,
    ACTIONS(250), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [1672] = 4,
    ACTIONS(85), 1,
      sym__indent,
    STATE(120), 1,
      sym_children,
    ACTIONS(203), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(205), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [1692] = 2,
    ACTIONS(282), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(284), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [1708] = 2,
    ACTIONS(276), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(278), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [1724] = 2,
    ACTIONS(270), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(272), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [1740] = 4,
    ACTIONS(85), 1,
      sym__indent,
    STATE(125), 1,
      sym_children,
    ACTIONS(248), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(250), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [1760] = 2,
    ACTIONS(316), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(318), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [1776] = 2,
    ACTIONS(256), 4,
      sym__newline,
      sym__indent,
      ts_builtin_sym_end,
      sym__space,
    ACTIONS(258), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [1792] = 2,
    ACTIONS(203), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(205), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [1808] = 5,
    ACTIONS(85), 1,
      sym__indent,
    ACTIONS(310), 1,
      sym__newline,
    STATE(125), 1,
      sym_children,
    ACTIONS(248), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(250), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [1830] = 3,
    ACTIONS(324), 1,
      sym__newline,
    ACTIONS(320), 3,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(322), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [1848] = 2,
    ACTIONS(260), 4,
      sym__newline,
      sym__indent,
      ts_builtin_sym_end,
      sym__space,
    ACTIONS(262), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [1864] = 3,
    ACTIONS(330), 1,
      sym__newline,
    ACTIONS(326), 3,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(328), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [1882] = 2,
    ACTIONS(248), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(250), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [1898] = 7,
    ACTIONS(13), 1,
      anon_sym_each,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(162), 1,
      sym_tag_name,
    ACTIONS(332), 1,
      sym__newline,
    STATE(32), 1,
      sym_if_statement,
    STATE(218), 1,
      sym_each_statement,
    STATE(16), 5,
      sym_tag,
      sym_conditional,
      sym_loop,
      sym__children_choice,
      aux_sym_children_repeat1,
  [1924] = 5,
    ACTIONS(85), 1,
      sym__indent,
    ACTIONS(298), 1,
      sym__newline,
    STATE(120), 1,
      sym_children,
    ACTIONS(203), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(205), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [1946] = 4,
    ACTIONS(85), 1,
      sym__indent,
    STATE(127), 1,
      sym_children,
    ACTIONS(189), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(191), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [1966] = 2,
    ACTIONS(334), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(336), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [1982] = 7,
    ACTIONS(13), 1,
      anon_sym_each,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(162), 1,
      sym_tag_name,
    ACTIONS(338), 1,
      sym__newline,
    STATE(32), 1,
      sym_if_statement,
    STATE(218), 1,
      sym_each_statement,
    STATE(17), 5,
      sym_tag,
      sym_conditional,
      sym_loop,
      sym__children_choice,
      aux_sym_children_repeat1,
  [2008] = 2,
    ACTIONS(340), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(342), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [2024] = 2,
    ACTIONS(344), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(346), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [2040] = 7,
    ACTIONS(13), 1,
      anon_sym_each,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(51), 1,
      sym_tag_name,
    ACTIONS(348), 1,
      sym__newline,
    STATE(32), 1,
      sym_if_statement,
    STATE(221), 1,
      sym_each_statement,
    STATE(4), 5,
      sym_tag,
      sym_conditional,
      sym_loop,
      sym__children_choice,
      aux_sym_children_repeat1,
  [2066] = 7,
    ACTIONS(13), 1,
      anon_sym_each,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(51), 1,
      sym_tag_name,
    ACTIONS(350), 1,
      sym__newline,
    STATE(32), 1,
      sym_if_statement,
    STATE(221), 1,
      sym_each_statement,
    STATE(5), 5,
      sym_tag,
      sym_conditional,
      sym_loop,
      sym__children_choice,
      aux_sym_children_repeat1,
  [2092] = 2,
    ACTIONS(189), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(191), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [2108] = 6,
    ACTIONS(152), 1,
      sym__indent,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    ACTIONS(352), 1,
      anon_sym_EQ,
    ACTIONS(354), 1,
      sym__newline,
    STATE(140), 1,
      sym_children,
    ACTIONS(205), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2132] = 5,
    ACTIONS(85), 1,
      sym__indent,
    ACTIONS(268), 1,
      sym__newline,
    STATE(127), 1,
      sym_children,
    ACTIONS(189), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(191), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2154] = 2,
    ACTIONS(356), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(358), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [2170] = 2,
    ACTIONS(17), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(19), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [2186] = 2,
    ACTIONS(360), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(362), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [2202] = 6,
    ACTIONS(152), 1,
      sym__indent,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    ACTIONS(294), 1,
      sym__newline,
    ACTIONS(364), 1,
      anon_sym_EQ,
    STATE(134), 1,
      sym_children,
    ACTIONS(191), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2226] = 4,
    ACTIONS(85), 1,
      sym__indent,
    STATE(112), 1,
      sym_children,
    ACTIONS(282), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(284), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2246] = 5,
    ACTIONS(85), 1,
      sym__indent,
    ACTIONS(366), 1,
      sym__newline,
    STATE(119), 1,
      sym_children,
    ACTIONS(276), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(278), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2268] = 4,
    ACTIONS(85), 1,
      sym__indent,
    STATE(119), 1,
      sym_children,
    ACTIONS(276), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(278), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2288] = 5,
    ACTIONS(85), 1,
      sym__indent,
    ACTIONS(368), 1,
      sym__newline,
    STATE(116), 1,
      sym_children,
    ACTIONS(270), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(272), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2310] = 3,
    ACTIONS(374), 1,
      sym__newline,
    ACTIONS(370), 3,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(372), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [2328] = 4,
    ACTIONS(85), 1,
      sym__indent,
    STATE(110), 1,
      sym_children,
    ACTIONS(17), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(19), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2348] = 4,
    ACTIONS(85), 1,
      sym__indent,
    STATE(116), 1,
      sym_children,
    ACTIONS(270), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(272), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2368] = 3,
    ACTIONS(376), 1,
      sym__newline,
    ACTIONS(370), 2,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(372), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [2385] = 3,
    ACTIONS(378), 1,
      sym__newline,
    ACTIONS(320), 2,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(322), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [2402] = 5,
    ACTIONS(152), 1,
      sym__indent,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    ACTIONS(314), 1,
      sym__newline,
    STATE(136), 1,
      sym_children,
    ACTIONS(250), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2423] = 5,
    ACTIONS(152), 1,
      sym__indent,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    ACTIONS(294), 1,
      sym__newline,
    STATE(134), 1,
      sym_children,
    ACTIONS(191), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2444] = 3,
    ACTIONS(380), 1,
      sym__newline,
    ACTIONS(326), 2,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(328), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [2461] = 5,
    ACTIONS(152), 1,
      sym__indent,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    ACTIONS(354), 1,
      sym__newline,
    STATE(140), 1,
      sym_children,
    ACTIONS(205), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2482] = 5,
    ACTIONS(152), 1,
      sym__indent,
    ACTIONS(270), 1,
      ts_builtin_sym_end,
    ACTIONS(382), 1,
      sym__newline,
    STATE(141), 1,
      sym_children,
    ACTIONS(272), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2503] = 5,
    ACTIONS(152), 1,
      sym__indent,
    ACTIONS(276), 1,
      ts_builtin_sym_end,
    ACTIONS(384), 1,
      sym__newline,
    STATE(143), 1,
      sym_children,
    ACTIONS(278), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2524] = 4,
    ACTIONS(152), 1,
      sym__indent,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    STATE(140), 1,
      sym_children,
    ACTIONS(205), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2542] = 2,
    ACTIONS(356), 2,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(358), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [2556] = 4,
    ACTIONS(152), 1,
      sym__indent,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    STATE(134), 1,
      sym_children,
    ACTIONS(191), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2574] = 2,
    ACTIONS(189), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(191), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2588] = 4,
    ACTIONS(152), 1,
      sym__indent,
    ACTIONS(270), 1,
      ts_builtin_sym_end,
    STATE(141), 1,
      sym_children,
    ACTIONS(272), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2606] = 2,
    ACTIONS(340), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(342), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2620] = 2,
    ACTIONS(360), 2,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(362), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [2634] = 4,
    ACTIONS(152), 1,
      sym__indent,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
    STATE(142), 1,
      sym_children,
    ACTIONS(284), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2652] = 4,
    ACTIONS(152), 1,
      sym__indent,
    ACTIONS(276), 1,
      ts_builtin_sym_end,
    STATE(143), 1,
      sym_children,
    ACTIONS(278), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2670] = 2,
    ACTIONS(276), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(278), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2684] = 2,
    ACTIONS(344), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(346), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2698] = 2,
    ACTIONS(17), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(19), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2712] = 2,
    ACTIONS(282), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(284), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2726] = 2,
    ACTIONS(270), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(272), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2740] = 4,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(152), 1,
      sym__indent,
    STATE(138), 1,
      sym_children,
    ACTIONS(19), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2758] = 2,
    ACTIONS(334), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(336), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2772] = 2,
    ACTIONS(316), 2,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(318), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [2786] = 2,
    ACTIONS(344), 2,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(346), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      anon_sym_each,
      sym_tag_name,
  [2800] = 2,
    ACTIONS(203), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(205), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2814] = 4,
    ACTIONS(152), 1,
      sym__indent,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    STATE(136), 1,
      sym_children,
    ACTIONS(250), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2832] = 2,
    ACTIONS(248), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(250), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2846] = 3,
    ACTIONS(386), 1,
      ts_builtin_sym_end,
    ACTIONS(390), 1,
      sym__newline,
    ACTIONS(388), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2861] = 3,
    ACTIONS(392), 1,
      ts_builtin_sym_end,
    ACTIONS(396), 1,
      sym__newline,
    ACTIONS(394), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2876] = 2,
    ACTIONS(398), 1,
      ts_builtin_sym_end,
    ACTIONS(400), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2888] = 2,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2900] = 2,
    ACTIONS(402), 1,
      ts_builtin_sym_end,
    ACTIONS(404), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2912] = 2,
    ACTIONS(344), 1,
      ts_builtin_sym_end,
    ACTIONS(346), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2924] = 2,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    ACTIONS(250), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2936] = 2,
    ACTIONS(406), 1,
      ts_builtin_sym_end,
    ACTIONS(408), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2948] = 2,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    ACTIONS(205), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2960] = 2,
    ACTIONS(334), 1,
      ts_builtin_sym_end,
    ACTIONS(336), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2972] = 2,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    ACTIONS(191), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2984] = 2,
    ACTIONS(410), 1,
      ts_builtin_sym_end,
    ACTIONS(412), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [2996] = 2,
    ACTIONS(270), 1,
      ts_builtin_sym_end,
    ACTIONS(272), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [3008] = 2,
    ACTIONS(276), 1,
      ts_builtin_sym_end,
    ACTIONS(278), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [3020] = 2,
    ACTIONS(340), 1,
      ts_builtin_sym_end,
    ACTIONS(342), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [3032] = 2,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
    ACTIONS(284), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_each,
      sym_tag_name,
  [3044] = 4,
    ACTIONS(176), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(414), 1,
      aux_sym_inline_text_token1,
    STATE(61), 1,
      sym_inline_text,
    STATE(19), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
  [3058] = 4,
    ACTIONS(416), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(419), 1,
      anon_sym_DQUOTE,
    ACTIONS(421), 1,
      aux_sym_quoted_attribute_value_token1,
    STATE(145), 2,
      sym_interpolation,
      aux_sym_quoted_attribute_value_repeat1,
  [3072] = 4,
    ACTIONS(176), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(414), 1,
      aux_sym_inline_text_token1,
    STATE(56), 1,
      sym_inline_text,
    STATE(19), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
  [3086] = 4,
    ACTIONS(138), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(424), 1,
      aux_sym_inline_text_token1,
    STATE(29), 1,
      sym_inline_text,
    STATE(13), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
  [3100] = 4,
    ACTIONS(176), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(414), 1,
      aux_sym_inline_text_token1,
    STATE(55), 1,
      sym_inline_text,
    STATE(19), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
  [3114] = 4,
    ACTIONS(138), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(424), 1,
      aux_sym_inline_text_token1,
    STATE(25), 1,
      sym_inline_text,
    STATE(13), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
  [3128] = 4,
    ACTIONS(232), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(426), 1,
      aux_sym_inline_text_token1,
    STATE(86), 1,
      sym_inline_text,
    STATE(30), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
  [3142] = 4,
    ACTIONS(428), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(430), 1,
      anon_sym_DQUOTE,
    ACTIONS(432), 1,
      aux_sym_quoted_attribute_value_token1,
    STATE(152), 2,
      sym_interpolation,
      aux_sym_quoted_attribute_value_repeat1,
  [3156] = 4,
    ACTIONS(428), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(434), 1,
      anon_sym_DQUOTE,
    ACTIONS(436), 1,
      aux_sym_quoted_attribute_value_token1,
    STATE(145), 2,
      sym_interpolation,
      aux_sym_quoted_attribute_value_repeat1,
  [3170] = 4,
    ACTIONS(232), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(426), 1,
      aux_sym_inline_text_token1,
    STATE(62), 1,
      sym_inline_text,
    STATE(30), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
  [3184] = 4,
    ACTIONS(232), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(426), 1,
      aux_sym_inline_text_token1,
    STATE(91), 1,
      sym_inline_text,
    STATE(30), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
  [3198] = 4,
    ACTIONS(138), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(424), 1,
      aux_sym_inline_text_token1,
    STATE(33), 1,
      sym_inline_text,
    STATE(13), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
  [3212] = 3,
    ACTIONS(438), 1,
      anon_sym_RPAREN,
    ACTIONS(440), 1,
      sym_attribute_name,
    STATE(156), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [3223] = 3,
    ACTIONS(443), 1,
      anon_sym_RPAREN,
    ACTIONS(445), 1,
      sym_attribute_name,
    STATE(162), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [3234] = 3,
    ACTIONS(445), 1,
      sym_attribute_name,
    ACTIONS(447), 1,
      anon_sym_RPAREN,
    STATE(156), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [3245] = 3,
    ACTIONS(445), 1,
      sym_attribute_name,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
    STATE(161), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [3256] = 3,
    ACTIONS(445), 1,
      sym_attribute_name,
    ACTIONS(451), 1,
      anon_sym_RPAREN,
    STATE(158), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [3267] = 3,
    ACTIONS(445), 1,
      sym_attribute_name,
    ACTIONS(453), 1,
      anon_sym_RPAREN,
    STATE(156), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [3278] = 3,
    ACTIONS(445), 1,
      sym_attribute_name,
    ACTIONS(455), 1,
      anon_sym_RPAREN,
    STATE(156), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [3289] = 3,
    ACTIONS(457), 1,
      anon_sym_DQUOTE,
    ACTIONS(459), 1,
      sym_unquoted_attribute_value,
    STATE(173), 1,
      sym_quoted_attribute_value,
  [3299] = 2,
    ACTIONS(199), 1,
      aux_sym_quoted_attribute_value_token1,
    ACTIONS(201), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_DQUOTE,
  [3307] = 2,
    ACTIONS(31), 1,
      sym__indent,
    STATE(90), 1,
      sym_children,
  [3314] = 2,
    ACTIONS(461), 1,
      aux_sym_loop_variable_token1,
    STATE(184), 1,
      sym_loop_source,
  [3321] = 2,
    ACTIONS(463), 1,
      sym__indent,
    STATE(113), 1,
      sym_children,
  [3328] = 1,
    ACTIONS(465), 2,
      anon_sym_RPAREN,
      sym_attribute_name,
  [3333] = 2,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    ACTIONS(469), 1,
      anon_sym_in,
  [3340] = 1,
    ACTIONS(471), 2,
      anon_sym_COMMA,
      anon_sym_in,
  [3345] = 2,
    ACTIONS(31), 1,
      sym__indent,
    STATE(88), 1,
      sym_children,
  [3352] = 1,
    ACTIONS(473), 2,
      anon_sym_RPAREN,
      sym_attribute_name,
  [3357] = 1,
    ACTIONS(475), 2,
      anon_sym_RPAREN,
      sym_attribute_name,
  [3362] = 2,
    ACTIONS(31), 1,
      sym__indent,
    STATE(79), 1,
      sym_children,
  [3369] = 2,
    ACTIONS(152), 1,
      sym__indent,
    STATE(137), 1,
      sym_children,
  [3376] = 2,
    ACTIONS(463), 1,
      sym__indent,
    STATE(123), 1,
      sym_children,
  [3383] = 2,
    ACTIONS(31), 1,
      sym__indent,
    STATE(68), 1,
      sym_children,
  [3390] = 2,
    ACTIONS(152), 1,
      sym__indent,
    STATE(132), 1,
      sym_children,
  [3397] = 2,
    ACTIONS(477), 1,
      aux_sym_loop_variable_token1,
    STATE(185), 1,
      sym_loop_index,
  [3404] = 2,
    ACTIONS(479), 1,
      aux_sym_loop_variable_token1,
    STATE(169), 1,
      sym_loop_variable,
  [3411] = 2,
    ACTIONS(461), 1,
      aux_sym_loop_variable_token1,
    STATE(194), 1,
      sym_loop_source,
  [3418] = 2,
    ACTIONS(85), 1,
      sym__indent,
    STATE(122), 1,
      sym_children,
  [3425] = 2,
    ACTIONS(463), 1,
      sym__indent,
    STATE(108), 1,
      sym_children,
  [3432] = 1,
    ACTIONS(481), 1,
      sym__newline,
  [3436] = 1,
    ACTIONS(483), 1,
      anon_sym_in,
  [3440] = 1,
    ACTIONS(485), 1,
      anon_sym_in,
  [3444] = 1,
    ACTIONS(487), 1,
      sym_condition,
  [3448] = 1,
    ACTIONS(489), 1,
      sym_condition,
  [3452] = 1,
    ACTIONS(491), 1,
      sym_expression,
  [3456] = 1,
    ACTIONS(493), 1,
      sym_expression,
  [3460] = 1,
    ACTIONS(495), 1,
      ts_builtin_sym_end,
  [3464] = 1,
    ACTIONS(497), 1,
      sym__newline,
  [3468] = 1,
    ACTIONS(499), 1,
      sym_condition,
  [3472] = 1,
    ACTIONS(501), 1,
      sym__newline,
  [3476] = 1,
    ACTIONS(503), 1,
      anon_sym_EQ,
  [3480] = 1,
    ACTIONS(505), 1,
      sym_reference,
  [3484] = 1,
    ACTIONS(507), 1,
      sym__newline,
  [3488] = 1,
    ACTIONS(509), 1,
      sym_expression,
  [3492] = 1,
    ACTIONS(511), 1,
      anon_sym_RBRACE,
  [3496] = 1,
    ACTIONS(513), 1,
      anon_sym_RBRACE,
  [3500] = 1,
    ACTIONS(515), 1,
      sym_expression,
  [3504] = 1,
    ACTIONS(517), 1,
      sym_expression,
  [3508] = 1,
    ACTIONS(519), 1,
      sym_expression,
  [3512] = 1,
    ACTIONS(521), 1,
      sym_expression,
  [3516] = 1,
    ACTIONS(523), 1,
      sym_reference,
  [3520] = 1,
    ACTIONS(525), 1,
      sym_expression,
  [3524] = 1,
    ACTIONS(527), 1,
      sym_expression,
  [3528] = 1,
    ACTIONS(529), 1,
      sym_condition,
  [3532] = 1,
    ACTIONS(531), 1,
      sym_expression,
  [3536] = 1,
    ACTIONS(533), 1,
      sym_expression,
  [3540] = 1,
    ACTIONS(535), 1,
      sym_reference,
  [3544] = 1,
    ACTIONS(537), 1,
      sym_expression,
  [3548] = 1,
    ACTIONS(539), 1,
      anon_sym_RBRACE,
  [3552] = 1,
    ACTIONS(541), 1,
      sym_expression,
  [3556] = 1,
    ACTIONS(543), 1,
      sym_expression,
  [3560] = 1,
    ACTIONS(545), 1,
      sym_expression,
  [3564] = 1,
    ACTIONS(547), 1,
      anon_sym_RBRACE,
  [3568] = 1,
    ACTIONS(549), 1,
      sym__newline,
  [3572] = 1,
    ACTIONS(551), 1,
      sym_expression,
  [3576] = 1,
    ACTIONS(553), 1,
      sym_expression,
  [3580] = 1,
    ACTIONS(555), 1,
      sym__newline,
  [3584] = 1,
    ACTIONS(557), 1,
      sym_expression,
  [3588] = 1,
    ACTIONS(559), 1,
      sym_expression,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 84,
  [SMALL_STATE(5)] = 123,
  [SMALL_STATE(6)] = 162,
  [SMALL_STATE(7)] = 199,
  [SMALL_STATE(8)] = 239,
  [SMALL_STATE(9)] = 279,
  [SMALL_STATE(10)] = 319,
  [SMALL_STATE(11)] = 347,
  [SMALL_STATE(12)] = 387,
  [SMALL_STATE(13)] = 413,
  [SMALL_STATE(14)] = 441,
  [SMALL_STATE(15)] = 480,
  [SMALL_STATE(16)] = 519,
  [SMALL_STATE(17)] = 556,
  [SMALL_STATE(18)] = 593,
  [SMALL_STATE(19)] = 628,
  [SMALL_STATE(20)] = 654,
  [SMALL_STATE(21)] = 678,
  [SMALL_STATE(22)] = 704,
  [SMALL_STATE(23)] = 734,
  [SMALL_STATE(24)] = 764,
  [SMALL_STATE(25)] = 784,
  [SMALL_STATE(26)] = 811,
  [SMALL_STATE(27)] = 836,
  [SMALL_STATE(28)] = 859,
  [SMALL_STATE(29)] = 884,
  [SMALL_STATE(30)] = 911,
  [SMALL_STATE(31)] = 936,
  [SMALL_STATE(32)] = 961,
  [SMALL_STATE(33)] = 986,
  [SMALL_STATE(34)] = 1013,
  [SMALL_STATE(35)] = 1032,
  [SMALL_STATE(36)] = 1051,
  [SMALL_STATE(37)] = 1075,
  [SMALL_STATE(38)] = 1093,
  [SMALL_STATE(39)] = 1117,
  [SMALL_STATE(40)] = 1145,
  [SMALL_STATE(41)] = 1167,
  [SMALL_STATE(42)] = 1191,
  [SMALL_STATE(43)] = 1213,
  [SMALL_STATE(44)] = 1235,
  [SMALL_STATE(45)] = 1259,
  [SMALL_STATE(46)] = 1281,
  [SMALL_STATE(47)] = 1309,
  [SMALL_STATE(48)] = 1331,
  [SMALL_STATE(49)] = 1353,
  [SMALL_STATE(50)] = 1377,
  [SMALL_STATE(51)] = 1399,
  [SMALL_STATE(52)] = 1416,
  [SMALL_STATE(53)] = 1439,
  [SMALL_STATE(54)] = 1462,
  [SMALL_STATE(55)] = 1489,
  [SMALL_STATE(56)] = 1514,
  [SMALL_STATE(57)] = 1539,
  [SMALL_STATE(58)] = 1562,
  [SMALL_STATE(59)] = 1579,
  [SMALL_STATE(60)] = 1606,
  [SMALL_STATE(61)] = 1623,
  [SMALL_STATE(62)] = 1648,
  [SMALL_STATE(63)] = 1672,
  [SMALL_STATE(64)] = 1692,
  [SMALL_STATE(65)] = 1708,
  [SMALL_STATE(66)] = 1724,
  [SMALL_STATE(67)] = 1740,
  [SMALL_STATE(68)] = 1760,
  [SMALL_STATE(69)] = 1776,
  [SMALL_STATE(70)] = 1792,
  [SMALL_STATE(71)] = 1808,
  [SMALL_STATE(72)] = 1830,
  [SMALL_STATE(73)] = 1848,
  [SMALL_STATE(74)] = 1864,
  [SMALL_STATE(75)] = 1882,
  [SMALL_STATE(76)] = 1898,
  [SMALL_STATE(77)] = 1924,
  [SMALL_STATE(78)] = 1946,
  [SMALL_STATE(79)] = 1966,
  [SMALL_STATE(80)] = 1982,
  [SMALL_STATE(81)] = 2008,
  [SMALL_STATE(82)] = 2024,
  [SMALL_STATE(83)] = 2040,
  [SMALL_STATE(84)] = 2066,
  [SMALL_STATE(85)] = 2092,
  [SMALL_STATE(86)] = 2108,
  [SMALL_STATE(87)] = 2132,
  [SMALL_STATE(88)] = 2154,
  [SMALL_STATE(89)] = 2170,
  [SMALL_STATE(90)] = 2186,
  [SMALL_STATE(91)] = 2202,
  [SMALL_STATE(92)] = 2226,
  [SMALL_STATE(93)] = 2246,
  [SMALL_STATE(94)] = 2268,
  [SMALL_STATE(95)] = 2288,
  [SMALL_STATE(96)] = 2310,
  [SMALL_STATE(97)] = 2328,
  [SMALL_STATE(98)] = 2348,
  [SMALL_STATE(99)] = 2368,
  [SMALL_STATE(100)] = 2385,
  [SMALL_STATE(101)] = 2402,
  [SMALL_STATE(102)] = 2423,
  [SMALL_STATE(103)] = 2444,
  [SMALL_STATE(104)] = 2461,
  [SMALL_STATE(105)] = 2482,
  [SMALL_STATE(106)] = 2503,
  [SMALL_STATE(107)] = 2524,
  [SMALL_STATE(108)] = 2542,
  [SMALL_STATE(109)] = 2556,
  [SMALL_STATE(110)] = 2574,
  [SMALL_STATE(111)] = 2588,
  [SMALL_STATE(112)] = 2606,
  [SMALL_STATE(113)] = 2620,
  [SMALL_STATE(114)] = 2634,
  [SMALL_STATE(115)] = 2652,
  [SMALL_STATE(116)] = 2670,
  [SMALL_STATE(117)] = 2684,
  [SMALL_STATE(118)] = 2698,
  [SMALL_STATE(119)] = 2712,
  [SMALL_STATE(120)] = 2726,
  [SMALL_STATE(121)] = 2740,
  [SMALL_STATE(122)] = 2758,
  [SMALL_STATE(123)] = 2772,
  [SMALL_STATE(124)] = 2786,
  [SMALL_STATE(125)] = 2800,
  [SMALL_STATE(126)] = 2814,
  [SMALL_STATE(127)] = 2832,
  [SMALL_STATE(128)] = 2846,
  [SMALL_STATE(129)] = 2861,
  [SMALL_STATE(130)] = 2876,
  [SMALL_STATE(131)] = 2888,
  [SMALL_STATE(132)] = 2900,
  [SMALL_STATE(133)] = 2912,
  [SMALL_STATE(134)] = 2924,
  [SMALL_STATE(135)] = 2936,
  [SMALL_STATE(136)] = 2948,
  [SMALL_STATE(137)] = 2960,
  [SMALL_STATE(138)] = 2972,
  [SMALL_STATE(139)] = 2984,
  [SMALL_STATE(140)] = 2996,
  [SMALL_STATE(141)] = 3008,
  [SMALL_STATE(142)] = 3020,
  [SMALL_STATE(143)] = 3032,
  [SMALL_STATE(144)] = 3044,
  [SMALL_STATE(145)] = 3058,
  [SMALL_STATE(146)] = 3072,
  [SMALL_STATE(147)] = 3086,
  [SMALL_STATE(148)] = 3100,
  [SMALL_STATE(149)] = 3114,
  [SMALL_STATE(150)] = 3128,
  [SMALL_STATE(151)] = 3142,
  [SMALL_STATE(152)] = 3156,
  [SMALL_STATE(153)] = 3170,
  [SMALL_STATE(154)] = 3184,
  [SMALL_STATE(155)] = 3198,
  [SMALL_STATE(156)] = 3212,
  [SMALL_STATE(157)] = 3223,
  [SMALL_STATE(158)] = 3234,
  [SMALL_STATE(159)] = 3245,
  [SMALL_STATE(160)] = 3256,
  [SMALL_STATE(161)] = 3267,
  [SMALL_STATE(162)] = 3278,
  [SMALL_STATE(163)] = 3289,
  [SMALL_STATE(164)] = 3299,
  [SMALL_STATE(165)] = 3307,
  [SMALL_STATE(166)] = 3314,
  [SMALL_STATE(167)] = 3321,
  [SMALL_STATE(168)] = 3328,
  [SMALL_STATE(169)] = 3333,
  [SMALL_STATE(170)] = 3340,
  [SMALL_STATE(171)] = 3345,
  [SMALL_STATE(172)] = 3352,
  [SMALL_STATE(173)] = 3357,
  [SMALL_STATE(174)] = 3362,
  [SMALL_STATE(175)] = 3369,
  [SMALL_STATE(176)] = 3376,
  [SMALL_STATE(177)] = 3383,
  [SMALL_STATE(178)] = 3390,
  [SMALL_STATE(179)] = 3397,
  [SMALL_STATE(180)] = 3404,
  [SMALL_STATE(181)] = 3411,
  [SMALL_STATE(182)] = 3418,
  [SMALL_STATE(183)] = 3425,
  [SMALL_STATE(184)] = 3432,
  [SMALL_STATE(185)] = 3436,
  [SMALL_STATE(186)] = 3440,
  [SMALL_STATE(187)] = 3444,
  [SMALL_STATE(188)] = 3448,
  [SMALL_STATE(189)] = 3452,
  [SMALL_STATE(190)] = 3456,
  [SMALL_STATE(191)] = 3460,
  [SMALL_STATE(192)] = 3464,
  [SMALL_STATE(193)] = 3468,
  [SMALL_STATE(194)] = 3472,
  [SMALL_STATE(195)] = 3476,
  [SMALL_STATE(196)] = 3480,
  [SMALL_STATE(197)] = 3484,
  [SMALL_STATE(198)] = 3488,
  [SMALL_STATE(199)] = 3492,
  [SMALL_STATE(200)] = 3496,
  [SMALL_STATE(201)] = 3500,
  [SMALL_STATE(202)] = 3504,
  [SMALL_STATE(203)] = 3508,
  [SMALL_STATE(204)] = 3512,
  [SMALL_STATE(205)] = 3516,
  [SMALL_STATE(206)] = 3520,
  [SMALL_STATE(207)] = 3524,
  [SMALL_STATE(208)] = 3528,
  [SMALL_STATE(209)] = 3532,
  [SMALL_STATE(210)] = 3536,
  [SMALL_STATE(211)] = 3540,
  [SMALL_STATE(212)] = 3544,
  [SMALL_STATE(213)] = 3548,
  [SMALL_STATE(214)] = 3552,
  [SMALL_STATE(215)] = 3556,
  [SMALL_STATE(216)] = 3560,
  [SMALL_STATE(217)] = 3564,
  [SMALL_STATE(218)] = 3568,
  [SMALL_STATE(219)] = 3572,
  [SMALL_STATE(220)] = 3576,
  [SMALL_STATE(221)] = 3580,
  [SMALL_STATE(222)] = 3584,
  [SMALL_STATE(223)] = 3588,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(188),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(180),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(3),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(6),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_text_repeat1, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_text_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_text_repeat1, 2), SHIFT_REPEAT(223),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_text_repeat1, 2), SHIFT_REPEAT(10),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(211),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(205),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(196),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(187),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(180),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(12),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_text, 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_text, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(7),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(18),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(20),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_text_repeat1, 2), SHIFT_REPEAT(220),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_text_repeat1, 2), SHIFT_REPEAT(21),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(193),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(74),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(27),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_text_repeat1, 2), SHIFT_REPEAT(219),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_text_repeat1, 2), SHIFT_REPEAT(28),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 2),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 1),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 7),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 7),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 8),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 8),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(208),
  [305] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(103),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_statement, 2),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_statement, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 1),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop, 3),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop, 3),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 9),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 9),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 3),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 3),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_statement, 4),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_statement, 4),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 2),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 2),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 2),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 2),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 2),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 2),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_expansion, 1),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_expansion, 1),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 4),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 4),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extends_statement, 2),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extends_statement, 2),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 3),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 3),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [416] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 2), SHIFT_REPEAT(222),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 2),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 2), SHIFT_REPEAT(145),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(195),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_variable, 1),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_statement, 6),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_index, 1),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [495] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_source, 1),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_statement, 4),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
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
