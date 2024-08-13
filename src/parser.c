#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 76
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_extends = 1,
  anon_sym_include = 2,
  anon_sym_block = 3,
  sym_tag_name = 4,
  sym_class_or_id = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  anon_sym_EQ = 8,
  sym_attribute_name = 9,
  sym_quoted_attribute_value = 10,
  sym_unquoted_attribute_value = 11,
  sym__space = 12,
  sym_inline_text = 13,
  sym_identifier = 14,
  sym__newline = 15,
  sym__indent = 16,
  sym__dedent = 17,
  sym_source_file = 18,
  sym_block_expansion = 19,
  sym_extends_statement = 20,
  sym_include_statement = 21,
  sym_block_statement = 22,
  sym_tag = 23,
  sym_attributes = 24,
  sym_attribute = 25,
  sym_children = 26,
  sym__children_choice = 27,
  aux_sym_source_file_repeat1 = 28,
  aux_sym_tag_repeat1 = 29,
  aux_sym_attributes_repeat1 = 30,
  aux_sym_children_repeat1 = 31,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_extends] = "extends",
  [anon_sym_include] = "include",
  [anon_sym_block] = "block",
  [sym_tag_name] = "tag_name",
  [sym_class_or_id] = "class_or_id",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ] = "=",
  [sym_attribute_name] = "attribute_name",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [sym_unquoted_attribute_value] = "unquoted_attribute_value",
  [sym__space] = "_space",
  [sym_inline_text] = "inline_text",
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
  [sym_attributes] = "attributes",
  [sym_attribute] = "attribute",
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
  [sym_tag_name] = sym_tag_name,
  [sym_class_or_id] = sym_class_or_id,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_attribute_name] = sym_attribute_name,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [sym_unquoted_attribute_value] = sym_unquoted_attribute_value,
  [sym__space] = sym__space,
  [sym_inline_text] = sym_inline_text,
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
  [sym_attributes] = sym_attributes,
  [sym_attribute] = sym_attribute,
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
  [sym_inline_text] = {
    .visible = true,
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
  [sym_attributes] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
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
  [4] = 2,
  [5] = 3,
  [6] = 6,
  [7] = 6,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 12,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 13,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 10,
  [27] = 23,
  [28] = 15,
  [29] = 24,
  [30] = 16,
  [31] = 19,
  [32] = 20,
  [33] = 21,
  [34] = 34,
  [35] = 35,
  [36] = 25,
  [37] = 17,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 22,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 40,
  [47] = 38,
  [48] = 35,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 50,
  [53] = 39,
  [54] = 43,
  [55] = 44,
  [56] = 56,
  [57] = 41,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 59,
  [62] = 58,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 68,
  [73] = 73,
  [74] = 70,
  [75] = 73,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#' ||
          lookahead == '.') ADVANCE(8);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == 'b') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(37);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(39);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(40);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 6:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 7:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 8:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 9:
      if (eof) ADVANCE(11);
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == '#' ||
          lookahead == '.') ADVANCE(8);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == 'b') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (lookahead == '#' ||
          lookahead == '.') ADVANCE(8);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == 'b') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_extends);
      if (lookahead == '-') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '-') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_block);
      if (lookahead == '-') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'c') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'c') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'd') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'd') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'e') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'e') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'k') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'l') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'l') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'n') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'n') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'o') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 's') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 't') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'u') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'x') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_class_or_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_quoted_attribute_value);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_quoted_attribute_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_unquoted_attribute_value);
      if (lookahead == '"') ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ')') ADVANCE(2);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_unquoted_attribute_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 9, .external_lex_state = 1},
  [3] = {.lex_state = 9, .external_lex_state = 1},
  [4] = {.lex_state = 9, .external_lex_state = 2},
  [5] = {.lex_state = 9, .external_lex_state = 2},
  [6] = {.lex_state = 9, .external_lex_state = 1},
  [7] = {.lex_state = 9, .external_lex_state = 2},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 9, .external_lex_state = 1},
  [11] = {.lex_state = 0, .external_lex_state = 3},
  [12] = {.lex_state = 0, .external_lex_state = 3},
  [13] = {.lex_state = 9, .external_lex_state = 1},
  [14] = {.lex_state = 0, .external_lex_state = 3},
  [15] = {.lex_state = 0, .external_lex_state = 1},
  [16] = {.lex_state = 0, .external_lex_state = 1},
  [17] = {.lex_state = 0, .external_lex_state = 1},
  [18] = {.lex_state = 9, .external_lex_state = 2},
  [19] = {.lex_state = 9, .external_lex_state = 1},
  [20] = {.lex_state = 0, .external_lex_state = 1},
  [21] = {.lex_state = 0, .external_lex_state = 1},
  [22] = {.lex_state = 0, .external_lex_state = 1},
  [23] = {.lex_state = 9, .external_lex_state = 1},
  [24] = {.lex_state = 0, .external_lex_state = 1},
  [25] = {.lex_state = 0, .external_lex_state = 1},
  [26] = {.lex_state = 9, .external_lex_state = 2},
  [27] = {.lex_state = 9, .external_lex_state = 2},
  [28] = {.lex_state = 0, .external_lex_state = 2},
  [29] = {.lex_state = 0, .external_lex_state = 2},
  [30] = {.lex_state = 0, .external_lex_state = 2},
  [31] = {.lex_state = 9, .external_lex_state = 2},
  [32] = {.lex_state = 0, .external_lex_state = 4},
  [33] = {.lex_state = 0, .external_lex_state = 4},
  [34] = {.lex_state = 0, .external_lex_state = 4},
  [35] = {.lex_state = 0, .external_lex_state = 3},
  [36] = {.lex_state = 0, .external_lex_state = 4},
  [37] = {.lex_state = 0, .external_lex_state = 4},
  [38] = {.lex_state = 0, .external_lex_state = 3},
  [39] = {.lex_state = 0, .external_lex_state = 3},
  [40] = {.lex_state = 0, .external_lex_state = 3},
  [41] = {.lex_state = 0, .external_lex_state = 3},
  [42] = {.lex_state = 0, .external_lex_state = 4},
  [43] = {.lex_state = 0, .external_lex_state = 3},
  [44] = {.lex_state = 0, .external_lex_state = 3},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 6, .external_lex_state = 5},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 6, .external_lex_state = 5},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_extends] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_block] = ACTIONS(1),
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
    [sym_source_file] = STATE(69),
    [sym_block_expansion] = STATE(8),
    [sym_extends_statement] = STATE(49),
    [sym_include_statement] = STATE(49),
    [sym_block_statement] = STATE(49),
    [sym_tag] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_extends] = ACTIONS(5),
    [anon_sym_include] = ACTIONS(7),
    [anon_sym_block] = ACTIONS(9),
    [sym_tag_name] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(17), 1,
      sym_class_or_id,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym__space,
    ACTIONS(23), 1,
      sym__newline,
    ACTIONS(25), 1,
      sym__indent,
    STATE(6), 1,
      aux_sym_tag_repeat1,
    STATE(10), 1,
      sym_attributes,
    STATE(44), 1,
      sym_children,
    ACTIONS(13), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(15), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      sym_tag_name,
  [35] = 10,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym__indent,
    ACTIONS(31), 1,
      sym_class_or_id,
    ACTIONS(33), 1,
      sym__space,
    ACTIONS(35), 1,
      sym__newline,
    STATE(2), 1,
      aux_sym_tag_repeat1,
    STATE(13), 1,
      sym_attributes,
    STATE(43), 1,
      sym_children,
    ACTIONS(27), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(29), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      sym_tag_name,
  [70] = 10,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      sym_class_or_id,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym__space,
    ACTIONS(43), 1,
      sym__newline,
    ACTIONS(45), 1,
      sym__indent,
    STATE(7), 1,
      aux_sym_tag_repeat1,
    STATE(26), 1,
      sym_attributes,
    STATE(55), 1,
      sym_children,
    ACTIONS(15), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      sym_tag_name,
  [104] = 10,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym__indent,
    ACTIONS(47), 1,
      sym_class_or_id,
    ACTIONS(49), 1,
      sym__space,
    ACTIONS(51), 1,
      sym__newline,
    STATE(4), 1,
      aux_sym_tag_repeat1,
    STATE(18), 1,
      sym_attributes,
    STATE(54), 1,
      sym_children,
    ACTIONS(29), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      sym_tag_name,
  [138] = 4,
    ACTIONS(57), 1,
      sym_class_or_id,
    STATE(6), 1,
      aux_sym_tag_repeat1,
    ACTIONS(53), 5,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
      sym__space,
    ACTIONS(55), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      sym_tag_name,
      anon_sym_LPAREN,
  [159] = 4,
    ACTIONS(60), 1,
      sym_class_or_id,
    STATE(7), 1,
      aux_sym_tag_repeat1,
    ACTIONS(53), 4,
      sym__newline,
      sym__indent,
      ts_builtin_sym_end,
      sym__space,
    ACTIONS(55), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      sym_tag_name,
      anon_sym_LPAREN,
  [179] = 7,
    ACTIONS(5), 1,
      anon_sym_extends,
    ACTIONS(7), 1,
      anon_sym_include,
    ACTIONS(9), 1,
      anon_sym_block,
    ACTIONS(11), 1,
      sym_tag_name,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    STATE(9), 3,
      sym_block_expansion,
      sym_tag,
      aux_sym_source_file_repeat1,
    STATE(49), 3,
      sym_extends_statement,
      sym_include_statement,
      sym_block_statement,
  [205] = 7,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      anon_sym_extends,
    ACTIONS(70), 1,
      anon_sym_include,
    ACTIONS(73), 1,
      anon_sym_block,
    ACTIONS(76), 1,
      sym_tag_name,
    STATE(9), 3,
      sym_block_expansion,
      sym_tag,
      aux_sym_source_file_repeat1,
    STATE(49), 3,
      sym_extends_statement,
      sym_include_statement,
      sym_block_statement,
  [231] = 6,
    ACTIONS(25), 1,
      sym__indent,
    ACTIONS(83), 1,
      sym__space,
    ACTIONS(85), 1,
      sym__newline,
    STATE(40), 1,
      sym_children,
    ACTIONS(79), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(81), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      sym_tag_name,
  [254] = 5,
    ACTIONS(91), 1,
      sym_tag_name,
    ACTIONS(94), 1,
      sym__newline,
    ACTIONS(87), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(89), 3,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
    STATE(11), 3,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [275] = 6,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 1,
      sym_tag_name,
    ACTIONS(103), 1,
      sym__newline,
    ACTIONS(105), 1,
      sym__dedent,
    ACTIONS(99), 3,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
    STATE(11), 3,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [298] = 6,
    ACTIONS(21), 1,
      sym__space,
    ACTIONS(23), 1,
      sym__newline,
    ACTIONS(25), 1,
      sym__indent,
    STATE(44), 1,
      sym_children,
    ACTIONS(13), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(15), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      sym_tag_name,
  [321] = 6,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 1,
      sym_tag_name,
    ACTIONS(103), 1,
      sym__newline,
    ACTIONS(107), 1,
      sym__dedent,
    ACTIONS(99), 3,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
    STATE(11), 3,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [344] = 5,
    ACTIONS(25), 1,
      sym__indent,
    ACTIONS(85), 1,
      sym__newline,
    STATE(40), 1,
      sym_children,
    ACTIONS(79), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(81), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      sym_tag_name,
  [364] = 5,
    ACTIONS(25), 1,
      sym__indent,
    ACTIONS(113), 1,
      sym__newline,
    STATE(39), 1,
      sym_children,
    ACTIONS(109), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(111), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      sym_tag_name,
  [384] = 4,
    ACTIONS(25), 1,
      sym__indent,
    STATE(39), 1,
      sym_children,
    ACTIONS(109), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(111), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      sym_tag_name,
  [402] = 6,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      sym__space,
    ACTIONS(43), 1,
      sym__newline,
    ACTIONS(45), 1,
      sym__indent,
    STATE(55), 1,
      sym_children,
    ACTIONS(15), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      sym_tag_name,
  [424] = 2,
    ACTIONS(117), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      sym_tag_name,
    ACTIONS(115), 5,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
      sym__space,
  [438] = 4,
    ACTIONS(25), 1,
      sym__indent,
    STATE(40), 1,
      sym_children,
    ACTIONS(79), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(81), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      sym_tag_name,
  [456] = 4,
    ACTIONS(25), 1,
      sym__indent,
    STATE(35), 1,
      sym_children,
    ACTIONS(119), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(121), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      sym_tag_name,
  [474] = 4,
    ACTIONS(25), 1,
      sym__indent,
    STATE(38), 1,
      sym_children,
    ACTIONS(123), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(125), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      sym_tag_name,
  [492] = 2,
    ACTIONS(129), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      sym_tag_name,
    ACTIONS(127), 5,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
      sym__space,
  [506] = 5,
    ACTIONS(25), 1,
      sym__indent,
    ACTIONS(131), 1,
      sym__newline,
    STATE(38), 1,
      sym_children,
    ACTIONS(123), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(125), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      sym_tag_name,
  [526] = 4,
    ACTIONS(25), 1,
      sym__indent,
    STATE(44), 1,
      sym_children,
    ACTIONS(13), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(15), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      sym_tag_name,
  [544] = 6,
    ACTIONS(45), 1,
      sym__indent,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(133), 1,
      sym__space,
    ACTIONS(135), 1,
      sym__newline,
    STATE(46), 1,
      sym_children,
    ACTIONS(81), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      sym_tag_name,
  [566] = 2,
    ACTIONS(127), 4,
      sym__newline,
      sym__indent,
      ts_builtin_sym_end,
      sym__space,
    ACTIONS(129), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      sym_tag_name,
  [579] = 5,
    ACTIONS(45), 1,
      sym__indent,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(135), 1,
      sym__newline,
    STATE(46), 1,
      sym_children,
    ACTIONS(81), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      sym_tag_name,
  [598] = 5,
    ACTIONS(45), 1,
      sym__indent,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(137), 1,
      sym__newline,
    STATE(47), 1,
      sym_children,
    ACTIONS(125), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      sym_tag_name,
  [617] = 5,
    ACTIONS(45), 1,
      sym__indent,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    ACTIONS(139), 1,
      sym__newline,
    STATE(53), 1,
      sym_children,
    ACTIONS(111), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      sym_tag_name,
  [636] = 2,
    ACTIONS(115), 4,
      sym__newline,
      sym__indent,
      ts_builtin_sym_end,
      sym__space,
    ACTIONS(117), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      sym_tag_name,
  [649] = 4,
    ACTIONS(45), 1,
      sym__indent,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    STATE(46), 1,
      sym_children,
    ACTIONS(81), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      sym_tag_name,
  [665] = 4,
    ACTIONS(45), 1,
      sym__indent,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    STATE(48), 1,
      sym_children,
    ACTIONS(121), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      sym_tag_name,
  [681] = 4,
    ACTIONS(45), 1,
      sym__indent,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    STATE(56), 1,
      sym_children,
    ACTIONS(143), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      sym_tag_name,
  [697] = 2,
    ACTIONS(145), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(147), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      sym_tag_name,
  [709] = 4,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      sym__indent,
    STATE(55), 1,
      sym_children,
    ACTIONS(15), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      sym_tag_name,
  [725] = 4,
    ACTIONS(45), 1,
      sym__indent,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    STATE(53), 1,
      sym_children,
    ACTIONS(111), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      sym_tag_name,
  [741] = 2,
    ACTIONS(119), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(121), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      sym_tag_name,
  [753] = 2,
    ACTIONS(123), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(125), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      sym_tag_name,
  [765] = 2,
    ACTIONS(109), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(111), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      sym_tag_name,
  [777] = 2,
    ACTIONS(149), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(151), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      sym_tag_name,
  [789] = 4,
    ACTIONS(45), 1,
      sym__indent,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    STATE(47), 1,
      sym_children,
    ACTIONS(125), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      sym_tag_name,
  [805] = 2,
    ACTIONS(13), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(15), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      sym_tag_name,
  [817] = 2,
    ACTIONS(79), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(81), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      sym_tag_name,
  [829] = 2,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      sym_tag_name,
  [839] = 2,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    ACTIONS(111), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      sym_tag_name,
  [849] = 2,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      sym_tag_name,
  [859] = 2,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    ACTIONS(147), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      sym_tag_name,
  [869] = 2,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    ACTIONS(159), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      sym_tag_name,
  [879] = 3,
    ACTIONS(161), 1,
      sym_tag_name,
    ACTIONS(163), 1,
      sym__newline,
    STATE(12), 3,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [891] = 2,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    ACTIONS(167), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      sym_tag_name,
  [901] = 3,
    ACTIONS(161), 1,
      sym_tag_name,
    ACTIONS(169), 1,
      sym__newline,
    STATE(14), 3,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [913] = 2,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      sym_tag_name,
  [923] = 2,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      sym_tag_name,
  [933] = 2,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      sym_tag_name,
  [943] = 2,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    ACTIONS(173), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      sym_tag_name,
  [953] = 2,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    ACTIONS(151), 4,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_block,
      sym_tag_name,
  [963] = 3,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    ACTIONS(177), 1,
      sym_attribute_name,
    STATE(60), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [974] = 3,
    ACTIONS(177), 1,
      sym_attribute_name,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    STATE(58), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [985] = 3,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
    ACTIONS(183), 1,
      sym_attribute_name,
    STATE(60), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [996] = 3,
    ACTIONS(177), 1,
      sym_attribute_name,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
    STATE(62), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [1007] = 3,
    ACTIONS(177), 1,
      sym_attribute_name,
    ACTIONS(188), 1,
      anon_sym_RPAREN,
    STATE(60), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [1018] = 1,
    ACTIONS(190), 2,
      anon_sym_RPAREN,
      sym_attribute_name,
  [1023] = 1,
    ACTIONS(192), 2,
      sym_quoted_attribute_value,
      sym_unquoted_attribute_value,
  [1028] = 1,
    ACTIONS(194), 1,
      sym_identifier,
  [1032] = 1,
    ACTIONS(196), 1,
      sym_identifier,
  [1036] = 1,
    ACTIONS(198), 1,
      anon_sym_EQ,
  [1040] = 1,
    ACTIONS(200), 1,
      sym_inline_text,
  [1044] = 1,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
  [1048] = 1,
    ACTIONS(204), 1,
      sym_inline_text,
  [1052] = 1,
    ACTIONS(206), 1,
      sym_identifier,
  [1056] = 1,
    ACTIONS(208), 1,
      sym_inline_text,
  [1060] = 1,
    ACTIONS(210), 1,
      sym_inline_text,
  [1064] = 1,
    ACTIONS(212), 1,
      sym_inline_text,
  [1068] = 1,
    ACTIONS(214), 1,
      sym_inline_text,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 104,
  [SMALL_STATE(6)] = 138,
  [SMALL_STATE(7)] = 159,
  [SMALL_STATE(8)] = 179,
  [SMALL_STATE(9)] = 205,
  [SMALL_STATE(10)] = 231,
  [SMALL_STATE(11)] = 254,
  [SMALL_STATE(12)] = 275,
  [SMALL_STATE(13)] = 298,
  [SMALL_STATE(14)] = 321,
  [SMALL_STATE(15)] = 344,
  [SMALL_STATE(16)] = 364,
  [SMALL_STATE(17)] = 384,
  [SMALL_STATE(18)] = 402,
  [SMALL_STATE(19)] = 424,
  [SMALL_STATE(20)] = 438,
  [SMALL_STATE(21)] = 456,
  [SMALL_STATE(22)] = 474,
  [SMALL_STATE(23)] = 492,
  [SMALL_STATE(24)] = 506,
  [SMALL_STATE(25)] = 526,
  [SMALL_STATE(26)] = 544,
  [SMALL_STATE(27)] = 566,
  [SMALL_STATE(28)] = 579,
  [SMALL_STATE(29)] = 598,
  [SMALL_STATE(30)] = 617,
  [SMALL_STATE(31)] = 636,
  [SMALL_STATE(32)] = 649,
  [SMALL_STATE(33)] = 665,
  [SMALL_STATE(34)] = 681,
  [SMALL_STATE(35)] = 697,
  [SMALL_STATE(36)] = 709,
  [SMALL_STATE(37)] = 725,
  [SMALL_STATE(38)] = 741,
  [SMALL_STATE(39)] = 753,
  [SMALL_STATE(40)] = 765,
  [SMALL_STATE(41)] = 777,
  [SMALL_STATE(42)] = 789,
  [SMALL_STATE(43)] = 805,
  [SMALL_STATE(44)] = 817,
  [SMALL_STATE(45)] = 829,
  [SMALL_STATE(46)] = 839,
  [SMALL_STATE(47)] = 849,
  [SMALL_STATE(48)] = 859,
  [SMALL_STATE(49)] = 869,
  [SMALL_STATE(50)] = 879,
  [SMALL_STATE(51)] = 891,
  [SMALL_STATE(52)] = 901,
  [SMALL_STATE(53)] = 913,
  [SMALL_STATE(54)] = 923,
  [SMALL_STATE(55)] = 933,
  [SMALL_STATE(56)] = 943,
  [SMALL_STATE(57)] = 953,
  [SMALL_STATE(58)] = 963,
  [SMALL_STATE(59)] = 974,
  [SMALL_STATE(60)] = 985,
  [SMALL_STATE(61)] = 996,
  [SMALL_STATE(62)] = 1007,
  [SMALL_STATE(63)] = 1018,
  [SMALL_STATE(64)] = 1023,
  [SMALL_STATE(65)] = 1028,
  [SMALL_STATE(66)] = 1032,
  [SMALL_STATE(67)] = 1036,
  [SMALL_STATE(68)] = 1040,
  [SMALL_STATE(69)] = 1044,
  [SMALL_STATE(70)] = 1048,
  [SMALL_STATE(71)] = 1052,
  [SMALL_STATE(72)] = 1056,
  [SMALL_STATE(73)] = 1060,
  [SMALL_STATE(74)] = 1064,
  [SMALL_STATE(75)] = 1068,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(6),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(7),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(3),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(11),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 7),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 7),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_expansion, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_expansion, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extends_statement, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extends_statement, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(67),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [202] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
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
    [ts_external_token__indent] = true,
  },
  [3] = {
    [ts_external_token__newline] = true,
    [ts_external_token__dedent] = true,
  },
  [4] = {
    [ts_external_token__indent] = true,
  },
  [5] = {
    [ts_external_token__newline] = true,
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
