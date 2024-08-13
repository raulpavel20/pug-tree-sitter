module.exports = grammar({
  name: "pug",

  extras: ($) => [/\s/],

  rules: {
    source_file: ($) =>
      repeat(
        choice(
          $.tag,
          $.doctype,
          $.comment,
          $.mixin_definition,
          $.mixin_call,
          $.conditional,
          $.loop,
          $.text,
        ),
      ),

    tag: ($) =>
      prec.right(
        seq(
          $.tag_name,
          optional($.id),
          optional($.class),
          optional($.attributes),
          optional($.block),
          optional($.newline),
        ),
      ),

    tag_name: ($) => /[a-zA-Z0-9_-]+/,

    id: ($) => seq("#", /[a-zA-Z0-9_-]+/),

    class: ($) => repeat1(seq(".", /[a-zA-Z0-9_-]+/)),

    attributes: ($) => seq("(", commaSep($.attribute), ")"),

    attribute: ($) =>
      choice(
        seq($.attribute_name, "=", $.attribute_value),
        $.boolean_attribute,
      ),

    attribute_name: ($) => /[a-zA-Z0-9_-]+/,

    attribute_value: ($) => choice($.string, $.interpolated_text),

    boolean_attribute: ($) => $.attribute_name,

    string: ($) => choice(seq('"', /[^"]*/, '"'), seq("'", /[^']*/, "'")),

    interpolated_text: ($) => seq("#{", $.expression, "}"),

    expression: ($) => /[^}]+/,

    text: ($) => /[^\n]+/,

    doctype: ($) => seq("doctype", $.text),

    comment: ($) =>
      prec.right(
        choice(
          seq("//-", optional($.text)), // Block comment
          seq("//", optional($.text)), // Inline comment
        ),
      ),

    block: ($) =>
      prec.right(seq(optional($.newline), repeat1($.indentation_rule))),

    indentation_rule: ($) =>
      seq(
        $.indent,
        choice($.tag, $.text, $.comment, $.mixin_call, $.conditional, $.loop),
      ),

    mixin_definition: ($) =>
      seq("mixin", $.mixin_name, optional($.mixin_parameters), $.block),

    mixin_name: ($) => /[a-zA-Z0-9_-]+/,

    mixin_parameters: ($) => seq("(", commaSep($.parameter), ")"),

    parameter: ($) => /[a-zA-Z0-9_-]+/,

    mixin_call: ($) =>
      prec.right(
        seq("+", $.mixin_name, optional($.mixin_arguments), optional($.block)),
      ),

    mixin_arguments: ($) => seq("(", commaSep($.argument), ")"),

    argument: ($) => $.expression,

    conditional: ($) =>
      prec.right(
        choice(
          seq("if", $.expression, $.block, optional($.else_clause)),
          seq("unless", $.expression, $.block),
        ),
      ),

    else_clause: ($) =>
      choice(seq("else", $.block), seq("else if", $.expression, $.block)),

    loop: ($) =>
      choice(
        seq("each", $.loop_variable, "in", $.expression, $.block),
        seq("while", $.expression, $.block),
      ),

    loop_variable: ($) =>
      choice(seq($.variable, optional(seq(",", $.index))), $.variable),

    variable: ($) => /[a-zA-Z0-9_-]+/,

    index: ($) => /[a-zA-Z0-9_-]+/,

    newline: ($) => /\n/,

    indent: ($) => /[ \t]+/,
  },
});

function commaSep(rule) {
  return optional(seq(rule, repeat(seq(",", rule))));
}
