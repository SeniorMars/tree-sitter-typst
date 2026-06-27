#let empty = ()
#let grouped = (value)
#let singleton = (value,)
#let joined = (..left, ..right)
#let dict = (name: "Typst", count: 2, ..extra)
#let forced_dict = (: ..first, ..second)
#let f = (x, y: 2, ..rest) => x + y
#f(value, named: value, ..args)[content]
$ mat(size: #12pt, a; ..#args) $
