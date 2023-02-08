"typedef" @keyword
"apply" @keyword
"key" @keyword
"actions" @keyword
"state" @keyword
"entries" @keyword
"type" @keyword
"include" @keyword
"package" @keyword
"parser" @keyword
"transition" @keyword
"select" @keyword
"default" @keyword
"const" @keyword


(constantDeclaration (name) @constant)
(parameter (name) @variable.parameter)

(string) @string

"true" @constant.builtin
"false" @constant.builtin
(direction) @constant.builtin
(integer) @constant.builtin

(baseType) @type
(typeOrVoid) @type
(typeRef) @type
(block_comment) @comment
(line_comment) @comment

"(" @punctuation.bracket
")" @punctuation.bracket
"[" @punctuation.bracket
"]" @punctuation.bracket
"{" @punctuation.bracket
"}" @punctuation.bracket

