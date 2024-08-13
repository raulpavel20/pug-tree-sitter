module.exports = grammar({
  name: "pug",

  rules: {
    source_file: ($) => repeat($.tag),

    tag: ($) =>
      seq(
        $.tag_name,
        repeat($.class_or_id),
        optional($.attributes),
        optional($.inline_text),
      ),

    tag_name: ($) => /[a-zA-Z0-9_-]+/,

    class_or_id: ($) => token(seq(choice(".", "#"), /[a-zA-Z0-9_-]+/)),

    attributes: ($) => seq("(", repeat($.attribute), ")"),

    attribute: ($) => seq($.attribute_name, "=", $.attribute_value),

    attribute_name: ($) => /[a-zA-Z0-9_-]+/,

    attribute_value: ($) => token(seq('"', /[^"]*/, '"')),

    inline_text: ($) => /[^.#(]+/,
  },
});
