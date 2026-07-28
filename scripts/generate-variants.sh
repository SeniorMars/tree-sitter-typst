#!/usr/bin/env sh
set -eu

ROOT=$(CDPATH= cd -- "$(dirname -- "$0")/.." && pwd)
CLI=${TREE_SITTER:-tree-sitter}

if [ "$#" -gt 0 ]; then
  MODES="$*"
else
  MODES="markup code math"
fi

for MODE in $MODES; do
  case "$MODE" in
    markup)
      NAME=typst
      CAMELCASE=Typst
      FILE_TYPES='"typ", "typst"'
      INJECTION_REGEX='^typ(st)?$'
      ;;
    code)
      NAME=typc
      CAMELCASE=Typc
      FILE_TYPES='"typc"'
      INJECTION_REGEX='^typc$'
      ;;
    math)
      NAME=typm
      CAMELCASE=Typm
      FILE_TYPES='"typm"'
      INJECTION_REGEX='^typm$'
      ;;
    *)
      printf 'unknown root mode: %s\n' "$MODE" >&2
      printf 'usage: %s [markup] [code] [math]\n' "$0" >&2
      exit 2
      ;;
  esac

  DEST="$ROOT/build/$NAME"
  printf 'generating %s variant in %s\n' "$NAME" "$DEST"

  rm -rf "$DEST"
  mkdir -p "$DEST/queries"
  cp "$ROOT/grammar.js" "$ROOT/package.json" "$ROOT/tree-sitter.json" "$DEST/"
  cp -R "$ROOT/grammar" "$ROOT/src" "$DEST/"
  if [ -d "$ROOT/queries" ]; then
    cp -R "$ROOT/queries/." "$DEST/queries/"
  fi

  node - "$DEST/tree-sitter.json" "$NAME" "$CAMELCASE" "$FILE_TYPES" "$INJECTION_REGEX" <<'NODE'
const fs = require("fs");
const [file, name, camelcase, fileTypes, injectionRegex] = process.argv.slice(2);
const data = JSON.parse(fs.readFileSync(file, "utf8"));
const grammar = data.grammars[0];

grammar.name = name;
grammar.camelcase = camelcase;
grammar.scope = `source.${name}`;
grammar["file-types"] = JSON.parse(`[${fileTypes}]`);
grammar["injection-regex"] = injectionRegex;

fs.writeFileSync(file, JSON.stringify(data, null, 2) + "\n");
NODE

  (cd "$DEST" && TYPST_ROOT_MODE="$MODE" "$CLI" generate)
done
