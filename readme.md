# A tree-sitter parser for the typst file format

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
linebreak ::= '\' '+'?
text ::= (!special)+
escape ::= '\' special
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

special ::=
'\' | '/' | '[' | ']' | '{' | '}' | '#' | '~' | '-' | '.' | ':' |
'"' | "'" | '*' | '_' | '`' | '$' | '=' | '<' | '>' | '@'

// Code and expressions.
code ::= (expr (separator expr)* separator?)?
separator ::= ';' | unicode(Newline)
expr ::=
literal | ident | block | group-expr | array-expr | dict-expr |
unary-expr | binary-expr | field-access | func-call | method-call |
func-expr | keyword-expr
keyword-expr ::=
let-expr | set-expr | show-expr | wrap-expr | if-expr |
while-expr | for-expr | import-expr | include-expr |
break-expr | continue-expr | return-expr

// Literals.
literal ::= 'none' | 'auto' | boolean | int | float | numeric | str
boolean ::= 'false' | 'true'
int ::= digit+
float ::= ((digit+ ('.' digit*)?) | ('.' digit+)) ('e' digit+)?
numeric ::= float unit
digit = '0' | ... | '9'
unit = 'pt' | 'mm' | 'cm' | 'in' | 'deg' | 'rad' | 'em' | 'fr' | '%'
str ::= '"' .* '"'

// Identifiers.
ident ::= (ident_start ident_continue*) - keyword
ident_start ::= unicode(XID_Start) | '_'
ident_continue ::= unicode(XID_Continue) | '_' | '-'
keyword ::=
'none' | 'auto' | 'true' | 'false' | 'not' | 'and' | 'or' |
'let' | 'set' | 'show' | 'wrap' | 'if' | 'else' | 'for' | 'in' |
'as' | 'while' | 'break' | 'continue' | 'return' | 'import' |
'include' | 'from'

// Blocks.
block ::= code-block | content-block
code-block ::= '{' code '}'
content-block ::= '[' markup ']'

// Groups and collections.
group-expr ::= '(' expr ')'
array-expr ::= '(' ((expr ',') | (expr (',' expr)+ ','?))? ')'
dict-expr ::= '(' (':' | (pair (',' pair)* ','?)) ')'
pair ::= (ident | str) ':' expr

// Unary and binary expression.
unary-expr ::= unary-op expr
unary-op ::= '+' | '-' | 'not'
binary-expr ::= expr binary-op expr
binary-op ::=
'+' | '-' | '*' | '/' | 'and' | 'or' | '==' | '!=' |
'<' | '<=' | '>' | '>=' | '=' | 'in' | ('not' 'in') |
'+=' | '-=' | '*=' | '/='

// Fields, functions, methods.
field-access ::= expr '.' ident
func-call ::= expr args
method-call ::= expr '.' ident args
args ::= ('(' (arg (',' arg)* ','?)? ')' content-block*) | content-block+
arg ::= (ident ':')? expr
func-expr ::= (params | ident) '=>' expr
params ::= '(' (param (',' param)* ','?)? ')'
param ::= ident (':' expr)?

// Keyword expressions.
let-expr ::= 'let' ident params? '=' expr
set-expr ::= 'set' expr args
show-expr ::= 'show' (ident ':')? expr 'as' expr
wrap-expr ::= 'wrap' ident 'in' expr
if-expr ::= 'if' expr block ('else' 'if' expr block)* ('else' block)?
while-expr ::= 'while' expr block
for-expr ::= 'for' for-pattern 'in' expr block
for-pattern ::= ident | (ident ',' ident)
import-expr ::= 'import' import-items 'from' expr
import-items ::= '*' | (ident (',' ident)* ','?)
include-expr ::= 'include' expr
break-expr ::= 'break'
continue-expr ::= 'continue'
return-expr ::= 'return' expr?

// Comments.
comment = line-comment | block-comment
line-comment = '//' (!unicode(Newline))*
block-comment = '/*' (. | block-comment)* '*/'
```
