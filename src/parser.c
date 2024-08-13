#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 50
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
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
  aux_sym_source_file_repeat1 = 18,
  aux_sym_tag_repeat1 = 19,
  aux_sym_attributes_repeat1 = 20,
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
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_tag_repeat1] = "tag_repeat1",
  [aux_sym_attributes_repeat1] = "attributes_repeat1",
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
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_tag_repeat1] = aux_sym_tag_repeat1,
  [aux_sym_attributes_repeat1] = aux_sym_attributes_repeat1,
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
  [11] = 10,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 16,
  [18] = 18,
  [19] = 19,
  [20] = 14,
  [21] = 12,
  [22] = 22,
  [23] = 23,
  [24] = 22,
  [25] = 25,
  [26] = 19,
  [27] = 15,
  [28] = 28,
  [29] = 18,
  [30] = 13,
  [31] = 28,
  [32] = 32,
  [33] = 32,
  [34] = 34,
  [35] = 34,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 40,
  [42] = 42,
  [43] = 39,
  [44] = 36,
  [45] = 38,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 46,
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
  [3] = {.lex_state = 6, .external_lex_state = 3},
  [4] = {.lex_state = 6, .external_lex_state = 3},
  [5] = {.lex_state = 6, .external_lex_state = 2},
  [6] = {.lex_state = 6, .external_lex_state = 3},
  [7] = {.lex_state = 6, .external_lex_state = 2},
  [8] = {.lex_state = 7, .external_lex_state = 2},
  [9] = {.lex_state = 7, .external_lex_state = 3},
  [10] = {.lex_state = 7, .external_lex_state = 3},
  [11] = {.lex_state = 7, .external_lex_state = 2},
  [12] = {.lex_state = 0, .external_lex_state = 2},
  [13] = {.lex_state = 0, .external_lex_state = 2},
  [14] = {.lex_state = 0, .external_lex_state = 4},
  [15] = {.lex_state = 7, .external_lex_state = 2},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 0, .external_lex_state = 2},
  [20] = {.lex_state = 0, .external_lex_state = 4},
  [21] = {.lex_state = 0, .external_lex_state = 3},
  [22] = {.lex_state = 7, .external_lex_state = 2},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 7, .external_lex_state = 3},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0, .external_lex_state = 3},
  [27] = {.lex_state = 7, .external_lex_state = 3},
  [28] = {.lex_state = 0, .external_lex_state = 4},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 0, .external_lex_state = 3},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0, .external_lex_state = 4},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 0, .external_lex_state = 4},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0, .external_lex_state = 4},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 0, .external_lex_state = 4},
  [44] = {.lex_state = 0, .external_lex_state = 4},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0, .external_lex_state = 5},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0, .external_lex_state = 5},
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
    [sym_source_file] = STATE(47),
    [sym_tag] = STATE(25),
    [aux_sym_source_file_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_tag_name] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
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
    STATE(11), 1,
      sym_attributes,
    STATE(35), 1,
      sym_children,
  [28] = 9,
    ACTIONS(19), 1,
      sym_tag_name,
    ACTIONS(21), 1,
      sym_class_or_id,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym_inline_text,
    ACTIONS(27), 1,
      sym__newline,
    ACTIONS(29), 1,
      sym__dedent,
    STATE(6), 1,
      aux_sym_tag_repeat1,
    STATE(9), 1,
      sym_attributes,
    STATE(38), 1,
      sym_children,
  [56] = 9,
    ACTIONS(7), 1,
      sym__dedent,
    ACTIONS(9), 1,
      sym_tag_name,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym__newline,
    ACTIONS(31), 1,
      sym_class_or_id,
    ACTIONS(33), 1,
      sym_inline_text,
    STATE(3), 1,
      aux_sym_tag_repeat1,
    STATE(10), 1,
      sym_attributes,
    STATE(34), 1,
      sym_children,
  [84] = 9,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym__newline,
    ACTIONS(19), 1,
      sym_tag_name,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      sym_class_or_id,
    ACTIONS(37), 1,
      sym_inline_text,
    STATE(7), 1,
      aux_sym_tag_repeat1,
    STATE(8), 1,
      sym_attributes,
    STATE(45), 1,
      sym_children,
  [112] = 4,
    ACTIONS(41), 1,
      sym_class_or_id,
    STATE(6), 1,
      aux_sym_tag_repeat1,
    ACTIONS(44), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(39), 3,
      sym_tag_name,
      anon_sym_LPAREN,
      sym_inline_text,
  [128] = 4,
    ACTIONS(46), 1,
      sym_class_or_id,
    STATE(7), 1,
      aux_sym_tag_repeat1,
    ACTIONS(44), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(39), 3,
      sym_tag_name,
      anon_sym_LPAREN,
      sym_inline_text,
  [144] = 5,
    ACTIONS(17), 1,
      sym__newline,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      sym_tag_name,
    ACTIONS(53), 1,
      sym_inline_text,
    STATE(40), 1,
      sym_children,
  [160] = 5,
    ACTIONS(27), 1,
      sym__newline,
    ACTIONS(49), 1,
      sym__dedent,
    ACTIONS(51), 1,
      sym_tag_name,
    ACTIONS(55), 1,
      sym_inline_text,
    STATE(41), 1,
      sym_children,
  [176] = 5,
    ACTIONS(19), 1,
      sym_tag_name,
    ACTIONS(25), 1,
      sym_inline_text,
    ACTIONS(27), 1,
      sym__newline,
    ACTIONS(29), 1,
      sym__dedent,
    STATE(38), 1,
      sym_children,
  [192] = 5,
    ACTIONS(17), 1,
      sym__newline,
    ACTIONS(19), 1,
      sym_tag_name,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      sym_inline_text,
    STATE(45), 1,
      sym_children,
  [208] = 3,
    ACTIONS(17), 1,
      sym__newline,
    STATE(36), 1,
      sym_children,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      sym_tag_name,
  [219] = 3,
    ACTIONS(17), 1,
      sym__newline,
    STATE(45), 1,
      sym_children,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      sym_tag_name,
  [230] = 3,
    ACTIONS(59), 1,
      sym_tag_name,
    ACTIONS(61), 1,
      sym__dedent,
    STATE(28), 2,
      sym_tag,
      aux_sym_source_file_repeat1,
  [241] = 2,
    ACTIONS(63), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(65), 2,
      sym_tag_name,
      sym_inline_text,
  [250] = 3,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    ACTIONS(69), 1,
      sym_attribute_name,
    STATE(23), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [261] = 3,
    ACTIONS(69), 1,
      sym_attribute_name,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    STATE(23), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [272] = 3,
    ACTIONS(69), 1,
      sym_attribute_name,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    STATE(16), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [283] = 3,
    ACTIONS(17), 1,
      sym__newline,
    STATE(40), 1,
      sym_children,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      sym_tag_name,
  [294] = 3,
    ACTIONS(59), 1,
      sym_tag_name,
    ACTIONS(75), 1,
      sym__dedent,
    STATE(28), 2,
      sym_tag,
      aux_sym_source_file_repeat1,
  [305] = 3,
    ACTIONS(27), 1,
      sym__newline,
    STATE(44), 1,
      sym_children,
    ACTIONS(57), 2,
      sym__dedent,
      sym_tag_name,
  [316] = 2,
    ACTIONS(77), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(79), 2,
      sym_tag_name,
      sym_inline_text,
  [325] = 3,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    ACTIONS(83), 1,
      sym_attribute_name,
    STATE(23), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [336] = 2,
    ACTIONS(77), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(79), 2,
      sym_tag_name,
      sym_inline_text,
  [345] = 3,
    ACTIONS(5), 1,
      sym_tag_name,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    STATE(31), 2,
      sym_tag,
      aux_sym_source_file_repeat1,
  [356] = 3,
    ACTIONS(27), 1,
      sym__newline,
    STATE(41), 1,
      sym_children,
    ACTIONS(49), 2,
      sym__dedent,
      sym_tag_name,
  [367] = 2,
    ACTIONS(63), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(65), 2,
      sym_tag_name,
      sym_inline_text,
  [376] = 3,
    ACTIONS(88), 1,
      sym_tag_name,
    ACTIONS(91), 1,
      sym__dedent,
    STATE(28), 2,
      sym_tag,
      aux_sym_source_file_repeat1,
  [387] = 3,
    ACTIONS(69), 1,
      sym_attribute_name,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    STATE(17), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [398] = 3,
    ACTIONS(27), 1,
      sym__newline,
    STATE(38), 1,
      sym_children,
    ACTIONS(29), 2,
      sym__dedent,
      sym_tag_name,
  [409] = 3,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 1,
      sym_tag_name,
    STATE(31), 2,
      sym_tag,
      aux_sym_source_file_repeat1,
  [420] = 2,
    ACTIONS(59), 1,
      sym_tag_name,
    STATE(20), 2,
      sym_tag,
      aux_sym_source_file_repeat1,
  [428] = 2,
    ACTIONS(59), 1,
      sym_tag_name,
    STATE(14), 2,
      sym_tag,
      aux_sym_source_file_repeat1,
  [436] = 1,
    ACTIONS(29), 2,
      sym__dedent,
      sym_tag_name,
  [441] = 1,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      sym_tag_name,
  [446] = 1,
    ACTIONS(98), 2,
      ts_builtin_sym_end,
      sym_tag_name,
  [451] = 1,
    ACTIONS(100), 2,
      anon_sym_RPAREN,
      sym_attribute_name,
  [456] = 1,
    ACTIONS(49), 2,
      sym__dedent,
      sym_tag_name,
  [461] = 1,
    ACTIONS(102), 2,
      ts_builtin_sym_end,
      sym_tag_name,
  [466] = 1,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      sym_tag_name,
  [471] = 1,
    ACTIONS(57), 2,
      sym__dedent,
      sym_tag_name,
  [476] = 1,
    ACTIONS(104), 2,
      sym_quoted_attribute_value,
      sym_unquoted_attribute_value,
  [481] = 1,
    ACTIONS(102), 2,
      sym__dedent,
      sym_tag_name,
  [486] = 1,
    ACTIONS(98), 2,
      sym__dedent,
      sym_tag_name,
  [491] = 1,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      sym_tag_name,
  [496] = 1,
    ACTIONS(106), 1,
      sym__indent,
  [500] = 1,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
  [504] = 1,
    ACTIONS(110), 1,
      anon_sym_EQ,
  [508] = 1,
    ACTIONS(112), 1,
      sym__indent,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 56,
  [SMALL_STATE(5)] = 84,
  [SMALL_STATE(6)] = 112,
  [SMALL_STATE(7)] = 128,
  [SMALL_STATE(8)] = 144,
  [SMALL_STATE(9)] = 160,
  [SMALL_STATE(10)] = 176,
  [SMALL_STATE(11)] = 192,
  [SMALL_STATE(12)] = 208,
  [SMALL_STATE(13)] = 219,
  [SMALL_STATE(14)] = 230,
  [SMALL_STATE(15)] = 241,
  [SMALL_STATE(16)] = 250,
  [SMALL_STATE(17)] = 261,
  [SMALL_STATE(18)] = 272,
  [SMALL_STATE(19)] = 283,
  [SMALL_STATE(20)] = 294,
  [SMALL_STATE(21)] = 305,
  [SMALL_STATE(22)] = 316,
  [SMALL_STATE(23)] = 325,
  [SMALL_STATE(24)] = 336,
  [SMALL_STATE(25)] = 345,
  [SMALL_STATE(26)] = 356,
  [SMALL_STATE(27)] = 367,
  [SMALL_STATE(28)] = 376,
  [SMALL_STATE(29)] = 387,
  [SMALL_STATE(30)] = 398,
  [SMALL_STATE(31)] = 409,
  [SMALL_STATE(32)] = 420,
  [SMALL_STATE(33)] = 428,
  [SMALL_STATE(34)] = 436,
  [SMALL_STATE(35)] = 441,
  [SMALL_STATE(36)] = 446,
  [SMALL_STATE(37)] = 451,
  [SMALL_STATE(38)] = 456,
  [SMALL_STATE(39)] = 461,
  [SMALL_STATE(40)] = 466,
  [SMALL_STATE(41)] = 471,
  [SMALL_STATE(42)] = 476,
  [SMALL_STATE(43)] = 481,
  [SMALL_STATE(44)] = 486,
  [SMALL_STATE(45)] = 491,
  [SMALL_STATE(46)] = 496,
  [SMALL_STATE(47)] = 500,
  [SMALL_STATE(48)] = 504,
  [SMALL_STATE(49)] = 508,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(6),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(7),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(48),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 4),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [108] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
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
  },
  [3] = {
    [ts_external_token__newline] = true,
    [ts_external_token__dedent] = true,
  },
  [4] = {
    [ts_external_token__dedent] = true,
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
