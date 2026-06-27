[
  (code_block)
  (content_block)
  (parenthesized_expression)
  (array)
  (dictionary)
  (parameters)
  (destructuring_pattern)
  (reassignment_pattern)
  (parenthesized_import_list)
  (equation)
  (math_arguments)
  (math_delimited)
  (math_group)
  (list_body)
] @indent.begin

(equation
  "$"
  body: (math)
  "$" @indent.end)

[
  "}"
  "]"
  ")"
] @indent.end

[
  "else"
] @indent.branch

[
  (raw_content)
  (string_content)
] @indent.auto
