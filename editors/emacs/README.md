# Emacs

This directory provides Emacs `treesit` font-lock settings for this grammar's
node names.

`typst-ts-mode` is a separate package and currently embeds font-lock queries for
a different Typst grammar. When it is used with this parser, Emacs can fail while
compiling those queries, for example on this rule:

```elisp
'((comment) @font-lock-comment-face)
```

This grammar exposes `line_comment` and `block_comment` nodes instead of a
single `comment` node. The compatibility file here replaces only the font-lock
settings used by `typst-ts-mode`; other `typst-ts-mode` features may still need
updates for this grammar's node names.

`treesit-install-language-grammar` installs only the parser library. It does not
put this compatibility Elisp file on Emacs's `load-path`.

If you keep a checkout of this repository, add this directory to `load-path` and
install the override after `typst-ts-mode` loads:

```elisp
(add-to-list 'load-path "/path/to/tree-sitter-typst/editors/emacs")

(with-eval-after-load 'typst-ts-mode
  (require 'tree-sitter-typst-font-lock)
  (tree-sitter-typst-font-lock-apply-to-typst-ts-mode))
```

If you do not want to keep a checkout, copy just
`tree-sitter-typst-font-lock.el` into a directory already on `load-path`, or into
a directory such as `~/.emacs.d/lisp` and add that directory:

```sh
mkdir -p ~/.emacs.d/lisp
curl -L \
  -o ~/.emacs.d/lisp/tree-sitter-typst-font-lock.el \
  https://raw.githubusercontent.com/SeniorMars/tree-sitter-typst/main/editors/emacs/tree-sitter-typst-font-lock.el
```

```elisp
(add-to-list 'load-path (expand-file-name "lisp" user-emacs-directory))

(with-eval-after-load 'typst-ts-mode
  (require 'tree-sitter-typst-font-lock)
  (tree-sitter-typst-font-lock-apply-to-typst-ts-mode))
```

Run `M-x treesit-install-language-grammar RET typst RET` after registering this
grammar in `treesit-language-source-alist`.
