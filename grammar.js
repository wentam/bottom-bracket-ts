module.exports = grammar({
  name: 'bottombracket',

  rules: {
    source_file: $ => repeat($._element),

    _element: $ => choice(
      $.parray,
      $.barray,
      $.bytestring,
      $.comment
    ),

    parray: $ => seq(
      '[',
      repeat($._element),
      ']'
    ),

    barray: $ => prec(1, /[^\s\[\]";]+/),

    bytestring: $ => seq(
      '"',
      repeat(choice(
        $.escape_sequence,
        /[^"\\]+/   // normal characters
      )),
      '"'
    ),

    comment: $ => token(seq(';', /.*/)),

    escape_sequence: $ => token(seq(
      '\\',
      choice(
        /x[0-9A-Fa-f]{2}/,  // \xFF
        /d[0-9]{3}/,  // \xFF
        /n/,                // \n
        /r/,                // \r
        /t/,                // \t
        /["\\]/             // \" or \\
      )
    )),
  }
});
