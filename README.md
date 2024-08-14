# Pug Tree-sitter 🐶🌳

This repository contains a [tree-sitter](https://tree-sitter.github.io/tree-sitter/)-based parser for the Pug templating language. My goal is to develop a fully-featured Pug parser for any tools requiring syntax awareness.

## Current Feature Set ✅

***This is a work in progress project. Bugs are expected.*** 🐞
 - **Basic Pug Tags**: Support for standard HTML-like tags (e.g., div, p).
 - **Classes and IDs**: Parsing of classes and IDs directly on tags (e.g., div.main#container).
 - **Attributes**: Handling of both quoted and unquoted attribute values.
 - **Inline Text**: Recognition of inline text following tags.
 - **Interpolation**: Handling of variable and code interpolation within text and attributes.
 - **Nested Tags**: Correctly handles nested tag structures.
 - **Block Expansion**: Support for extends, include, and block statements.
 - **Conditionals**: Support for *if*, *else if*, and *else* statements.
 - **Loops**: Support for *for* and *while* loops.
 - **Mixins**: Adding support for defining and using mixins

## In Progress 🛠️

 - Syntax highlighting using [tree-sitter-highlight](https://github.com/tree-sitter/tree-sitter/tree/master/highlight)

## Installation

```bash
git clone https://github.com/raulpavel20/pug-tree-sitter.git
cd pug-tree-sitter
npm install
tree-sitter generate
```

## Usage

This parser is designed to be integrated into any tools that require Pug/Jade syntax parsing, such as text editors, code formatters, and linters.
My main use case is for [pug-zed-extension](https://github.com/raulpavel20/pug-zed-extension), which is my attempt to provide Pug/Jade language support for [Zed](https://zed.dev/).

## Contributing

Contributions are welcome! Feel free to fork this repository, make changes, and submit a pull request.
