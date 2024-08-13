#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 58
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_tag_name = 1,
  sym_class_or_id = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_EQ = 5,
  sym_attribute_name = 6,
  sym_quoted_attribute_value = 7,
  sym_unquoted_attribute_value = 8,
  sym_inline_text = 9,
  sym__newline = 10,
  sym__indent = 11,
  sym__dedent = 12,
  sym_source_file = 13,
  sym_tag = 14,
  sym_attributes = 15,
  sym_attribute = 16,
  sym_children = 17,
  sym__children_choice = 18,
  aux_sym_source_file_repeat1 = 19,
  aux_sym_tag_repeat1 = 20,
  aux_sym_attributes_repeat1 = 21,
  aux_sym_children_repeat1 = 22,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_tag_name] = "tag_name",
  [sym_class_or_id] = "class_or_id",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ] = "=",
  [sym_attribute_name] = "attribute_name",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [sym_unquoted_attribute_value] = "unquoted_attribute_value",
  [sym_inline_text] = "inline_text",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym_source_file] = "source_file",
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
  [sym_tag_name] = sym_tag_name,
  [sym_class_or_id] = sym_class_or_id,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_attribute_name] = sym_attribute_name,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [sym_unquoted_attribute_value] = sym_unquoted_attribute_value,
  [sym_inline_text] = sym_inline_text,
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym_source_file] = sym_source_file,
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
  [sym_inline_text] = {
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
  [9] = 8,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 11,
  [19] = 19,
  [20] = 12,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 16,
  [25] = 17,
  [26] = 26,
  [27] = 26,
  [28] = 21,
  [29] = 23,
  [30] = 19,
  [31] = 31,
  [32] = 32,
  [33] = 14,
  [34] = 34,
  [35] = 35,
  [36] = 31,
  [37] = 37,
  [38] = 38,
  [39] = 15,
  [40] = 40,
  [41] = 34,
  [42] = 22,
  [43] = 43,
  [44] = 13,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 38,
  [49] = 49,
  [50] = 43,
  [51] = 40,
  [52] = 46,
  [53] = 53,
  [54] = 37,
  [55] = 45,
  [56] = 56,
  [57] = 57,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#' ||
          lookahead == '.') ADVANCE(5);
      if (lookahead == '(') ADVANCE(13);
      if (lookahead == ')') ADVANCE(15);
      if (lookahead == '=') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(18);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(21);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 6:
      if (eof) ADVANCE(8);
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '#' ||
          lookahead == '.') ADVANCE(25);
      if (lookahead == '(') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == '\n') SKIP(7)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '(') ADVANCE(26);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_class_or_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_class_or_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_quoted_attribute_value);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_quoted_attribute_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(21);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_unquoted_attribute_value);
      if (lookahead == '"') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ')') ADVANCE(1);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_unquoted_attribute_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '#' ||
          lookahead == '.') ADVANCE(25);
      if (lookahead == '(') ADVANCE(14);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 6, .external_lex_state = 1},
  [3] = {.lex_state = 6, .external_lex_state = 1},
  [4] = {.lex_state = 6, .external_lex_state = 2},
  [5] = {.lex_state = 6, .external_lex_state = 2},
  [6] = {.lex_state = 6, .external_lex_state = 1},
  [7] = {.lex_state = 6, .external_lex_state = 2},
  [8] = {.lex_state = 0, .external_lex_state = 3},
  [9] = {.lex_state = 0, .external_lex_state = 3},
  [10] = {.lex_state = 0, .external_lex_state = 3},
  [11] = {.lex_state = 7, .external_lex_state = 1},
  [12] = {.lex_state = 7, .external_lex_state = 1},
  [13] = {.lex_state = 0, .external_lex_state = 1},
  [14] = {.lex_state = 0, .external_lex_state = 1},
  [15] = {.lex_state = 0, .external_lex_state = 1},
  [16] = {.lex_state = 7, .external_lex_state = 1},
  [17] = {.lex_state = 0, .external_lex_state = 1},
  [18] = {.lex_state = 7, .external_lex_state = 2},
  [19] = {.lex_state = 0, .external_lex_state = 1},
  [20] = {.lex_state = 7, .external_lex_state = 2},
  [21] = {.lex_state = 7, .external_lex_state = 1},
  [22] = {.lex_state = 0, .external_lex_state = 1},
  [23] = {.lex_state = 0, .external_lex_state = 1},
  [24] = {.lex_state = 7, .external_lex_state = 2},
  [25] = {.lex_state = 0, .external_lex_state = 2},
  [26] = {.lex_state = 0, .external_lex_state = 4},
  [27] = {.lex_state = 0, .external_lex_state = 4},
  [28] = {.lex_state = 7, .external_lex_state = 2},
  [29] = {.lex_state = 0, .external_lex_state = 2},
  [30] = {.lex_state = 0, .external_lex_state = 2},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0, .external_lex_state = 5},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 0, .external_lex_state = 3},
  [38] = {.lex_state = 0, .external_lex_state = 3},
  [39] = {.lex_state = 0, .external_lex_state = 5},
  [40] = {.lex_state = 0, .external_lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 0, .external_lex_state = 5},
  [43] = {.lex_state = 0, .external_lex_state = 3},
  [44] = {.lex_state = 0, .external_lex_state = 5},
  [45] = {.lex_state = 0, .external_lex_state = 3},
  [46] = {.lex_state = 0, .external_lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [sym_source_file] = STATE(57),
    [sym_tag] = STATE(35),
    [aux_sym_source_file_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_tag_name] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(9), 1,
      sym_tag_name,
    ACTIONS(11), 1,
      sym_class_or_id,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_inline_text,
    ACTIONS(17), 1,
      sym__newline,
    ACTIONS(19), 1,
      sym__indent,
    STATE(3), 1,
      aux_sym_tag_repeat1,
    STATE(11), 1,
      sym_attributes,
    STATE(38), 1,
      sym_children,
    ACTIONS(7), 2,
      sym__dedent,
      ts_builtin_sym_end,
  [32] = 10,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      sym__indent,
    ACTIONS(23), 1,
      sym_tag_name,
    ACTIONS(25), 1,
      sym_class_or_id,
    ACTIONS(27), 1,
      sym_inline_text,
    ACTIONS(29), 1,
      sym__newline,
    STATE(6), 1,
      aux_sym_tag_repeat1,
    STATE(12), 1,
      sym_attributes,
    STATE(40), 1,
      sym_children,
    ACTIONS(21), 2,
      sym__dedent,
      ts_builtin_sym_end,
  [64] = 10,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 1,
      sym_tag_name,
    ACTIONS(31), 1,
      sym_class_or_id,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      sym_inline_text,
    ACTIONS(37), 1,
      sym__newline,
    ACTIONS(39), 1,
      sym__indent,
    STATE(5), 1,
      aux_sym_tag_repeat1,
    STATE(18), 1,
      sym_attributes,
    STATE(48), 1,
      sym_children,
  [95] = 10,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      sym_tag_name,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      sym__indent,
    ACTIONS(41), 1,
      sym_class_or_id,
    ACTIONS(43), 1,
      sym_inline_text,
    ACTIONS(45), 1,
      sym__newline,
    STATE(7), 1,
      aux_sym_tag_repeat1,
    STATE(20), 1,
      sym_attributes,
    STATE(51), 1,
      sym_children,
  [126] = 4,
    ACTIONS(51), 1,
      sym_class_or_id,
    STATE(6), 1,
      aux_sym_tag_repeat1,
    ACTIONS(49), 3,
      sym_tag_name,
      anon_sym_LPAREN,
      sym_inline_text,
    ACTIONS(47), 4,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
  [144] = 4,
    ACTIONS(54), 1,
      sym_class_or_id,
    STATE(7), 1,
      aux_sym_tag_repeat1,
    ACTIONS(47), 3,
      sym__newline,
      sym__indent,
      ts_builtin_sym_end,
    ACTIONS(49), 3,
      sym_tag_name,
      anon_sym_LPAREN,
      sym_inline_text,
  [161] = 5,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      sym_tag_name,
    ACTIONS(61), 1,
      sym__newline,
    ACTIONS(63), 1,
      sym__dedent,
    STATE(10), 3,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [179] = 5,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      sym_tag_name,
    ACTIONS(61), 1,
      sym__newline,
    ACTIONS(65), 1,
      sym__dedent,
    STATE(10), 3,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [197] = 4,
    ACTIONS(69), 1,
      sym_tag_name,
    ACTIONS(72), 1,
      sym__newline,
    ACTIONS(67), 2,
      sym__dedent,
      ts_builtin_sym_end,
    STATE(10), 3,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [213] = 6,
    ACTIONS(19), 1,
      sym__indent,
    ACTIONS(23), 1,
      sym_tag_name,
    ACTIONS(27), 1,
      sym_inline_text,
    ACTIONS(29), 1,
      sym__newline,
    STATE(40), 1,
      sym_children,
    ACTIONS(21), 2,
      sym__dedent,
      ts_builtin_sym_end,
  [233] = 6,
    ACTIONS(19), 1,
      sym__indent,
    ACTIONS(77), 1,
      sym_tag_name,
    ACTIONS(79), 1,
      sym_inline_text,
    ACTIONS(81), 1,
      sym__newline,
    STATE(45), 1,
      sym_children,
    ACTIONS(75), 2,
      sym__dedent,
      ts_builtin_sym_end,
  [253] = 3,
    ACTIONS(19), 1,
      sym__indent,
    STATE(43), 1,
      sym_children,
    ACTIONS(83), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      sym_tag_name,
  [266] = 3,
    ACTIONS(19), 1,
      sym__indent,
    STATE(37), 1,
      sym_children,
    ACTIONS(85), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      sym_tag_name,
  [279] = 3,
    ACTIONS(19), 1,
      sym__indent,
    STATE(45), 1,
      sym_children,
    ACTIONS(75), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      sym_tag_name,
  [292] = 2,
    ACTIONS(89), 2,
      sym_tag_name,
      sym_inline_text,
    ACTIONS(87), 4,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
  [303] = 4,
    ACTIONS(19), 1,
      sym__indent,
    ACTIONS(81), 1,
      sym__newline,
    STATE(45), 1,
      sym_children,
    ACTIONS(75), 3,
      sym__dedent,
      ts_builtin_sym_end,
      sym_tag_name,
  [318] = 6,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      sym_tag_name,
    ACTIONS(39), 1,
      sym__indent,
    ACTIONS(43), 1,
      sym_inline_text,
    ACTIONS(45), 1,
      sym__newline,
    STATE(51), 1,
      sym_children,
  [337] = 4,
    ACTIONS(19), 1,
      sym__indent,
    ACTIONS(29), 1,
      sym__newline,
    STATE(40), 1,
      sym_children,
    ACTIONS(21), 3,
      sym__dedent,
      ts_builtin_sym_end,
      sym_tag_name,
  [352] = 6,
    ACTIONS(39), 1,
      sym__indent,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      sym_tag_name,
    ACTIONS(91), 1,
      sym_inline_text,
    ACTIONS(93), 1,
      sym__newline,
    STATE(55), 1,
      sym_children,
  [371] = 2,
    ACTIONS(97), 2,
      sym_tag_name,
      sym_inline_text,
    ACTIONS(95), 4,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
  [382] = 3,
    ACTIONS(19), 1,
      sym__indent,
    STATE(40), 1,
      sym_children,
    ACTIONS(21), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      sym_tag_name,
  [395] = 4,
    ACTIONS(19), 1,
      sym__indent,
    ACTIONS(99), 1,
      sym__newline,
    STATE(43), 1,
      sym_children,
    ACTIONS(83), 3,
      sym__dedent,
      ts_builtin_sym_end,
      sym_tag_name,
  [410] = 2,
    ACTIONS(89), 2,
      sym_tag_name,
      sym_inline_text,
    ACTIONS(87), 3,
      sym__newline,
      sym__indent,
      ts_builtin_sym_end,
  [420] = 4,
    ACTIONS(39), 1,
      sym__indent,
    ACTIONS(93), 1,
      sym__newline,
    STATE(55), 1,
      sym_children,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      sym_tag_name,
  [434] = 3,
    ACTIONS(59), 1,
      sym_tag_name,
    ACTIONS(101), 1,
      sym__newline,
    STATE(9), 3,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [446] = 3,
    ACTIONS(59), 1,
      sym_tag_name,
    ACTIONS(103), 1,
      sym__newline,
    STATE(8), 3,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [458] = 2,
    ACTIONS(97), 2,
      sym_tag_name,
      sym_inline_text,
    ACTIONS(95), 3,
      sym__newline,
      sym__indent,
      ts_builtin_sym_end,
  [468] = 4,
    ACTIONS(39), 1,
      sym__indent,
    ACTIONS(105), 1,
      sym__newline,
    STATE(50), 1,
      sym_children,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      sym_tag_name,
  [482] = 4,
    ACTIONS(39), 1,
      sym__indent,
    ACTIONS(45), 1,
      sym__newline,
    STATE(51), 1,
      sym_children,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      sym_tag_name,
  [496] = 3,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    ACTIONS(109), 1,
      sym_attribute_name,
    STATE(41), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [507] = 3,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    ACTIONS(113), 1,
      sym_tag_name,
    STATE(32), 2,
      sym_tag,
      aux_sym_source_file_repeat1,
  [518] = 3,
    ACTIONS(39), 1,
      sym__indent,
    STATE(54), 1,
      sym_children,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      sym_tag_name,
  [529] = 3,
    ACTIONS(109), 1,
      sym_attribute_name,
    ACTIONS(116), 1,
      anon_sym_RPAREN,
    STATE(47), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [540] = 3,
    ACTIONS(5), 1,
      sym_tag_name,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    STATE(32), 2,
      sym_tag,
      aux_sym_source_file_repeat1,
  [551] = 3,
    ACTIONS(109), 1,
      sym_attribute_name,
    ACTIONS(120), 1,
      anon_sym_RPAREN,
    STATE(34), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [562] = 1,
    ACTIONS(122), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      sym_tag_name,
  [569] = 1,
    ACTIONS(21), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      sym_tag_name,
  [576] = 3,
    ACTIONS(39), 1,
      sym__indent,
    STATE(55), 1,
      sym_children,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      sym_tag_name,
  [587] = 1,
    ACTIONS(75), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      sym_tag_name,
  [594] = 3,
    ACTIONS(109), 1,
      sym_attribute_name,
    ACTIONS(124), 1,
      anon_sym_RPAREN,
    STATE(47), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [605] = 3,
    ACTIONS(39), 1,
      sym__indent,
    STATE(51), 1,
      sym_children,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      sym_tag_name,
  [616] = 1,
    ACTIONS(85), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      sym_tag_name,
  [623] = 3,
    ACTIONS(39), 1,
      sym__indent,
    STATE(50), 1,
      sym_children,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      sym_tag_name,
  [634] = 1,
    ACTIONS(83), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      sym_tag_name,
  [641] = 1,
    ACTIONS(126), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      sym_tag_name,
  [648] = 3,
    ACTIONS(128), 1,
      anon_sym_RPAREN,
    ACTIONS(130), 1,
      sym_attribute_name,
    STATE(47), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [659] = 1,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      sym_tag_name,
  [664] = 1,
    ACTIONS(133), 2,
      anon_sym_RPAREN,
      sym_attribute_name,
  [669] = 1,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      sym_tag_name,
  [674] = 1,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      sym_tag_name,
  [679] = 1,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      sym_tag_name,
  [684] = 1,
    ACTIONS(135), 2,
      sym_quoted_attribute_value,
      sym_unquoted_attribute_value,
  [689] = 1,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      sym_tag_name,
  [694] = 1,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      sym_tag_name,
  [699] = 1,
    ACTIONS(137), 1,
      anon_sym_EQ,
  [703] = 1,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 64,
  [SMALL_STATE(5)] = 95,
  [SMALL_STATE(6)] = 126,
  [SMALL_STATE(7)] = 144,
  [SMALL_STATE(8)] = 161,
  [SMALL_STATE(9)] = 179,
  [SMALL_STATE(10)] = 197,
  [SMALL_STATE(11)] = 213,
  [SMALL_STATE(12)] = 233,
  [SMALL_STATE(13)] = 253,
  [SMALL_STATE(14)] = 266,
  [SMALL_STATE(15)] = 279,
  [SMALL_STATE(16)] = 292,
  [SMALL_STATE(17)] = 303,
  [SMALL_STATE(18)] = 318,
  [SMALL_STATE(19)] = 337,
  [SMALL_STATE(20)] = 352,
  [SMALL_STATE(21)] = 371,
  [SMALL_STATE(22)] = 382,
  [SMALL_STATE(23)] = 395,
  [SMALL_STATE(24)] = 410,
  [SMALL_STATE(25)] = 420,
  [SMALL_STATE(26)] = 434,
  [SMALL_STATE(27)] = 446,
  [SMALL_STATE(28)] = 458,
  [SMALL_STATE(29)] = 468,
  [SMALL_STATE(30)] = 482,
  [SMALL_STATE(31)] = 496,
  [SMALL_STATE(32)] = 507,
  [SMALL_STATE(33)] = 518,
  [SMALL_STATE(34)] = 529,
  [SMALL_STATE(35)] = 540,
  [SMALL_STATE(36)] = 551,
  [SMALL_STATE(37)] = 562,
  [SMALL_STATE(38)] = 569,
  [SMALL_STATE(39)] = 576,
  [SMALL_STATE(40)] = 587,
  [SMALL_STATE(41)] = 594,
  [SMALL_STATE(42)] = 605,
  [SMALL_STATE(43)] = 616,
  [SMALL_STATE(44)] = 623,
  [SMALL_STATE(45)] = 634,
  [SMALL_STATE(46)] = 641,
  [SMALL_STATE(47)] = 648,
  [SMALL_STATE(48)] = 659,
  [SMALL_STATE(49)] = 664,
  [SMALL_STATE(50)] = 669,
  [SMALL_STATE(51)] = 674,
  [SMALL_STATE(52)] = 679,
  [SMALL_STATE(53)] = 684,
  [SMALL_STATE(54)] = 689,
  [SMALL_STATE(55)] = 694,
  [SMALL_STATE(56)] = 699,
  [SMALL_STATE(57)] = 703,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(6),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(7),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(2),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(10),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(56),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [139] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
