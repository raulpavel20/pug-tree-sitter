#include "tree_sitter/parser.h"
#include <wctype.h>

enum TokenType {
  NEWLINE,
  INDENT,
  DEDENT,
};

void *tree_sitter_pug_external_scanner_create() {
  return NULL;
}

void tree_sitter_pug_external_scanner_destroy(void *p) {}

void tree_sitter_pug_external_scanner_reset(void *p) {}

unsigned tree_sitter_pug_external_scanner_serialize(void *p, char *buffer) {
  return 0;
}

void tree_sitter_pug_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

bool tree_sitter_pug_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  while (iswspace(lexer->lookahead)) {
    if (lexer->lookahead == '\n') {
      lexer->advance(lexer, false);
      lexer->result_symbol = NEWLINE;
      return true;
    }
    lexer->advance(lexer, false);
  }

  return false;
}
