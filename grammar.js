const sepBy1 = (rule, sep) => seq(rule, repeat(seq(sep, rule)));

const sepBy = (rule, sep) => optional(sepBy1(rule, sep));

module.exports = grammar({
    name: 'typst',
    extras: $ => [$.whitespace, $.line_comment, $.block_comment],

    externals: $ => [
        // $._string_content,
        $.block_comment,
    ],


    rules: {
        // source_file: $ => repeat($.markup_node),

        // --- Trivia
        whitespace: $ => /\s+/,

        // markup_node: $ => /\S/,

        // --- Comments
        comment: $ => choice(
            $.line_comment,
            $.block_comment
        ),

        // line_comment: $ => /%[^\r\n]*/,
        line_comment: $ => token(seq(
            '//', /.*/
        )),

        // block_comment: $ =>
        //     seq(
        //         field('begin', ''),
        //         field('comment', optional(alias($._trivia_raw_fi, $.comment))),
        //         field('end', optional('\'))
        //     ),
    }
});
