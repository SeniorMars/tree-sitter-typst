;;; tree-sitter-typst-font-lock.el --- Font-lock settings for tree-sitter-typst -*- lexical-binding: t; -*-

;;; Commentary:

;; Emacs font-lock settings for SeniorMars/tree-sitter-typst.
;;
;; This file is intentionally separate from the Neovim-oriented queries under
;; queries/typst/ and the Helix-specific queries under editors/helix/.

;;; Code:

(require 'treesit)

(defvar typst-ts-font-lock-settings)
(defvar typst-ts-font-lock-feature-list)

(defvar tree-sitter-typst-font-lock-feature-list
  '((comment)
    (markup keyword literal definition)
    (function variable math)
    (operator punctuation))
  "Tree-sitter font-lock feature levels for `tree-sitter-typst'.")

(defvar tree-sitter-typst-font-lock-settings
  (treesit-font-lock-rules
   :language 'typst
   :feature 'comment
   '([(line_comment)
      (block_comment)] @font-lock-comment-face)

   :language 'typst
   :feature 'markup
   '((shebang) @font-lock-preprocessor-face
     (heading marker: (heading_marker) @font-lock-keyword-face
              body: (heading_body) @font-lock-function-name-face)
     (bullet_list_item marker: (bullet_list_marker) @font-lock-keyword-face)
     (numbered_list_item marker: (numbered_list_marker) @font-lock-keyword-face)
     (term_list_item marker: (term_list_marker) @font-lock-keyword-face)
     (strong) @bold
     (emphasis) @italic
     (automatic_link) @link
     (reference) @link
     (label) @font-lock-constant-face
     (escape) @font-lock-constant-face
     (linebreak) @font-lock-constant-face
     (shorthand) @font-lock-constant-face
     (smart_quote) @font-lock-constant-face
     (raw (raw_delimiter) @font-lock-punctuation-face)
     (raw language: (raw_language) @font-lock-type-face)
     (raw content: (raw_content) @font-lock-doc-face))

   :language 'typst
   :feature 'keyword
   '(["let" "set" "show" "context"] @font-lock-keyword-face
     (if_expression "if" @font-lock-keyword-face)
     (else_clause "else" @font-lock-keyword-face)
     (for_loop ["for" "in"] @font-lock-keyword-face)
     (while_loop "while" @font-lock-keyword-face)
     (return_expression "return" @font-lock-keyword-face)
     ["import" "include" "as"] @font-lock-keyword-face
     (break_expression) @font-lock-keyword-face
     (continue_expression) @font-lock-keyword-face)

   :language 'typst
   :feature 'literal
   '([(none)
      (auto)
      (boolean)] @font-lock-constant-face
     [(integer)
      (float)
      (numeric)] @font-lock-number-face
     (unit) @font-lock-type-face
     (string) @font-lock-string-face
     (module_import source: (string) @font-lock-string-face)
     (module_include source: (string) @font-lock-string-face)
     (string_escape) @font-lock-constant-face
     (discard_pattern) @font-lock-warning-face)

   :language 'typst
   :feature 'definition
   '((let_binding name: (identifier) @font-lock-function-name-face
                  parameters: (parameters))
     (let_binding name: (identifier) @font-lock-variable-name-face
                  !parameters)
     (closure parameters: (identifier) @font-lock-variable-name-face)
     (parameters (identifier) @font-lock-variable-name-face)
     (named_parameter name: (identifier) @font-lock-variable-name-face)
     (sink_parameter name: (identifier) @font-lock-variable-name-face)
     (destructuring_pattern (identifier) @font-lock-variable-name-face)
     (named_destructuring_item pattern: (identifier) @font-lock-variable-name-face)
     (destructuring_sink pattern: (identifier) @font-lock-variable-name-face)
     (for_loop pattern: (identifier) @font-lock-variable-name-face)
     (dictionary_entry key: (identifier) @font-lock-variable-name-face)
     (named_argument name: (identifier) @font-lock-variable-name-face)
     (module_import alias: (identifier) @font-lock-type-face)
     (import_item alias: (identifier) @font-lock-type-face)
     (import_path head: (identifier) @font-lock-type-face)
     (import_path tail: (identifier) @font-lock-type-face))

   :language 'typst
   :feature 'function
   '((function_call function: (identifier) @font-lock-function-name-face)
     (function_call function: (field_access field: (identifier) @font-lock-function-name-face))
     (set_rule target: (identifier) @font-lock-builtin-face)
     (set_rule target: (field_access field: (identifier) @font-lock-builtin-face))
     (show_rule selector: (identifier) @font-lock-builtin-face)
     (show_rule selector: (field_access field: (identifier) @font-lock-builtin-face)))

   :language 'typst
   :feature 'variable
   '((embedded_code body: (identifier) @font-lock-variable-name-face)
     (arguments (identifier) @font-lock-variable-name-face)
     (array (identifier) @font-lock-variable-name-face)
     (code_block body: (identifier) @font-lock-variable-name-face)
     (parenthesized_expression expression: (identifier) @font-lock-variable-name-face)
     (let_binding value: (identifier) @font-lock-variable-name-face)
     (named_parameter default: (identifier) @font-lock-variable-name-face)
     (named_argument value: (identifier) @font-lock-variable-name-face)
     (spread value: (identifier) @font-lock-variable-name-face)
     (spread_argument value: (identifier) @font-lock-variable-name-face)
     (dictionary_entry value: (identifier) @font-lock-variable-name-face)
     (binary_expression left: (identifier) @font-lock-variable-name-face)
     (binary_expression right: (identifier) @font-lock-variable-name-face)
     (unary_expression operand: (identifier) @font-lock-variable-name-face)
     (logical_not_expression operand: (identifier) @font-lock-variable-name-face)
     (assignment_expression left: (identifier) @font-lock-variable-name-face)
     (assignment_expression right: (identifier) @font-lock-variable-name-face)
     (destructuring_assignment value: (identifier) @font-lock-variable-name-face)
     (if_expression condition: (identifier) @font-lock-variable-name-face)
     (for_loop iterable: (identifier) @font-lock-variable-name-face)
     (while_loop condition: (identifier) @font-lock-variable-name-face)
     (return_expression value: (identifier) @font-lock-variable-name-face)
     (contextual_expression body: (identifier) @font-lock-variable-name-face)
     (field_access object: (identifier) @font-lock-variable-name-face)
     (field_access field: (identifier) @font-lock-variable-name-face))

   :language 'typst
   :feature 'math
   '((equation "$" @font-lock-keyword-face)
     (math_identifier) @font-lock-constant-face
     (math_letter) @font-lock-variable-name-face
     (math_text) @font-lock-string-face
     (math_number) @font-lock-number-face
     (math_shorthand) @font-lock-operator-face
     (math_alignment_point) @font-lock-operator-face
     (math_primes) @font-lock-operator-face
     (math_field_access field: (math_identifier) @font-lock-variable-name-face)
     (math_call function: (math_identifier) @font-lock-function-name-face)
     (math_call function: (math_field_access field: (math_identifier) @font-lock-function-name-face))
     (math_application function: (math_letter) @font-lock-function-name-face)
     (math_application function: (math_identifier) @font-lock-function-name-face)
     (math_application function: (math_field_access field: (math_identifier) @font-lock-function-name-face))
     (math_named_argument name: (identifier) @font-lock-variable-name-face)
     (math_spread_argument (math_spread_operator) @font-lock-operator-face)
     (math_fraction "/" @font-lock-operator-face)
     (math_root operator: _ @font-lock-operator-face)
     (math_factorial "!" @font-lock-operator-face)
     (math_delimiter) @font-lock-punctuation-face
     (math_attachment ["_" "^"] @font-lock-operator-face))

   :language 'typst
   :feature 'operator
   '((unary_expression operator: _ @font-lock-operator-face)
     (logical_not_expression operator: _ @font-lock-operator-face)
     (assignment_expression operator: _ @font-lock-operator-face)
     (binary_expression operator: _ @font-lock-operator-face)
     (not_in_operator) @font-lock-operator-face
     (destructuring_assignment operator: _ @font-lock-operator-face)
     (closure "=>" @font-lock-operator-face)
     (spread ".." @font-lock-operator-face)
     (spread_argument ".." @font-lock-operator-face)
     (sink_parameter ".." @font-lock-operator-face)
     (destructuring_sink ".." @font-lock-operator-face)
     (wildcard_import "*" @font-lock-operator-face))

   :language 'typst
   :feature 'punctuation
   '(["(" ")" "[" "]" "{" "}"] @font-lock-punctuation-face
     ["," ":" ";" "."] @font-lock-punctuation-face
     (embedded_code "#" @font-lock-preprocessor-face)
     (content_block ["[" "]"] @font-lock-punctuation-face)))
  "Tree-sitter font-lock settings for `tree-sitter-typst'.")

(defun tree-sitter-typst-font-lock-apply-to-typst-ts-mode ()
  "Install this grammar's font-lock settings into `typst-ts-mode'."
  (interactive)
  (setq typst-ts-font-lock-settings tree-sitter-typst-font-lock-settings
        typst-ts-font-lock-feature-list tree-sitter-typst-font-lock-feature-list))

(defun tree-sitter-typst-font-lock-use-buffer-settings ()
  "Use this grammar's font-lock settings in the current buffer."
  (interactive)
  (setq-local treesit-font-lock-settings tree-sitter-typst-font-lock-settings)
  (setq-local treesit-font-lock-feature-list tree-sitter-typst-font-lock-feature-list)
  (font-lock-flush))

(provide 'tree-sitter-typst-font-lock)

;;; tree-sitter-typst-font-lock.el ends here
