// Marker boundary recovery: none of these line prefixes are structural markers.
=foo
-foo
/foo
1.foo

// Right-hand field identifiers must be immediate.
#a. b
#a./* comment */b
$arrow. r$

// A non-statement semicolon is accepted only immediately.
#x ;

// Malformed hashes remain visible as syntax errors instead of becoming text.
# 
#// comment

// Strong/emphasis must not cross a paragraph break.
*a

b*
_a

b_

// Comments prevent math spread inference and implicit application.
$func(.. /* comment */ value)$
$x/* comment */(y)$

// Invalid raw language-tag starts are raw content, not identifiers.
```😀 body```

// Recovery for unclosed raw and delimiters.
`unterminated
$(x$
