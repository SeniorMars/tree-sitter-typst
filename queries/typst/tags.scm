(heading
  body: (heading_body) @name) @definition.heading

(let_binding
  name: (identifier) @name
  parameters: (parameters)) @definition.function

(let_binding
  name: (identifier) @name
  !parameters) @definition.var

(label) @name @definition.label

(module_import
  alias: (identifier) @name) @definition.import

(import_item
  alias: (identifier) @name) @definition.import

(import_item
  path: (import_path
    head: (identifier) @name
    !tail)
  !alias) @definition.import

(import_item
  path: (import_path
    tail: (identifier) @name .)
  !alias) @definition.import

(set_rule
  target: (identifier) @name) @reference.call

(set_rule
  target: (field_access field: (identifier) @name)) @reference.call

(show_rule
  selector: (identifier) @name) @reference.call

(show_rule
  selector: (field_access field: (identifier) @name)) @reference.call

(module_import
  source: (string) @name) @reference.import

(module_import
  source: (identifier) @name) @reference.import

(module_include
  source: (string) @name) @reference.import

(module_include
  source: (identifier) @name) @reference.import

(function_call
  function: (identifier) @name) @reference.call

(function_call
  function: (field_access field: (identifier) @name)) @reference.call

(math_call
  function: (math_identifier) @name) @reference.call

(math_call
  function: (math_field_access field: (math_identifier) @name)) @reference.call

(math_application
  function: (math_letter) @name) @reference.call

(math_application
  function: (math_identifier) @name) @reference.call

(math_application
  function: (math_field_access field: (math_identifier) @name)) @reference.call
