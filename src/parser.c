#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 68
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
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
  sym__space = 9,
  sym_inline_text = 10,
  sym__newline = 11,
  sym__indent = 12,
  sym__dedent = 13,
  sym_source_file = 14,
  sym_tag = 15,
  sym_attributes = 16,
  sym_attribute = 17,
  sym_children = 18,
  sym__children_choice = 19,
  aux_sym_source_file_repeat1 = 20,
  aux_sym_tag_repeat1 = 21,
  aux_sym_attributes_repeat1 = 22,
  aux_sym_children_repeat1 = 23,
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
  [sym__space] = "_space",
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
  [sym__space] = sym__space,
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
  [sym__space] = {
    .visible = false,
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
  [9] = 9,
  [10] = 9,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 12,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 11,
  [25] = 20,
  [26] = 26,
  [27] = 19,
  [28] = 26,
  [29] = 16,
  [30] = 13,
  [31] = 14,
  [32] = 32,
  [33] = 33,
  [34] = 22,
  [35] = 35,
  [36] = 32,
  [37] = 21,
  [38] = 23,
  [39] = 39,
  [40] = 40,
  [41] = 39,
  [42] = 42,
  [43] = 15,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 17,
  [50] = 50,
  [51] = 33,
  [52] = 44,
  [53] = 42,
  [54] = 50,
  [55] = 55,
  [56] = 47,
  [57] = 57,
  [58] = 40,
  [59] = 46,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 63,
  [66] = 62,
  [67] = 64,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(10);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#' ||
          lookahead == '.') ADVANCE(6);
      if (lookahead == '(') ADVANCE(14);
      if (lookahead == ')') ADVANCE(15);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '@') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(19);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(22);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 7:
      if (eof) ADVANCE(10);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '#' ||
          lookahead == '.') ADVANCE(6);
      if (lookahead == '(') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(8)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 8:
      if (eof) ADVANCE(10);
      if (lookahead == '#' ||
          lookahead == '.') ADVANCE(6);
      if (lookahead == '(') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 9:
      if (eof) ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':' ||
          lookahead == '@') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_class_or_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':' ||
          lookahead == '@') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_quoted_attribute_value);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_quoted_attribute_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(22);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_unquoted_attribute_value);
      if (lookahead == '"') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ')') ADVANCE(2);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_unquoted_attribute_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 9},
  [2] = {.lex_state = 7, .external_lex_state = 1},
  [3] = {.lex_state = 7, .external_lex_state = 1},
  [4] = {.lex_state = 7, .external_lex_state = 2},
  [5] = {.lex_state = 7, .external_lex_state = 2},
  [6] = {.lex_state = 7, .external_lex_state = 1},
  [7] = {.lex_state = 7, .external_lex_state = 2},
  [8] = {.lex_state = 9, .external_lex_state = 3},
  [9] = {.lex_state = 9, .external_lex_state = 3},
  [10] = {.lex_state = 9, .external_lex_state = 3},
  [11] = {.lex_state = 7, .external_lex_state = 1},
  [12] = {.lex_state = 7, .external_lex_state = 1},
  [13] = {.lex_state = 7, .external_lex_state = 1},
  [14] = {.lex_state = 9, .external_lex_state = 1},
  [15] = {.lex_state = 9, .external_lex_state = 1},
  [16] = {.lex_state = 9, .external_lex_state = 1},
  [17] = {.lex_state = 9, .external_lex_state = 1},
  [18] = {.lex_state = 7, .external_lex_state = 2},
  [19] = {.lex_state = 9, .external_lex_state = 1},
  [20] = {.lex_state = 7, .external_lex_state = 1},
  [21] = {.lex_state = 9, .external_lex_state = 1},
  [22] = {.lex_state = 9, .external_lex_state = 1},
  [23] = {.lex_state = 9, .external_lex_state = 1},
  [24] = {.lex_state = 7, .external_lex_state = 2},
  [25] = {.lex_state = 7, .external_lex_state = 2},
  [26] = {.lex_state = 9, .external_lex_state = 4},
  [27] = {.lex_state = 9, .external_lex_state = 2},
  [28] = {.lex_state = 9, .external_lex_state = 4},
  [29] = {.lex_state = 9, .external_lex_state = 2},
  [30] = {.lex_state = 7, .external_lex_state = 2},
  [31] = {.lex_state = 9, .external_lex_state = 2},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 9, .external_lex_state = 3},
  [34] = {.lex_state = 9, .external_lex_state = 5},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 9, .external_lex_state = 5},
  [38] = {.lex_state = 9, .external_lex_state = 5},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 9, .external_lex_state = 3},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 9, .external_lex_state = 3},
  [43] = {.lex_state = 9, .external_lex_state = 5},
  [44] = {.lex_state = 9, .external_lex_state = 3},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 9, .external_lex_state = 3},
  [47] = {.lex_state = 9, .external_lex_state = 3},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 9, .external_lex_state = 5},
  [50] = {.lex_state = 9, .external_lex_state = 3},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 9},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_tag_name] = ACTIONS(1),
    [sym_class_or_id] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_attribute_name] = ACTIONS(1),
    [sym_quoted_attribute_value] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(61),
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
      sym__space,
    ACTIONS(17), 1,
      sym__newline,
    ACTIONS(19), 1,
      sym__indent,
    STATE(3), 1,
      aux_sym_tag_repeat1,
    STATE(11), 1,
      sym_attributes,
    STATE(42), 1,
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
      sym__space,
    ACTIONS(29), 1,
      sym__newline,
    STATE(6), 1,
      aux_sym_tag_repeat1,
    STATE(12), 1,
      sym_attributes,
    STATE(44), 1,
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
      sym__space,
    ACTIONS(37), 1,
      sym__newline,
    ACTIONS(39), 1,
      sym__indent,
    STATE(5), 1,
      aux_sym_tag_repeat1,
    STATE(24), 1,
      sym_attributes,
    STATE(53), 1,
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
      sym__space,
    ACTIONS(45), 1,
      sym__newline,
    STATE(7), 1,
      aux_sym_tag_repeat1,
    STATE(18), 1,
      sym_attributes,
    STATE(52), 1,
      sym_children,
  [126] = 4,
    ACTIONS(51), 1,
      sym_class_or_id,
    STATE(6), 1,
      aux_sym_tag_repeat1,
    ACTIONS(49), 2,
      sym_tag_name,
      anon_sym_LPAREN,
    ACTIONS(47), 5,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
      sym__space,
  [144] = 4,
    ACTIONS(54), 1,
      sym_class_or_id,
    STATE(7), 1,
      aux_sym_tag_repeat1,
    ACTIONS(49), 2,
      sym_tag_name,
      anon_sym_LPAREN,
    ACTIONS(47), 4,
      sym__newline,
      sym__indent,
      ts_builtin_sym_end,
      sym__space,
  [161] = 4,
    ACTIONS(59), 1,
      sym_tag_name,
    ACTIONS(62), 1,
      sym__newline,
    ACTIONS(57), 2,
      sym__dedent,
      ts_builtin_sym_end,
    STATE(8), 3,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [177] = 5,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      sym_tag_name,
    ACTIONS(69), 1,
      sym__newline,
    ACTIONS(71), 1,
      sym__dedent,
    STATE(8), 3,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [195] = 5,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      sym_tag_name,
    ACTIONS(69), 1,
      sym__newline,
    ACTIONS(73), 1,
      sym__dedent,
    STATE(8), 3,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [213] = 6,
    ACTIONS(19), 1,
      sym__indent,
    ACTIONS(23), 1,
      sym_tag_name,
    ACTIONS(27), 1,
      sym__space,
    ACTIONS(29), 1,
      sym__newline,
    STATE(44), 1,
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
      sym__space,
    ACTIONS(81), 1,
      sym__newline,
    STATE(33), 1,
      sym_children,
    ACTIONS(75), 2,
      sym__dedent,
      ts_builtin_sym_end,
  [253] = 2,
    ACTIONS(85), 1,
      sym_tag_name,
    ACTIONS(83), 5,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
      sym__space,
  [264] = 4,
    ACTIONS(19), 1,
      sym__indent,
    ACTIONS(89), 1,
      sym__newline,
    STATE(47), 1,
      sym_children,
    ACTIONS(87), 3,
      sym__dedent,
      ts_builtin_sym_end,
      sym_tag_name,
  [279] = 3,
    ACTIONS(19), 1,
      sym__indent,
    STATE(47), 1,
      sym_children,
    ACTIONS(87), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      sym_tag_name,
  [292] = 4,
    ACTIONS(19), 1,
      sym__indent,
    ACTIONS(93), 1,
      sym__newline,
    STATE(46), 1,
      sym_children,
    ACTIONS(91), 3,
      sym__dedent,
      ts_builtin_sym_end,
      sym_tag_name,
  [307] = 3,
    ACTIONS(19), 1,
      sym__indent,
    STATE(33), 1,
      sym_children,
    ACTIONS(75), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      sym_tag_name,
  [320] = 6,
    ACTIONS(39), 1,
      sym__indent,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      sym_tag_name,
    ACTIONS(95), 1,
      sym__space,
    ACTIONS(97), 1,
      sym__newline,
    STATE(51), 1,
      sym_children,
  [339] = 4,
    ACTIONS(19), 1,
      sym__indent,
    ACTIONS(81), 1,
      sym__newline,
    STATE(33), 1,
      sym_children,
    ACTIONS(75), 3,
      sym__dedent,
      ts_builtin_sym_end,
      sym_tag_name,
  [354] = 2,
    ACTIONS(101), 1,
      sym_tag_name,
    ACTIONS(99), 5,
      sym__newline,
      sym__indent,
      sym__dedent,
      ts_builtin_sym_end,
      sym__space,
  [365] = 3,
    ACTIONS(19), 1,
      sym__indent,
    STATE(40), 1,
      sym_children,
    ACTIONS(103), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      sym_tag_name,
  [378] = 3,
    ACTIONS(19), 1,
      sym__indent,
    STATE(46), 1,
      sym_children,
    ACTIONS(91), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      sym_tag_name,
  [391] = 3,
    ACTIONS(19), 1,
      sym__indent,
    STATE(44), 1,
      sym_children,
    ACTIONS(21), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      sym_tag_name,
  [404] = 6,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      sym_tag_name,
    ACTIONS(39), 1,
      sym__indent,
    ACTIONS(43), 1,
      sym__space,
    ACTIONS(45), 1,
      sym__newline,
    STATE(52), 1,
      sym_children,
  [423] = 2,
    ACTIONS(101), 1,
      sym_tag_name,
    ACTIONS(99), 4,
      sym__newline,
      sym__indent,
      ts_builtin_sym_end,
      sym__space,
  [433] = 3,
    ACTIONS(67), 1,
      sym_tag_name,
    ACTIONS(105), 1,
      sym__newline,
    STATE(10), 3,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [445] = 4,
    ACTIONS(39), 1,
      sym__indent,
    ACTIONS(97), 1,
      sym__newline,
    STATE(51), 1,
      sym_children,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      sym_tag_name,
  [459] = 3,
    ACTIONS(67), 1,
      sym_tag_name,
    ACTIONS(107), 1,
      sym__newline,
    STATE(9), 3,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [471] = 4,
    ACTIONS(39), 1,
      sym__indent,
    ACTIONS(109), 1,
      sym__newline,
    STATE(59), 1,
      sym_children,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      sym_tag_name,
  [485] = 2,
    ACTIONS(85), 1,
      sym_tag_name,
    ACTIONS(83), 4,
      sym__newline,
      sym__indent,
      ts_builtin_sym_end,
      sym__space,
  [495] = 4,
    ACTIONS(39), 1,
      sym__indent,
    ACTIONS(111), 1,
      sym__newline,
    STATE(56), 1,
      sym_children,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      sym_tag_name,
  [509] = 3,
    ACTIONS(113), 1,
      anon_sym_RPAREN,
    ACTIONS(115), 1,
      sym_attribute_name,
    STATE(45), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [520] = 1,
    ACTIONS(87), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      sym_tag_name,
  [527] = 3,
    ACTIONS(39), 1,
      sym__indent,
    STATE(59), 1,
      sym_children,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      sym_tag_name,
  [538] = 3,
    ACTIONS(5), 1,
      sym_tag_name,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    STATE(48), 2,
      sym_tag,
      aux_sym_source_file_repeat1,
  [549] = 3,
    ACTIONS(115), 1,
      sym_attribute_name,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
    STATE(45), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [560] = 3,
    ACTIONS(39), 1,
      sym__indent,
    STATE(58), 1,
      sym_children,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      sym_tag_name,
  [571] = 3,
    ACTIONS(39), 1,
      sym__indent,
    STATE(52), 1,
      sym_children,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      sym_tag_name,
  [582] = 3,
    ACTIONS(115), 1,
      sym_attribute_name,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    STATE(36), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [593] = 1,
    ACTIONS(123), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      sym_tag_name,
  [600] = 3,
    ACTIONS(115), 1,
      sym_attribute_name,
    ACTIONS(125), 1,
      anon_sym_RPAREN,
    STATE(32), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [611] = 1,
    ACTIONS(21), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      sym_tag_name,
  [618] = 3,
    ACTIONS(39), 1,
      sym__indent,
    STATE(56), 1,
      sym_children,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      sym_tag_name,
  [629] = 1,
    ACTIONS(75), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      sym_tag_name,
  [636] = 3,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
    ACTIONS(129), 1,
      sym_attribute_name,
    STATE(45), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [647] = 1,
    ACTIONS(103), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      sym_tag_name,
  [654] = 1,
    ACTIONS(91), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      sym_tag_name,
  [661] = 3,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    ACTIONS(134), 1,
      sym_tag_name,
    STATE(48), 2,
      sym_tag,
      aux_sym_source_file_repeat1,
  [672] = 3,
    ACTIONS(39), 1,
      sym__indent,
    STATE(51), 1,
      sym_children,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      sym_tag_name,
  [683] = 1,
    ACTIONS(137), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      sym_tag_name,
  [690] = 1,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      sym_tag_name,
  [695] = 1,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      sym_tag_name,
  [700] = 1,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      sym_tag_name,
  [705] = 1,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      sym_tag_name,
  [710] = 1,
    ACTIONS(139), 2,
      sym_quoted_attribute_value,
      sym_unquoted_attribute_value,
  [715] = 1,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      sym_tag_name,
  [720] = 1,
    ACTIONS(141), 2,
      anon_sym_RPAREN,
      sym_attribute_name,
  [725] = 1,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      sym_tag_name,
  [730] = 1,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      sym_tag_name,
  [735] = 1,
    ACTIONS(143), 1,
      anon_sym_EQ,
  [739] = 1,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
  [743] = 1,
    ACTIONS(147), 1,
      sym_inline_text,
  [747] = 1,
    ACTIONS(149), 1,
      sym_inline_text,
  [751] = 1,
    ACTIONS(151), 1,
      sym_inline_text,
  [755] = 1,
    ACTIONS(153), 1,
      sym_inline_text,
  [759] = 1,
    ACTIONS(155), 1,
      sym_inline_text,
  [763] = 1,
    ACTIONS(157), 1,
      sym_inline_text,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 64,
  [SMALL_STATE(5)] = 95,
  [SMALL_STATE(6)] = 126,
  [SMALL_STATE(7)] = 144,
  [SMALL_STATE(8)] = 161,
  [SMALL_STATE(9)] = 177,
  [SMALL_STATE(10)] = 195,
  [SMALL_STATE(11)] = 213,
  [SMALL_STATE(12)] = 233,
  [SMALL_STATE(13)] = 253,
  [SMALL_STATE(14)] = 264,
  [SMALL_STATE(15)] = 279,
  [SMALL_STATE(16)] = 292,
  [SMALL_STATE(17)] = 307,
  [SMALL_STATE(18)] = 320,
  [SMALL_STATE(19)] = 339,
  [SMALL_STATE(20)] = 354,
  [SMALL_STATE(21)] = 365,
  [SMALL_STATE(22)] = 378,
  [SMALL_STATE(23)] = 391,
  [SMALL_STATE(24)] = 404,
  [SMALL_STATE(25)] = 423,
  [SMALL_STATE(26)] = 433,
  [SMALL_STATE(27)] = 445,
  [SMALL_STATE(28)] = 459,
  [SMALL_STATE(29)] = 471,
  [SMALL_STATE(30)] = 485,
  [SMALL_STATE(31)] = 495,
  [SMALL_STATE(32)] = 509,
  [SMALL_STATE(33)] = 520,
  [SMALL_STATE(34)] = 527,
  [SMALL_STATE(35)] = 538,
  [SMALL_STATE(36)] = 549,
  [SMALL_STATE(37)] = 560,
  [SMALL_STATE(38)] = 571,
  [SMALL_STATE(39)] = 582,
  [SMALL_STATE(40)] = 593,
  [SMALL_STATE(41)] = 600,
  [SMALL_STATE(42)] = 611,
  [SMALL_STATE(43)] = 618,
  [SMALL_STATE(44)] = 629,
  [SMALL_STATE(45)] = 636,
  [SMALL_STATE(46)] = 647,
  [SMALL_STATE(47)] = 654,
  [SMALL_STATE(48)] = 661,
  [SMALL_STATE(49)] = 672,
  [SMALL_STATE(50)] = 683,
  [SMALL_STATE(51)] = 690,
  [SMALL_STATE(52)] = 695,
  [SMALL_STATE(53)] = 700,
  [SMALL_STATE(54)] = 705,
  [SMALL_STATE(55)] = 710,
  [SMALL_STATE(56)] = 715,
  [SMALL_STATE(57)] = 720,
  [SMALL_STATE(58)] = 725,
  [SMALL_STATE(59)] = 730,
  [SMALL_STATE(60)] = 735,
  [SMALL_STATE(61)] = 739,
  [SMALL_STATE(62)] = 743,
  [SMALL_STATE(63)] = 747,
  [SMALL_STATE(64)] = 751,
  [SMALL_STATE(65)] = 755,
  [SMALL_STATE(66)] = 759,
  [SMALL_STATE(67)] = 763,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(6),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(7),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(2),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(8),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 7),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(60),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [145] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
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
