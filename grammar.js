module.exports = grammar({
  name: "pug",

  externals: ($) => [$._newline, $._indent, $._dedent],

  rules: {
    source_file: ($) =>
      repeat(
        choice(
          $.doctype,
          $.block_expansion,
          $.tag,
          $.conditional,
          $.loop,
          $.mixin_definition,
          $.mixin_call,
          $.comment,
        ),
      ),

    //keywords
    extends: () => "extends",
    include: () => "include",
    block: () => "block",
    doctype: ($) => seq("doctype", optional($.reference)),

    // JS primitives
    string: () =>
      choice(
        seq('"', repeat(choice(/[^"\\\n]/, /\\./)), '"'),
        seq("'", repeat(choice(/[^'\\\n]/, /\\./)), "'"),
      ),
    number: () =>
      token(
        seq(
          optional(choice("-", "+")),
          choice(seq(/\d+/, optional(seq(".", /\d+/))), seq(".", /\d+/)),
          optional(seq(/[eE]/, optional(choice("-", "+")), /\d+/)),
        ),
      ),
    boolean: () => choice("true", "false"),
    null: () => "null",
    undefined: () => "undefined",
    _js_primitive: ($) =>
      choice($.string, $.number, $.boolean, $.null, $.undefined),

    comment: ($) =>
      choice(
        seq("//", optional($._space), optional($.inline_text)),
        seq("//-", optional($._space), optional($.inline_text)),
      ),

    block_expansion: ($) =>
      choice($._extends_statement, $._include_statement, $._block_statement),

    _extends_statement: ($) => seq($.extends, $.reference),

    _include_statement: ($) =>
      seq($.include, $.reference, optional($._newline)),

    _block_statement: ($) =>
      seq($.block, $.reference, optional(seq($._newline, $.children))),

    mixin_definition: ($) =>
      seq(
        "mixin",
        $.mixin_name,
        optional(seq("(", optional($.mixin_parameters), ")")),
        optional($._newline),
        optional($.children),
      ),

    mixin_name: () => /\w+/,

    mixin_parameters: ($) => seq($.parameter, repeat(seq(",", $.parameter))),

    parameter: () => /\w+/,

    mixin_call: ($) =>
      prec.right(
        seq(
          "+",
          $.mixin_name,
          optional(seq("(", optional($.arguments), ")")),
          optional($._newline),
          optional($.children),
        ),
      ),

    arguments: ($) =>
      seq($._argument_choice, repeat(seq(",", $._argument_choice))),

    _argument_choice: ($) => choice($.array, $.object, $._js_primitive),

    argument: () => /[^,)\s]+/,

    array: ($) =>
      seq(
        "[",
        optional(seq($._array_element, repeat(seq(",", $._array_element)))),
        "]",
      ),

    _array_element: ($) => choice($.object, $.array, $._js_primitive),

    object: ($) =>
      seq("{", optional(seq($.pair, repeat(seq(",", $.pair)))), "}"),

    pair: ($) => seq($.key, ":", $._js_primitive),

    key: () => /[\w]+/,

    tag: ($) =>
      prec.right(
        seq(
          $.tag_name,
          repeat($.class_or_id),
          optional($.attributes),
          optional(seq($._space, $.inline_text)),
          optional(seq("=", $.expression)),
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

    loop: ($) => prec.right(seq($.each_statement, $._newline, $.children)),

    each_statement: ($) =>
      seq(
        "each",
        $.loop_variable,
        optional(seq(",", $.loop_index)),
        "in",
        $.loop_source,
      ),

    loop_variable: () => /[\w-]+/,

    loop_index: () => /[\w-]+/,

    loop_source: () => /[\w-]+/,

    condition: ($) => /[^\n]+/,

    interpolation: ($) => seq("#{", $.expression, "}"),

    expression: ($) => /[^,\s\(\)\{\}\[\]]+/,

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

    _children_choice: ($) =>
      prec(
        1,
        choice(
          $.tag,
          $.conditional,
          $.loop,
          $.mixin_call,
          $.block,
          $.comment,
          $._newline,
        ),
      ),
  },
});
