[
    "abstract" 
    "action" 
    "actions" 
    "apply" 
    "const" 
    "control" 
    "default" 
    "define"
    "else" 
    "entries" 
    "enum" 
    "error" 
    "exit" 
    "extern" 
    "header" 
    "header_union" 
    "if" 
    "include" 
    "key" 
    "match_kind" 
    "type" 
    "parser" 
    "package" 
    "pragma" 
    "return" 
    "select" 
    "state" 
    "struct" 
    "switch" 
    "table" 
    "transition" 
    "typedef" 
    "varbit" 
    "valueset"
] @keyword

(constant_declaration (name) @constant)
(parameter (name) @variable.parameter)
(member) @property

(string) @string


[
    "true" 
    "false" 
    (direction) 
] @constant.builtin

(integer) @number

[
    (tuple_type) 
    (base_type) 
    (type_or_void) 
    (type_ref) 
] @type

[
    (block_comment)
    (line_comment) 
] @comment

[
    "(" 
    ")" 
    "[" 
    "]" 
    "{" 
    "}" 
    "<"
    ">" 
] @punctuation.bracket

";" @punctuation.delimiter

[
    "!"
    "~"
    "-"
    "+"
    "." 
    "*"
    "/"
    "%"
    "+"
    "-"
    "|+|"
    "|-|"
    "<<"
    ">>"
    "<="
    ">="
    "<"
    ">"
    "!="
    "=="
    "&"
    "^"
    "|"
    "++"
    "&&"
    "||"
    "?"
    ":"
] @operator
