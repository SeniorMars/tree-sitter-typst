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

//  _non_special_token: $ => choice(
//   $._literal, $.identifier, $.mutable_specifier, $.self, $.super, $.crate,
//   alias(choice(...primitive_types), $.primitive_type),
//   /[/_\-=->,;:::!=?.@*&#%^+<>|~]+/,
//   '\'',
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

    extras: $ => [$._whitespace, $.line_comment, $.block_comment],

    externals: $ => [
        $._string_content,
        $.block_comment,
        // $.paragraph_break,
    ],

    // inline: $ => [
    //     $.break_statement,
    //     $.continue_statement,
    // ]

    supertypes: $ => [
        $.expression,
        $._literal,
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

        variable: $ => $.identifier,

        line_comment: $ => token(seq(
            '//', /[^\r\n]*/
        )),

        line_break: $ => /\\/,

        // space | nbsp | shy | endash | emdash |
        // ellipsis | quote | strong | emph | raw | link | math | heading |
        // list | enum | desc | label | ref | markup-expr | comment
        _markup: $ => prec.left(choice(
            $._text,
            $.quote,
            $.line_break,
            $.escape_sequence,
            $._code_mode,
            // $.paragraph_break
            // $.math_mode,
        )),

        // add support for '
        quote: $ => seq(
            token.immediate('"'),
            repeat(choice(
                $.escape_sequence,
                $._string_content
            )),
            token.immediate('"')
        ),

        // eslint-disable-next-line no-useless-escape
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

        _code_mode: $ => choice(
            $._code_block,
            $.content_block,
        ),

        _code_block: $ => prec(2, seq(
            token.immediate('#'),
            choice(
                $.code_block,
                $.content_block,
                $._expression_statement,
                $.function_call,
            )
        )),

        code_block: $ => prec(PREC.assignment, (seq(
            '{',
            optional($._statements),
            '}'
        ))),

        content_block: $ => seq(
            '[',
            optional(repeat1($._markup)),
            ']',
        ),

        // group-expr ::= '(' expr ')'
        parenthesized_expression: $ => prec.left(1, seq(
            '(',
            $.expression,
            ')',
        )),

        // this is a hack around the langauge tbh
        // probably a better way to do this, but i've spent too much time on this
        array: $ => prec.left(2, seq(
            '(',
            optional(choice(
                $._array,
                $._weird_edge_case,
            )),
            ')'
        )),

        // matches (expression, expression, expression, ...)
        _array: $ => prec(1, seq(
            $.expression,
            choice(
                // matches (expression, ...)
                seq(repeat1(seq(
                        ',',
                        $.expression
                    )),
                    optional(',')
                ),
                // matches (expression,)
                ','
            )
        )),

        // edge case | this is weird
        // matches (n,)
        // used to
        // "join together into one larger array."
        // TODO: remove after you fix functions
        _weird_edge_case: $ => repeat1(seq(
            $.identifier,
            // need to work on this
            optional(token.immediate(',')),
        )),

        _statements: $ => prec.left(repeat1(seq($._expression_statement, optional(token.immediate(';'))))),

        _expression_statement: $ => prec(1, choice(
            $.let_declaration,
            $.if_expression,
            $.for_expression,
            $.while_expression,
            $.expression,
            $._control_flow,
        )),

        _control_flow: $ => choice(
            $.break_statement,
            $.continue_statement,
        ),

        break_statement: $ => prec.left('break'),

        continue_statement: $ => prec.left('continue'),

        let_declaration: $ => prec(PREC.assignment, seq(
            'let',
            field('lhs', choice($.identifier, $.function)),
            seq(
                '=',
                field('rhs', prec.right($.expression))
            ),
        )),

        if_expression: $ => seq(
            'if',
            field('condition', $.expression),
            field('consequence', choice($.content_block, $.code_block)),
            optional(field('alternative', $.else_clause))
        ),

        else_clause: $ => seq(
            'else',
            choice(
                choice($.code_block, $.content_block),
                $.if_expression
            )
        ),

        while_expression: $ => seq(
            'while',
            field('condition', $.expression),
            field('body', choice($.code_block, $.content_block)),
        ),

        for_expression: $ => seq(
            'for',
            field('left', $.pattern),
            'in',
            field('value', $.expression),
            field('body', choice($.code_block, $.content_block))
        ),

        // #set par(justify: true)
        // #set page(
        //   height: 100pt,
        //   margin: 20pt,
        //   footer: [
        //     #set align(right)
        //     #set text(8pt)
        //     #counter(page).display(
        //       "1 of I",
        //       both: true,
        //     )
        //   ]
        // )
        //
        // #lorem(48)

        // #show list: it => "(" + it.children.map(v => v.body).join(", ") + ")"
        // #show "once?": it => [#it #it]
        unnamed_function: $ => prec(PREC.call, seq(
            field('arguments', $._unnamed_arguments),
            '=>',
            field('body', prec.right($.expression))
        )),

        // this shares a lot of code as `array`. I wonder if there is a way to pass down variable
        _unnamed_arguments: $ => prec(3, choice(
            $.identifier,
            seq(
                '(',
                choice(
                    // matches (parameter)
                    seq(
                        $._parameter,
                        // matches (parameter,)
                        optional(',')
                    ),
                    // edge case
                    $._weird_edge_case,
                    prec.left(1, seq(
                        $._parameter,
                        // matches (one_para, parameter: [], ...','?)
                        seq(repeat1(seq(
                                ',',
                                $._parameter
                            )),
                            optional(',')
                        ),
                    ))
                ),
                ')'
            ),
        )),

        parameters: $ => seq(
            '(',
            optional($._parameters),
            ')'
        ),

        _parameters: $ => seq(
            commaSep1($._parameter),
            optional(',')
        ),

        _parameter: $ => prec.left(seq(
            optional('..'),
            choice(
                prec(1, $.asssigned_parameter),
                prec(10, $.identifier), // bit of a hack to make sure that identifiers are parsed as parameters and not as functions
                $.expression,
                // needs to be fixed
            )
        )),

        // dict-expr ::= '(' (':' | (pair (',' pair)* ','?)) ')'
        // pair ::= (ident | str) ':' expr
        asssigned_parameter: $ => seq(
            field('name', $.identifier),
            ':',
            field('value', $._parameter)
        ),

        function: $ => prec.left(seq(
            field('name', $.identifier),
            field('parameters', $.parameters),
        )),

        pattern: $ => prec(1, choice(
            $.identifier,
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

        _literal: $ => choice(
            $.string_literal,
            $.int_literal,
            $.float_literal,
            $.boolean_literal,
            $.numeric,
            $.none,
        ),

        // expr ::=
        // literal | ident | block | group-expr | array-expr | dict-expr |
        // unary-expr | binary-expr | field-access | func-call | method-call |
        // func-expr | keyword-expr
        expression: $ => choice(
            $._literal,
            $.identifier,
            $.content_block,
            $.code_block,
            $.function_call,
            $.parenthesized_expression,
            $.array,
            $.unary_operator,
            $.binary_operator,
            $.unnamed_function,
            $.not_operator,
            $.boolean_operator,
            $.comparison_operator,
            $.augmented_assignment,
            $.assignment,
        ),

        assignment: $ => prec(PREC.assignment, seq(
            field('lhs', $.identifier),
            '=',
            field('rhs', prec.right($.expression))
        )),

        // _call_expresion: $ => choice(
        //     $._function_call,
        //     // #hello.a.()
        //     $._field_access,
        //     $._method_call,
        // ),

        // // Call a function.
        // #list([A], [B])
        //
        // // Named arguments and trailing
        // // content blocks.
        // #enum(start: 2)[A][B]
        //
        // // Version without parentheses.
        // #list[A][B]
        _function_call: $ => seq(
            field('function', $.identifier),
        ),

        // _allowed_types: $ = choice(
        //     $.module,
        //     $.dictionary,
        //     $.symbol,
        //     $.content,
        // ),

        // #hello.a.c
        // a dictionary that has the specified key,
        // a symbols that has the specified modifier,
        // a module containing the specified definition,
        // content that has the specified field.
        _field_access: $ => prec(PREC.field, seq(
            field('value', $.expression),
            '.',
            field('field', choice(
                $._field_access,
                $.identifier,
            ))
        )),

        // this is not right, it combines the function call and the field access
        function_call: $ => prec.right(PREC.call, seq(
            // #type
            field('function', $.identifier),

            // #type[]
            optional(choice(
                // #type(name())
                // where name() is a function call
                // also parses
                // #list([A], [B])
                // #enum(start: 2)[A][B]
                seq(field('arguments', $.parameters), optional(
                    seq(
                        // #type.name().hello
                        // #type.hello.
                        token.immediate('.'),
                        field('field', $.function_call)
                    ))),
                seq(
                    // #type.name().hello
                    // #type.hello.
                    token.immediate('.'),
                    field('field', $.function_call)
                ),
            )), optional(choice(
                token.immediate('.'),
                token.immediate("'"),
                token.immediate('?'),
                token.immediate('!'),
            )),
        )),

        none: $ => 'none',
        // auto: $ => 'auto',

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
        numeric: $ => prec(1, seq(choice($.float_literal, $.int_literal), $.unit)),

        // str ::= '"' .* '"'
        string_literal: $ => seq(
            /"/,
            repeat(choice(
                $.escape_sequence,
                $._not_an_escape_sequence,
                $._string_content
            )),
            token.immediate('"')

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
                    ))
            )),

        // special: $ => choice(...special), // highlight as punctuation

        // unary-expr ::= unary-op expr
        // unary-op ::= '+' | '-' | 'not'
        unary_operator: $ => prec(PREC.negation, seq(
            field('operator', choice('+', '-')),
            field('argument', $.expression)
        )),

        // 'not' expr
        not_operator: $ => prec.left(PREC.logical_not, seq(
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
