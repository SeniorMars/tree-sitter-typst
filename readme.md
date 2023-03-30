# A tree-sitter parser for the typst file format

This language is soooo hard to parse… whitespace, parenthesizes for everything, and Unicode :(


DONE:

- [O] Code mode: `#` to enter code mode

    - [x] any literal: `1`, `"hi"`, `true`, `false`, `none`, `auto`
    - [ ] raw and labels are literals
    - [x] code block: `{ x = 1 }`
    - [x] content block: `[ hello ]`
    - [x] parenthesized expression: `(1 + 2)`
    - [x] array: `(1, 2, 3)`
    - [x] dictionary: `(a: "hi", b: 2)`
    - [x] unary operator: `-x`
    - [x] binary operator: `x + y`
    - [x] assignment: `x = 1`
    - [x] variable access: `x`
    - [x] field access: `x.y`
    - [x] method call: `x.flatten()`
    - [x] named function: `let f(x) = 2 * x`
    - [x] unnamed function: `(x, y) => x + y`
    - [x] function call: `min(x, y)`
    - [x] let binding: `let x = 1`
    - [x] set rule: `set text(14pt)`
    - [x] set-if rule: `set text(..) if ..`
    - [x] show-set rule: `show par: set block(..)`
    - [x] show rule with function: `show par: set block(..)`
    - [x] show-everything rule: `show: set block(..)`
    - [x] conditional: `if x < 0 {0} else {x}`
    - [x] for loop: `for x in [1, 2, 3]`
    - [x] while loop: `while x < 10 {}`
    - [x] loop control flow: `break`, `continue`
    - [x] return from function: `return x`
    - [x] include module: `include "bar.typ"`
    - [x] import module: `import "bar.typ"`
    - [x] import items from module: `import "bar.typ": a, b, c`
    - [x] comment: `// hi` or `/* hi */`.

- [ ] Math mode

    - [ ] Everything :)

- [ ] Markup mode

    - [x] Whitespace (Unicode)
    - [x] paragraph break
    - [x] text (Unicode)
    - [x] emphasis
        - [x] strong
        - [x] italic
    - [x] label
    - [x] reference
    - [ ] raw text
        - [ ] inline
        - [ ] block
    - [ ] link
    - [ ] heading
    - [ ] bullet list
    - [ ] numbered list
    - [ ] term list
    - [ ] math
    - [x] line break
    - [ ] smart quote
        - [ ] single quote
        - [x] double quote
    - [ ] symbol shorthand
    - [x] code expression
    - [x] character escape
    - [x] comment.

---

Outdated specification comes from: https://www.user.tu-berlin.de/laurmaedje/programmable-markup-language-for-typesetting.pdf

I'll be using the textmate grammar as inspiration: https://github.com/typst/typst/blob/main/tools/support/typst.tmLanguage.json

For myself, I'll paste it here:

---

## Typst Grammar

Below is an approximate EBNF grammar for the Typst language that is based on our
handwritten recursive descent parser. We follow these conventions:

    – Production names are all lowercase.
    – Text enclosed in single (') or double quotes (") defines a terminal.
    – * for an arbitrary number of repetitions.
    – + for at least one repetition.
    – ? for zero or one repetitions.
    – ! to negate a simple (character-class-like) production.
    – . to match an arbitrary character.
    – a - b to match anything that matches a but not b.
    – unicode(Property) to match any character that has the given unicode property.

Note that comments and spaces are allowed almost everywhere within code constructs.
For readability, this is omitted in the grammar. Moreover, the grammar omits the
indentation rules for lists, as EBNF cannot handle context-sensitive constructs.

```
// Markup.
markup ::= markup-node*
markup-node ::=
space | nbsp | shy | endash | emdash | ellipsis | quote | 
strong | emph | raw | link | math | heading | list | enum | desc

// Markup nodes.
nbsp ::= '~'
shy ::= '-?'
endash ::= '--'
emdash = '---'
ellipsis ::= '...'
quote ::= "'" | '"'
strong ::= '*' markup '*'
raw ::= '`' (raw | .*) '`'
link ::= 'http' 's'? '://' (!space)*
math ::= ('$' .* '$') | ('$[' .* ']$')
heading ::= '='+ space markup
list ::= '-' space markup
enum ::= digit* '.' space markup
desc ::= '/' space markup ':' space markup
```
