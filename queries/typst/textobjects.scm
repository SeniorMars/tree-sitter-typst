; A markup-embedded function includes the leading `#` in its outer range.
((embedded_code
  body: (let_binding
    parameters: (parameters)
    value: (_) @function.inner)) @function.outer
  (#not-match? @function.inner "^\\{")
)

((embedded_code
  body: (let_binding
    parameters: (parameters)
    value: (code_block) @function.inner)) @function.outer
  (#offset! @function.inner 0 1 0 -1)
)

; Functions declared inside a code block have no leading mode-transition hash.
((code_block
  body: (let_binding
    parameters: (parameters)
    value: (_) @function.inner) @function.outer)
  (#not-match? @function.inner "^\\{")
)

((code_block
  body: (let_binding
    parameters: (parameters)
    value: (code_block) @function.inner) @function.outer)
  (#offset! @function.inner 0 1 0 -1)
)

((closure
  body: (_) @function.inner) @function.outer
  (#not-match? @function.inner "^\\{")
)

((closure
  body: (code_block) @function.inner) @function.outer
  (#offset! @function.inner 0 1 0 -1)
)
