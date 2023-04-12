/* eslint-disable space-before-function-paren */
/* eslint-disable no-tabs */
/* eslint-disable comma-dangle */
/* eslint-disable indent */
/* eslint-disable semi */
/* eslint-disable no-undef */

// very ugly code that allows you to use comma seperated values with comments and newlines
// this took me some time to come up with.
function commaSep(space, rule, lineComment) {
    return seq(
        repeat(seq(optional(space), lineComment, '\n', optional(space))),
        optional(space),
        optional(seq(
            rule,
            repeat(seq(
                ',',
                optional(seq(
                    space,
                    repeat(
                        alias(
                            /\p{White_Space}*\/\/.*/,
                            lineComment,
                        )))),
                optional(space),
                rule,
            )),
            optional(','),
            optional(seq(
                space,
                repeat(
                    alias(
                        /\p{White_Space}*\/\/.*/,
                        lineComment,
                    )),
                optional(space),
            )),
        )))
}

function commaSepLine(space, rule) {
    return seq(rule, repeat(seq(optional(space), ',', optional(space), rule)))
}

const PREC = {
    lambda: 11,
    call: 10,
    fieldcall: 9,
    field: 8,
    negation: 7, // -   Negation    Unary   7
    no_effect: 7, // +  No effect (exists for symmetry) Unary   7
    multiplication: 6, // * Multiplication  Binary  6
    division: 6, // /   Division    Binary  6
    addition: 5, // +   Addition    Binary  5
    subtraction: 5, // -    Subtraction Binary  5
    check_equality: 4, // ==    Check equality  Binary  4
    check_inequality: 4, // !=  Check inequality    Binary  4
    check_less_than: 4, // <    Check less-than Binary  4
    check_less_than_or_equal: 4, // <=  Check less-than or equal    Binary  4
    check_greater_than: 4, // > Check greater-than  Binary  4
    check_greater_than_or_equal: 4, // >=   Check greater-than or equal Binary  4
    check_if_in_collection: 4, // in    Check if in collection  Binary  4
    check_if_not_in_collection: 4, // not in    Check if not in collection  Binary  4
    logical_not: 3, // not  Logical "not"   Unary   3
    and: 3, // and  Short-circuiting logical "and"  Binary  3
    or: 2, // or    Short-circuiting logical "or    Binary  2
    assignment: 1, // = Assignment  Binary  1
    add_assignment: 1, // +=    Add-Assignment  Binary  1
    subtraction_assignment: 1, // -=    Subtraction-Assignment  Binary  1
    multiplication_assignment: 1, // *= Multiplication-Assignment   Binary  1
    division_assignment: 1, // /=   Division-Assignment Binary  1

    // precedence for math-mode operators
    superscript: 6,
    subscript: 6,
    fraction: 5,
    bracket: 0
}

