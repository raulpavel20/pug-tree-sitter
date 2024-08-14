#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 105
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 41
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
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
  aux_sym_condition_token1 = 7,
  sym_tag_name = 8,
  sym_class_or_id = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  anon_sym_EQ = 12,
  sym_attribute_name = 13,
  sym_quoted_attribute_value = 14,
  sym_unquoted_attribute_value = 15,
  sym__space = 16,
  sym_identifier = 17,
  sym__newline = 18,
  sym__indent = 19,
  sym__dedent = 20,
  sym_source_file = 21,
  sym_block_expansion = 22,
  sym_extends_statement = 23,
  sym_include_statement = 24,
  sym_block_statement = 25,
  sym_tag = 26,
  sym_conditional = 27,
  sym_if_statement = 28,
  sym_else_if_statement = 29,
  sym_else_statement = 30,
  sym_condition = 31,
  sym_attributes = 32,
  sym_attribute = 33,
  sym_inline_text = 34,
  sym_children = 35,
  sym__children_choice = 36,
  aux_sym_source_file_repeat1 = 37,
  aux_sym_tag_repeat1 = 38,
  aux_sym_attributes_repeat1 = 39,
  aux_sym_children_repeat1 = 40,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_extends] = "extends",
  [anon_sym_include] = "include",
  [anon_sym_block] = "block",
  [anon_sym_if] = "if",
  [anon_sym_elseif] = "else if",
  [anon_sym_else] = "else",
  [aux_sym_condition_token1] = "condition_token1",
  [sym_tag_name] = "tag_name",
  [sym_class_or_id] = "class_or_id",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ] = "=",
  [sym_attribute_name] = "attribute_name",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [sym_unquoted_attribute_value] = "unquoted_attribute_value",
  [sym__space] = "_space",
  [sym_identifier] = "identifier",
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
  [sym_condition] = "condition",
  [sym_attributes] = "attributes",
  [sym_attribute] = "attribute",
  [sym_inline_text] = "inline_text",
  [sym_children] = "children",
  [sym__children_choice] = "_children_choice",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_tag_repeat1] = "tag_repeat1",
  [aux_sym_attributes_repeat1] = "attributes_repeat1",
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
  [aux_sym_condition_token1] = aux_sym_condition_token1,
  [sym_tag_name] = sym_tag_name,
  [sym_class_or_id] = sym_class_or_id,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_attribute_name] = sym_attribute_name,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [sym_unquoted_attribute_value] = sym_unquoted_attribute_value,
  [sym__space] = sym__space,
  [sym_identifier] = sym_identifier,
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
  [sym_condition] = sym_condition,
  [sym_attributes] = sym_attributes,
  [sym_attribute] = sym_attribute,
  [sym_inline_text] = sym_inline_text,
  [sym_children] = sym_children,
  [sym__children_choice] = sym__children_choice,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_tag_repeat1] = aux_sym_tag_repeat1,
  [aux_sym_attributes_repeat1] = aux_sym_attributes_repeat1,
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
  [aux_sym_condition_token1] = {
    .visible = false,
    .named = false,
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
  [sym_quoted_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_unquoted_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
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
  [sym_condition] = {
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
  [sym_inline_text] = {
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
  [aux_sym_attributes_repeat1] = {
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
  [7] = 7,
  [8] = 8,
  [9] = 7,
  [10] = 6,
  [11] = 11,
  [12] = 11,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 14,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 13,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 17,
  [27] = 27,
  [28] = 28,
  [29] = 25,
  [30] = 22,
  [31] = 27,
  [32] = 24,
  [33] = 20,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 19,
  [40] = 40,
  [41] = 34,
  [42] = 15,
  [43] = 43,
  [44] = 44,
  [45] = 18,
  [46] = 46,
  [47] = 47,
  [48] = 28,
  [49] = 49,
  [50] = 50,
  [51] = 23,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 49,
  [58] = 52,
  [59] = 55,
  [60] = 36,
  [61] = 53,
  [62] = 62,
  [63] = 63,
  [64] = 44,
  [65] = 65,
  [66] = 54,
  [67] = 67,
  [68] = 43,
  [69] = 50,
  [70] = 37,
  [71] = 47,
  [72] = 46,
  [73] = 38,
  [74] = 35,
  [75] = 40,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 76,
  [80] = 78,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 87,
  [93] = 82,
  [94] = 89,
  [95] = 85,
  [96] = 91,
  [97] = 88,
  [98] = 83,
  [99] = 81,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#' ||
          lookahead == '.') ADVANCE(10);
      if (lookahead == '(') ADVANCE(44);
      if (lookahead == ')') ADVANCE(45);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == 'b') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(48);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(50);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(51);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(45);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == 'i') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 7:
      if (lookahead == 'f') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(7);
      END_STATE();
    case 9:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 10:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 11:
      if (eof) ADVANCE(13);
      if (lookahead == ' ') ADVANCE(52);
      if (lookahead == '#' ||
          lookahead == '.') ADVANCE(10);
      if (lookahead == '(') ADVANCE(44);
      if (lookahead == 'b') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(12)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 12:
      if (eof) ADVANCE(13);
      if (lookahead == '#' ||
          lookahead == '.') ADVANCE(10);
      if (lookahead == '(') ADVANCE(44);
      if (lookahead == 'b') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_extends);
      if (lookahead == '-') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '-') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_block);
      if (lookahead == '-') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '-') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'c') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'c') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'd') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'd') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'e') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'e') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'k') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'l') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'l') ADVANCE(38);
      if (lookahead == 'x') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'l') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'l') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'n') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'o') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 's') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 's') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 't') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'u') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_class_or_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_quoted_attribute_value);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_quoted_attribute_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(51);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_unquoted_attribute_value);
      if (lookahead == '"') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ')') ADVANCE(2);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_unquoted_attribute_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == ' ') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0, .external_lex_state = 2},
  [5] = {.lex_state = 0, .external_lex_state = 2},
  [6] = {.lex_state = 11, .external_lex_state = 1},
  [7] = {.lex_state = 11, .external_lex_state = 1},
  [8] = {.lex_state = 0, .external_lex_state = 2},
  [9] = {.lex_state = 11, .external_lex_state = 3},
  [10] = {.lex_state = 11, .external_lex_state = 3},
  [11] = {.lex_state = 11, .external_lex_state = 1},
  [12] = {.lex_state = 11, .external_lex_state = 3},
  [13] = {.lex_state = 11, .external_lex_state = 1},
  [14] = {.lex_state = 11, .external_lex_state = 1},
  [15] = {.lex_state = 0, .external_lex_state = 1},
  [16] = {.lex_state = 11, .external_lex_state = 3},
  [17] = {.lex_state = 6, .external_lex_state = 4},
  [18] = {.lex_state = 0, .external_lex_state = 1},
  [19] = {.lex_state = 0, .external_lex_state = 1},
  [20] = {.lex_state = 11, .external_lex_state = 1},
  [21] = {.lex_state = 11, .external_lex_state = 3},
  [22] = {.lex_state = 0, .external_lex_state = 1},
  [23] = {.lex_state = 0, .external_lex_state = 1},
  [24] = {.lex_state = 0, .external_lex_state = 1},
  [25] = {.lex_state = 11, .external_lex_state = 1},
  [26] = {.lex_state = 6, .external_lex_state = 4},
  [27] = {.lex_state = 0, .external_lex_state = 1},
  [28] = {.lex_state = 0, .external_lex_state = 1},
  [29] = {.lex_state = 11, .external_lex_state = 3},
  [30] = {.lex_state = 0, .external_lex_state = 3},
  [31] = {.lex_state = 0, .external_lex_state = 3},
  [32] = {.lex_state = 0, .external_lex_state = 3},
  [33] = {.lex_state = 11, .external_lex_state = 3},
  [34] = {.lex_state = 0, .external_lex_state = 1},
  [35] = {.lex_state = 0, .external_lex_state = 2},
  [36] = {.lex_state = 0, .external_lex_state = 2},
  [37] = {.lex_state = 0, .external_lex_state = 2},
  [38] = {.lex_state = 0, .external_lex_state = 2},
  [39] = {.lex_state = 0, .external_lex_state = 5},
  [40] = {.lex_state = 0, .external_lex_state = 2},
  [41] = {.lex_state = 0, .external_lex_state = 3},
  [42] = {.lex_state = 0, .external_lex_state = 5},
  [43] = {.lex_state = 0, .external_lex_state = 2},
  [44] = {.lex_state = 0, .external_lex_state = 2},
  [45] = {.lex_state = 0, .external_lex_state = 5},
  [46] = {.lex_state = 0, .external_lex_state = 2},
  [47] = {.lex_state = 0, .external_lex_state = 2},
  [48] = {.lex_state = 0, .external_lex_state = 5},
  [49] = {.lex_state = 0, .external_lex_state = 2},
  [50] = {.lex_state = 0, .external_lex_state = 2},
  [51] = {.lex_state = 0, .external_lex_state = 5},
  [52] = {.lex_state = 0, .external_lex_state = 2},
  [53] = {.lex_state = 0, .external_lex_state = 2},
  [54] = {.lex_state = 0, .external_lex_state = 2},
  [55] = {.lex_state = 0, .external_lex_state = 2},
  [56] = {.lex_state = 0, .external_lex_state = 4},
  [57] = {.lex_state = 0, .external_lex_state = 4},
  [58] = {.lex_state = 0, .external_lex_state = 4},
  [59] = {.lex_state = 0, .external_lex_state = 4},
  [60] = {.lex_state = 0, .external_lex_state = 4},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 0, .external_lex_state = 5},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 0, .external_lex_state = 5},
  [88] = {.lex_state = 0, .external_lex_state = 5},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 0, .external_lex_state = 5},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 0, .external_lex_state = 5},
  [93] = {.lex_state = 0, .external_lex_state = 5},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 0, .external_lex_state = 5},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 9},
  [103] = {.lex_state = 9},
  [104] = {.lex_state = 0},
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
    [sym_tag_name] = ACTIONS(1),
    [sym_class_or_id] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_quoted_attribute_value] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(101),
    [sym_block_expansion] = STATE(3),
    [sym_extends_statement] = STATE(65),
    [sym_include_statement] = STATE(65),
    [sym_block_statement] = STATE(65),
    [sym_tag] = STATE(3),
    [sym_conditional] = STATE(3),
    [sym_if_statement] = STATE(64),
    [sym_else_if_statement] = STATE(64),
    [sym_else_statement] = STATE(64),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_extends] = ACTIONS(5),
    [anon_sym_include] = ACTIONS(7),
    [anon_sym_block] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_elseif] = ACTIONS(13),
    [anon_sym_else] = ACTIONS(15),
    [sym_tag_name] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_extends,
    ACTIONS(24), 1,
      anon_sym_include,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(30), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_elseif,
    ACTIONS(36), 1,
      anon_sym_else,
    ACTIONS(39), 1,
      sym_tag_name,
    STATE(64), 3,
      sym_if_statement,
      sym_else_if_statement,
      sym_else_statement,
    STATE(65), 3,
      sym_extends_statement,
      sym_include_statement,
      sym_block_statement,
    STATE(2), 4,
      sym_block_expansion,
      sym_tag,
      sym_conditional,
      aux_sym_source_file_repeat1,
  [41] = 11,
    ACTIONS(5), 1,
      anon_sym_extends,
    ACTIONS(7), 1,
      anon_sym_include,
    ACTIONS(9), 1,
      anon_sym_block,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_elseif,
    ACTIONS(15), 1,
      anon_sym_else,
    ACTIONS(17), 1,
      sym_tag_name,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    STATE(64), 3,
      sym_if_statement,
      sym_else_if_statement,
      sym_else_statement,
    STATE(65), 3,
      sym_extends_statement,
      sym_include_statement,
      sym_block_statement,
    STATE(2), 4,
      sym_block_expansion,
      sym_tag,
      sym_conditional,
      aux_sym_source_file_repeat1,
  [82] = 10,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 1,
      anon_sym_if,
    ACTIONS(50), 1,
      anon_sym_elseif,
    ACTIONS(52), 1,
      anon_sym_else,
    ACTIONS(54), 1,
      sym_tag_name,
    ACTIONS(56), 1,
      sym__newline,
    ACTIONS(58), 1,
      sym__dedent,
    ACTIONS(46), 3,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
    STATE(44), 3,
      sym_if_statement,
      sym_else_if_statement,
      sym_else_statement,
    STATE(8), 4,
      sym_tag,
      sym_conditional,
      sym__children_choice,
      aux_sym_children_repeat1,
  [120] = 10,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 1,
      anon_sym_if,
    ACTIONS(50), 1,
      anon_sym_elseif,
    ACTIONS(52), 1,
      anon_sym_else,
    ACTIONS(54), 1,
      sym_tag_name,
    ACTIONS(56), 1,
      sym__newline,
    ACTIONS(60), 1,
      sym__dedent,
    ACTIONS(46), 3,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
    STATE(44), 3,
      sym_if_statement,
      sym_else_if_statement,
      sym_else_statement,
    STATE(8), 4,
      sym_tag,
      sym_conditional,
      sym__children_choice,
      aux_sym_children_repeat1,
  [158] = 10,
    ACTIONS(66), 1,
      sym_class_or_id,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      sym__space,
    ACTIONS(72), 1,
      sym__newline,
    ACTIONS(74), 1,
      sym__indent,
    STATE(11), 1,
      aux_sym_tag_repeat1,
    STATE(13), 1,
      sym_attributes,
    STATE(46), 1,
      sym_children,
    ACTIONS(62), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(64), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      sym_tag_name,
  [196] = 10,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 1,
      sym__indent,
    ACTIONS(80), 1,
      sym_class_or_id,
    ACTIONS(82), 1,
      sym__space,
    ACTIONS(84), 1,
      sym__newline,
    STATE(6), 1,
      aux_sym_tag_repeat1,
    STATE(14), 1,
      sym_attributes,
    STATE(50), 1,
      sym_children,
    ACTIONS(76), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(78), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      sym_tag_name,
  [234] = 9,
    ACTIONS(90), 1,
      anon_sym_if,
    ACTIONS(93), 1,
      anon_sym_elseif,
    ACTIONS(96), 1,
      anon_sym_else,
    ACTIONS(99), 1,
      sym_tag_name,
    ACTIONS(102), 1,
      sym__newline,
    ACTIONS(86), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(88), 3,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
    STATE(44), 3,
      sym_if_statement,
      sym_else_if_statement,
      sym_else_statement,
    STATE(8), 4,
      sym_tag,
      sym_conditional,
      sym__children_choice,
      aux_sym_children_repeat1,
  [270] = 10,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      sym_class_or_id,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      sym__space,
    ACTIONS(111), 1,
      sym__newline,
    ACTIONS(113), 1,
      sym__indent,
    STATE(10), 1,
      aux_sym_tag_repeat1,
    STATE(16), 1,
      sym_attributes,
    STATE(69), 1,
      sym_children,
    ACTIONS(78), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      sym_tag_name,
  [307] = 10,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      sym__indent,
    ACTIONS(115), 1,
      sym_class_or_id,
    ACTIONS(117), 1,
      sym__space,
    ACTIONS(119), 1,
      sym__newline,
    STATE(12), 1,
      aux_sym_tag_repeat1,
    STATE(21), 1,
      sym_attributes,
    STATE(72), 1,
      sym_children,
    ACTIONS(64), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      sym_tag_name,
  [344] = 4,
    ACTIONS(125), 1,
      sym_class_or_id,
    STATE(11), 1,
      aux_sym_tag_repeat1,
    ACTIONS(121), 5,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
      sym__space,
    ACTIONS(123), 8,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      sym_tag_name,
      anon_sym_LPAREN,
  [368] = 4,
    ACTIONS(128), 1,
      sym_class_or_id,
    STATE(12), 1,
      aux_sym_tag_repeat1,
    ACTIONS(121), 4,
      sym__newline,
      sym__indent,
      ts_builtin_sym_end,
      sym__space,
    ACTIONS(123), 8,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      sym_tag_name,
      anon_sym_LPAREN,
  [391] = 6,
    ACTIONS(74), 1,
      sym__indent,
    ACTIONS(135), 1,
      sym__space,
    ACTIONS(137), 1,
      sym__newline,
    STATE(37), 1,
      sym_children,
    ACTIONS(131), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(133), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      sym_tag_name,
  [417] = 6,
    ACTIONS(70), 1,
      sym__space,
    ACTIONS(72), 1,
      sym__newline,
    ACTIONS(74), 1,
      sym__indent,
    STATE(46), 1,
      sym_children,
    ACTIONS(62), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(64), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      sym_tag_name,
  [443] = 4,
    ACTIONS(74), 1,
      sym__indent,
    STATE(37), 1,
      sym_children,
    ACTIONS(131), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(133), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [464] = 6,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(113), 1,
      sym__indent,
    ACTIONS(117), 1,
      sym__space,
    ACTIONS(119), 1,
      sym__newline,
    STATE(72), 1,
      sym_children,
    ACTIONS(64), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      sym_tag_name,
  [489] = 7,
    ACTIONS(48), 1,
      anon_sym_if,
    ACTIONS(50), 1,
      anon_sym_elseif,
    ACTIONS(52), 1,
      anon_sym_else,
    ACTIONS(54), 1,
      sym_tag_name,
    ACTIONS(139), 1,
      sym__newline,
    STATE(44), 3,
      sym_if_statement,
      sym_else_if_statement,
      sym_else_statement,
    STATE(5), 4,
      sym_tag,
      sym_conditional,
      sym__children_choice,
      aux_sym_children_repeat1,
  [516] = 4,
    ACTIONS(74), 1,
      sym__indent,
    STATE(46), 1,
      sym_children,
    ACTIONS(62), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(64), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [537] = 4,
    ACTIONS(74), 1,
      sym__indent,
    STATE(43), 1,
      sym_children,
    ACTIONS(141), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(143), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [558] = 2,
    ACTIONS(145), 5,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
      sym__space,
    ACTIONS(147), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      sym_tag_name,
  [575] = 6,
    ACTIONS(113), 1,
      sym__indent,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(151), 1,
      sym__newline,
    STATE(70), 1,
      sym_children,
    ACTIONS(133), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      sym_tag_name,
  [600] = 5,
    ACTIONS(74), 1,
      sym__indent,
    ACTIONS(137), 1,
      sym__newline,
    STATE(37), 1,
      sym_children,
    ACTIONS(131), 3,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(133), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [623] = 4,
    ACTIONS(74), 1,
      sym__indent,
    STATE(54), 1,
      sym_children,
    ACTIONS(153), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(155), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [644] = 5,
    ACTIONS(74), 1,
      sym__indent,
    ACTIONS(157), 1,
      sym__newline,
    STATE(54), 1,
      sym_children,
    ACTIONS(153), 3,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(155), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [667] = 2,
    ACTIONS(159), 5,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
      sym__space,
    ACTIONS(161), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      sym_tag_name,
  [684] = 7,
    ACTIONS(48), 1,
      anon_sym_if,
    ACTIONS(50), 1,
      anon_sym_elseif,
    ACTIONS(52), 1,
      anon_sym_else,
    ACTIONS(54), 1,
      sym_tag_name,
    ACTIONS(163), 1,
      sym__newline,
    STATE(44), 3,
      sym_if_statement,
      sym_else_if_statement,
      sym_else_statement,
    STATE(4), 4,
      sym_tag,
      sym_conditional,
      sym__children_choice,
      aux_sym_children_repeat1,
  [711] = 5,
    ACTIONS(74), 1,
      sym__indent,
    ACTIONS(169), 1,
      sym__newline,
    STATE(53), 1,
      sym_children,
    ACTIONS(165), 3,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(167), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [734] = 4,
    ACTIONS(74), 1,
      sym__indent,
    STATE(53), 1,
      sym_children,
    ACTIONS(165), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(167), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [755] = 2,
    ACTIONS(159), 4,
      sym__newline,
      sym__indent,
      ts_builtin_sym_end,
      sym__space,
    ACTIONS(161), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      sym_tag_name,
  [771] = 5,
    ACTIONS(113), 1,
      sym__indent,
    ACTIONS(151), 1,
      sym__newline,
    STATE(70), 1,
      sym_children,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(133), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [793] = 5,
    ACTIONS(113), 1,
      sym__indent,
    ACTIONS(171), 1,
      sym__newline,
    STATE(61), 1,
      sym_children,
    ACTIONS(165), 2,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(167), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [815] = 5,
    ACTIONS(113), 1,
      sym__indent,
    ACTIONS(173), 1,
      sym__newline,
    STATE(66), 1,
      sym_children,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(155), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [837] = 2,
    ACTIONS(145), 4,
      sym__newline,
      sym__indent,
      ts_builtin_sym_end,
      sym__space,
    ACTIONS(147), 7,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      sym_tag_name,
  [853] = 2,
    ACTIONS(175), 5,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(177), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [869] = 2,
    ACTIONS(179), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(181), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [884] = 3,
    ACTIONS(187), 1,
      sym__newline,
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
  [901] = 2,
    ACTIONS(153), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(155), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [916] = 2,
    ACTIONS(189), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(191), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [931] = 4,
    ACTIONS(113), 1,
      sym__indent,
    STATE(68), 1,
      sym_children,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(143), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [950] = 2,
    ACTIONS(193), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(195), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [965] = 2,
    ACTIONS(175), 4,
      sym__newline,
      sym__indent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(177), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [980] = 4,
    ACTIONS(113), 1,
      sym__indent,
    STATE(70), 1,
      sym_children,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(133), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [999] = 2,
    ACTIONS(197), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(199), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1014] = 2,
    ACTIONS(201), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(203), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1029] = 4,
    ACTIONS(113), 1,
      sym__indent,
    STATE(72), 1,
      sym_children,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(64), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1048] = 2,
    ACTIONS(131), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(133), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1063] = 2,
    ACTIONS(205), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(207), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1078] = 4,
    ACTIONS(113), 1,
      sym__indent,
    STATE(61), 1,
      sym_children,
    ACTIONS(165), 2,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(167), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1097] = 3,
    ACTIONS(213), 1,
      sym__newline,
    ACTIONS(209), 3,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(211), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1114] = 2,
    ACTIONS(62), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(64), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1129] = 4,
    ACTIONS(113), 1,
      sym__indent,
    STATE(66), 1,
      sym_children,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(155), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1148] = 2,
    ACTIONS(215), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(217), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1163] = 2,
    ACTIONS(141), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(143), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1178] = 2,
    ACTIONS(165), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(167), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1193] = 3,
    ACTIONS(223), 1,
      sym__newline,
    ACTIONS(219), 3,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(221), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1210] = 3,
    ACTIONS(229), 1,
      sym__newline,
    ACTIONS(225), 2,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(227), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1226] = 3,
    ACTIONS(231), 1,
      sym__newline,
    ACTIONS(209), 2,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(211), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1242] = 2,
    ACTIONS(215), 3,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(217), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1256] = 3,
    ACTIONS(233), 1,
      sym__newline,
    ACTIONS(219), 2,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(221), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1272] = 3,
    ACTIONS(235), 1,
      sym__newline,
    ACTIONS(183), 2,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(185), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1288] = 2,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(143), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1301] = 2,
    ACTIONS(237), 2,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(239), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1314] = 2,
    ACTIONS(241), 2,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(243), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1327] = 2,
    ACTIONS(201), 2,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(203), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1340] = 2,
    ACTIONS(245), 2,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(247), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1353] = 2,
    ACTIONS(165), 2,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(167), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1366] = 2,
    ACTIONS(249), 2,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(251), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1379] = 2,
    ACTIONS(197), 2,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(199), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1392] = 2,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(64), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1405] = 2,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(155), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1418] = 2,
    ACTIONS(205), 2,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(207), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1431] = 2,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(133), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1444] = 2,
    ACTIONS(189), 2,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(191), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1457] = 2,
    ACTIONS(179), 2,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(181), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1470] = 2,
    ACTIONS(193), 2,
      ts_builtin_sym_end,
      anon_sym_elseif,
    ACTIONS(195), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      anon_sym_if,
      anon_sym_else,
      sym_tag_name,
  [1483] = 3,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
    ACTIONS(255), 1,
      sym_attribute_name,
    STATE(80), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [1494] = 3,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    ACTIONS(259), 1,
      sym_attribute_name,
    STATE(77), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [1505] = 3,
    ACTIONS(255), 1,
      sym_attribute_name,
    ACTIONS(262), 1,
      anon_sym_RPAREN,
    STATE(77), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [1516] = 3,
    ACTIONS(255), 1,
      sym_attribute_name,
    ACTIONS(264), 1,
      anon_sym_RPAREN,
    STATE(78), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [1527] = 3,
    ACTIONS(255), 1,
      sym_attribute_name,
    ACTIONS(266), 1,
      anon_sym_RPAREN,
    STATE(77), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [1538] = 2,
    ACTIONS(268), 1,
      aux_sym_condition_token1,
    STATE(30), 1,
      sym_inline_text,
  [1545] = 2,
    ACTIONS(74), 1,
      sym__indent,
    STATE(47), 1,
      sym_children,
  [1552] = 2,
    ACTIONS(268), 1,
      aux_sym_condition_token1,
    STATE(32), 1,
      sym_inline_text,
  [1559] = 1,
    ACTIONS(270), 2,
      anon_sym_RPAREN,
      sym_attribute_name,
  [1564] = 2,
    ACTIONS(272), 1,
      aux_sym_condition_token1,
    STATE(59), 1,
      sym_condition,
  [1571] = 1,
    ACTIONS(274), 2,
      sym_quoted_attribute_value,
      sym_unquoted_attribute_value,
  [1576] = 2,
    ACTIONS(113), 1,
      sym__indent,
    STATE(74), 1,
      sym_children,
  [1583] = 2,
    ACTIONS(113), 1,
      sym__indent,
    STATE(75), 1,
      sym_children,
  [1590] = 2,
    ACTIONS(276), 1,
      aux_sym_condition_token1,
    STATE(27), 1,
      sym_inline_text,
  [1597] = 2,
    ACTIONS(113), 1,
      sym__indent,
    STATE(62), 1,
      sym_children,
  [1604] = 2,
    ACTIONS(272), 1,
      aux_sym_condition_token1,
    STATE(60), 1,
      sym_condition,
  [1611] = 2,
    ACTIONS(74), 1,
      sym__indent,
    STATE(35), 1,
      sym_children,
  [1618] = 2,
    ACTIONS(113), 1,
      sym__indent,
    STATE(71), 1,
      sym_children,
  [1625] = 2,
    ACTIONS(268), 1,
      aux_sym_condition_token1,
    STATE(31), 1,
      sym_inline_text,
  [1632] = 2,
    ACTIONS(278), 1,
      aux_sym_condition_token1,
    STATE(55), 1,
      sym_condition,
  [1639] = 2,
    ACTIONS(278), 1,
      aux_sym_condition_token1,
    STATE(36), 1,
      sym_condition,
  [1646] = 2,
    ACTIONS(74), 1,
      sym__indent,
    STATE(40), 1,
      sym_children,
  [1653] = 2,
    ACTIONS(276), 1,
      aux_sym_condition_token1,
    STATE(24), 1,
      sym_inline_text,
  [1660] = 2,
    ACTIONS(276), 1,
      aux_sym_condition_token1,
    STATE(22), 1,
      sym_inline_text,
  [1667] = 1,
    ACTIONS(280), 1,
      sym_identifier,
  [1671] = 1,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
  [1675] = 1,
    ACTIONS(284), 1,
      sym_identifier,
  [1679] = 1,
    ACTIONS(286), 1,
      sym_identifier,
  [1683] = 1,
    ACTIONS(288), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 82,
  [SMALL_STATE(5)] = 120,
  [SMALL_STATE(6)] = 158,
  [SMALL_STATE(7)] = 196,
  [SMALL_STATE(8)] = 234,
  [SMALL_STATE(9)] = 270,
  [SMALL_STATE(10)] = 307,
  [SMALL_STATE(11)] = 344,
  [SMALL_STATE(12)] = 368,
  [SMALL_STATE(13)] = 391,
  [SMALL_STATE(14)] = 417,
  [SMALL_STATE(15)] = 443,
  [SMALL_STATE(16)] = 464,
  [SMALL_STATE(17)] = 489,
  [SMALL_STATE(18)] = 516,
  [SMALL_STATE(19)] = 537,
  [SMALL_STATE(20)] = 558,
  [SMALL_STATE(21)] = 575,
  [SMALL_STATE(22)] = 600,
  [SMALL_STATE(23)] = 623,
  [SMALL_STATE(24)] = 644,
  [SMALL_STATE(25)] = 667,
  [SMALL_STATE(26)] = 684,
  [SMALL_STATE(27)] = 711,
  [SMALL_STATE(28)] = 734,
  [SMALL_STATE(29)] = 755,
  [SMALL_STATE(30)] = 771,
  [SMALL_STATE(31)] = 793,
  [SMALL_STATE(32)] = 815,
  [SMALL_STATE(33)] = 837,
  [SMALL_STATE(34)] = 853,
  [SMALL_STATE(35)] = 869,
  [SMALL_STATE(36)] = 884,
  [SMALL_STATE(37)] = 901,
  [SMALL_STATE(38)] = 916,
  [SMALL_STATE(39)] = 931,
  [SMALL_STATE(40)] = 950,
  [SMALL_STATE(41)] = 965,
  [SMALL_STATE(42)] = 980,
  [SMALL_STATE(43)] = 999,
  [SMALL_STATE(44)] = 1014,
  [SMALL_STATE(45)] = 1029,
  [SMALL_STATE(46)] = 1048,
  [SMALL_STATE(47)] = 1063,
  [SMALL_STATE(48)] = 1078,
  [SMALL_STATE(49)] = 1097,
  [SMALL_STATE(50)] = 1114,
  [SMALL_STATE(51)] = 1129,
  [SMALL_STATE(52)] = 1148,
  [SMALL_STATE(53)] = 1163,
  [SMALL_STATE(54)] = 1178,
  [SMALL_STATE(55)] = 1193,
  [SMALL_STATE(56)] = 1210,
  [SMALL_STATE(57)] = 1226,
  [SMALL_STATE(58)] = 1242,
  [SMALL_STATE(59)] = 1256,
  [SMALL_STATE(60)] = 1272,
  [SMALL_STATE(61)] = 1288,
  [SMALL_STATE(62)] = 1301,
  [SMALL_STATE(63)] = 1314,
  [SMALL_STATE(64)] = 1327,
  [SMALL_STATE(65)] = 1340,
  [SMALL_STATE(66)] = 1353,
  [SMALL_STATE(67)] = 1366,
  [SMALL_STATE(68)] = 1379,
  [SMALL_STATE(69)] = 1392,
  [SMALL_STATE(70)] = 1405,
  [SMALL_STATE(71)] = 1418,
  [SMALL_STATE(72)] = 1431,
  [SMALL_STATE(73)] = 1444,
  [SMALL_STATE(74)] = 1457,
  [SMALL_STATE(75)] = 1470,
  [SMALL_STATE(76)] = 1483,
  [SMALL_STATE(77)] = 1494,
  [SMALL_STATE(78)] = 1505,
  [SMALL_STATE(79)] = 1516,
  [SMALL_STATE(80)] = 1527,
  [SMALL_STATE(81)] = 1538,
  [SMALL_STATE(82)] = 1545,
  [SMALL_STATE(83)] = 1552,
  [SMALL_STATE(84)] = 1559,
  [SMALL_STATE(85)] = 1564,
  [SMALL_STATE(86)] = 1571,
  [SMALL_STATE(87)] = 1576,
  [SMALL_STATE(88)] = 1583,
  [SMALL_STATE(89)] = 1590,
  [SMALL_STATE(90)] = 1597,
  [SMALL_STATE(91)] = 1604,
  [SMALL_STATE(92)] = 1611,
  [SMALL_STATE(93)] = 1618,
  [SMALL_STATE(94)] = 1625,
  [SMALL_STATE(95)] = 1632,
  [SMALL_STATE(96)] = 1639,
  [SMALL_STATE(97)] = 1646,
  [SMALL_STATE(98)] = 1653,
  [SMALL_STATE(99)] = 1660,
  [SMALL_STATE(100)] = 1667,
  [SMALL_STATE(101)] = 1671,
  [SMALL_STATE(102)] = 1675,
  [SMALL_STATE(103)] = 1679,
  [SMALL_STATE(104)] = 1683,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(103),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(102),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(100),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(85),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(91),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 2),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(95),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(96),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(49),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(7),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(8),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(11),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(12),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_text, 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_text, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_statement, 4),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_statement, 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_statement, 2),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_statement, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 7),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 7),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 3),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 2),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 4),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 4),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extends_statement, 2),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extends_statement, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_expansion, 1),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_expansion, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(104),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [282] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
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
