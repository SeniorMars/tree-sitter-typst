(let_binding
  parameters: (parameters)
  value: (_) @function.inside) @function.around

(closure
  body: (_) @function.inside) @function.around

(section
  body: (_) @class.inside) @class.around

(content_block
  body: (_) @class.inside) @class.around

(code_block
  body: (_) @class.inside) @class.around

(parameters
  ((_) @parameter.inside . ","? @parameter.around) @parameter.around)

(arguments
  ((_) @parameter.inside . ","? @parameter.around) @parameter.around)

(math_arguments
  ((_) @parameter.inside . ["," ";"]? @parameter.around) @parameter.around)

[
  (line_comment)
  (block_comment)
] @comment.inside

(line_comment)+ @comment.around
(block_comment) @comment.around

(array
  (_) @entry.around)

(dictionary_entry
  value: (_) @entry.inside) @entry.around

(parenthesized_import_list
  (import_item) @entry.around)

(list_body
  [
    (bullet_list_item)
    (numbered_list_item)
    (term_list_item)
  ] @entry.around)
