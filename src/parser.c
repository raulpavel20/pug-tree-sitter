#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 56
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
  [4] = 3,
  [5] = 5,
  [6] = 2,
  [7] = 7,
  [8] = 7,
  [9] = 9,
  [10] = 5,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 11,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 17,
  [21] = 13,
  [22] = 22,
  [23] = 12,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 22,
  [31] = 16,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 14,
  [36] = 28,
  [37] = 34,
  [38] = 32,
  [39] = 39,
  [40] = 18,
  [41] = 25,
  [42] = 42,
  [43] = 26,
  [44] = 44,
  [45] = 27,
  [46] = 46,
  [47] = 47,
  [48] = 29,
  [49] = 49,
  [50] = 39,
  [51] = 47,
  [52] = 46,
  [53] = 42,
  [54] = 54,
  [55] = 55,
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
  [2] = {.lex_state = 6, .external_lex_state = 2},
  [3] = {.lex_state = 6, .external_lex_state = 2},
  [4] = {.lex_state = 6, .external_lex_state = 3},
  [5] = {.lex_state = 6, .external_lex_state = 2},
  [6] = {.lex_state = 6, .external_lex_state = 3},
  [7] = {.lex_state = 0, .external_lex_state = 2},
  [8] = {.lex_state = 0, .external_lex_state = 2},
  [9] = {.lex_state = 0, .external_lex_state = 2},
  [10] = {.lex_state = 6, .external_lex_state = 3},
  [11] = {.lex_state = 0, .external_lex_state = 3},
  [12] = {.lex_state = 7, .external_lex_state = 2},
  [13] = {.lex_state = 7, .external_lex_state = 2},
  [14] = {.lex_state = 7, .external_lex_state = 2},
  [15] = {.lex_state = 0, .external_lex_state = 3},
  [16] = {.lex_state = 7, .external_lex_state = 2},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 0, .external_lex_state = 2},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 7, .external_lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 7, .external_lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 0, .external_lex_state = 2},
  [26] = {.lex_state = 0, .external_lex_state = 2},
  [27] = {.lex_state = 0, .external_lex_state = 2},
  [28] = {.lex_state = 0, .external_lex_state = 2},
  [29] = {.lex_state = 0, .external_lex_state = 2},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 7, .external_lex_state = 3},
  [32] = {.lex_state = 0, .external_lex_state = 2},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0, .external_lex_state = 2},
  [35] = {.lex_state = 7, .external_lex_state = 3},
  [36] = {.lex_state = 0, .external_lex_state = 3},
  [37] = {.lex_state = 0, .external_lex_state = 3},
  [38] = {.lex_state = 0, .external_lex_state = 3},
  [39] = {.lex_state = 0, .external_lex_state = 4},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0, .external_lex_state = 4},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0, .external_lex_state = 4},
  [47] = {.lex_state = 0, .external_lex_state = 4},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 0, .external_lex_state = 4},
  [51] = {.lex_state = 0, .external_lex_state = 4},
  [52] = {.lex_state = 0, .external_lex_state = 4},
  [53] = {.lex_state = 0, .external_lex_state = 4},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
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
    [sym_source_file] = STATE(54),
    [sym_tag] = STATE(19),
    [aux_sym_source_file_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_tag_name] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
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
    STATE(5), 1,
      aux_sym_tag_repeat1,
    STATE(13), 1,
      sym_attributes,
    ACTIONS(7), 2,
      sym__dedent,
      ts_builtin_sym_end,
  [26] = 8,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_tag_name,
    ACTIONS(23), 1,
      sym_class_or_id,
    ACTIONS(25), 1,
      sym_inline_text,
    ACTIONS(27), 1,
      sym__newline,
    STATE(2), 1,
      aux_sym_tag_repeat1,
    STATE(16), 1,
      sym_attributes,
    ACTIONS(19), 2,
      sym__dedent,
      ts_builtin_sym_end,
  [52] = 8,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      sym_tag_name,
    ACTIONS(29), 1,
      sym_class_or_id,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_inline_text,
    ACTIONS(35), 1,
      sym__newline,
    STATE(6), 1,
      aux_sym_tag_repeat1,
    STATE(31), 1,
      sym_attributes,
  [77] = 4,
    ACTIONS(41), 1,
      sym_class_or_id,
    STATE(5), 1,
      aux_sym_tag_repeat1,
    ACTIONS(37), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(39), 3,
      sym_tag_name,
      anon_sym_LPAREN,
      sym_inline_text,
  [94] = 8,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 1,
      sym_tag_name,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(44), 1,
      sym_class_or_id,
    ACTIONS(46), 1,
      sym_inline_text,
    ACTIONS(48), 1,
      sym__newline,
    STATE(10), 1,
      aux_sym_tag_repeat1,
    STATE(21), 1,
      sym_attributes,
  [119] = 5,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 1,
      sym_tag_name,
    ACTIONS(54), 1,
      sym__newline,
    ACTIONS(56), 1,
      sym__dedent,
    STATE(9), 3,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [137] = 5,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 1,
      sym_tag_name,
    ACTIONS(54), 1,
      sym__newline,
    ACTIONS(58), 1,
      sym__dedent,
    STATE(9), 3,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [155] = 4,
    ACTIONS(62), 1,
      sym_tag_name,
    ACTIONS(65), 1,
      sym__newline,
    ACTIONS(60), 2,
      sym__dedent,
      ts_builtin_sym_end,
    STATE(9), 3,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [171] = 4,
    ACTIONS(68), 1,
      sym_class_or_id,
    STATE(10), 1,
      aux_sym_tag_repeat1,
    ACTIONS(37), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(39), 3,
      sym_tag_name,
      anon_sym_LPAREN,
      sym_inline_text,
  [187] = 3,
    ACTIONS(52), 1,
      sym_tag_name,
    ACTIONS(71), 1,
      sym__newline,
    STATE(8), 3,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [199] = 2,
    ACTIONS(75), 2,
      sym_tag_name,
      sym_inline_text,
    ACTIONS(73), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
  [209] = 4,
    ACTIONS(79), 1,
      sym_tag_name,
    ACTIONS(81), 1,
      sym_inline_text,
    ACTIONS(83), 1,
      sym__newline,
    ACTIONS(77), 2,
      sym__dedent,
      ts_builtin_sym_end,
  [223] = 2,
    ACTIONS(87), 2,
      sym_tag_name,
      sym_inline_text,
    ACTIONS(85), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
  [233] = 3,
    ACTIONS(52), 1,
      sym_tag_name,
    ACTIONS(89), 1,
      sym__newline,
    STATE(7), 3,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [245] = 4,
    ACTIONS(9), 1,
      sym_tag_name,
    ACTIONS(15), 1,
      sym_inline_text,
    ACTIONS(17), 1,
      sym__newline,
    ACTIONS(7), 2,
      sym__dedent,
      ts_builtin_sym_end,
  [259] = 3,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    ACTIONS(93), 1,
      sym_attribute_name,
    STATE(24), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [270] = 1,
    ACTIONS(77), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      sym_tag_name,
  [277] = 3,
    ACTIONS(5), 1,
      sym_tag_name,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    STATE(33), 2,
      sym_tag,
      aux_sym_source_file_repeat1,
  [288] = 3,
    ACTIONS(93), 1,
      sym_attribute_name,
    ACTIONS(97), 1,
      anon_sym_RPAREN,
    STATE(24), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [299] = 4,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(79), 1,
      sym_tag_name,
    ACTIONS(99), 1,
      sym_inline_text,
    ACTIONS(101), 1,
      sym__newline,
  [312] = 3,
    ACTIONS(93), 1,
      sym_attribute_name,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    STATE(20), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [323] = 2,
    ACTIONS(73), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(75), 2,
      sym_tag_name,
      sym_inline_text,
  [332] = 3,
    ACTIONS(105), 1,
      anon_sym_RPAREN,
    ACTIONS(107), 1,
      sym_attribute_name,
    STATE(24), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [343] = 1,
    ACTIONS(110), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      sym_tag_name,
  [350] = 1,
    ACTIONS(112), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      sym_tag_name,
  [357] = 1,
    ACTIONS(114), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      sym_tag_name,
  [364] = 2,
    ACTIONS(118), 1,
      sym__newline,
    ACTIONS(116), 3,
      sym__dedent,
      ts_builtin_sym_end,
      sym_tag_name,
  [373] = 1,
    ACTIONS(116), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      sym_tag_name,
  [380] = 3,
    ACTIONS(93), 1,
      sym_attribute_name,
    ACTIONS(120), 1,
      anon_sym_RPAREN,
    STATE(17), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [391] = 4,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 1,
      sym_tag_name,
    ACTIONS(46), 1,
      sym_inline_text,
    ACTIONS(48), 1,
      sym__newline,
  [404] = 2,
    ACTIONS(83), 1,
      sym__newline,
    ACTIONS(77), 3,
      sym__dedent,
      ts_builtin_sym_end,
      sym_tag_name,
  [413] = 3,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    ACTIONS(124), 1,
      sym_tag_name,
    STATE(33), 2,
      sym_tag,
      aux_sym_source_file_repeat1,
  [424] = 2,
    ACTIONS(17), 1,
      sym__newline,
    ACTIONS(7), 3,
      sym__dedent,
      ts_builtin_sym_end,
      sym_tag_name,
  [433] = 2,
    ACTIONS(85), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(87), 2,
      sym_tag_name,
      sym_inline_text,
  [442] = 2,
    ACTIONS(127), 1,
      sym__newline,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      sym_tag_name,
  [450] = 2,
    ACTIONS(48), 1,
      sym__newline,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      sym_tag_name,
  [458] = 2,
    ACTIONS(101), 1,
      sym__newline,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      sym_tag_name,
  [466] = 2,
    ACTIONS(129), 1,
      sym__indent,
    STATE(48), 1,
      sym_children,
  [473] = 1,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      sym_tag_name,
  [478] = 1,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      sym_tag_name,
  [483] = 2,
    ACTIONS(129), 1,
      sym__indent,
    STATE(41), 1,
      sym_children,
  [490] = 1,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      sym_tag_name,
  [495] = 1,
    ACTIONS(131), 2,
      anon_sym_RPAREN,
      sym_attribute_name,
  [500] = 1,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      sym_tag_name,
  [505] = 2,
    ACTIONS(129), 1,
      sym__indent,
    STATE(43), 1,
      sym_children,
  [512] = 2,
    ACTIONS(133), 1,
      sym__indent,
    STATE(18), 1,
      sym_children,
  [519] = 1,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      sym_tag_name,
  [524] = 1,
    ACTIONS(135), 2,
      sym_quoted_attribute_value,
      sym_unquoted_attribute_value,
  [529] = 2,
    ACTIONS(133), 1,
      sym__indent,
    STATE(29), 1,
      sym_children,
  [536] = 2,
    ACTIONS(129), 1,
      sym__indent,
    STATE(40), 1,
      sym_children,
  [543] = 2,
    ACTIONS(133), 1,
      sym__indent,
    STATE(26), 1,
      sym_children,
  [550] = 2,
    ACTIONS(133), 1,
      sym__indent,
    STATE(25), 1,
      sym_children,
  [557] = 1,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
  [561] = 1,
    ACTIONS(139), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 77,
  [SMALL_STATE(6)] = 94,
  [SMALL_STATE(7)] = 119,
  [SMALL_STATE(8)] = 137,
  [SMALL_STATE(9)] = 155,
  [SMALL_STATE(10)] = 171,
  [SMALL_STATE(11)] = 187,
  [SMALL_STATE(12)] = 199,
  [SMALL_STATE(13)] = 209,
  [SMALL_STATE(14)] = 223,
  [SMALL_STATE(15)] = 233,
  [SMALL_STATE(16)] = 245,
  [SMALL_STATE(17)] = 259,
  [SMALL_STATE(18)] = 270,
  [SMALL_STATE(19)] = 277,
  [SMALL_STATE(20)] = 288,
  [SMALL_STATE(21)] = 299,
  [SMALL_STATE(22)] = 312,
  [SMALL_STATE(23)] = 323,
  [SMALL_STATE(24)] = 332,
  [SMALL_STATE(25)] = 343,
  [SMALL_STATE(26)] = 350,
  [SMALL_STATE(27)] = 357,
  [SMALL_STATE(28)] = 364,
  [SMALL_STATE(29)] = 373,
  [SMALL_STATE(30)] = 380,
  [SMALL_STATE(31)] = 391,
  [SMALL_STATE(32)] = 404,
  [SMALL_STATE(33)] = 413,
  [SMALL_STATE(34)] = 424,
  [SMALL_STATE(35)] = 433,
  [SMALL_STATE(36)] = 442,
  [SMALL_STATE(37)] = 450,
  [SMALL_STATE(38)] = 458,
  [SMALL_STATE(39)] = 466,
  [SMALL_STATE(40)] = 473,
  [SMALL_STATE(41)] = 478,
  [SMALL_STATE(42)] = 483,
  [SMALL_STATE(43)] = 490,
  [SMALL_STATE(44)] = 495,
  [SMALL_STATE(45)] = 500,
  [SMALL_STATE(46)] = 505,
  [SMALL_STATE(47)] = 512,
  [SMALL_STATE(48)] = 519,
  [SMALL_STATE(49)] = 524,
  [SMALL_STATE(50)] = 529,
  [SMALL_STATE(51)] = 536,
  [SMALL_STATE(52)] = 543,
  [SMALL_STATE(53)] = 550,
  [SMALL_STATE(54)] = 557,
  [SMALL_STATE(55)] = 561,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(5),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(3),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(9),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(10),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(55),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [137] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
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

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
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
  },
  [4] = {
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
