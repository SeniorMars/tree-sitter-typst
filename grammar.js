/* eslint-disable space-before-function-paren */
/* eslint-disable no-tabs */
/* eslint-disable comma-dangle */
/* eslint-disable indent */
/* eslint-disable semi */
/* eslint-disable no-undef */
// const sepBy1 = (rule, sep) => seq(rule, repeat(seq(sep, rule)));

// const sepBy = (rule, sep) => optional(sepBy1(rule, sep));

// const PREC = {
//     lambda: -2,
//     typed_parameter: -1,
//     conditional: -1,
//
//     parenthesized_expression: 1,
//     parenthesized_list_splat: 1,
//     or: 10,
//     and: 11,
//     not: 12,
//     compare: 13,
//     bitwise_or: 14,
//     bitwise_and: 15,
//     xor: 16,
//     shift: 17,
//     plus: 18,
//     times: 19,
//     unary: 20,
//     power: 21,
//     call: 22,
// }

function commaSep1(rule) {
    return sep1(rule, ',')
}

function sep1(rule, separator) {
    return seq(rule, repeat(seq(separator, rule)))
}

const special = [
    '\\',
    '/',
    '#',
    '~',
    '-',
    '.',
    ':',
    '"',
    '\'',
    '*',
    '_',
    '`',
    '$',
    '=',
    '<',
    '>',
    '@',
];

