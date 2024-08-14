;; Highlight keywords
"doctype" @keyword
"extends" @keyword
"include" @keyword
"block" @keyword
"mixin" @keyword
"each" @keyword
"if" @keyword
"else if" @keyword
"else" @keyword

;; Highlight tags
(tag_name) @tag

;; Highlight classes and IDs
(class_or_id) @type

;; Highlight attributes
(attribute_name) @property
(quoted_attribute_value) @string
(unquoted_attribute_value) @string

;; Highlight operators
"=" @operator

;; Highlight comments
(comment) @comment

;; Highlight inline text and interpolation
(inline_text) @text
(interpolation) @text
(expression) @variable

;; Highlight JS primitives
(string) @string
(number) @number
(boolean) @constant
(null) @constant
(undefined) @constant

;; Highlight block expansions (extends, include, block)
(block_expansion) @keyword
(reference) @variable
(mixin_name) @function
(mixin_parameters) @parameter
(arguments) @parameter
