# Helix

This directory follows Helix's runtime layout for a local Typst grammar
integration:

```text
editors/helix/languages.toml
editors/helix/queries/
```

Merge `languages.toml` into your Helix `languages.toml`, or copy it as a
starting point:

```sh
mkdir -p ~/.config/helix
cp editors/helix/languages.toml ~/.config/helix/languages.toml
```

Then install the query files:

```sh
mkdir -p ~/.config/helix/runtime/queries/typst
cp editors/helix/queries/*.scm ~/.config/helix/runtime/queries/typst/
```

Fetch and build the grammar:

```sh
hx --grammar fetch
hx --grammar build
```

The default `typst` grammar parses markup, embedded code, and math. The query
files in this directory are maintained alongside `queries/typst/`, with Helix
captures adapted to Helix's theme scopes and runtime query names. The query set
includes highlights, injections, indentation, folds, locals, tags, textobjects,
and rainbow brackets.
