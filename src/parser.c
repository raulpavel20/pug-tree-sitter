#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  aux_sym_tag_name_token1 = 1,
  sym_class_or_id = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_EQ = 5,
  sym_attribute_value = 6,
  sym_inline_text = 7,
  sym_source_file = 8,
  sym_tag = 9,
  sym_tag_name = 10,
  sym_attributes = 11,
  sym_attribute = 12,
  sym_attribute_name = 13,
  aux_sym_source_file_repeat1 = 14,
  aux_sym_tag_repeat1 = 15,
  aux_sym_attributes_repeat1 = 16,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_tag_name_token1] = "tag_name_token1",
  [sym_class_or_id] = "class_or_id",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ] = "=",
  [sym_attribute_value] = "attribute_value",
  [sym_inline_text] = "inline_text",
  [sym_source_file] = "source_file",
  [sym_tag] = "tag",
  [sym_tag_name] = "tag_name",
  [sym_attributes] = "attributes",
  [sym_attribute] = "attribute",
  [sym_attribute_name] = "attribute_name",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_tag_repeat1] = "tag_repeat1",
  [aux_sym_attributes_repeat1] = "attributes_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_tag_name_token1] = aux_sym_tag_name_token1,
  [sym_class_or_id] = sym_class_or_id,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_attribute_value] = sym_attribute_value,
  [sym_inline_text] = sym_inline_text,
  [sym_source_file] = sym_source_file,
  [sym_tag] = sym_tag,
  [sym_tag_name] = sym_tag_name,
  [sym_attributes] = sym_attributes,
  [sym_attribute] = sym_attribute,
  [sym_attribute_name] = sym_attribute_name,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_tag_repeat1] = aux_sym_tag_repeat1,
  [aux_sym_attributes_repeat1] = aux_sym_attributes_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_tag_name_token1] = {
    .visible = false,
    .named = false,
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
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_text] = {
    .visible = true,
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
  [sym_tag_name] = {
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
  [sym_attribute_name] = {
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
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#' ||
          lookahead == '.') ADVANCE(2);
      if (lookahead == '(') ADVANCE(8);
      if (lookahead == ')') ADVANCE(9);
      if (lookahead == '=') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(11);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      if (lookahead == '#' ||
          lookahead == '.') ADVANCE(2);
      if (lookahead == '(') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != '.') ADVANCE(13);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_class_or_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_attribute_value);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_inline_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != '.') ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != '.') ADVANCE(13);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_tag_name_token1] = ACTIONS(1),
    [sym_class_or_id] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_attribute_value] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(21),
    [sym_tag] = STATE(6),
    [sym_tag_name] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_tag_name_token1] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 1,
      aux_sym_tag_name_token1,
    ACTIONS(11), 1,
      sym_class_or_id,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_inline_text,
    STATE(4), 1,
      aux_sym_tag_repeat1,
    STATE(13), 1,
      sym_attributes,
  [22] = 7,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      aux_sym_tag_name_token1,
    ACTIONS(21), 1,
      sym_class_or_id,
    ACTIONS(23), 1,
      sym_inline_text,
    STATE(2), 1,
      aux_sym_tag_repeat1,
    STATE(11), 1,
      sym_attributes,
  [44] = 4,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      sym_class_or_id,
    STATE(4), 1,
      aux_sym_tag_repeat1,
    ACTIONS(27), 3,
      aux_sym_tag_name_token1,
      anon_sym_LPAREN,
      sym_inline_text,
  [59] = 4,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    ACTIONS(34), 1,
      aux_sym_tag_name_token1,
    STATE(3), 1,
      sym_tag_name,
    STATE(5), 2,
      sym_tag,
      aux_sym_source_file_repeat1,
  [73] = 4,
    ACTIONS(5), 1,
      aux_sym_tag_name_token1,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_tag_name,
    STATE(5), 2,
      sym_tag,
      aux_sym_source_file_repeat1,
  [87] = 4,
    ACTIONS(39), 1,
      aux_sym_tag_name_token1,
    ACTIONS(41), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      sym_attribute_name,
    STATE(9), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [101] = 2,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 4,
      aux_sym_tag_name_token1,
      sym_class_or_id,
      anon_sym_LPAREN,
      sym_inline_text,
  [111] = 4,
    ACTIONS(39), 1,
      aux_sym_tag_name_token1,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      sym_attribute_name,
    STATE(10), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [125] = 4,
    ACTIONS(49), 1,
      aux_sym_tag_name_token1,
    ACTIONS(52), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      sym_attribute_name,
    STATE(10), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [139] = 3,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 1,
      aux_sym_tag_name_token1,
    ACTIONS(15), 1,
      sym_inline_text,
  [149] = 2,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 2,
      aux_sym_tag_name_token1,
      sym_inline_text,
  [157] = 3,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 1,
      aux_sym_tag_name_token1,
    ACTIONS(62), 1,
      sym_inline_text,
  [167] = 2,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 2,
      aux_sym_tag_name_token1,
      sym_inline_text,
  [175] = 1,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      aux_sym_tag_name_token1,
  [180] = 1,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      aux_sym_tag_name_token1,
  [185] = 1,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      aux_sym_tag_name_token1,
  [190] = 1,
    ACTIONS(70), 2,
      aux_sym_tag_name_token1,
      anon_sym_RPAREN,
  [195] = 1,
    ACTIONS(72), 1,
      anon_sym_EQ,
  [199] = 1,
    ACTIONS(74), 1,
      anon_sym_EQ,
  [203] = 1,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
  [207] = 1,
    ACTIONS(78), 1,
      sym_attribute_value,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 59,
  [SMALL_STATE(6)] = 73,
  [SMALL_STATE(7)] = 87,
  [SMALL_STATE(8)] = 101,
  [SMALL_STATE(9)] = 111,
  [SMALL_STATE(10)] = 125,
  [SMALL_STATE(11)] = 139,
  [SMALL_STATE(12)] = 149,
  [SMALL_STATE(13)] = 157,
  [SMALL_STATE(14)] = 167,
  [SMALL_STATE(15)] = 175,
  [SMALL_STATE(16)] = 180,
  [SMALL_STATE(17)] = 185,
  [SMALL_STATE(18)] = 190,
  [SMALL_STATE(19)] = 195,
  [SMALL_STATE(20)] = 199,
  [SMALL_STATE(21)] = 203,
  [SMALL_STATE(22)] = 207,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(4),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_name, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_name, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(19),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [76] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
};

#ifdef __cplusplus
extern "C" {
#endif
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
