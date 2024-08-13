module.exports = grammar({
  name: "pug",

  externals: ($) => [$._newline, $._indent, $._dedent],

  rules: {
    source_file: ($) => repeat($.tag),

    tag: ($) =>
      prec.right(
        seq(
          $.tag_name,
          repeat($.class_or_id),
          optional($.attributes),
          optional(seq($._space, $.inline_text)),
          optional($._newline),
          optional($.children),
        ),
      ),

    tag_name: () => /\w(?:[-\w]*\w)?/,

    class_or_id: () => token(seq(choice(".", "#"), /[_a-zA-Z0-9-]+/)),

    attributes: ($) => seq("(", repeat($.attribute), ")"),

    attribute: ($) =>
      seq(
        $.attribute_name,
        "=",
        choice($.quoted_attribute_value, $.unquoted_attribute_value),
      ),

    attribute_name: () => /[\w@\-:]+/,

    quoted_attribute_value: () => token(seq('"', /[^"]*/, '"')),

    unquoted_attribute_value: () => /[^)\s]+/,

    _space: () => token.immediate(/ +/),

    inline_text: () => /[^\n]+/,

    children: ($) =>
      prec.right(
        seq($._indent, repeat1($._children_choice), optional($._dedent)),
      ),

    _children_choice: ($) => prec(1, choice($.tag, $._newline)),
  },
});
