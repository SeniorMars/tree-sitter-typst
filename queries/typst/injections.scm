; Standard raw-language injection. With the companion typc/typm parser builds,
; fenced examples tagged `typc` or `typm` start in the correct Typst syntax mode.
(raw
  language: (raw_language) @_typst.language
  content: (raw_content) @injection.content
  (#any-of? @_typst.language "typ" "typst")
  (#set! injection.language "typst")
)

(raw
  language: (raw_language) @injection.language
  content: (raw_content) @injection.content
  (#not-any-of? @injection.language "typ" "typst"))
