/* eslint-disable space-before-function-paren */
/* eslint-disable no-tabs */
/* eslint-disable comma-dangle */
/* eslint-disable indent */
/* eslint-disable semi */
/* eslint-disable no-undef */
function commaSep(space, rule) {
    return seq(rule, repeat(seq(optional(space), ',', optional(space), rule)))
}

function commaSep1(rule) {
    return sep1(rule, ',')
}

function sep1(separator, rule) {
    return seq(rule, repeat(seq(separator, rule)))
}

//  _non_special_token: $ => choice(
//   'as', 'async', 'await', 'break', 'const', 'continue', 'default', 'enum', 'fn', 'for', 'if', 'impl',
//   'let', 'loop', 'match', 'mod', 'pub', 'return', 'static', 'struct', 'trait', 'type',
//   'union', 'unsafe', 'use', 'where', 'while'
// ),

const PREC = {
    call: 9,
    field: 8,
    negation: 7, // -	Negation	Unary	7
    no_effect: 7, // +	No effect (exists for symmetry)	Unary	7
    not: 7, // not	Not	Unary	7
    multiplication: 6, // *	Multiplication	Binary	6
    division: 6, // /	Division	Binary	6
    addition: 5, // +	Addition	Binary	5
    subtraction: 5, // -	Subtraction	Binary	5
    check_equality: 4, // ==	Check equality	Binary	4
    check_inequality: 4, // !=	Check inequality	Binary	4
    check_less_than: 4, // <	Check less-than	Binary	4
    check_less_than_or_equal: 4, // <=	Check less-than or equal	Binary	4
    check_greater_than: 4, // >	Check greater-than	Binary	4
    check_greater_than_or_equal: 4, // >=	Check greater-than or equal	Binary	4
    check_if_in_collection: 4, // in	Check if in collection	Binary	4
    check_if_not_in_collection: 4, // not in	Check if not in collection	Binary	4
    logical_not: 3, // not	Logical "not"	Unary	3
    and: 3, // and	Short-circuiting logical "and"	Binary	3
    or: 2, // or	Short-circuiting logical "or	Binary	2
    assignment: 1, // =	Assignment	Binary	1
    add_assignment: 1, // +=	Add-Assignment	Binary	1
    subtraction_assignment: 1, // -=	Subtraction-Assignment	Binary	1
    multiplication_assignment: 1, // *=	Multiplication-Assignment	Binary	1
    division_assignment: 1, // /=	Division-Assignment	Binary	1
}

