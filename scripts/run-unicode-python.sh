#!/usr/bin/env sh
set -eu

REGEX_VERSION=2026.7.19

if [ "$#" -lt 1 ]; then
  echo "usage: $0 SCRIPT [ARGS...]" >&2
  exit 2
fi

if python3 -c \
  "import regex, sys; sys.exit(regex.__version__ != '$REGEX_VERSION')" \
  >/dev/null 2>&1; then
  exec python3 "$@"
fi

if command -v uv >/dev/null 2>&1; then
  exec uv run --no-project --with "regex==$REGEX_VERSION" python "$@"
fi

echo "Unicode tooling requires Python package regex==$REGEX_VERSION or the uv command" >&2
exit 1
