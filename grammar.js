/* eslint-disable comma-dangle */
/* eslint-disable indent */
/* eslint-disable semi */
/* eslint-disable no-undef */
// const sepBy1 = (rule, sep) => seq(rule, repeat(seq(sep, rule)));

// const sepBy = (rule, sep) => optional(sepBy1(rule, sep));

module.exports = grammar({
    name: 'typst',
    extras: $ => [$._whitespace, $.line_comment],
    // extras: $ => [$.whitespace, $.line_comment, $.block_comment],

    // externals: $ => [
    //     // $._string_content,
    //     $.block_comment,
    // ],
    super: $ => [
        $._literal,
    ],

    rules: {
        source_file: $ => repeat($._markup_node),

        // --- Trivia
        _whitespace: $ => /\s+/,

        // --- Comments
        comment: $ => $.line_comment,

        // choice(
        //     $.line_comment,
        //     $.block_comment
        // ),

        line_comment: $ => token(seq(
            '//', /[^\r\n]*/
        )),

        _markup_node: $ => choice(
            $.expression,
            $.escape_sequence
            // space | linebreak | text | escape | nbsp | shy | endash | emdash |
            // ellipsis | quote | strong | emph | raw | link | math | heading |
            // list | enum | desc | label | ref | markup-expr | comment
        ),

        expression: $ => choice(
            $._literal
        ),

        // Literals.
        // literal ::= 'none' | 'auto' | boolean | int | float | numeric | str
        _literal: $ => choice(
            $.none,
            $.auto,
            $.boolean,
            $.int,
            $.float,
            $.numeric,
            $.string
        ),

        none: $ => 'none',
        auto: $ => 'auto',

        // boolean ::= 'false' | 'true'
        boolean: $ => choice('true', 'false'),

        // int ::= digit+
        // digit = '0' | ... | '9'
        // TODO: allow underscores in numbers?
        // could be a problem with the lexer as we use subscripts
        int: $ => /\d+/,
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
        float: $ => {
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
        numeric: $ => seq(choice($.float, $.int), $.unit),

        // NOTE: not in the spec, but perhaps useful
        negative_literal: $ => seq('-', choice($.int, $.float, $.numeric)),

        // str ::= '"' .* '"'
        string: $ => seq(
            field('prefix', '"'),
            // field('prefix', alias($._string_start, '"')),
            field('string_content', $.string_content),
            field('suffix', '"')
            // field('suffix', alias($._string_end, '"'))
        ),

        // --- Interpolation
        _not_escape_sequence: $ => token.immediate('\\'),

        _escape_sequence: $ => token.immediate(
            seq('\\',
                choice(
                    /[^xu]/,
                    /u[0-9a-fA-F]{4}/,
                    /u{[0-9a-fA-F]+}/,
                    /x[0-9a-fA-F]{2}/,
                    /[rnt]/,
                    /\r?\n/,
                )
            )),

        escape_sequence: $ => choice(
            seq('\\', $.special),
            $._escape_sequence,
        ),

        // NOTE: perhaps this should be an <external>
        string_content: $ => prec.right(0, repeat1(choice(
            $.escape_sequence,
            $._not_escape_sequence,
            // "\\\\([\\\\\"nrt]|u\\{?[0-9a-zA-Z]*\\}?)"
            seq(
                optional(/\\\{/),
                // optional(/{/),
                /[0-9a-zA-Z]*/,
                // optional(/}/)
                optional(/\\\}/)
            )
        ))),

        special: $ => choice(
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
            '\'',
            '*',
            '_',
            '`',
            '$',
            '=',
            '<',
            '>',
            '@',
        ),
    }
});