module.exports = grammar({
    name: 'typst',

    // extras: $ => [$._whitespace, $.line_comment, $.block_comment],
    extras: $ => [$.line_comment, $.block_comment],

    externals: $ => [
        $._string_content,
        $.block_comment,
    ],

    // WHITESPACE IS SO HARD TO HANDLE
    conflicts: $ => [
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
            $.not_operator,
            $.binary_operator,
            $.boolean_expression,
            $.comparison_expression,
            $._in_expression,
            $._not_in_expression,
            $.assignment_expression,
            $.assignment_operators,
        ],
        [$._code_mode, $.expression],
    ],

    supertypes: $ => [
        $.expression,
        $.literal,
        $.keyword_expression,
        $.comment,
        $.unary_expression,
        $.binary_expression,
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
            $.quote,
            $.line_break,
            $.escape_sequence,
            // $.math_mode,
        )),

        identifier: $ => /[_\p{XID_Start}][_\p{XID_Continue}]*/,

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
            // text should probably be switched to a markup
            choice($._text, $._code_mode),

            alias(
                token.immediate(
                    seq(
                        '\n',
                        repeat1('\n')
                    )
                ),
                $.paragraph_break
            )
        ),

        // add support for '
        quote: $ => alias($.string_literal, 'quote'),

        _text: $ => repeat1(choice(
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
        )),

        _code_mode: $ => seq(
            '#',
            choice($.expression, $.identifier),
            optional(choice(
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
                        $.expression,
                        // choice($.expression, $.identifier),
                        optional(';'),
                        optional('\n'),
                        optional($._whitespace),
                    ),
                    // seq(
                    //     $._whitespace,
                    //     $.expression,
                    //     $._whitespace,
                    // )
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
                    seq($.expression, optional($._whitespace), ',', optional($._whitespace)),
                    commaSep($._whitespace, $.expression),
                )
            )),
            ')'
        )),

        literal: $ => prec(1, choice(
            $.string_literal,
            $.int_literal,
            $.float_literal,
            $.boolean_literal,
            $.numeric,
            $.none,
            $.auto,
        )),

        // expr ::=
        // literal | ident | block | group-expr | array-expr | dict-expr |
        // unary-expr | binary-expr | field-access | func-call | method-call |
        // func-expr | keyword-expr
        expression: $ => choice(
            $.literal,
            $.identifier,
            $.content_block,
            $.code_block,
            $.parenthesized_expression,
            $.array,
            $.dictionary,
            $.unary_expression,
            $.binary_expression,
            // $.field_access,
            $.function_call,
            // $.method_call,
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
            choice(
                commaSep($._whitespace, $.identifier),
                '*',
            )
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

        let_declaration: $ => prec.left(PREC.assignment, seq(
            'let',
            $._whitespace,
            field('name', $.identifier),
            optional(field('params', $.parameters)),
            optional($._whitespace),
            seq(
                '=',
                optional($._whitespace),
                field('rhs', prec.right($.expression))
            ),
        )),

        // set-expr ::= 'set' expr ('if' expr)?
        set_expression: $ => prec.left(PREC.assignment, seq(
            'set',
            $._whitespace,
            field('name', $.expression),
            optional(seq(
                optional($._whitespace),
                $.if_cause
            )),
        )),

        if_cause: $ => seq(
            'if',
            $._whitespace,
            field('condition', prec.right($.expression)),
        ),

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

        if_expression: $ => prec.left(1, seq(
            'if',
            $._whitespace,
            field('condition', choice($.expression, $.identifier)),
            optional($._whitespace),
            field('consequence', choice($.content_block, $.code_block)),
            optional(field('alternative', $.else_clause))
        )),

        else_clause: $ => seq(
            /\p{White_Space}*else/,
            optional($._whitespace),
            choice(
                choice($.code_block, $.content_block),
                $.if_expression
            )
        ),

        while_expression: $ => prec(1, seq(
            'while',
            $._whitespace,
            field('condition', choice($.expression, $.identifier)),
            optional($._whitespace),
            field('body', choice($.code_block, $.content_block)),
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
        function_expression: $ => prec(PREC.call, seq(
            choice(
                field('name', $.identifier),
                field('params', $.parameters)
            ),
            optional($._whitespace),
            '=>',
            optional($._whitespace),
            field('body', prec.right($.expression))
        )),

        // params ::= '(' (param (',' param)* ','?)? ')'
        // params ::= param (',' param)* ','?
        parameters: $ => seq(
            '(',
            optional($._parameters),
            ')'
        ),

        _parameters: $ => seq(
            commaSep1($._parameter),
            optional(',')
        ),

        // param ::= ident (':' expr)?
        _parameter: $ => prec(1, choice(
            seq(
                optional('..'),
                choice(
                    field('name', $.identifier),
                    $.default_parameter)),
            '..',
        )),

        default_parameter: $ => seq(
            field('name', $.identifier),
            optional($._whitespace),
            ':',
            optional($._whitespace),
            field('value', $.expression)
        ),

        // dict-expr ::= '(' (':' | (pair (',' pair)* ','?)) ')'
        dictionary: $ => seq(
            '(',
            choice(
                // matches the empty dictionary
                ':',
                // matches (pair, pair, ...','?)
                // seq(
                //     commaSep1($._whitespace, $.pair),
                //     optional(',')
                // )
            ),
            ')'
        ),

        // pair ::= (ident | str) ':' expr
        pair: $ => seq(
            field('key', choice($.string_literal, $.identifier)),
            optional($._whitespace),
            ':',
            optional($._whitespace),
            field('value', $.expression)
        ),

        pattern: $ => prec.left(commaSep($._whitespace, $.identifier)),

        // // Fields, functions, methods.
        // field-access ::= expr '.' ident
        // method-call ::= expr '.' ident args
        // DOESN'T WORK
        field_access: $ => prec.right(1, seq(
            field('value', $.expression),
            '.',
            field('field', $.identifier),
        )),

        // isssue here
        method_call: $ => prec(1, seq(
            field('value', $.expression),
            '.',
            field('method', $.identifier),
            field('arguments', $.arguments),
        )),

        // func-call ::= expr args
        function_call: $ => prec.left(1, seq(
            field('name', $.identifier),
            field('arguments', $.arguments),
        )),

        // args ::= ('(' (arg (',' arg)* ','?)? ')' content-block*) | content-block+
        arguments: $ => prec.right(choice(
            repeat1($.content_block),
            seq(
                '(',
                optional(
                    seq(commaSep1($._argument), optional(','))
                ),
                ')',
                repeat($.content_block)
            ),
        )),

        // arg ::= (ident ':')? expr
        _argument: $ => choice(
            alias($.expression, $.argument),
            $.asssigned_argument
        ),

        asssigned_argument: $ => seq(
            field('name', $.identifier),
            optional($._whitespace),
            ':',
            optional($._whitespace),
            field('value', $.expression)
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
        numeric: $ => prec(2, seq(
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
        postitive: $ => prec(PREC.no_effect, seq(
            field('operator', '+'),
            optional($._whitespace),
            field('argument', $.expression)
        )),

        // 'not' expr
        not_operator: $ => prec(PREC.not, seq(
            field('operator', 'not'),
            $._whitespace,
            field('argument', choice($.expression, $.identifier)),
        )),

        // '-' expr
        negation: $ => prec(PREC.negation, seq(
            field('operator', '-'),
            optional($._whitespace),
            field('argument', $.expression)
        )),

        // binary-op ::=
        // '+' | '-' | '*' | '/' | 'and' | 'or' | '==' | '!=' |
        // '<' | '<=' | '>' | '>=' | '=' | 'in' | ('not' 'in') |
        // '+=' | '-=' | '*=' | '/='
        binary_expression: $ => choice(
            $.binary_operator,
            $.boolean_expression,
            $.comparison_expression,
            $.assignment_operators,
            $.collection_expression,
            $.assignment_expression,
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
        )),

        // comparison ::= expr comparison_operator expr
        assignment_expression: $ => prec.left(PREC.assignment, seq(
            field('left', choice($.expression, $.identifier)),
            optional($._whitespace),
            '=',
            optional($._whitespace),
            field('right', choice($.expression, $.identifier)),
        )),

        // '+=' | '-=' | '*=' | '/='
        assignment_operators: $ => {
            const table = [
                ['+=', PREC.add_assignment],
                ['-=', PREC.subtraction_assignment],
                ['*=', PREC.multiplication_assignment],
                ['/=', PREC.division_assignment],
            ];

            // NOTE: I had to give this a precedence of 2, otherwise it would
            //      conflict with the binary operators. Which I didn't know how to fix
            //      but this works...
            return choice(...table.map(([operator, precedence]) => prec.left(2, seq(
                field('left', choice($.expression, $.identifier)),
                optional($._whitespace),
                field('operator', operator),
                optional($._whitespace),
                field('right', choice($.expression, $.identifier)),
            ))));
        },

    }
});
