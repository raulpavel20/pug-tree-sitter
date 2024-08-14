#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 162
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_extends = 1,
  anon_sym_include = 2,
  anon_sym_block = 3,
  anon_sym_if = 4,
  anon_sym_elseif = 5,
  anon_sym_else = 6,
  sym_condition = 7,
  anon_sym_POUND_LBRACE = 8,
  anon_sym_RBRACE = 9,
  sym_expression = 10,
  aux_sym_inline_text_token1 = 11,
  sym_reference = 12,
  sym_tag_name = 13,
  sym_class_or_id = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  anon_sym_EQ = 17,
  sym_attribute_name = 18,
  anon_sym_DQUOTE = 19,
  aux_sym_quoted_attribute_value_token1 = 20,
  sym_unquoted_attribute_value = 21,
  sym__space = 22,
  sym__newline = 23,
  sym__indent = 24,
  sym__dedent = 25,
  sym_source_file = 26,
  sym_block_expansion = 27,
  sym_extends_statement = 28,
  sym_include_statement = 29,
  sym_block_statement = 30,
  sym_tag = 31,
  sym_conditional = 32,
  sym_if_statement = 33,
  sym_else_if_statement = 34,
  sym_else_statement = 35,
  sym_interpolation = 36,
  sym_inline_text = 37,
  sym_attributes = 38,
  sym_attribute = 39,
  sym_quoted_attribute_value = 40,
  sym_children = 41,
  sym__children_choice = 42,
  aux_sym_source_file_repeat1 = 43,
  aux_sym_tag_repeat1 = 44,
  aux_sym_conditional_repeat1 = 45,
  aux_sym_inline_text_repeat1 = 46,
  aux_sym_attributes_repeat1 = 47,
  aux_sym_quoted_attribute_value_repeat1 = 48,
  aux_sym_children_repeat1 = 49,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_extends] = "extends",
  [anon_sym_include] = "include",
  [anon_sym_block] = "block",
  [anon_sym_if] = "if",
  [anon_sym_elseif] = "else if",
  [anon_sym_else] = "else",
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
  [anon_sym_EQ] = "=",
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
  [anon_sym_if] = anon_sym_if,
  [anon_sym_elseif] = anon_sym_elseif,
  [anon_sym_else] = anon_sym_else,
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
  [anon_sym_EQ] = anon_sym_EQ,
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
  [anon_sym_EQ] = {
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
  [5] = 5,
  [6] = 2,
  [7] = 3,
  [8] = 8,
  [9] = 8,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 2,
  [14] = 3,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 8,
  [19] = 10,
  [20] = 20,
  [21] = 4,
  [22] = 11,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 8,
  [27] = 5,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 10,
  [34] = 34,
  [35] = 11,
  [36] = 36,
  [37] = 37,
  [38] = 4,
  [39] = 39,
  [40] = 40,
  [41] = 17,
  [42] = 24,
  [43] = 23,
  [44] = 16,
  [45] = 25,
  [46] = 20,
  [47] = 47,
  [48] = 17,
  [49] = 24,
  [50] = 50,
  [51] = 39,
  [52] = 52,
  [53] = 53,
  [54] = 37,
  [55] = 55,
  [56] = 56,
  [57] = 34,
  [58] = 30,
  [59] = 59,
  [60] = 31,
  [61] = 32,
  [62] = 62,
  [63] = 16,
  [64] = 64,
  [65] = 36,
  [66] = 66,
  [67] = 40,
  [68] = 29,
  [69] = 28,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 50,
  [74] = 39,
  [75] = 31,
  [76] = 36,
  [77] = 37,
  [78] = 66,
  [79] = 29,
  [80] = 71,
  [81] = 55,
  [82] = 40,
  [83] = 83,
  [84] = 83,
  [85] = 83,
  [86] = 28,
  [87] = 53,
  [88] = 70,
  [89] = 55,
  [90] = 52,
  [91] = 62,
  [92] = 32,
  [93] = 30,
  [94] = 56,
  [95] = 64,
  [96] = 72,
  [97] = 34,
  [98] = 47,
  [99] = 83,
  [100] = 59,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 56,
  [105] = 52,
  [106] = 72,
  [107] = 53,
  [108] = 108,
  [109] = 109,
  [110] = 55,
  [111] = 62,
  [112] = 112,
  [113] = 47,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 115,
  [119] = 114,
  [120] = 120,
  [121] = 121,
  [122] = 117,
  [123] = 115,
  [124] = 114,
  [125] = 117,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 128,
  [130] = 128,
  [131] = 126,
  [132] = 126,
  [133] = 16,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 136,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 135,
  [144] = 142,
  [145] = 145,
  [146] = 146,
  [147] = 145,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 146,
  [155] = 148,
  [156] = 146,
  [157] = 146,
  [158] = 158,
  [159] = 150,
  [160] = 145,
  [161] = 145,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(22);
      if (lookahead == '"') ADVANCE(94);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '(') ADVANCE(90);
      if (lookahead == ')') ADVANCE(91);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '=') ADVANCE(92);
      if (lookahead == 'b') ADVANCE(78);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == '}') ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '#') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(40);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(94);
      if (lookahead == '#') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(94);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != ')') ADVANCE(97);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(91);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 8:
      if (lookahead == 'f') ADVANCE(31);
      END_STATE();
    case 9:
      if (lookahead == 'i') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 11:
      if (lookahead == '{') ADVANCE(37);
      END_STATE();
    case 12:
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 13:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 14:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 15:
      if (eof) ADVANCE(22);
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == 'b') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'i') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 16:
      if (eof) ADVANCE(22);
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == 'b') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == 'i') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 17:
      if (eof) ADVANCE(22);
      if (lookahead == ' ') ADVANCE(98);
      if (lookahead == '#' ||
          lookahead == '.') ADVANCE(14);
      if (lookahead == '(') ADVANCE(90);
      if (lookahead == 'b') ADVANCE(78);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(75);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(20)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 18:
      if (eof) ADVANCE(22);
      if (lookahead == ' ') ADVANCE(98);
      if (lookahead == '#' ||
          lookahead == '.') ADVANCE(14);
      if (lookahead == '(') ADVANCE(90);
      if (lookahead == 'b') ADVANCE(78);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 'i') ADVANCE(75);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(21)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 19:
      if (eof) ADVANCE(22);
      if (lookahead == 'b') ADVANCE(78);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 'i') ADVANCE(75);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 20:
      if (eof) ADVANCE(22);
      if (lookahead == '#' ||
          lookahead == '.') ADVANCE(14);
      if (lookahead == '(') ADVANCE(90);
      if (lookahead == 'b') ADVANCE(78);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(75);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      if (lookahead == '#' ||
          lookahead == '.') ADVANCE(14);
      if (lookahead == '(') ADVANCE(90);
      if (lookahead == 'b') ADVANCE(78);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 'i') ADVANCE(75);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_extends);
      if (lookahead == '-') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_extends);
      if (lookahead == '-') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(66);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '-') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '-') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(66);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_block);
      if (lookahead == '-') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_block);
      if (lookahead == '-') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(66);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(66);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(66);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '-') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(64);
      if (lookahead == '-') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(66);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_condition);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_condition);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_expression);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_expression);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == 'c') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(66);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == 'c') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(66);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == 'd') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(66);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == 'd') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(66);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(66);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == 'e') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(66);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == 'e') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(66);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(66);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == 'k') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(66);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == 'l') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(66);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == 'l') ADVANCE(55);
      if (lookahead == 'x') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(66);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == 'l') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(66);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == 'n') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(66);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == 'o') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(66);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == 's') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(66);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == 's') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(66);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == 't') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(66);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == 'u') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(66);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == 'x') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(66);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '-') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(66);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == 'b') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'i') ADVANCE(48);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(66);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == 'b') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == 'i') ADVANCE(48);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(66);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(66);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(66);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_inline_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'c') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'c') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'd') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'd') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'e') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'e') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'e') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'k') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'l') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'l') ADVANCE(83);
      if (lookahead == 'x') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'l') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'n') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'o') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 's') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 's') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 't') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'u') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'x') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_class_or_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_unquoted_attribute_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ')') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == ' ') ADVANCE(98);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 19},
  [2] = {.lex_state = 17, .external_lex_state = 1},
  [3] = {.lex_state = 17, .external_lex_state = 1},
  [4] = {.lex_state = 17, .external_lex_state = 1},
  [5] = {.lex_state = 0, .external_lex_state = 2},
  [6] = {.lex_state = 18, .external_lex_state = 1},
  [7] = {.lex_state = 18, .external_lex_state = 1},
  [8] = {.lex_state = 0, .external_lex_state = 2},
  [9] = {.lex_state = 0, .external_lex_state = 2},
  [10] = {.lex_state = 15, .external_lex_state = 1},
  [11] = {.lex_state = 15, .external_lex_state = 1},
  [12] = {.lex_state = 19},
  [13] = {.lex_state = 18, .external_lex_state = 3},
  [14] = {.lex_state = 18, .external_lex_state = 3},
  [15] = {.lex_state = 19},
  [16] = {.lex_state = 15, .external_lex_state = 1},
  [17] = {.lex_state = 17, .external_lex_state = 1},
  [18] = {.lex_state = 19, .external_lex_state = 2},
  [19] = {.lex_state = 16, .external_lex_state = 1},
  [20] = {.lex_state = 0, .external_lex_state = 2},
  [21] = {.lex_state = 18, .external_lex_state = 1},
  [22] = {.lex_state = 16, .external_lex_state = 1},
  [23] = {.lex_state = 0, .external_lex_state = 2},
  [24] = {.lex_state = 17, .external_lex_state = 1},
  [25] = {.lex_state = 0, .external_lex_state = 2},
  [26] = {.lex_state = 19, .external_lex_state = 2},
  [27] = {.lex_state = 19, .external_lex_state = 2},
  [28] = {.lex_state = 0, .external_lex_state = 1},
  [29] = {.lex_state = 17, .external_lex_state = 1},
  [30] = {.lex_state = 0, .external_lex_state = 1},
  [31] = {.lex_state = 0, .external_lex_state = 1},
  [32] = {.lex_state = 0, .external_lex_state = 1},
  [33] = {.lex_state = 16, .external_lex_state = 3},
  [34] = {.lex_state = 0, .external_lex_state = 1},
  [35] = {.lex_state = 16, .external_lex_state = 3},
  [36] = {.lex_state = 0, .external_lex_state = 1},
  [37] = {.lex_state = 0, .external_lex_state = 1},
  [38] = {.lex_state = 18, .external_lex_state = 3},
  [39] = {.lex_state = 17, .external_lex_state = 1},
  [40] = {.lex_state = 0, .external_lex_state = 1},
  [41] = {.lex_state = 18, .external_lex_state = 1},
  [42] = {.lex_state = 18, .external_lex_state = 1},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 16, .external_lex_state = 1},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0, .external_lex_state = 2},
  [48] = {.lex_state = 18, .external_lex_state = 3},
  [49] = {.lex_state = 18, .external_lex_state = 3},
  [50] = {.lex_state = 0, .external_lex_state = 2},
  [51] = {.lex_state = 18, .external_lex_state = 1},
  [52] = {.lex_state = 0, .external_lex_state = 2},
  [53] = {.lex_state = 0, .external_lex_state = 2},
  [54] = {.lex_state = 19, .external_lex_state = 1},
  [55] = {.lex_state = 0, .external_lex_state = 2},
  [56] = {.lex_state = 0, .external_lex_state = 2},
  [57] = {.lex_state = 19, .external_lex_state = 1},
  [58] = {.lex_state = 19, .external_lex_state = 1},
  [59] = {.lex_state = 0, .external_lex_state = 2},
  [60] = {.lex_state = 19, .external_lex_state = 1},
  [61] = {.lex_state = 19, .external_lex_state = 1},
  [62] = {.lex_state = 0, .external_lex_state = 2},
  [63] = {.lex_state = 16, .external_lex_state = 3},
  [64] = {.lex_state = 0, .external_lex_state = 2},
  [65] = {.lex_state = 19, .external_lex_state = 1},
  [66] = {.lex_state = 0, .external_lex_state = 2},
  [67] = {.lex_state = 19, .external_lex_state = 1},
  [68] = {.lex_state = 18, .external_lex_state = 1},
  [69] = {.lex_state = 19, .external_lex_state = 1},
  [70] = {.lex_state = 0, .external_lex_state = 2},
  [71] = {.lex_state = 0, .external_lex_state = 2},
  [72] = {.lex_state = 0, .external_lex_state = 2},
  [73] = {.lex_state = 0, .external_lex_state = 4},
  [74] = {.lex_state = 18, .external_lex_state = 3},
  [75] = {.lex_state = 19, .external_lex_state = 3},
  [76] = {.lex_state = 19, .external_lex_state = 3},
  [77] = {.lex_state = 19, .external_lex_state = 3},
  [78] = {.lex_state = 0, .external_lex_state = 4},
  [79] = {.lex_state = 18, .external_lex_state = 3},
  [80] = {.lex_state = 0, .external_lex_state = 4},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 19, .external_lex_state = 5},
  [83] = {.lex_state = 10, .external_lex_state = 4},
  [84] = {.lex_state = 10, .external_lex_state = 4},
  [85] = {.lex_state = 10, .external_lex_state = 4},
  [86] = {.lex_state = 19, .external_lex_state = 5},
  [87] = {.lex_state = 19, .external_lex_state = 2},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 19, .external_lex_state = 2},
  [90] = {.lex_state = 19, .external_lex_state = 2},
  [91] = {.lex_state = 19, .external_lex_state = 2},
  [92] = {.lex_state = 19, .external_lex_state = 5},
  [93] = {.lex_state = 19, .external_lex_state = 5},
  [94] = {.lex_state = 19, .external_lex_state = 2},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 19, .external_lex_state = 2},
  [97] = {.lex_state = 19, .external_lex_state = 5},
  [98] = {.lex_state = 19, .external_lex_state = 2},
  [99] = {.lex_state = 10, .external_lex_state = 4},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 19, .external_lex_state = 4},
  [102] = {.lex_state = 19, .external_lex_state = 4},
  [103] = {.lex_state = 19},
  [104] = {.lex_state = 19},
  [105] = {.lex_state = 19},
  [106] = {.lex_state = 19},
  [107] = {.lex_state = 19},
  [108] = {.lex_state = 19},
  [109] = {.lex_state = 19},
  [110] = {.lex_state = 19},
  [111] = {.lex_state = 19},
  [112] = {.lex_state = 19},
  [113] = {.lex_state = 19},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 6},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 6},
  [132] = {.lex_state = 6},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 0, .external_lex_state = 5},
  [136] = {.lex_state = 0, .external_lex_state = 5},
  [137] = {.lex_state = 0, .external_lex_state = 5},
  [138] = {.lex_state = 0, .external_lex_state = 5},
  [139] = {.lex_state = 6},
  [140] = {.lex_state = 6},
  [141] = {.lex_state = 6},
  [142] = {.lex_state = 0, .external_lex_state = 5},
  [143] = {.lex_state = 0, .external_lex_state = 5},
  [144] = {.lex_state = 0, .external_lex_state = 5},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 3},
  [149] = {.lex_state = 13},
  [150] = {.lex_state = 3},
  [151] = {.lex_state = 13},
  [152] = {.lex_state = 13},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 3},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 3},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_extends] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_block] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_elseif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_POUND_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_tag_name] = ACTIONS(1),
    [sym_class_or_id] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(158),
    [sym_block_expansion] = STATE(12),
    [sym_extends_statement] = STATE(103),
    [sym_include_statement] = STATE(103),
    [sym_block_statement] = STATE(103),
    [sym_tag] = STATE(12),
    [sym_conditional] = STATE(12),
    [sym_if_statement] = STATE(45),
    [aux_sym_source_file_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_extends] = ACTIONS(5),
    [anon_sym_include] = ACTIONS(7),
    [anon_sym_block] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [sym_tag_name] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(19), 1,
      sym_class_or_id,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym__space,
    ACTIONS(25), 1,
      sym__newline,
    ACTIONS(27), 1,
      sym__indent,
    STATE(3), 1,
      aux_sym_tag_repeat1,
    STATE(17), 1,
      sym_attributes,
    STATE(53), 1,
      sym_children,
    ACTIONS(15), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(17), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      sym_tag_name,
  [38] = 10,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym__indent,
    ACTIONS(33), 1,
      sym_class_or_id,
    ACTIONS(35), 1,
      sym__space,
    ACTIONS(37), 1,
      sym__newline,
    STATE(4), 1,
      aux_sym_tag_repeat1,
    STATE(24), 1,
      sym_attributes,
    STATE(52), 1,
      sym_children,
    ACTIONS(29), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(31), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      sym_tag_name,
  [76] = 4,
    ACTIONS(43), 1,
      sym_class_or_id,
    STATE(4), 1,
      aux_sym_tag_repeat1,
    ACTIONS(39), 5,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
      sym__space,
    ACTIONS(41), 8,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      sym_tag_name,
      anon_sym_LPAREN,
  [100] = 7,
    ACTIONS(50), 1,
      anon_sym_if,
    ACTIONS(53), 1,
      sym_tag_name,
    ACTIONS(56), 1,
      sym__newline,
    STATE(25), 1,
      sym_if_statement,
    ACTIONS(46), 3,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(48), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_else,
    STATE(5), 4,
      sym_tag,
      sym_conditional,
      sym__children_choice,
      aux_sym_children_repeat1,
  [130] = 10,
    ACTIONS(59), 1,
      sym_class_or_id,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      sym__space,
    ACTIONS(65), 1,
      sym__newline,
    ACTIONS(67), 1,
      sym__indent,
    STATE(7), 1,
      aux_sym_tag_repeat1,
    STATE(41), 1,
      sym_attributes,
    STATE(87), 1,
      sym_children,
    ACTIONS(15), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(17), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [166] = 10,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      sym__indent,
    ACTIONS(69), 1,
      sym_class_or_id,
    ACTIONS(71), 1,
      sym__space,
    ACTIONS(73), 1,
      sym__newline,
    STATE(21), 1,
      aux_sym_tag_repeat1,
    STATE(42), 1,
      sym_attributes,
    STATE(90), 1,
      sym_children,
    ACTIONS(29), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(31), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [202] = 8,
    ACTIONS(79), 1,
      anon_sym_if,
    ACTIONS(81), 1,
      sym_tag_name,
    ACTIONS(83), 1,
      sym__newline,
    ACTIONS(85), 1,
      sym__dedent,
    STATE(25), 1,
      sym_if_statement,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(77), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_else,
    STATE(5), 4,
      sym_tag,
      sym_conditional,
      sym__children_choice,
      aux_sym_children_repeat1,
  [234] = 8,
    ACTIONS(79), 1,
      anon_sym_if,
    ACTIONS(81), 1,
      sym_tag_name,
    ACTIONS(83), 1,
      sym__newline,
    ACTIONS(87), 1,
      sym__dedent,
    STATE(25), 1,
      sym_if_statement,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(77), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_else,
    STATE(5), 4,
      sym_tag,
      sym_conditional,
      sym__children_choice,
      aux_sym_children_repeat1,
  [266] = 5,
    ACTIONS(93), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(96), 1,
      aux_sym_inline_text_token1,
    STATE(10), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
    ACTIONS(89), 4,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(91), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      sym_tag_name,
  [292] = 5,
    ACTIONS(103), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(105), 1,
      aux_sym_inline_text_token1,
    STATE(10), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
    ACTIONS(99), 4,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(101), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      sym_tag_name,
  [318] = 9,
    ACTIONS(5), 1,
      anon_sym_extends,
    ACTIONS(7), 1,
      anon_sym_include,
    ACTIONS(9), 1,
      anon_sym_block,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      sym_tag_name,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    STATE(45), 1,
      sym_if_statement,
    STATE(103), 3,
      sym_extends_statement,
      sym_include_statement,
      sym_block_statement,
    STATE(15), 4,
      sym_block_expansion,
      sym_tag,
      sym_conditional,
      aux_sym_source_file_repeat1,
  [351] = 10,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 1,
      sym_class_or_id,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      sym__space,
    ACTIONS(115), 1,
      sym__newline,
    ACTIONS(117), 1,
      sym__indent,
    STATE(14), 1,
      aux_sym_tag_repeat1,
    STATE(48), 1,
      sym_attributes,
    STATE(107), 1,
      sym_children,
    ACTIONS(17), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [386] = 10,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym__indent,
    ACTIONS(119), 1,
      sym_class_or_id,
    ACTIONS(121), 1,
      sym__space,
    ACTIONS(123), 1,
      sym__newline,
    STATE(38), 1,
      aux_sym_tag_repeat1,
    STATE(49), 1,
      sym_attributes,
    STATE(105), 1,
      sym_children,
    ACTIONS(31), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [421] = 9,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 1,
      anon_sym_extends,
    ACTIONS(130), 1,
      anon_sym_include,
    ACTIONS(133), 1,
      anon_sym_block,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(139), 1,
      sym_tag_name,
    STATE(45), 1,
      sym_if_statement,
    STATE(103), 3,
      sym_extends_statement,
      sym_include_statement,
      sym_block_statement,
    STATE(15), 4,
      sym_block_expansion,
      sym_tag,
      sym_conditional,
      aux_sym_source_file_repeat1,
  [454] = 2,
    ACTIONS(142), 4,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(144), 9,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_POUND_LBRACE,
      aux_sym_inline_text_token1,
      sym_tag_name,
  [472] = 6,
    ACTIONS(27), 1,
      sym__indent,
    ACTIONS(35), 1,
      sym__space,
    ACTIONS(37), 1,
      sym__newline,
    STATE(52), 1,
      sym_children,
    ACTIONS(29), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(31), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      sym_tag_name,
  [498] = 8,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(79), 1,
      anon_sym_if,
    ACTIONS(146), 1,
      sym_tag_name,
    ACTIONS(148), 1,
      sym__newline,
    ACTIONS(150), 1,
      sym__dedent,
    STATE(25), 1,
      sym_if_statement,
    ACTIONS(77), 3,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
    STATE(27), 4,
      sym_tag,
      sym_conditional,
      sym__children_choice,
      aux_sym_children_repeat1,
  [528] = 5,
    ACTIONS(152), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(155), 1,
      aux_sym_inline_text_token1,
    STATE(19), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
    ACTIONS(89), 4,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(91), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [552] = 5,
    ACTIONS(162), 1,
      anon_sym_elseif,
    ACTIONS(165), 1,
      anon_sym_else,
    ACTIONS(158), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    STATE(20), 3,
      sym_else_if_statement,
      sym_else_statement,
      aux_sym_conditional_repeat1,
    ACTIONS(160), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [576] = 4,
    ACTIONS(168), 1,
      sym_class_or_id,
    STATE(21), 1,
      aux_sym_tag_repeat1,
    ACTIONS(39), 5,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
      sym__space,
    ACTIONS(41), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
      anon_sym_LPAREN,
  [598] = 5,
    ACTIONS(171), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(173), 1,
      aux_sym_inline_text_token1,
    STATE(19), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
    ACTIONS(99), 4,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(101), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [622] = 5,
    ACTIONS(179), 1,
      anon_sym_elseif,
    ACTIONS(181), 1,
      anon_sym_else,
    ACTIONS(175), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    STATE(20), 3,
      sym_else_if_statement,
      sym_else_statement,
      aux_sym_conditional_repeat1,
    ACTIONS(177), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [646] = 6,
    ACTIONS(27), 1,
      sym__indent,
    ACTIONS(187), 1,
      sym__space,
    ACTIONS(189), 1,
      sym__newline,
    STATE(47), 1,
      sym_children,
    ACTIONS(183), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(185), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      sym_tag_name,
  [672] = 5,
    ACTIONS(179), 1,
      anon_sym_elseif,
    ACTIONS(181), 1,
      anon_sym_else,
    ACTIONS(191), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    STATE(23), 3,
      sym_else_if_statement,
      sym_else_statement,
      aux_sym_conditional_repeat1,
    ACTIONS(193), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [696] = 8,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(79), 1,
      anon_sym_if,
    ACTIONS(146), 1,
      sym_tag_name,
    ACTIONS(148), 1,
      sym__newline,
    ACTIONS(195), 1,
      sym__dedent,
    STATE(25), 1,
      sym_if_statement,
    ACTIONS(77), 3,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
    STATE(27), 4,
      sym_tag,
      sym_conditional,
      sym__children_choice,
      aux_sym_children_repeat1,
  [726] = 7,
    ACTIONS(50), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      sym_tag_name,
    ACTIONS(200), 1,
      sym__newline,
    STATE(25), 1,
      sym_if_statement,
    ACTIONS(46), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(48), 3,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
    STATE(27), 4,
      sym_tag,
      sym_conditional,
      sym__children_choice,
      aux_sym_children_repeat1,
  [754] = 4,
    ACTIONS(27), 1,
      sym__indent,
    STATE(47), 1,
      sym_children,
    ACTIONS(183), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(185), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [775] = 2,
    ACTIONS(203), 5,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
      sym__space,
    ACTIONS(205), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      sym_tag_name,
  [792] = 4,
    ACTIONS(27), 1,
      sym__indent,
    STATE(56), 1,
      sym_children,
    ACTIONS(207), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(209), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [813] = 5,
    ACTIONS(27), 1,
      sym__indent,
    ACTIONS(215), 1,
      sym__newline,
    STATE(72), 1,
      sym_children,
    ACTIONS(211), 3,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(213), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [836] = 4,
    ACTIONS(27), 1,
      sym__indent,
    STATE(72), 1,
      sym_children,
    ACTIONS(211), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(213), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [857] = 5,
    ACTIONS(217), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(220), 1,
      aux_sym_inline_text_token1,
    STATE(33), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
    ACTIONS(89), 3,
      sym__newline,
      sym__indent,
      ts_builtin_sym_end,
    ACTIONS(91), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [880] = 4,
    ACTIONS(27), 1,
      sym__indent,
    STATE(52), 1,
      sym_children,
    ACTIONS(29), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(31), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [901] = 5,
    ACTIONS(223), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(225), 1,
      aux_sym_inline_text_token1,
    STATE(33), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
    ACTIONS(99), 3,
      sym__newline,
      sym__indent,
      ts_builtin_sym_end,
    ACTIONS(101), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [924] = 5,
    ACTIONS(27), 1,
      sym__indent,
    ACTIONS(231), 1,
      sym__newline,
    STATE(62), 1,
      sym_children,
    ACTIONS(227), 3,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(229), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [947] = 5,
    ACTIONS(27), 1,
      sym__indent,
    ACTIONS(189), 1,
      sym__newline,
    STATE(47), 1,
      sym_children,
    ACTIONS(183), 3,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(185), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [970] = 4,
    ACTIONS(233), 1,
      sym_class_or_id,
    STATE(38), 1,
      aux_sym_tag_repeat1,
    ACTIONS(39), 4,
      sym__newline,
      sym__indent,
      ts_builtin_sym_end,
      sym__space,
    ACTIONS(41), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
      anon_sym_LPAREN,
  [991] = 2,
    ACTIONS(236), 5,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
      sym__space,
    ACTIONS(238), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      sym_tag_name,
  [1008] = 4,
    ACTIONS(27), 1,
      sym__indent,
    STATE(62), 1,
      sym_children,
    ACTIONS(227), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(229), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1029] = 6,
    ACTIONS(67), 1,
      sym__indent,
    ACTIONS(71), 1,
      sym__space,
    ACTIONS(73), 1,
      sym__newline,
    STATE(90), 1,
      sym_children,
    ACTIONS(29), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(31), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [1053] = 6,
    ACTIONS(67), 1,
      sym__indent,
    ACTIONS(240), 1,
      sym__space,
    ACTIONS(242), 1,
      sym__newline,
    STATE(98), 1,
      sym_children,
    ACTIONS(183), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(185), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [1077] = 5,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
    ACTIONS(244), 1,
      anon_sym_elseif,
    ACTIONS(246), 1,
      anon_sym_else,
    STATE(46), 3,
      sym_else_if_statement,
      sym_else_statement,
      aux_sym_conditional_repeat1,
    ACTIONS(177), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [1099] = 2,
    ACTIONS(142), 4,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(144), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_POUND_LBRACE,
      aux_sym_inline_text_token1,
      sym_tag_name,
  [1115] = 5,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
    ACTIONS(244), 1,
      anon_sym_elseif,
    ACTIONS(246), 1,
      anon_sym_else,
    STATE(43), 3,
      sym_else_if_statement,
      sym_else_statement,
      aux_sym_conditional_repeat1,
    ACTIONS(193), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [1137] = 5,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
    ACTIONS(248), 1,
      anon_sym_elseif,
    ACTIONS(251), 1,
      anon_sym_else,
    STATE(46), 3,
      sym_else_if_statement,
      sym_else_statement,
      aux_sym_conditional_repeat1,
    ACTIONS(160), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [1159] = 2,
    ACTIONS(227), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(229), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1174] = 6,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 1,
      sym__indent,
    ACTIONS(121), 1,
      sym__space,
    ACTIONS(123), 1,
      sym__newline,
    STATE(105), 1,
      sym_children,
    ACTIONS(31), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [1197] = 6,
    ACTIONS(117), 1,
      sym__indent,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
    ACTIONS(254), 1,
      sym__space,
    ACTIONS(256), 1,
      sym__newline,
    STATE(113), 1,
      sym_children,
    ACTIONS(185), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [1220] = 3,
    ACTIONS(262), 1,
      sym__newline,
    ACTIONS(258), 3,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(260), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1237] = 2,
    ACTIONS(236), 5,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
      sym__space,
    ACTIONS(238), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [1252] = 2,
    ACTIONS(183), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(185), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1267] = 2,
    ACTIONS(29), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(31), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1282] = 5,
    ACTIONS(67), 1,
      sym__indent,
    ACTIONS(242), 1,
      sym__newline,
    STATE(98), 1,
      sym_children,
    ACTIONS(183), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(185), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [1303] = 2,
    ACTIONS(264), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(266), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1318] = 2,
    ACTIONS(268), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(270), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1333] = 4,
    ACTIONS(67), 1,
      sym__indent,
    STATE(90), 1,
      sym_children,
    ACTIONS(29), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(31), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [1352] = 4,
    ACTIONS(67), 1,
      sym__indent,
    STATE(94), 1,
      sym_children,
    ACTIONS(207), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(209), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [1371] = 2,
    ACTIONS(272), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(274), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1386] = 5,
    ACTIONS(67), 1,
      sym__indent,
    ACTIONS(276), 1,
      sym__newline,
    STATE(96), 1,
      sym_children,
    ACTIONS(211), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(213), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [1407] = 4,
    ACTIONS(67), 1,
      sym__indent,
    STATE(96), 1,
      sym_children,
    ACTIONS(211), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(213), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [1426] = 2,
    ACTIONS(211), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(213), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1441] = 2,
    ACTIONS(142), 3,
      sym__newline,
      sym__indent,
      ts_builtin_sym_end,
    ACTIONS(144), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_POUND_LBRACE,
      aux_sym_inline_text_token1,
      sym_tag_name,
  [1456] = 2,
    ACTIONS(278), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(280), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1471] = 5,
    ACTIONS(67), 1,
      sym__indent,
    ACTIONS(282), 1,
      sym__newline,
    STATE(91), 1,
      sym_children,
    ACTIONS(227), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(229), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [1492] = 3,
    ACTIONS(288), 1,
      sym__newline,
    ACTIONS(284), 3,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(286), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1509] = 4,
    ACTIONS(67), 1,
      sym__indent,
    STATE(91), 1,
      sym_children,
    ACTIONS(227), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(229), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [1528] = 2,
    ACTIONS(203), 5,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
      sym__space,
    ACTIONS(205), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [1543] = 4,
    ACTIONS(67), 1,
      sym__indent,
    STATE(98), 1,
      sym_children,
    ACTIONS(183), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(185), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [1562] = 2,
    ACTIONS(290), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(292), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1577] = 3,
    ACTIONS(298), 1,
      sym__newline,
    ACTIONS(294), 3,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(296), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1594] = 2,
    ACTIONS(207), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(209), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1609] = 3,
    ACTIONS(300), 1,
      sym__newline,
    ACTIONS(258), 2,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(260), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1625] = 2,
    ACTIONS(236), 4,
      sym__newline,
      sym__indent,
      ts_builtin_sym_end,
      sym__space,
    ACTIONS(238), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [1639] = 5,
    ACTIONS(117), 1,
      sym__indent,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    ACTIONS(302), 1,
      sym__newline,
    STATE(106), 1,
      sym_children,
    ACTIONS(213), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [1659] = 5,
    ACTIONS(117), 1,
      sym__indent,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    ACTIONS(304), 1,
      sym__newline,
    STATE(111), 1,
      sym_children,
    ACTIONS(229), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [1679] = 5,
    ACTIONS(117), 1,
      sym__indent,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
    ACTIONS(256), 1,
      sym__newline,
    STATE(113), 1,
      sym_children,
    ACTIONS(185), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [1699] = 3,
    ACTIONS(306), 1,
      sym__newline,
    ACTIONS(284), 2,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(286), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1715] = 2,
    ACTIONS(203), 4,
      sym__newline,
      sym__indent,
      ts_builtin_sym_end,
      sym__space,
    ACTIONS(205), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [1729] = 3,
    ACTIONS(308), 1,
      sym__newline,
    ACTIONS(294), 2,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(296), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1745] = 2,
    ACTIONS(264), 2,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(266), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1758] = 4,
    ACTIONS(117), 1,
      sym__indent,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    STATE(111), 1,
      sym_children,
    ACTIONS(229), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [1775] = 5,
    ACTIONS(79), 1,
      anon_sym_if,
    ACTIONS(146), 1,
      sym_tag_name,
    ACTIONS(310), 1,
      sym__newline,
    STATE(25), 1,
      sym_if_statement,
    STATE(18), 4,
      sym_tag,
      sym_conditional,
      sym__children_choice,
      aux_sym_children_repeat1,
  [1794] = 5,
    ACTIONS(79), 1,
      anon_sym_if,
    ACTIONS(81), 1,
      sym_tag_name,
    ACTIONS(312), 1,
      sym__newline,
    STATE(25), 1,
      sym_if_statement,
    STATE(9), 4,
      sym_tag,
      sym_conditional,
      sym__children_choice,
      aux_sym_children_repeat1,
  [1813] = 5,
    ACTIONS(79), 1,
      anon_sym_if,
    ACTIONS(81), 1,
      sym_tag_name,
    ACTIONS(314), 1,
      sym__newline,
    STATE(25), 1,
      sym_if_statement,
    STATE(8), 4,
      sym_tag,
      sym_conditional,
      sym__children_choice,
      aux_sym_children_repeat1,
  [1832] = 4,
    ACTIONS(117), 1,
      sym__indent,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
    STATE(113), 1,
      sym_children,
    ACTIONS(185), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [1849] = 2,
    ACTIONS(29), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(31), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [1862] = 2,
    ACTIONS(290), 2,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(292), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1875] = 2,
    ACTIONS(264), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(266), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [1888] = 2,
    ACTIONS(183), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(185), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [1901] = 2,
    ACTIONS(211), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(213), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [1914] = 4,
    ACTIONS(117), 1,
      sym__indent,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    STATE(106), 1,
      sym_children,
    ACTIONS(213), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [1931] = 4,
    ACTIONS(117), 1,
      sym__indent,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    STATE(104), 1,
      sym_children,
    ACTIONS(209), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [1948] = 2,
    ACTIONS(268), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(270), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [1961] = 2,
    ACTIONS(278), 2,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(280), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1974] = 2,
    ACTIONS(207), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(209), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [1987] = 4,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 1,
      sym__indent,
    STATE(105), 1,
      sym_children,
    ACTIONS(31), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [2004] = 2,
    ACTIONS(227), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(229), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [2017] = 5,
    ACTIONS(79), 1,
      anon_sym_if,
    ACTIONS(146), 1,
      sym_tag_name,
    ACTIONS(316), 1,
      sym__newline,
    STATE(25), 1,
      sym_if_statement,
    STATE(26), 4,
      sym_tag,
      sym_conditional,
      sym__children_choice,
      aux_sym_children_repeat1,
  [2036] = 2,
    ACTIONS(272), 2,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(274), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [2049] = 3,
    ACTIONS(318), 1,
      ts_builtin_sym_end,
    ACTIONS(322), 1,
      sym__newline,
    ACTIONS(320), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [2063] = 3,
    ACTIONS(324), 1,
      ts_builtin_sym_end,
    ACTIONS(328), 1,
      sym__newline,
    ACTIONS(326), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [2077] = 2,
    ACTIONS(330), 1,
      ts_builtin_sym_end,
    ACTIONS(332), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [2088] = 2,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
    ACTIONS(270), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [2099] = 2,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
    ACTIONS(185), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [2110] = 2,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    ACTIONS(209), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [2121] = 2,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [2132] = 2,
    ACTIONS(334), 1,
      ts_builtin_sym_end,
    ACTIONS(336), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [2143] = 2,
    ACTIONS(338), 1,
      ts_builtin_sym_end,
    ACTIONS(340), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [2154] = 2,
    ACTIONS(264), 1,
      ts_builtin_sym_end,
    ACTIONS(266), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [2165] = 2,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    ACTIONS(213), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [2176] = 2,
    ACTIONS(342), 1,
      ts_builtin_sym_end,
    ACTIONS(344), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [2187] = 2,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    ACTIONS(229), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      sym_tag_name,
  [2198] = 4,
    ACTIONS(103), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(346), 1,
      aux_sym_inline_text_token1,
    STATE(37), 1,
      sym_inline_text,
    STATE(11), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
  [2212] = 4,
    ACTIONS(223), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(348), 1,
      aux_sym_inline_text_token1,
    STATE(75), 1,
      sym_inline_text,
    STATE(35), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
  [2226] = 4,
    ACTIONS(350), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(352), 1,
      anon_sym_DQUOTE,
    ACTIONS(354), 1,
      aux_sym_quoted_attribute_value_token1,
    STATE(121), 2,
      sym_interpolation,
      aux_sym_quoted_attribute_value_repeat1,
  [2240] = 4,
    ACTIONS(103), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(346), 1,
      aux_sym_inline_text_token1,
    STATE(36), 1,
      sym_inline_text,
    STATE(11), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
  [2254] = 4,
    ACTIONS(171), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(356), 1,
      aux_sym_inline_text_token1,
    STATE(60), 1,
      sym_inline_text,
    STATE(22), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
  [2268] = 4,
    ACTIONS(171), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(356), 1,
      aux_sym_inline_text_token1,
    STATE(54), 1,
      sym_inline_text,
    STATE(22), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
  [2282] = 4,
    ACTIONS(358), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(361), 1,
      anon_sym_DQUOTE,
    ACTIONS(363), 1,
      aux_sym_quoted_attribute_value_token1,
    STATE(120), 2,
      sym_interpolation,
      aux_sym_quoted_attribute_value_repeat1,
  [2296] = 4,
    ACTIONS(350), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(366), 1,
      anon_sym_DQUOTE,
    ACTIONS(368), 1,
      aux_sym_quoted_attribute_value_token1,
    STATE(120), 2,
      sym_interpolation,
      aux_sym_quoted_attribute_value_repeat1,
  [2310] = 4,
    ACTIONS(223), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(348), 1,
      aux_sym_inline_text_token1,
    STATE(76), 1,
      sym_inline_text,
    STATE(35), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
  [2324] = 4,
    ACTIONS(103), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(346), 1,
      aux_sym_inline_text_token1,
    STATE(31), 1,
      sym_inline_text,
    STATE(11), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
  [2338] = 4,
    ACTIONS(223), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(348), 1,
      aux_sym_inline_text_token1,
    STATE(77), 1,
      sym_inline_text,
    STATE(35), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
  [2352] = 4,
    ACTIONS(171), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(356), 1,
      aux_sym_inline_text_token1,
    STATE(65), 1,
      sym_inline_text,
    STATE(22), 2,
      sym_interpolation,
      aux_sym_inline_text_repeat1,
  [2366] = 3,
    ACTIONS(370), 1,
      anon_sym_RPAREN,
    ACTIONS(372), 1,
      sym_attribute_name,
    STATE(129), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [2377] = 3,
    ACTIONS(374), 1,
      anon_sym_RPAREN,
    ACTIONS(376), 1,
      sym_attribute_name,
    STATE(127), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [2388] = 3,
    ACTIONS(372), 1,
      sym_attribute_name,
    ACTIONS(379), 1,
      anon_sym_RPAREN,
    STATE(127), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [2399] = 3,
    ACTIONS(372), 1,
      sym_attribute_name,
    ACTIONS(381), 1,
      anon_sym_RPAREN,
    STATE(127), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [2410] = 3,
    ACTIONS(372), 1,
      sym_attribute_name,
    ACTIONS(383), 1,
      anon_sym_RPAREN,
    STATE(127), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [2421] = 3,
    ACTIONS(372), 1,
      sym_attribute_name,
    ACTIONS(385), 1,
      anon_sym_RPAREN,
    STATE(128), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [2432] = 3,
    ACTIONS(372), 1,
      sym_attribute_name,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
    STATE(130), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [2443] = 2,
    ACTIONS(142), 1,
      aux_sym_quoted_attribute_value_token1,
    ACTIONS(144), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_DQUOTE,
  [2451] = 3,
    ACTIONS(389), 1,
      anon_sym_DQUOTE,
    ACTIONS(391), 1,
      sym_unquoted_attribute_value,
    STATE(140), 1,
      sym_quoted_attribute_value,
  [2461] = 2,
    ACTIONS(27), 1,
      sym__indent,
    STATE(64), 1,
      sym_children,
  [2468] = 2,
    ACTIONS(27), 1,
      sym__indent,
    STATE(70), 1,
      sym_children,
  [2475] = 2,
    ACTIONS(393), 1,
      sym__indent,
    STATE(88), 1,
      sym_children,
  [2482] = 2,
    ACTIONS(117), 1,
      sym__indent,
    STATE(108), 1,
      sym_children,
  [2489] = 1,
    ACTIONS(395), 2,
      anon_sym_RPAREN,
      sym_attribute_name,
  [2494] = 1,
    ACTIONS(397), 2,
      anon_sym_RPAREN,
      sym_attribute_name,
  [2499] = 1,
    ACTIONS(399), 2,
      anon_sym_RPAREN,
      sym_attribute_name,
  [2504] = 2,
    ACTIONS(393), 1,
      sym__indent,
    STATE(100), 1,
      sym_children,
  [2511] = 2,
    ACTIONS(393), 1,
      sym__indent,
    STATE(95), 1,
      sym_children,
  [2518] = 2,
    ACTIONS(27), 1,
      sym__indent,
    STATE(59), 1,
      sym_children,
  [2525] = 1,
    ACTIONS(401), 1,
      sym_expression,
  [2529] = 1,
    ACTIONS(403), 1,
      anon_sym_RBRACE,
  [2533] = 1,
    ACTIONS(405), 1,
      sym_expression,
  [2537] = 1,
    ACTIONS(407), 1,
      sym_condition,
  [2541] = 1,
    ACTIONS(409), 1,
      sym_reference,
  [2545] = 1,
    ACTIONS(411), 1,
      sym_condition,
  [2549] = 1,
    ACTIONS(413), 1,
      sym_reference,
  [2553] = 1,
    ACTIONS(415), 1,
      sym_reference,
  [2557] = 1,
    ACTIONS(417), 1,
      anon_sym_EQ,
  [2561] = 1,
    ACTIONS(419), 1,
      anon_sym_RBRACE,
  [2565] = 1,
    ACTIONS(421), 1,
      sym_condition,
  [2569] = 1,
    ACTIONS(423), 1,
      anon_sym_RBRACE,
  [2573] = 1,
    ACTIONS(425), 1,
      anon_sym_RBRACE,
  [2577] = 1,
    ACTIONS(427), 1,
      ts_builtin_sym_end,
  [2581] = 1,
    ACTIONS(429), 1,
      sym_condition,
  [2585] = 1,
    ACTIONS(431), 1,
      sym_expression,
  [2589] = 1,
    ACTIONS(433), 1,
      sym_expression,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 76,
  [SMALL_STATE(5)] = 100,
  [SMALL_STATE(6)] = 130,
  [SMALL_STATE(7)] = 166,
  [SMALL_STATE(8)] = 202,
  [SMALL_STATE(9)] = 234,
  [SMALL_STATE(10)] = 266,
  [SMALL_STATE(11)] = 292,
  [SMALL_STATE(12)] = 318,
  [SMALL_STATE(13)] = 351,
  [SMALL_STATE(14)] = 386,
  [SMALL_STATE(15)] = 421,
  [SMALL_STATE(16)] = 454,
  [SMALL_STATE(17)] = 472,
  [SMALL_STATE(18)] = 498,
  [SMALL_STATE(19)] = 528,
  [SMALL_STATE(20)] = 552,
  [SMALL_STATE(21)] = 576,
  [SMALL_STATE(22)] = 598,
  [SMALL_STATE(23)] = 622,
  [SMALL_STATE(24)] = 646,
  [SMALL_STATE(25)] = 672,
  [SMALL_STATE(26)] = 696,
  [SMALL_STATE(27)] = 726,
  [SMALL_STATE(28)] = 754,
  [SMALL_STATE(29)] = 775,
  [SMALL_STATE(30)] = 792,
  [SMALL_STATE(31)] = 813,
  [SMALL_STATE(32)] = 836,
  [SMALL_STATE(33)] = 857,
  [SMALL_STATE(34)] = 880,
  [SMALL_STATE(35)] = 901,
  [SMALL_STATE(36)] = 924,
  [SMALL_STATE(37)] = 947,
  [SMALL_STATE(38)] = 970,
  [SMALL_STATE(39)] = 991,
  [SMALL_STATE(40)] = 1008,
  [SMALL_STATE(41)] = 1029,
  [SMALL_STATE(42)] = 1053,
  [SMALL_STATE(43)] = 1077,
  [SMALL_STATE(44)] = 1099,
  [SMALL_STATE(45)] = 1115,
  [SMALL_STATE(46)] = 1137,
  [SMALL_STATE(47)] = 1159,
  [SMALL_STATE(48)] = 1174,
  [SMALL_STATE(49)] = 1197,
  [SMALL_STATE(50)] = 1220,
  [SMALL_STATE(51)] = 1237,
  [SMALL_STATE(52)] = 1252,
  [SMALL_STATE(53)] = 1267,
  [SMALL_STATE(54)] = 1282,
  [SMALL_STATE(55)] = 1303,
  [SMALL_STATE(56)] = 1318,
  [SMALL_STATE(57)] = 1333,
  [SMALL_STATE(58)] = 1352,
  [SMALL_STATE(59)] = 1371,
  [SMALL_STATE(60)] = 1386,
  [SMALL_STATE(61)] = 1407,
  [SMALL_STATE(62)] = 1426,
  [SMALL_STATE(63)] = 1441,
  [SMALL_STATE(64)] = 1456,
  [SMALL_STATE(65)] = 1471,
  [SMALL_STATE(66)] = 1492,
  [SMALL_STATE(67)] = 1509,
  [SMALL_STATE(68)] = 1528,
  [SMALL_STATE(69)] = 1543,
  [SMALL_STATE(70)] = 1562,
  [SMALL_STATE(71)] = 1577,
  [SMALL_STATE(72)] = 1594,
  [SMALL_STATE(73)] = 1609,
  [SMALL_STATE(74)] = 1625,
  [SMALL_STATE(75)] = 1639,
  [SMALL_STATE(76)] = 1659,
  [SMALL_STATE(77)] = 1679,
  [SMALL_STATE(78)] = 1699,
  [SMALL_STATE(79)] = 1715,
  [SMALL_STATE(80)] = 1729,
  [SMALL_STATE(81)] = 1745,
  [SMALL_STATE(82)] = 1758,
  [SMALL_STATE(83)] = 1775,
  [SMALL_STATE(84)] = 1794,
  [SMALL_STATE(85)] = 1813,
  [SMALL_STATE(86)] = 1832,
  [SMALL_STATE(87)] = 1849,
  [SMALL_STATE(88)] = 1862,
  [SMALL_STATE(89)] = 1875,
  [SMALL_STATE(90)] = 1888,
  [SMALL_STATE(91)] = 1901,
  [SMALL_STATE(92)] = 1914,
  [SMALL_STATE(93)] = 1931,
  [SMALL_STATE(94)] = 1948,
  [SMALL_STATE(95)] = 1961,
  [SMALL_STATE(96)] = 1974,
  [SMALL_STATE(97)] = 1987,
  [SMALL_STATE(98)] = 2004,
  [SMALL_STATE(99)] = 2017,
  [SMALL_STATE(100)] = 2036,
  [SMALL_STATE(101)] = 2049,
  [SMALL_STATE(102)] = 2063,
  [SMALL_STATE(103)] = 2077,
  [SMALL_STATE(104)] = 2088,
  [SMALL_STATE(105)] = 2099,
  [SMALL_STATE(106)] = 2110,
  [SMALL_STATE(107)] = 2121,
  [SMALL_STATE(108)] = 2132,
  [SMALL_STATE(109)] = 2143,
  [SMALL_STATE(110)] = 2154,
  [SMALL_STATE(111)] = 2165,
  [SMALL_STATE(112)] = 2176,
  [SMALL_STATE(113)] = 2187,
  [SMALL_STATE(114)] = 2198,
  [SMALL_STATE(115)] = 2212,
  [SMALL_STATE(116)] = 2226,
  [SMALL_STATE(117)] = 2240,
  [SMALL_STATE(118)] = 2254,
  [SMALL_STATE(119)] = 2268,
  [SMALL_STATE(120)] = 2282,
  [SMALL_STATE(121)] = 2296,
  [SMALL_STATE(122)] = 2310,
  [SMALL_STATE(123)] = 2324,
  [SMALL_STATE(124)] = 2338,
  [SMALL_STATE(125)] = 2352,
  [SMALL_STATE(126)] = 2366,
  [SMALL_STATE(127)] = 2377,
  [SMALL_STATE(128)] = 2388,
  [SMALL_STATE(129)] = 2399,
  [SMALL_STATE(130)] = 2410,
  [SMALL_STATE(131)] = 2421,
  [SMALL_STATE(132)] = 2432,
  [SMALL_STATE(133)] = 2443,
  [SMALL_STATE(134)] = 2451,
  [SMALL_STATE(135)] = 2461,
  [SMALL_STATE(136)] = 2468,
  [SMALL_STATE(137)] = 2475,
  [SMALL_STATE(138)] = 2482,
  [SMALL_STATE(139)] = 2489,
  [SMALL_STATE(140)] = 2494,
  [SMALL_STATE(141)] = 2499,
  [SMALL_STATE(142)] = 2504,
  [SMALL_STATE(143)] = 2511,
  [SMALL_STATE(144)] = 2518,
  [SMALL_STATE(145)] = 2525,
  [SMALL_STATE(146)] = 2529,
  [SMALL_STATE(147)] = 2533,
  [SMALL_STATE(148)] = 2537,
  [SMALL_STATE(149)] = 2541,
  [SMALL_STATE(150)] = 2545,
  [SMALL_STATE(151)] = 2549,
  [SMALL_STATE(152)] = 2553,
  [SMALL_STATE(153)] = 2557,
  [SMALL_STATE(154)] = 2561,
  [SMALL_STATE(155)] = 2565,
  [SMALL_STATE(156)] = 2569,
  [SMALL_STATE(157)] = 2573,
  [SMALL_STATE(158)] = 2577,
  [SMALL_STATE(159)] = 2581,
  [SMALL_STATE(160)] = 2585,
  [SMALL_STATE(161)] = 2589,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(4),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(159),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(2),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(5),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_text_repeat1, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_text_repeat1, 2),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_text_repeat1, 2), SHIFT_REPEAT(161),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_text_repeat1, 2), SHIFT_REPEAT(10),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_text, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_text, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(152),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(151),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(149),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(150),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_text_repeat1, 2), SHIFT_REPEAT(145),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_text_repeat1, 2), SHIFT_REPEAT(19),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(155),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(50),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(21),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(6),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(27),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_text_repeat1, 2), SHIFT_REPEAT(147),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_text_repeat1, 2), SHIFT_REPEAT(33),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(38),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(148),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(73),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 1),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 7),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 7),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_statement, 4),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_statement, 4),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 3),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 3),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 2),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_statement, 2),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_statement, 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 2),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 2),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_expansion, 1),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_expansion, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 4),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 4),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 3),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 3),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extends_statement, 2),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extends_statement, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 2), SHIFT_REPEAT(160),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 2),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 2), SHIFT_REPEAT(120),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(153),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [427] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
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
