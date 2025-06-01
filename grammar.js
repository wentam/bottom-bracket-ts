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

    // Barray: unquoted words (no whitespace or brackets)
    barray: $ => token(prec(1, /[^\s\[\]";]+/)),

    parray: $ => seq(
      '[',
      optional($.barray),
      repeat($._element),
      ']'
    ),

    // Byte-string: quoted strings supporting \xFF and other escapes
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
