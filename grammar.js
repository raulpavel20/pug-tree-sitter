module.exports = grammar({
  name: "pug",

  extras: ($) => [
    /\s/, // Whitespace
    $.comment, // Comments
  ],

  externals: ($) => [
    $._newline, // Newline handling
    $._indent, // Indentation increase
    $._dedent, // Indentation decrease
  ],

  rules: {
    source_file: ($) => repeat($._block),

    _block: ($) =>
      choice(
        $.tag,
        $.text,
        $.code_block,
        $.mixin,
        $.conditional,
        $.loop,
        $.doctype,
        $.comment,
      ),

    // **Tag Rule**
    // Matches lines starting with a tag name, optionally followed by classes, IDs, attributes, inline text, and an indented block.
    tag: ($) =>
      seq(
        field("name", $.tag_name),
        repeat(choice($.class_or_id, $.attributes)),
        optional(field("inline_text", $.inline_text)),
        optional(field("block", $.indented_block)),
      ),

    tag_name: ($) => /[a-zA-Z][a-zA-Z0-9-_]*/,

    class_or_id: ($) =>
      choice(
        seq(".", /[a-zA-Z][a-zA-Z0-9-_]*/),
        seq("#", /[a-zA-Z][a-zA-Z0-9-_]*/),
      ),

    attributes: ($) => seq("(", optional(commaSep($.attribute)), ")"),

    attribute: ($) =>
      seq(
        field("name", $.attribute_name),
        optional(seq("=", field("value", $.attribute_value))),
      ),

    attribute_name: ($) => /[a-zA-Z][a-zA-Z0-9-_]*/,

    attribute_value: ($) => choice($.string, $.expression),

    string: ($) => choice(/"[^"]*"/, /'[^']*'/),

    expression: ($) => /[^)\n]+/,

    inline_text: ($) => seq(" ", /[^\n]+/),

    // **Indented Block**
    // Represents a nested block of content, indented relative to its parent.
    indented_block: ($) =>
      seq($._newline, $._indent, repeat1($._block), $._dedent),

    // **Text Rule**
    // Matches lines starting with '|' followed by optional text.
    text: ($) => seq("|", optional(seq(" ", /[^\n]+/))),

    // **Code Block**
    // Matches lines starting with '-' followed by code and an optional indented block.
    code_block: ($) =>
      seq("-", optional(seq(" ", /[^\n]+/)), optional($.indented_block)),

    // **Mixin**
    // Matches mixin definitions.
    mixin: ($) =>
      seq(
        "mixin",
        " ",
        field("name", $.tag_name),
        optional($.attributes),
        optional($.indented_block),
      ),

    // **Conditional**
    // Matches 'if', 'else if', and 'else' statements with optional blocks.
    conditional: ($) =>
      seq(
        choice("if", "else if", "else"),
        optional(seq(" ", $.expression)),
        optional($.indented_block),
      ),

    // **Loop**
    // Matches 'each' loops with optional blocks.
    loop: ($) => seq("each", " ", $.expression, optional($.indented_block)),

    // **Doctype**
    // Matches doctype declarations.
    doctype: ($) => seq("doctype", " ", /[^\n]+/),

    // **Comment**
    // Matches both regular and unbuffered comments.
    comment: ($) => token(choice(seq("//-", /.*/), seq("//", /.*/))),
  },
});

function commaSep(rule) {
  return seq(rule, repeat(seq(",", rule)));
}
