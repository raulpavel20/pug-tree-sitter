module.exports = grammar({
  name: "pug",

  rules: {
    source_file: ($) => repeat($.tag),

    tag: ($) => seq($.tag_name, optional($.inline_text)),

    tag_name: ($) => /[a-zA-Z0-9_-]+/,

    inline_text: ($) => /.+/,
  },
});
