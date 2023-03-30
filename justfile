set positional-arguments
alias b := build
alias g := gen
alias t := test
alias c := case

case arg:
    tree-sitter test -f {{arg}}

gen:
    tree-sitter generate

build:
    tree-sitter generate && node-gyp build

test: build
    tree-sitter test

debug:
    tree-sitter parse --debug-build

parse:
    tree-sitter parse
