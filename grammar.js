module.exports = grammar({
  name: "pug",

  externals: ($) => [$._newline, $._indent, $._dedent],

  rules: {
    source_file: ($) => repeat(choice($.block_expansion, $.tag, $.conditional)),

    block_expansion: ($) =>
      choice($.extends_statement, $.include_statement, $.block_statement),

    extends_statement: ($) => seq("extends", $.reference),

    include_statement: ($) => seq("include", $.reference, optional($._newline)),

    block_statement: ($) =>
      seq("block", $.reference, optional(seq($._newline, $.children))),

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

    conditional: ($) =>
      prec.right(
        seq(
          $.if_statement,
          repeat(choice($.else_if_statement, $.else_statement)),
        ),
      ),

    if_statement: ($) =>
      prec.right(seq("if", $.condition, optional(seq($._newline, $.children)))),

    else_if_statement: ($) =>
      prec.right(
        seq("else if", $.condition, optional(seq($._newline, $.children))),
      ),

    else_statement: ($) =>
      prec.right(seq("else", optional(seq($._newline, $.children)))),

    condition: ($) => /[^\n]+/,

    interpolation: ($) => seq("#{", $.expression, "}"),

    expression: ($) => /[^\n}]+/,

    inline_text: ($) => repeat1(choice($.interpolation, /[^#\n]+/)),

    reference: () => /[\w.-]+/,

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

    quoted_attribute_value: ($) =>
      seq('"', repeat(choice($.interpolation, /[^"#]+/)), '"'),

    unquoted_attribute_value: () => /[^)\s#"]+/,

    _space: () => token.immediate(/ +/),

    children: ($) =>
      prec.right(
        seq($._indent, repeat1($._children_choice), optional($._dedent)),
      ),

    _children_choice: ($) => prec(1, choice($.tag, $.conditional, $._newline)),
  },
});
