(let_binding name: (identifier) @local.definition)
(closure parameters: (identifier) @local.definition)
(parameters (identifier) @local.definition)
(named_parameter name: (identifier) @local.definition)
(sink_parameter name: (identifier) @local.definition)
(destructuring_pattern (identifier) @local.definition)
(named_destructuring_item pattern: (identifier) @local.definition)
(destructuring_sink pattern: (identifier) @local.definition)
(for_loop pattern: (identifier) @local.definition)
(module_import alias: (identifier) @local.definition)
(import_item alias: (identifier) @local.definition)
(import_item
  path: (import_path
    head: (identifier) @local.definition
    !tail)
  !alias)
(import_item
  path: (import_path
    tail: (identifier) @local.definition .)
  !alias)
(identifier) @local.reference