const PREC = {
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

    extras: $ => [$._whitespace, $.line_comment, $.block_comment],

    externals: $ => [
        $._string_content,
        $.block_comment,
    ],

    supertypes: $ => [
        // $.code_block,
        // $.statement,
        $.expression,
        // $._literal,
        // $.markup_expression,
        // $._simple_statement,
        // $._compound_statement,
        // $.pattern,
        // $.parameter,
    ],

    rules: {
        source_file: $ => repeat($._markup),

        identifier: $ => /[_\p{XID_Start}][_\p{XID_Continue}]*/,

        _whitespace: $ => /\s+/,

        // --- Comments
        comment: $ => choice(
            $.line_comment,
            $.block_comment
        ),

        line_comment: $ => token(seq(
            '//', /[^\r\n]*/
        )),

        line_break: $ => /\\/,

        _markup: $ => prec.left(choice(
            $._text,
            $.quote,
            $.line_break,
            $.escape_sequence,
            $._code_mode,
            // $.math_mode,
            // $.content,
        )),

        quote: $ => prec(-1,
            seq(
                /"/,
                repeat(choice(
                    $.escape_sequence,
                    $._string_content
                )),
                token.immediate('"')

            ),
        ),

        // eslint-disable-next-line no-useless-escape
        // _text: $ => seq(/[^\s\\\{\}\$\[\]\(\)%,"`@:\~<>=\#_\^\-\+\/\*\.]+/),
        _text: $ => repeat1(choice(
            /[\w\d]+/,
            '/',
            '~',
            '-',
            '.',
            ':',
            '*',
            '_',
            '`',
            '$',
            '=',
            '<',
            '>',
            '@',
            ',',
            ';',
            '?',
            '!',
        )),

        // space | linebreak | text | escape | nbsp | shy | endash | emdash |
        // ellipsis | quote | strong | emph | raw | link | math | heading |
        // list | enum | desc | label | ref | markup-expr | comment

        _code_mode: $ => choice(
            alias($.function_call, $.function),
            $._code_block,
            $.content_block,
        ),

        function_call: $ => prec(2, seq(
            token.immediate('#'),
            $.identifier,
            optional($.parameters),
        )),

        // rename this to _code_block and block to code_block
        _code_block: $ => prec(2, seq(
            token.immediate('#'),
            choice(
                $.block,
                $.expression_statement,
            )
        )),

        content_block: $ => seq(
            token.immediate('['),
            repeat1($._markup),
            token.immediate(']'),
        ),

        _statements: $ => prec.right(repeat1(seq($.expression_statement, optional(';')))),

        expression_statement: $ => prec(2, choice(
            $.let_declaration,
            $.if_expression,
            $.for_expression,
            $.expression,
        )),

        _left_hand_side: $ => prec(1, choice(
            $.identifier,
            $.function,
            $.pattern_list,
        )),

        pattern_list: $ => seq(
            $.identifier,
            choice(
                ',',
                seq(
                    repeat1(seq(
                        ',',
                        $.identifier
                    )),
                    optional(',')
                )
            )
        ),

        // pattern: $ => choice(
        //     $.identifier,
        //     $.keyword_identifier,
        //     $.subscript,
        //     $.attribute,
        //     $.list_splat_pattern,
        //     $.tuple_pattern,
        //     $.list_pattern
        // ),

        expression: $ => choice(
            $.content_block,
            $.identifier,
            $.string_literal,
            $.int_literal,
            $.float_literal,
            $.boolean_literal,
            $.none,
            $.numeric,
            $.block,
            $.content_block,
            $.function,
            $.unary_operator,
            $.not_operator,
            $.boolean_operator,
            $.comparison_operator,
            $.binary_operator,
            $.augmented_assignment,
        ),

        let_declaration: $ => prec.left(PREC.assignment, seq(
            'let',
            field('lhs', $._left_hand_side),
            seq(
                '=',
                field('rhs', $.expression)
            ),
            optional($.block)
        )),

        if_expression: $ => prec.right(seq(
            'if',
            field('condition', $.expression),
            field('consequence', choice($.content_block, $.block)),
            optional(field('alternative', $.else_clause))
        )),

        // break_statement: $ => prec.left('break'),

        else_clause: $ => seq(
            'else',
            choice(
                choice($.block, $.content_block),
                $.if_expression
            )
        ),

        // while_expression: $ => seq(
        //     optional(seq($.loop_label, ':')),
        //     'while',
        //     field('condition', $._condition),
        //     field('body', $.block)
        // ),

        for_expression: $ => seq(
            'for',
            field('left', $._left_hand_side),
            'in',
            field('value', $.expression),
            field('body', choice($.block, $.content_block))
        ),

        function: $ => prec(1, seq(
            field('name', $.identifier),
            field('parameters', $.parameters),
        )),

        parameters: $ => seq(
            '(',
            optional($._parameters),
            ')'
        ),

        _parameters: $ => seq(
            commaSep1($.parameter),
            optional(',')
        ),

        parameter: $ => prec(1, choice(
            $.identifier,
            $.expression,
            $.default_parameter,
            // $.list_pattern,
        )),

        default_parameter: $ => seq(
            field('name', $.identifier),
            ':',
            field('value', $.expression)
        ),

        block: $ => prec(PREC.assignment, (seq(
            '{',
            optional($._statements),
            '}'
        ))),

        none: $ => 'none',
        // auto: $ => 'auto',

        // boolean ::= 'false' | 'true'
        boolean_literal: $ => choice('true', 'false'),

        // int ::= digit+
        // digit = '0' | ... | '9'
        // TODO: allow underscores in numbers?
        // could be a problem with the lexer as we use subscripts
        int_literal: $ => /\d+/,
        // int: $ => token(choice(
        //     seq(
        //         choice('0x', '0X'),
        //         repeat1(/[A-Fa-f0-9]+/),
        //         // optional(/[Ll]/)
        //     ),
        //     seq(
        //         choice('0o', '0O'),
        //         repeat1(/[0-7]+/),
        //         // optional(/[Ll]/)
        //     ),
        //     seq(
        //         choice('0b', '0B'),
        //         repeat1(/[0-1]+/),
        //         optional(/[Ll]/)
        //     ),
        //     seq(
        //         repeat1(/[0-9]+/),
        //         // choice(
        //         //     optional(/[Ll]/), // long numbers
        //         //     optional(/[jJ]/) // complex numbers
        //         // )
        //     )
        // )),

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
        numeric: $ => prec(1, seq(choice($.float_literal, $.int_literal), $.unit)),

        // str ::= '"' .* '"'
        string_literal: $ => choice(
            seq(
                /"/,
                repeat(choice(
                    $.escape_sequence,
                    $._not_an_escape_sequence,
                    $._string_content
                )),
                token.immediate('"')

            ),
            seq(
                /'/,
                repeat(choice(
                    $.escape_sequence,
                    $._string_content
                )),
                token.immediate('\'')

            )
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
                        '/',
                        '~',
                        '-',
                        '.',
                        ':',
                        '*',
                        '_',
                        '`',
                        '$',
                        '=',
                        '<',
                        '>',
                        '@',
                        ',',
                        ';',
                        '?',
                        '!',
                    ))
            )),

        // special: $ => choice(...special), // highlight as punctuation

        // unary-expr ::= unary-op expr
        // unary-op ::= '+' | '-' | 'not'
        unary_operator: $ => prec(PREC.negation, seq(
            field('operator', choice('+', '-', 'not')),
            field('argument', $.expression)
        )),

        // 'not' expr
        not_operator: $ => prec(PREC.logical_not, seq(
            'not',
            field('argument', $.expression)
        )),

        // 'and' | 'or' |
        boolean_operator: $ => choice(
            prec.left(PREC.and, seq(
                field('left', $.expression),
                field('operator', 'and'),
                field('right', $.expression)
            )),
            prec.left(PREC.or, seq(
                field('left', $.expression),
                field('operator', 'or'),
                field('right', $.expression)
            ))
        ),

        // Unary and binary expression.
        // binary-expr ::= expr binary-op expr
        // binary-op ::=
        // '+' | '-' | '*' | '/' |
        binary_operator: $ => {
            const table = [
                ['+', PREC.addition],
                ['-', PREC.subtraction],
                ['*', PREC.multiplication],
                ['/', PREC.division],
            ];

            return choice(...table.map(([operator, precedence]) => prec.left(precedence, seq(
                field('left', $.expression),
                field('operator', operator),
                field('right', $.expression)
            ))));
        },

        // '<' | '<=' | '>' | '>=' | '==' | '!=' | 'in' | ('not' 'in') |
        comparison_operator: $ => {
            const table = [
                ['<', PREC.check_less_than],
                ['<=', PREC.check_less_than_or_equal],
                ['==', PREC.check_equality],
                ['!=', PREC.check_inequality],
                ['>', PREC.check_greater_than],
                ['>=', PREC.check_greater_than_or_equal],
                ['in', PREC.check_if_in_collection],
                [alias(seq('not', 'in'), 'not in'), PREC.check_if_not_in_collection],
            ];

            return choice(...table.map(([operator, precedence]) => prec.left(precedence, seq(
                field('left', $.expression),
                field('operator', operator),
                field('right', $.expression)
            ))));
        },

        // '+=' | '-=' | '*=' | '/='
        augmented_assignment: $ => prec(PREC.division_assignment, seq(
            field('left', $.identifier),
            field('operator', choice(
                '+=', '-=', '*=', '/=',
            )),
            field('right', $.expression)
        )),

        // --- Math
        // --- Markup
        // attached_modifier: $ =>
        // choice(
        //     $.bold,
        //     $.italic,
        //     $.strikethrough,
        //     $.underline,
        //     $.spoiler,
        //     $.superscript,
        //     $.subscript,
        //     $.verbatim,
        //     $.inline_comment,
        //     $.inline_math,
        //     $.inline_macro,
        // ),
    }
});
// chars is a list of characters to exclude
// function allBut (chars) {
//     return new RegExp(`[^${chars.join('')}]+`);
// }
