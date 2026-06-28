[
  (source_file)
  (code_block)
  (closure)
  (for_loop)
  (let_binding)
] @local.scope

(let_binding
  name: (identifier) @local.definition.function
  parameters: (parameters))

(let_binding
  name: (identifier) @local.definition.variable
  !parameters)

(closure parameters: (identifier) @local.definition.variable.parameter)
(parameters (identifier) @local.definition.variable.parameter)
(named_parameter name: (identifier) @local.definition.variable.parameter)
(sink_parameter name: (identifier) @local.definition.variable.parameter)
(destructuring_pattern (identifier) @local.definition.variable)
(named_destructuring_item pattern: (identifier) @local.definition.variable)
(destructuring_sink pattern: (identifier) @local.definition.variable)
(for_loop pattern: (identifier) @local.definition.variable)

(module_import alias: (identifier) @local.definition.namespace)
(import_item alias: (identifier) @local.definition.namespace)
(import_item
  path: (import_path
    head: (identifier) @local.definition.namespace
    !tail)
  !alias)
(import_item
  path: (import_path
    tail: (identifier) @local.definition.namespace .)
  !alias)

(identifier) @local.reference
