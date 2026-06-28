#!/usr/bin/env sh
set -eu
ROOT=$(CDPATH= cd -- "$(dirname -- "$0")/.." && pwd)
cd "$ROOT"
node scripts/check-grammar.js grammar.js
TYPST_ROOT_MODE=code node scripts/check-grammar.js grammar.js
TYPST_ROOT_MODE=math node scripts/check-grammar.js grammar.js
python3 scripts/check-queries.py
node scripts/audit-queries.js
python3 scripts/check-corpus.py
python3 scripts/check-unicode-mathclass.py
python3 scripts/check-scanner-order.py
cc -std=c11 -Wall -Wextra -Werror -fsyntax-only -Isrc/vendor src/scanner.c
cc -std=c11 -Wall -Wextra -Werror -Isrc/vendor \
  test/scanner/scanner_test.c -o /tmp/tree-sitter-typst-scanner-test
/tmp/tree-sitter-typst-scanner-test
printf '%s\n' 'all static checks passed'
