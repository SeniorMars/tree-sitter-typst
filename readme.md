# tree-sitter-typst

`tree-sitter-typst` is a correct Tree-sitter parser for Typst. It parses
Typst's markup, code, and math syntax, including embedded code, content blocks,
equations, imports, set/show rules, closures, arrays, dictionaries, lists,
sections, labels, raw blocks, and math attachments.

Compared with earlier Typst grammars such as
[`uben0/tree-sitter-typst`](https://github.com/uben0/tree-sitter-typst), this
project is intended to be a more complete parser that works for real Typst
documents, editor queries, injections, incremental parsing, and real-world
fixture validation.

The grammar is intentionally written as one self-contained `grammar.js` plus an
external scanner for the lexical decisions that Tree-sitter cannot express
well in pure LR grammar rules.

## Generate And Test

Use Tree-sitter CLI 0.26.9 or newer:

```sh
npm install
npm run generate
npm test
npm run check
```

Useful focused checks:

```sh
npm run test:corpus
npm run test:queries
npm run test:incremental
npm run test:real-world
```

`src/parser.c`, `src/grammar.json`, and `src/node-types.json` are generated.
Do not hand-edit them.

The committed `src/unicode_tables.h` is generated scanner support data. Regenerate
it only when updating Unicode data:

```sh
npm run generate:unicode
```

The Unicode generator requires Python's `regex` module plus Unicode XID/number
data and UTR #25 MathClass data files. It searches `vendor/unicode`,
`src/vendor/unicode`, `third_party/unicode`, `unicode`, and `data`; set
`TREE_SITTER_TYPST_UNICODE_DIR` or `TREE_SITTER_TYPST_MATH_CLASS` for other
locations.

## Root Modes

The default parser is named `typst`. It starts in markup mode and still parses
all three Typst modes in one grammar: markup, embedded code, and math.

The same grammar can also generate direct code and direct math root parsers for
editor integrations that need those modes as injection targets:

```sh
npm run generate:variants
```

This writes variant grammars under:

```text
build/typst
build/typc
build/typm
```

The `typc` and `typm` builds are companion root modes, not replacements for the
default parser. Raw language injections tagged `typc` or `typm` can use them
when an editor registers those parser names.

## Queries

Editor queries live under `queries/typst/`:

- `highlights.scm`: markup, code, math, calls, definitions, literals, operators
- `injections.scm`: raw-language injections
- `locals.scm`: definitions, parameters, imports, and references
- `tags.scm`: headings, labels, functions, variables, imports, and calls
- `folds.scm`: foldable blocks and sections
- `indents.scm`: Neovim indentation captures
- `images.scm`: Snacks.nvim image and Typst math captures

The main highlight query follows Neovim's current tree-sitter capture
conventions. The Helix integration keeps a separate highlight query adapted to
Helix theme scopes instead of copying Neovim captures verbatim.

`npm run test:queries` compiles every query and verifies that every declared
capture is exercised by the audit fixture.

## Scanner Design

The external scanner owns boundary-sensitive tokens that must coordinate with
the LR parser:

- raw delimiter width and raw language/content/close scanning
- nested comments
- heading, bullet, numbered, and term markers
- list continuation and serialized list-marker indentation
- code newlines, continuation lookahead, immediate calls, and field access
- numeric tokens and unit adjacency
- markup word gaps and automatic links
- math words, text, spacing, fractions, arguments, and delimiters

Scanner state is intentionally small and serialized for incremental parsing.
Broad recovery states opt out through `_error_sentinel` so speculative recovery
does not mutate scanner state.

Scanner probes follow this convention: helpers that advance before deciding
must either be returned immediately by `scanner_scan` or handle all
same-position fallbacks internally. This avoids failed lookahead probes blocking
ordinary whitespace, newline, or recovery tokens.

Focused scanner coverage lives in:

```text
test/scanner/scanner_test.c
test/corpus/scanner_edges.txt
```

## Corpus And Real-World Fixtures

The corpus covers small syntax contracts, scanner edge cases, regressions, and a
large synthetic Typst document:

```text
test/corpus/
test/incremental/
test/fixtures/synthetic/
test/fixtures/real_world/
```

The real-world validator reports expected parser errors separately from
unexpected ones:

```sh
npm run test:real-world
```

## Benchmarks

Criterion benchmarks cover full parsing, incremental edits, and query execution
over synthetic and real-world fixtures:

```sh
cargo bench
```

The benchmark entry point is `benches/bench_main.rs`.

## Nix

With Nix, enter the development shell or build the C grammar package:

```sh
nix develop
nix build
```

Legacy commands are also supported:

```sh
nix-shell
nix-build
```

## Neovim

Neovim support is planned through
[`SeniorMars/typst.nvim`](https://github.com/SeniorMars/typst.nvim), a
work-in-progress plugin for using this parser and its editor queries from
Neovim.

Until that plugin is ready, the maintained queries in `queries/typst/` can be
used as the source for a manual Tree-sitter setup. Tree-sitter provides syntax
parsing; Tinymist provides language-server features.

## Emacs

Use Emacs 29 or newer and register the grammar with built-in `treesit`:

```elisp
(add-to-list
 'treesit-language-source-alist
 '(typst "https://github.com/SeniorMars/tree-sitter-typst" "main"))
```

Then run `M-x treesit-install-language-grammar RET typst RET`. Configure
`typst-ts-mode` according to that package's current documentation.

## Helix

A ready-to-copy Helix integration lives under:

```text
editors/helix/
```

It includes:

- `languages.toml`: parser registration, file types, auto-pairs, indentation,
  and Tinymist language-server configuration
- `queries/`: Helix query files for highlights, injections, indentation, and
  folds

Helix highlights intentionally use Helix capture conventions and theme scopes,
while the main `queries/typst/highlights.scm` targets Neovim conventions.

Copy or merge the integration into your Helix config:

```sh
mkdir -p ~/.config/helix/runtime/queries/typst
cp editors/helix/languages.toml ~/.config/helix/languages.toml
cp editors/helix/queries/*.scm ~/.config/helix/runtime/queries/typst/
```

Then build the grammar:

```sh
hx --grammar fetch
hx --grammar build
```

Tree-sitter provides syntax parsing; Tinymist provides language-server features.
