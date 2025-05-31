#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 14
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 14
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LBRACK = 1,
  anon_sym_RBRACK = 2,
  sym_barray = 3,
  anon_sym_DQUOTE = 4,
  aux_sym_bytestring_token1 = 5,
  sym_comment = 6,
  sym_escape_sequence = 7,
  sym_source_file = 8,
  sym__element = 9,
  sym_parray = 10,
  sym_bytestring = 11,
  aux_sym_source_file_repeat1 = 12,
  aux_sym_bytestring_repeat1 = 13,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_barray] = "barray",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_bytestring_token1] = "bytestring_token1",
  [sym_comment] = "comment",
  [sym_escape_sequence] = "escape_sequence",
  [sym_source_file] = "source_file",
  [sym__element] = "_element",
  [sym_parray] = "parray",
  [sym_bytestring] = "bytestring",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_bytestring_repeat1] = "bytestring_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_barray] = sym_barray,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_bytestring_token1] = aux_sym_bytestring_token1,
  [sym_comment] = sym_comment,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_source_file] = sym_source_file,
  [sym__element] = sym__element,
  [sym_parray] = sym_parray,
  [sym_bytestring] = sym_bytestring,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_bytestring_repeat1] = aux_sym_bytestring_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_barray] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_bytestring_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__element] = {
    .visible = false,
    .named = true,
  },
  [sym_parray] = {
    .visible = true,
    .named = true,
  },
  [sym_bytestring] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bytestring_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == '[') ADVANCE(10);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == ']') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 2:
      if (lookahead == 'd') ADVANCE(5);
      if (lookahead == 'x') ADVANCE(7);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(23);
      END_STATE();
    case 3:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 4:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(6);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == '[') ADVANCE(10);
      if (lookahead == ']') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_barray);
      if (lookahead == 'd') ADVANCE(15);
      if (lookahead == 'x') ADVANCE(17);
      if (lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(18);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_barray);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(18);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_barray);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(18);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_barray);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(18);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_barray);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(18);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_barray);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_barray);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_bytestring_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_bytestring_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_barray] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(13),
    [sym__element] = STATE(4),
    [sym_parray] = STATE(4),
    [sym_bytestring] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_barray] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_comment] = ACTIONS(7),
  },
  [2] = {
    [sym__element] = STATE(2),
    [sym_parray] = STATE(2),
    [sym_bytestring] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(11),
    [sym_barray] = ACTIONS(16),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [sym_comment] = ACTIONS(16),
  },
  [3] = {
    [sym__element] = STATE(5),
    [sym_parray] = STATE(5),
    [sym_bytestring] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(22),
    [sym_barray] = ACTIONS(24),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_comment] = ACTIONS(24),
  },
  [4] = {
    [sym__element] = STATE(2),
    [sym_parray] = STATE(2),
    [sym_bytestring] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(26),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_barray] = ACTIONS(28),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_comment] = ACTIONS(28),
  },
  [5] = {
    [sym__element] = STATE(2),
    [sym_parray] = STATE(2),
    [sym_bytestring] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(30),
    [sym_barray] = ACTIONS(28),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_comment] = ACTIONS(28),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(32), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_barray,
      anon_sym_DQUOTE,
      sym_comment,
  [9] = 1,
    ACTIONS(34), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_barray,
      anon_sym_DQUOTE,
      sym_comment,
  [18] = 1,
    ACTIONS(36), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_barray,
      anon_sym_DQUOTE,
      sym_comment,
  [27] = 1,
    ACTIONS(38), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_barray,
      anon_sym_DQUOTE,
      sym_comment,
  [36] = 4,
    ACTIONS(40), 1,
      anon_sym_DQUOTE,
    ACTIONS(42), 1,
      aux_sym_bytestring_token1,
    ACTIONS(44), 1,
      sym_escape_sequence,
    STATE(11), 1,
      aux_sym_bytestring_repeat1,
  [49] = 4,
    ACTIONS(46), 1,
      anon_sym_DQUOTE,
    ACTIONS(48), 1,
      aux_sym_bytestring_token1,
    ACTIONS(50), 1,
      sym_escape_sequence,
    STATE(12), 1,
      aux_sym_bytestring_repeat1,
  [62] = 4,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(54), 1,
      aux_sym_bytestring_token1,
    ACTIONS(57), 1,
      sym_escape_sequence,
    STATE(12), 1,
      aux_sym_bytestring_repeat1,
  [75] = 1,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 9,
  [SMALL_STATE(8)] = 18,
  [SMALL_STATE(9)] = 27,
  [SMALL_STATE(10)] = 36,
  [SMALL_STATE(11)] = 49,
  [SMALL_STATE(12)] = 62,
  [SMALL_STATE(13)] = 75,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parray, 2, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytestring, 2, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parray, 3, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytestring, 3, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bytestring_repeat1, 2, 0, 0),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bytestring_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_bytestring_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [60] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_bottombracket(void) {
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
