[
  (arguments)
  (parameters)
  (parenthesized_expression)
  (array)
  (dictionary)
  (code_block)
  (content_block)
  (destructuring_pattern)
  (reassignment_pattern)
  (parenthesized_import_list)
  (equation)
  (math_arguments)
  (math_delimited)
  (math_group)
] @rainbow.scope

[
  "(" ")"
  "[" "]"
  "{" "}"
] @rainbow.bracket

(equation "$" @rainbow.bracket)
(math_delimited
  open: (math_delimiter) @rainbow.bracket
  close: (math_delimiter) @rainbow.bracket)
(math_group
  open: (math_delimiter) @rainbow.bracket
  close: (math_delimiter) @rainbow.bracket)
