; Used by Snacks.nvim to find inline images and render Typst math.
(function_call
  function: (identifier) @_image.function
  arguments: (arguments
    (string) @image.src)
  (#eq? @_image.function "image")
  (#offset! @image.src 0 1 0 -1)
) @image

(equation
  (#set! image.ext "math.typ")
) @image.content @image
