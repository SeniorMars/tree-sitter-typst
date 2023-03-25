# A tree-sitter parser for the typst file format

Note: this language uses parentheses for so many things that it's hard to parse, and it's not like
lisp where everything a tree :(

DONE:

- [ ] Code mode: `#` to enter code mode

    - [x] variable access: `x`
    - [x] any literal: `1`, `"hi"`, `true`, `false`, `none`, `auto`
    - [x] code block: `{ x = 1 }`
    - [x] content block: `[ *hello* ]`
    - [x] parenthesized expression: `(1 + 2)`
    - [x] array: `(1, 2, 3)`
    - [ ] dictionary: `(a: "hi", b: 2)`
    - [x] unary operator: `-x`
    - [x] binary operator: `x + y`
    - [x] assignment: `x = 1`
    - [ ] I accidentally combined the next three :(. I have to redo
        - [ ] field access: `x.y`
        - [ ] method call: `x.flatten()`
        - [ ] function call: `min(x, y)`
    - [x] unnamed function: `(x, y) => x + y`
    - [x] let binding: `let x = 1`
    - [x] named function: `let f(x) = 2 * x`
    - [ ] set rule: `set text(14pt)`
    - [ ] set-if rule: `set text(..) if ..`
    - [ ] show-set rule: `show par: set block(..)`
    - [ ] show rule with function: `show par: set block(..)`
    - [ ] show-everything rule: `show par: set block(..)`
    - [x] conditional: `if x < 0 {0} else {x}`
    - [x] for loop: `for x in [1, 2, 3]`
    - [x] while loop: `while x < 10 {}`
    - [x] loop control flow: `break`, `continue`
    - [ ] return from function: `return x`
    - [ ] include module: `include "bar.typ"`
    - [ ] import module: `import "bar.typ"`
    - [ ] import items from module: `import "bar.typ": a, b, c`
    - [x] comment: `// hi` or `/* hi */`.

- [ ] Math mode

    - [ ] Everything :)

- [ ] Markup mode

    - [ ] paragraph break
    - [ ] strong emphasis
    - [ ] emphasis
    - [x] raw text
    - [ ] link
    - [ ] label
    - [ ] reference
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
space | linebreak | text | escape | nbsp | shy | endash | emdash |
ellipsis | quote | strong | emph | raw | link | math | heading |
list | enum | desc | label | ref | markup-expr | comment

// Markup nodes.
space ::= unicode(White_Space)+
nbsp ::= '~'
shy ::= '-?'
endash ::= '--'
emdash = '---'
ellipsis ::= '...'
quote ::= "'" | '"'
strong ::= '*' markup '*'
emph ::= '_' markup '_'
raw ::= '`' (raw | .*) '`'
link ::= 'http' 's'? '://' (!space)*
math ::= ('$' .* '$') | ('$[' .* ']$')
heading ::= '='+ space markup
list ::= '-' space markup
enum ::= digit* '.' space markup
desc ::= '/' space markup ':' space markup
label ::= '<' ident '>'
ref ::= '@' ident
markup-expr ::= block | ('#' hash-expr)
hash-expr ::= ident | func-call | keyword-expr

// Code and expressions.
code ::= (expr (separator expr)* separator?)?
expr ::=
literal | ident | block | group-expr | array-expr | dict-expr |
unary-expr | binary-expr | field-access | func-call | method-call |
func-expr | keyword-expr
keyword-expr ::=
let-expr | set-expr | show-expr | wrap-expr | if-expr |
while-expr | for-expr | import-expr | include-expr |
break-expr | continue-expr | return-expr

// Identifiers.
keyword ::=
'none' | 'auto' | 'true' | 'false' | 'not' | 'and' | 'or' |
'let' | 'set' | 'show' | 'wrap' | 'if' | 'else' | 'for' | 'in' |
'as' | 'while' | 'break' | 'continue' | 'return' | 'import' |
'include' | 'from'

// Groups and collections.
dict-expr ::= '(' (':' | (pair (',' pair)* ','?)) ')'
pair ::= (ident | str) ':' expr

// Fields, functions, methods.
field-access ::= expr '.' ident
func-call ::= expr args
method-call ::= expr '.' ident args
args ::= ('(' (arg (',' arg)* ','?)? ')' content-block*) | content-block+
arg ::= (ident ':')? expr
func-expr ::= (params | ident '=>') expr

// Keyword expressions.
set-expr ::= 'set' expr args
show-expr ::= 'show' (ident ':')? expr 'as' expr
wrap-expr ::= 'wrap' ident 'in' expr
import-expr ::= 'import' import-items 'from' expr
import-items ::= '*' | (ident (',' ident)* ','?)
include-expr ::= 'include' expr
return-expr ::= 'return' expr?
```
