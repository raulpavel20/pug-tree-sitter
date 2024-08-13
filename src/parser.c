#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 7
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 6
#define ALIAS_COUNT 0
#define TOKEN_COUNT 3
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_tag_name = 1,
  sym_inline_text = 2,
  sym_source_file = 3,
  sym_tag = 4,
  aux_sym_source_file_repeat1 = 5,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_tag_name] = "tag_name",
  [sym_inline_text] = "inline_text",
  [sym_source_file] = "source_file",
  [sym_tag] = "tag",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_tag_name] = sym_tag_name,
  [sym_inline_text] = sym_inline_text,
  [sym_source_file] = sym_source_file,
  [sym_tag] = sym_tag,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [aux_sym_source_file_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(2);
      if (lookahead == '\n') SKIP(0)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 1:
      if (eof) ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_tag_name] = ACTIONS(1),
    [sym_inline_text] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(6),
    [sym_tag] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_tag_name] = ACTIONS(5),
  },
  [2] = {
    [sym_tag] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_tag_name] = ACTIONS(5),
  },
  [3] = {
    [sym_tag] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym_tag_name] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(14), 1,
      ts_builtin_sym_end,
    ACTIONS(16), 1,
      sym_tag_name,
    ACTIONS(18), 1,
      sym_inline_text,
  [10] = 1,
    ACTIONS(20), 2,
      ts_builtin_sym_end,
      sym_tag_name,
  [15] = 1,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 10,
  [SMALL_STATE(6)] = 15,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [14] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [16] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [18] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [22] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