module.exports = grammar({
    name: 'typst',

    // extras: $ => [$._whitespace, $.line_comment, $.block_comment],
    extras: $ => [$.line_comment, $.block_comment],

    externals: $ => [
        $._string_content,
        $.block_comment,
    ],

    // does this mess anything up?
    //word: $ => $.identifier,

    // WHITESPACE IS SO HARD TO HANDLE
    conflicts: $ => [
        [
            $.expression,
            $.function_expression,
            $.not_operator,
            $.binary_operator,
            $.boolean_expression,
            $.comparison_expression,
            $._in_expression,
            $._not_in_expression,
            $.assignment_expression,
            $.assignment_operators,
        ],
        [
            $.expression,
            $.function_expression,
            $.binary_operator,
            $.boolean_expression,
            $.comparison_expression,
            $._in_expression,
            $._not_in_expression,
            $.assignment_expression,
            $.assignment_operators,
        ],
        [
            $.not_operator,
            $.binary_operator,
            $.boolean_expression,
            $.comparison_expression,
            $._in_expression,
            $._not_in_expression,
            $.assignment_expression,
            $.assignment_operators,
        ],
        [
            $.binary_operator,
            $.boolean_expression,
            $.comparison_expression,
            $._in_expression,
            $._not_in_expression,
            $.assignment_expression,
            $.assignment_operators,
        ],
        [$._code_mode, $.expression],
        [$.code_block, $.expression],
        [$._parameter, $.expression],
        [$.pair, $.default_parameter],
        [$.array],
        [$.emphasis, $._text],
        [$.strong, $._text]
        // [$._markup, $.emphasis]
    ],

    supertypes: $ => [
        $.expression,
        $.literal,
        $.keyword_expression,
        $.comment,
        $.unary_expression,
        $.binary_expression,
        $.math_expression
    ],

    rules: {
        source_file: $ => repeat($._markup),

        // nbsp | shy | endash | emdash |
        // ellipsis | quote | strong | emph | raw | link | math | heading |
        // list | enum | desc | label | ref | markup-expr | comment
        _markup: $ => prec.left(choice(
            $._text,
            $._whitespace,
            $._paragraph_break,
            $._code_mode,
            $.equation,
            $.quote,
            $.line_break,
            $.escape_sequence,
            $.label,
            $.reference,
            $.emphasis,
            $.strong,
        )),

        identifier: $ => /[_\p{XID_Start}][_\p{XID_Continue}-]*/,

        // this language uses whitespace to SOMETIMES separate tokens
        // thus, we need to be explicit about whitespace use
        // this makes parsing so much harder to do
        _whitespace: $ => /\p{White_Space}+/,

        // --- Comments
        comment: $ => choice(
            $.line_comment,
            $.block_comment
        ),

        line_comment: $ => token(seq(
            '//', /[^\r\n]*/
        )),

        line_break: $ => /\\/,

        _paragraph_break: $ => seq(
            choice($._markup, $._code_mode),
            alias(
                token.immediate(seq('\n', repeat1('\n'))),
                $.paragraph_break
            )
        ),

        // add support for '
        quote: $ => alias($.string_literal, 'quote'),
        label: $ => seq('<', $.identifier, '>'),
        reference: $ => seq('@', $.identifier),
        emphasis: $ => seq(
            optional($._whitespace),
            '_',
            repeat($._markup),
            token.immediate(
                '_',
                $._whitespace
            ),
        ),

        strong: $ => seq(
            optional($._whitespace),
            '*',
            repeat($._markup),
            token.immediate(
                '*',
                $._whitespace
            ),
        ),

        _text: $ => prec.left(repeat1(choice(
            /\p{Letter}/,
            /\p{Number}/,
            /\p{Mark}/,
            /\p{Symbol}/,
            /\p{Emoji}/,
            /\p{Punctuation}/,
            /\p{Other_Punctuation}/,
            // specials. eventually this should be deleted as they are meant for markup
            '~',
            '-',
            '+',
            '*',
            '/',
            '_',
            '|',
            '<',
            '>',
            '@',
            ':',
            '%',
            '.', // this should be removed
        ))),

        _code_mode: $ => seq(
            '#',
            choice($.expression, $.identifier),
            optional(choice(
                '.',
                '\n',
                $._whitespace

            ))
        ),

        code_block: $ => seq(
            '{',
            optional(repeat1(
                choice(
                    $._whitespace,
                    seq(
                        optional($._whitespace),
                        choice($.expression, $.identifier),
                        optional(';'),
                        optional('\n'),
                        optional($._whitespace),
                    ),
                )
            )),
            '}'
        ),

        content_block: $ => seq(
            '[',
            optional(repeat1($._markup)),
            ']',
        ),

        // group-expr ::= '(' expr ')'
        // renamed to parenthesized_expression because I thought it sounded better.
        parenthesized_expression: $ => prec(2, seq(
            '(',
            $.expression,
            ')',
        )),

        // array-expr ::= '(' ((expr ',') | (expr (',' expr)+ ','?))? ')'
        array: $ => prec(1, seq(
            '(',
            optional(seq(
                optional($._whitespace),
                choice(
                    seq($.expression, ','),
                    commaSep($._whitespace, $.expression, $.line_comment),
                ),
                optional($._whitespace),
            )),
            ')'
        )),

        literal: $ => choice(
            $.string_literal,
            $.int_literal,
            $.float_literal,
            $.boolean_literal,
            $.numeric,
            $.none,
            $.auto,
            $.label
            // $.raw,
        ),

        // expr ::=
        // literal | ident | block | group-expr | array-expr | dict-expr |
        // unary-expr | binary-expr | field-access | func-call | method-call |
        // func-expr | keyword-expr
        expression: $ => choice(
            $.literal,
            $.identifier, // check if a precedence of 2 is needed
            $.content_block,
            $.code_block,
            $.parenthesized_expression,
            $.array,
            $.dictionary,
            $.unary_expression,
            $.binary_expression,
            $.field_access,
            $.function_call,
            $.method_call,
            $.function_expression,
            $.keyword_expression,
        ),

        // note I changed this
        keyword_expression: $ => choice(
            $.set_expression,
            $.show_expression,
            $.let_declaration,
            $.if_expression,
            $.for_expression,
            $.while_expression,
            $.include_expression,
            $.import_expression,
            $._control_flow,
        ),

        include_expression: $ => seq(
            'include',
            $._whitespace,
            $.expression,
            optional($._whitespace),
        ),

        // import-expr ::= 'import' expr: import-items
        // import-items ::= '*' | (ident (',' ident)* ','?)
        import_expression: $ => prec.right(seq(
            'import',
            $._whitespace,
            field('path', $.expression),
            choice(
                seq(
                    field('items', $.import_items),
                ),
                optional($._whitespace)
            )
        )),

        import_items: $ => prec.left(seq(
            optional($._whitespace),
            ':',
            optional($._whitespace),
            choice(commaSepLine($._whitespace, $.identifier), '*')
        )),

        _control_flow: $ => choice(
            $.break_statement,
            $.continue_statement,
            $.return_expression,
        ),

        // return-expr ::= 'return' expr?
        return_expression: $ => prec.left(choice(
            prec.left(seq('return', $._whitespace, $.expression)),
            'return',
        )),

        break_statement: $ => prec.left('break'),
        continue_statement: $ => prec.left('continue'),

        // let ident(params)? '=' expr
        let_declaration: $ => prec.right(1, seq(
            'let',
            $._whitespace,
            field('name', $.identifier),
            choice(prec(1, seq(
                optional(field('parameters', $.parameters)),
                optional($._whitespace),
                '=',
                optional($._whitespace),
                field('rhs', choice($.expression, $.identifier)),
                optional($._whitespace),
            )),
                ';',
                $._whitespace
            )
        )),

        // set-expr ::= 'set' expr ('if' expr)?
        set_expression: $ => prec.left(PREC.assignment, seq(
            'set',
            $._whitespace,
            field('name', $.expression),
            optional($._whitespace),
            // make this a field?
            optional($.if_clause)
        )),

        if_clause: $ => prec.left(1, seq(
            'if',
            // either if(abc) or if abc
            choice(
                seq($._whitespace, field('condition', $.expression)),
                seq(optional($._whitespace), field('condition', $.parenthesized_expression))
            )
        )),

        // Label: show <intro>: ..
        // show heading.where(level: 1):
        // show-expr ::= 'show' expr? ':' expr
        show_expression: $ => seq(
            'show',
            optional(choice(
                // TODO: add support for labels
                // $.label,
                seq($._whitespace, prec.left($.expression)),
            )),
            optional($._whitespace),
            ':',
            optional($._whitespace),
            field('body', prec.right($.expression))
        ),

        if_expression: $ => prec.right(1, seq(
            'if',
            // either if cond, or if(cond)
            choice(
                seq($._whitespace,
                    field('condition', $.expression)),
                seq(optional($._whitespace),
                    field('condition', $.parenthesized_expression))),

            // in order to differentiate between "if a[0] [Hello]" and "if a [0] [Hello]",
            // content blocks must have a space before
            choice(
                seq($._whitespace,
                    field('consequence', $.content_block)),
                seq(optional($._whitespace),
                    field('consequence', $.code_block))),
            optional($._whitespace),
            optional(field('alternative', $.else_clause))
        )),

        else_clause: $ => seq(
            'else',
            optional($._whitespace), 
            choice(
                field('consequence', choice($.code_block, $.content_block)),
                $.if_expression
            )
        ),

        while_expression: $ => prec(1, seq(
            'while',
            choice(
                seq($._whitespace,
                    field('condition', $.expression)),
                seq(optional($._whitespace),
                    field('condition', $.parenthesized_expression))),
            choice(
                seq($._whitespace,
                    field('body', $.content_block)),
                seq(optional($._whitespace),
                    field('body', $.code_block)))
        )),

        for_expression: $ => prec(1, seq(
            'for',
            $._whitespace,
            field('pattern', $.pattern),
            $._whitespace,
            'in',
            $._whitespace,
            field('value', choice($.expression, $.identifier)),
            optional($._whitespace),
            field('body', seq(choice($.code_block, $.content_block)))
        )),

        // func-expr ::= (params | ident) '=>' expr
        // TODO: even with high prec, this doesn't work right.
        // I also tried setting prec.dynamic and it didn't change anything.
        // minimal example: #y => a + b + c + d + e
        // will usually be parsed as (y => a + b) + ...
        function_expression: $ => prec.right(PREC.lambda, seq(
            choice(
                field('name', $.identifier),
                field('params', $.parameters)
            ),
            optional($._whitespace),
            '=>',
            optional($._whitespace),
            field('body', $.expression),
            optional($._whitespace)
        )),

        // params ::= '(' (param (',' param)* ','?)? ')'
        parameters: $ => seq(
            '(',
            optional(commaSep($._whitespace, $._parameter, $.line_comment)),
            ')'
        ),

        // param ::= ident (':' expr)?
        _parameter: $ => seq(
            optional('..'),
            choice(
                field('name', $.identifier),
                $.default_parameter)
        ),

        default_parameter: $ => prec(1, seq(
            field('name', $.identifier),
            optional($._whitespace),
            ':',
            optional($._whitespace),
            field('value', $.expression),
            optional($._whitespace)
        )),

        // dict-expr ::= '(' (':' | (pair (',' pair)* ','?)) ')'
        dictionary: $ => seq(
            '(',
            choice(
                ':',
                // matches (pair, pair, ...','?)
                commaSep($._whitespace, $.pair, $.line_comment)
            ),
            ')'
        ),

        // pair ::= (ident | str) ':' expr
        pair: $ => prec(1, seq(
            field('key', choice($.string_literal, $.identifier)),
            optional($._whitespace),
            ':',
            optional($._whitespace),
            field('value', $.expression),
            optional($._whitespace)
        )),

        pattern: $ => prec.left(commaSepLine($._whitespace, $.identifier)),

        // // Fields, functions, methods.
        // field-access ::= expr '.' ident
        field_access: $ => prec(PREC.field, seq(
            field('value', choice($.expression, $.identifier)),
            // Note that actually there should be optional whitespce after the dot as well, but it has to not include newlines
            //optional($._whitespace),
            '.',
            field('field', $.identifier),
        )),

        // method-call ::= expr '.' ident args
        method_call: $ => prec.right(PREC.fieldcall, seq(
            field('value', choice($.expression, $.identifier)),
            //optional($._whitespace),
            '.',
            field('method', $.identifier),
            field('arguments', $.arguments),
        )),

        // func-call ::= expr args
        function_call: $ => prec.right(PREC.call, seq(
            field('name', choice($.expression, $.identifier)),
            field('arguments', $.arguments),
        )),

        // args ::= ('(' (arg (',' arg)* ','?)? ')' content-block*) | content-block+
        arguments: $ => prec.right(choice(
            repeat1($.content_block),
            seq(
                '(',
                optional(commaSep($._whitespace, $._argument, $.line_comment)),
                ')',
                repeat($.content_block)
            ),
        )),

        // arg ::= (ident ':')? expr
        _argument: $ => choice(
            alias($.expression, $.argument),
            $.assigned_argument
        ),

        assigned_argument: $ => seq(
            field('name', $.identifier),
            optional($._whitespace),
            ':',
            optional($._whitespace),
            field('value', $.expression),
            optional($._whitespace),
        ),

        none: $ => 'none',
        auto: $ => 'auto',

        // boolean ::= 'false' | 'true'
        boolean_literal: $ => choice('true', 'false'),

        // int ::= digit+
        // digit = '0' | ... | '9'
        int_literal: $ => /\d+/,

        // float ::= ((digit+ ('.' digit*)?) | ('.' digit+)) ('e' digit+)?
        // A floating-point number: `1.2`, `10e-4`.
        float_literal: $ => {
            // const digits = repeat1(/\d+_?/);
            const digits = repeat1(/[0-9]+/);
            const exponent = seq(/[eE][+-]?/, digits)

            return token(seq(
                choice(
                    // (digit+ ('.' digit*)?)
                    seq(digits, '.', optional(digits), optional(exponent)),
                    // ('.' digit+)
                    seq(optional(digits), '.', digits, optional(exponent)),
                    seq(digits, exponent)
                ),
            ))
        },

        // unit = 'pt' | 'mm' | 'cm' | 'in' | 'deg' | 'rad' | 'em' | 'fr' | '%'
        unit: $ => choice('pt', 'mm', 'cm', 'in', 'deg', 'rad', 'em', 'fr', '%'),

        // numeric ::= float unit
        numeric: $ => prec(1, seq(
            field('value', choice($.float_literal, $.int_literal)),
            field('unit', $.unit)
        )),

        // str ::= '"' .* '"'
        string_literal: $ => seq(
            '"',
            repeat(choice(
                $.escape_sequence,
                $._not_an_escape_sequence,
                $._string_content
            )),
            '"'
        ),

        _not_an_escape_sequence: $ => token.immediate(
            '\\'
        ),

        escape_sequence: $ => token.immediate(
            seq('\\',
                token.immediate(
                    choice(
                        /u[0-9a-fA-F]{4}/,
                        /u{[0-9a-fA-F]+}/,
                        /x[0-9a-fA-F]{2}/,
                        /[rnt]/,
                        '\\',
                        '/',
                        '[',
                        ']',
                        '{',
                        '}',
                        '#',
                        '~',
                        '-',
                        '.',
                        ':',
                        '"',
                        "'",
                        '*',
                        '_',
                        '`',
                        '$',
                        '=',
                        '<',
                        '>',
                        '@',
                        // might be useful
                        // '#',
                        // '~',
                        // '(',
                        // ')',
                        // '&',
                        // ';',
                    ))
            )),

        // special: $ => choice(...special), // highlight as punctuation

        // unary-expr ::= unary-op expr
        unary_expression: $ => choice(
            $.postitive,
            $.not_operator,
            $.negation,
        ),

        // no-effect ::= '+' expr
        postitive: $ => prec.left(PREC.no_effect, seq(
            field('operator', '+'),
            optional($._whitespace),
            field('argument', $.expression),
            optional($._whitespace),
        )),

        // 'not' expr
        not_operator: $ => prec.left(PREC.logical_not, seq(
            field('operator', 'not'),
            $._whitespace,
            field('argument', choice($.expression, $.identifier)),
            optional($._whitespace),
        )),

        // '-' expr
        negation: $ => prec.left(PREC.negation, seq(
            field('operator', '-'),
            optional($._whitespace),
            field('argument', $.expression),
            optional($._whitespace),
        )),

        // binary-op ::=
        // '+' | '-' | '*' | '/' | 'and' | 'or' | '==' | '!=' |
        // '<' | '<=' | '>' | '>=' | '=' | 'in' | ('not' 'in') |
        // '+=' | '-=' | '*=' | '/='
        binary_expression: $ => choice(
            $.binary_operator,
            $.boolean_expression,
            $.comparison_expression,
            $.assignment_expression,
            $.collection_expression,
            $.assignment_operators,
        ),

        binary_operator: $ => {
            const table = [
                ['*', PREC.multiplication],
                ['/', PREC.division],
                ['+', PREC.addition],
                ['-', PREC.subtraction],
            ];
            return choice(...table.map(([operator, precedence]) => prec.left(precedence, seq(
                field('left', choice($.expression, $.identifier)),
                optional($._whitespace),
                field('operator', operator),
                optional($._whitespace),
                field('right', choice($.expression, $.identifier)),
                optional($._whitespace),
            ))));
        },

        boolean_expression: $ => {
            const table = [
                ['and', PREC.and],
                ['or', PREC.or],
            ];

            return choice(...table.map(([operator, precedence]) => prec.left(precedence, seq(
                field('left', choice($.expression, $.identifier)),
                optional($._whitespace),
                field('operator', operator),
                optional($._whitespace),
                field('right', choice($.expression, $.identifier)),
                optional($._whitespace),
            ))));
        },

        comparison_expression: $ => {
            const table = [
                ['==', PREC.check_equality],
                ['!=', PREC.check_inequality],
                ['<', PREC.check_less_than],
                ['<=', PREC.check_less_than_or_equal],
                ['>', PREC.check_greater_than],
                ['>=', PREC.check_greater_than_or_equal],
            ];

            return choice(...table.map(([operator, precedence]) => prec.left(precedence, seq(
                field('left', choice($.expression, $.identifier)),
                optional($._whitespace),
                field('operator', operator),
                optional($._whitespace),
                field('right', choice($.expression, $.identifier)),
                optional($._whitespace),
            ))));
        },

        collection_expression: $ => choice(
            $._in_expression,
            $._not_in_expression,
        ),

        // collection operators
        // expr 'in' expr
        _in_expression: $ => prec.left(PREC.check_if_in_collection, seq(
            field('left', choice($.expression, $.identifier)),
            $._whitespace,
            field('operator', 'in'),
            $._whitespace,
            field('right', choice($.expression, $.identifier)),
            optional($._whitespace),
        )),

        // expr 'not' 'in' expr
        _not_in_expression: $ => prec.left(PREC.check_if_not_in_collection, seq(
            field('left', choice($.expression, $.identifier)),
            $._whitespace,
            field('operator', seq(
                'not',
                $._whitespace,
                'in'
            )),
            $._whitespace,
            field('right', choice($.expression, $.identifier)),
            optional($._whitespace),
        )),

        // comparison ::= expr comparison_operator expr
        assignment_expression: $ => prec.right(PREC.assignment, seq(
            field('left', choice($.expression, $.identifier)),
            optional($._whitespace),
            '=',
            optional($._whitespace),
            field('right', choice($.expression, $.identifier)),
            optional($._whitespace),
        )),

        // '+=' | '-=' | '*=' | '/='
        assignment_operators: $ => {
            const table = [
                ['+=', PREC.add_assignment],
                ['-=', PREC.subtraction_assignment],
                ['*=', PREC.multiplication_assignment],
                ['/=', PREC.division_assignment],
            ];

            return choice(...table.map(([operator, precedence]) => prec.right(precedence, seq(
                field('left', choice($.expression, $.identifier)),
                optional($._whitespace),
                field('operator', operator),
                optional($._whitespace),
                field('right', choice($.expression, $.identifier)),
                optional($._whitespace),
            ))));
        },

        
        // Math syntax
        // most of the math syntax is just a subset of the code syntax, that has different identifier rules
        equation: $ => seq(
            "$",
            // this is gramatically equivalent to repeat(choice($.math_expression, $._whitespace))
            // except that treesitter gets confused if you do that!
            optional($._whitespace),
            repeat(seq($.math_expression, optional($._whitespace))),
            "$"
        ),
        
        math_expression: $ => choice(
            $.math_letter,
            $.math_number,
            $.math_identifier,
            $.math_shorthand,
            $.string_literal,

            $.math_alignment,
            $.math_break,
            
            $.math_binary_operator,
            $.math_bracket_expr,
            
            $.math_function_call,
            $.math_method_call,
            $.math_field_access,
            // todo: figure out a correct spec for how code is allowed in math
            //$._code_mode
        ),

        // single letters, italicized.
        math_letter: $ => token(/\p{Letter}/),
        
        // numbers. TODO: scientific notation is not a valid number in math mode.
        math_number: $ => choice($.int_literal, $.float_literal),
        // within math mode, we can access all variables like #v
        // but variables/properties that can be written only using math identifiers --
        // ie, each part has only numbers and letters, and has at least 2 chars --
        // can be accessed directly! what a crazy language...
        math_identifier: $ => prec.right(1, /\p{Letter}[\p{Letter}\p{Number}]+/),

        math_alignment: $ => token("&"),
        math_break: $ => token("\\"),

        // math shorthand refers to symbols which are not simply variables.
        // for example, -> is shorthand for an arrow.
        // But we can actually consider single math symbols, such as *, as shorthands.
        // for example, $*$ does not actually output an asterisk, it outputs a centered star.
        // TODO: this is non-exhaustive. either make a list of all shorthands, or write a general heuristic.
        math_shorthand: $ => choice(
            "+", "*", "-", // note that "/" is NOT a math symbol
            "=", "!=", "!", ":=", "...",
            ">", ">=", "<", "<=",
            "->", "-->", "=>", "==",
            // these brackets have negative prec() because we want them to be parsed as math_bracket_expr if possible
            prec(-1, choice("[", "]", "{", "}", "(", ")", "|")),
            prec(-1, choice(",", ";", ":", "."))
        ),

        math_binary_operator: $ => choice(
            // TODO:
            // Typst sets intuitive, but difficult to parse, associativity rules for math operators.
            // In particular, a^b_c means (a^b)_c, which makes sense.
            // Unfortunately, a^b^c means a^(b^c), which also makes sense.
            // One solution would be to add a special subsuperscript rule,
            // but I'm not sure how to alias it so that it actually appears as superscript and subscript rules.
            // another option is to redefine superscript and subscript as something like
            // superscript = choice(superscript, seq(subscript, ^, expression0))
            // There's an additional problem on top of this
            // in the current implementation, the associativity of these operators depends on whitespace!
            // I think this is because the presence of whitespace prevents the parser from doing a lookahead.
            // I don't really understand why the code mode binary operators work correctly, but these ones don't.
            $.superscript,
            $.subscript,
            $.fraction
        ),

        superscript: $ => prec.right(PREC.superscript, seq(
            $.math_expression,
            optional($._whitespace),
            "^",
            optional($._whitespace),
            $.math_expression
        )),
        
        subscript: $ => prec.right(PREC.subscript, seq(
            $.math_expression,
            optional($._whitespace),
            "_",
            optional($._whitespace),
            $.math_expression
        )),

        
        fraction: $ => prec.left(PREC.fraction, seq(
            $.math_expression, 
            optional($._whitespace),
            "/",
            optional($._whitespace),
            $.math_expression,
            // because fraction is left-associative in typst,
            // we have to explicitly include the optional whitespace
            optional($._whitespace)
        )),

        // in math mode, we can have whatever brackets we want!
        // if the brackets are not balanced, they just appear as normal symbols.
        math_bracket_expr: $ => {
            const table = [["|", "|"], ["[", "]"], ["{", "}"], ["(", ")"]];

            return choice(...table.map(([left, right]) => prec.right(PREC.bracket, seq(
                field('left', left),
                optional($._whitespace),
                repeat1(seq($.math_expression, optional($._whitespace))),
                // yep, that's right! closing brackets are optional in typst math mode.
                optional(field('right', right))
            ))));

        },
        
        // should all these alias to their normal versions?
        math_field_access: $ => prec(PREC.field, seq(
            choice($.math_identifier, $.math_field_access),
            '.',
            choice($.math_identifier, $.math_letter)
        )),

        math_method_call: $ => prec.right(PREC.fieldcall, seq(
            field('value', $.math_field_access),
            '.',
            field('method', $.math_identifier),
            field('arguments', $.math_arguments),
        )),

        math_function_call: $ => prec.right(PREC.call, seq(
            field('name', $.math_identifier),
            field('arguments', $.math_arguments),
        )),

        // Matches a comma-separated list of math expressions.
        math_array: $ => {
            // not sure if we should alias this to argument
            let expr = alias(repeat1(seq(
                $.math_expression, 
                optional($._whitespace))),

                $.argument);

            return prec.left(seq(
                expr, repeat(prec.left(seq(
                    ',',
                    optional($._whitespace),
                    expr)))));
        },

        // Math arguments are special because there's a semicolon syntax, and you can't have content blocks
        math_arguments: $ => prec.left(seq(
            '(',
            optional($._whitespace),
            optional($.math_array),
            repeat(prec.left(seq(
                ';',
                optional($._whitespace),
                optional($.math_array)))),
            ')'
        )),
    }
});
