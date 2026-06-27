; Comments and shebang
(shebang) @comment
(line_comment) @comment
(block_comment) @comment

; Markup
(heading marker: (heading_marker) @markup.heading.marker) @markup.heading
(bullet_list_item marker: (bullet_list_marker) @markup.list)
(numbered_list_item marker: (numbered_list_marker) @markup.list)
(term_list_item marker: (term_list_marker) @markup.list)
(strong) @markup.strong
(emphasis) @markup.italic
(smart_quote) @markup.quote
(shorthand) @constant.builtin
(escape) @string.escape
(linebreak) @constant.builtin
(bracketed_text ["[" "]"] @punctuation.bracket)
(automatic_link) @markup.link.url
(label) @label
(reference "@" @punctuation.special)
(reference target: (identifier) @label)

; Raw text and language tags
(raw
  (raw_delimiter) @markup.raw.delimiter) @markup.raw
(raw language: (raw_language) @label)
(raw content: (raw_content) @markup.raw)

; Cross-mode punctuation.
(embedded_code "#" @punctuation.special)
(equation "$" @punctuation.special)
(content_block ["[" "]"] @punctuation.bracket)
(code_block ["{" "}"] @punctuation.bracket)

; Code keywords and builtins
[
  "let" "set" "show" "context"
  "if" "else" "for" "in" "while"
  "return"
  "import" "include" "as"
] @keyword

(break_expression) @keyword
(continue_expression) @keyword

(none) @constant.builtin
(auto) @constant.builtin
(boolean) @constant.builtin.boolean
(integer) @constant.numeric.integer
(float) @constant.numeric.float
(unit) @constant.numeric
(string) @string
(string_escape) @string.escape
(discard_pattern) @variable.builtin

; Definitions and calls
(let_binding
  name: (identifier) @function
  parameters: (parameters))
(let_binding
  name: (identifier) @variable.definition
  !parameters)
(closure parameters: (identifier) @variable.parameter)
(parameters (identifier) @variable.parameter)
(named_parameter name: (identifier) @variable.parameter)
(sink_parameter name: (identifier) @variable.parameter)
(destructuring_pattern (identifier) @variable.definition)
(named_destructuring_item key: (identifier) @property)
(dictionary_entry key: (identifier) @property)
(named_argument name: (identifier) @variable.parameter)
(function_call function: (identifier) @function.call)
(function_call function: (field_access field: (identifier) @function.method.call))
(field_access field: (identifier) @property)
(set_rule target: (identifier) @function.builtin)
(set_rule target: (field_access field: (identifier) @function.builtin))
(module_import alias: (identifier) @module)
(import_item alias: (identifier) @module)
(import_path
  head: (identifier) @module)
(import_path
  tail: (identifier) @module)
(identifier) @variable

; Operators
(unary_expression operator: ["+" "-" "−"] @operator)
(logical_not_expression operator: "not" @operator)
(assignment_expression operator: ["=" "+=" "-=" "−=" "*=" "/="] @operator)
(binary_expression
  operator: [
    "or" "and" "in"
    "==" "!=" "<" "<=" ">" ">="
    "+" "-" "−" "*" "/"
  ] @operator)
(not_in_operator) @operator
(destructuring_assignment operator: "=" @operator)
(closure "=>" @operator)
(spread ".." @operator)
(spread_argument ".." @operator)
(sink_parameter ".." @operator)
(destructuring_sink ".." @operator)
(wildcard_import "*" @operator)

; Math
(math_identifier) @constant
(math_text) @constant.character
(math_number) @constant.numeric
(math_shorthand) @operator
(math_alignment_point) @operator
(math_primes) @operator
(math_field_access field: (math_identifier) @property)
(math_call function: (math_identifier) @function.call)
(math_call function: (math_field_access field: (math_identifier) @function.method.call))
(math_named_argument name: (identifier) @variable.parameter)
(math_spread_argument (math_spread_operator) @operator)
(math_fraction "/" @operator)
(math_root operator: _ @operator)
(math_factorial "!" @operator)
(math_delimiter) @punctuation.bracket
(math_group
  open: (math_delimiter) @punctuation.special
  close: (math_delimiter) @punctuation.special)

; Attachments are captured at their structural node instead of trying to match
; arbitrary descendants. This handles subscript, superscript, and grouped prime
; forms consistently (open issue #46).
(math_attachment ["_" "^"] @operator)
(math_attachment primes: (math_primes) @operator)
