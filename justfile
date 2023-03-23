alias b := build
alias g := gen
alias t := test

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
