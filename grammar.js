module.exports = grammar({
    name: 'p4',

    extras: $ => [/\s/, $.line_comment, $.block_comment],

    externals: $ => [$.block_comment],

    conflicts: $ => [
        [$.type_or_void, $.type_identifier],
        [$.non_type_name, $.type_identifier],
        [$.annotation_token, $.type_identifier],
        [$.non_table_kw_name, $.type_identifier],
        [$.expression]
    ],

    rules: {
        source_file: $ => repeat(
            seq($._declaration, /\s/),
        ),

        _declaration: $ => choice(
            $.constant_declaration,
            $.extern_declaration,
            $.action_declaration,
            $.parser_declaration,
            $.type_declaration,
            $.control_declaration,
            $.instantiation,
            $.error_declaration,
            $.match_kind_declaration,
            $.function_declaration,
            $.include_declaration
        ),

        non_type_name: $ => choice(
            $.identifier,
            'apply',
            'key',
            'actions',
            'state',
            'entries',
            'type',
        ),

        comment: $ => choice(
            $.line_comment,
            $.block_comment
        ),

        line_comment: $ => token(seq(
            '//', /.*/
        )),


        name: $ => choice(
            $.non_type_name,
            $.type_identifier,
        ),

        include_declaration: $ => seq(
            '#',
            'include',
            '<',
            $.file_name,
            '>'
        ),

        file_name: $ => /\w*\.\w*/,

        non_table_kw_name: $ => choice(
            $.identifier,
            $.type_identifier,
            'apply',
            'state',
            'type',
        ),

        annotation: $ => choice(
            seq('@', $.name),
            seq('@', $.name, '(', optional($.annotation_body), ')'),
            seq('@', $.name, '[', $.structured_annotation_body, ']'),
        ),

        parameter_list: $ => choice(
            $.parameter,
            seq($.parameter_list, ',', $.parameter),
        ),

        parameter: $ => choice(
            seq(repeat($.annotation), optional($.direction), $.type_ref, $.name),
            seq(repeat($.annotation), optional($.direction), $.type_ref, $.name, '=', $.expression),
        ),

        direction: $ => choice(
            'in',
            'out',
            'inout',
        ),

        package_type_declaration: $ => choice(
            seq(repeat($.annotation), 'package', $.name, optional($.type_parameters)),
            seq(optional($.parameter_list), ')'),
        ),

        instantiation: $ => choice(
            seq($.type_ref, '(', optional($.argument_list), ')', $.name, ';'),
            seq(repeat($.annotation), $.type_ref, '(', optional($.argument_list), ')', $.name, ';'),
            seq(repeat($.annotation), $.type_ref, '(', optional($.argument_list), ')', $.name, '=', $.obj_initializer, ';'),
            seq($.type_ref, '(', optional($.argument_list), ')', $.name, '=', $.obj_initializer, ';'),
        ),

        obj_initializer: $ => seq(
            '{', repeat($.obj_declaration), '}'
        ),

        obj_declaration: $ => choice(
            $.function_declaration,
            $.instantiation,
        ),

        dot_prefix: $ => seq(
            '.',
        ),

        parser_declaration: $ => seq(
            $.parser_type_declaration,
            optional(seq('(', optional($.parameter_list), ')')),
            '{',
            repeat($.parser_local_element),
            repeat($.parser_state),
            '}'
        ),

        parser_local_element: $ => choice(
            $.constant_declaration,
            $.variable_declaration,
            $.instantiation,
            $.value_set_declaration,
        ),

        parser_type_declaration: $ => seq(
            repeat($.annotation), 'parser', $.name, optional($.type_parameters), '(', optional($.parameter_list), ')'
        ),

        parser_state: $ => seq(
            repeat($.annotation), 'state', $.name, '{', repeat($.parser_statement), optional($.transition_statement), '}'
        ),

        parser_statement: $ => choice(
            $.assignment_or_method_call_statement,
            $.direct_application,
            $.parser_block_statement,
            $.constant_declaration,
            $.variable_declaration,
            $.empty_statement,
            $.conditional_statement,
        ),

        parser_block_statement: $ => seq(
            repeat($.annotation), '{', repeat($.parser_statement), '}'
        ),

        transition_statement: $ => seq(
            'transition', $.state_expression
        ),


        state_expression: $ => choice(
            seq($.name, ';'),
            $.select_expression,
        ),

        select_expression: $ => seq(
            'select', '(', optional($.expression_list), ')', '{', optional($.select_case_list), '}'
        ),

        select_case_list: $ => seq(
            optional($.select_case_list), $.select_case
        ),

        select_case: $ => seq(
            $.keyset_expression, ':', $.name, ';'
        ),

        keyset_expression: $ => choice(
            $.tuple_keyset_expression,
            $.simple_keyset_expression,
        ),

        tuple_keyset_expression: $ => choice(
            seq("(", $.simple_keyset_expression, ",", $.simple_expression_list, ")"),
            seq("(", $.reduced_simple_keyset_expression, ")"),
        ),

        simple_expression_list: $ => choice(
            $.simple_keyset_expression,
            seq($.simple_expression_list, ',', $.simple_keyset_expression),
        ),

        reduced_simple_keyset_expression: $ => choice(
            seq($.expression, "&&&", $.expression),
            seq($.expression, "..", $.expression),
            'default',
            "_",
        ),

        simple_keyset_expression: $ => choice(
            $.expression,
            'default',
            '_',
            seq($.expression, 'mask', $.expression),
            seq($.expression, 'range', $.expression),
        ),

        value_set_declaration: $ => choice(
            seq(repeat($.annotation), 'valueset', '<', $.base_type, '>', '(', $.expression, ')', $.name, ';'),
            seq(repeat($.annotation), 'valueset', '<', $.tuple_type, '>', '(', $.expression, ')', $.name, ';'),
            seq(repeat($.annotation), 'valueset', '<', $.type_name, '>', '(', $.expression, ')', $.name, ';'),
        ),

        control_declaration: $ => seq(
            $.control_type_declaration,
            optional(seq('(', optional($.parameter_list), ')')),
            '{',
            repeat($.control_local_declaration),
            'apply',
            $.control_body,
            '}'
        ),

        control_type_declaration: $ => seq(
            repeat($.annotation), 'control', $.name, optional($.type_parameters), '(', optional($.parameter_list), ')'
        ),

        control_local_declaration: $ => choice(
            $.constant_declaration,
            $.action_declaration,
            $.table_declaration,
            $.instantiation,
            $.variable_declaration,
        ),

        control_body: $ => seq(
            $.block_statement,
        ),

        extern_declaration: $ => choice(
            seq(repeat($.annotation), 'extern', $.non_type_name, optional($.type_parameters), '{', repeat($.method_prototype), '}'),
            seq(repeat($.annotation), 'extern', $.function_prototype, ';'),
        ),

        function_prototype: $ => seq(
            $.type_or_void, $.name, optional($.type_parameters), '(', optional($.parameter_list), ')'
        ),

        method_prototype: $ => choice(
            seq(repeat($.annotation), $.function_prototype, ';'),
            seq(repeat($.annotation), $.type_identifier, '(', optional($.parameter_list), ')', ';'),
        ),

        type_ref: $ => choice(
            $.base_type,
            $.type_name,
            $.specialized_type,
            $.header_stack_type,
            $.tuple_type,
        ),

        named_type: $ => choice(
            $.type_name,
            $.specialized_type,
        ),

        prefixed_type: $ => choice(
            $.type_identifier,
            seq($.dot_prefix, $.type_identifier),
        ),

        type_name: $ => seq(
            $.prefixed_type,
        ),

        tuple_type: $ => seq(
            'tuple', '<', optional($.type_argument_list), '>'
        ),

        header_stack_type: $ => choice(
            seq($.type_name, '[', $.expression, ']'),
            seq($.specialized_type, '[', $.expression, ']'),
        ),

        specialized_type: $ => seq(
            $.prefixed_type, '<', optional($.type_argument_list), '>'
        ),

        base_type: $ => choice(
            'bool',
            'error',
            'match_kind',
            'string',
            'int',
            'bit',
            seq('bit', '<', $.integer, '>'),
            seq('int', '<', $.integer, '>'),
            seq('varbit', '<', $.integer, '>'),
            seq('bit', '<', '(', $.expression, ')', '>'),
            seq('int', '<', '(', $.expression, ')', '>'),
            seq('varbit', '<', '(', $.expression, ')', '>'),
        ),

        type_or_void: $ => prec.left(1, choice(
            $.type_ref,
            'void',
            $.identifier,
        )),

        type_parameters: $ => seq(
            '<', $.type_parameter_list, '>'
        ),

        type_parameter_list: $ => choice(
            $.name,
            seq($.type_parameter_list, ',', $.name),
        ),

        real_type_arg: $ => choice(
            '_',
            $.type_ref,
            'void',
        ),

        type_arg: $ => choice(
            '_',
            $.type_ref,
            $.non_type_name,
            'void',
        ),

        real_type_argument_list: $ => choice(
            $.real_type_arg,
            seq($.real_type_argument_list, 'comma', $.type_arg),
        ),

        type_argument_list: $ => choice(
            $.type_arg,
            seq($.type_argument_list, ',', $.type_arg),
        ),

        type_declaration: $ => choice(
            $.derived_type_declaration,
            $.typedef_declaration,
            seq($.parser_type_declaration, ';'),
            seq($.control_type_declaration, ';'),
            seq($.package_type_declaration, ';'),
        ),

        derived_type_declaration: $ => choice(
            $.header_type_declaration,
            $.header_union_declaration,
            $.struct_type_declaration,
            $.enum_declaration,
        ),

        header_type_declaration: $ => seq(
            repeat($.annotation), 'header', $.name, optional($.type_parameters), '{', optional($.struct_field_list), '}'
        ),

        header_union_declaration: $ => seq(
            repeat($.annotation), 'header_union', $.name, optional($.type_parameters), '{', optional($.struct_field_list), '}'
        ),

        struct_type_declaration: $ => seq(
            repeat($.annotation), 'struct', $.name, optional($.type_parameters), '{', optional($.struct_field_list), '}'
        ),

        struct_field_list: $ => repeat1($.struct_field),

        struct_field: $ => seq(
            repeat($.annotation), $.type_ref, $.name, ';'
        ),

        enum_declaration: $ => choice(
            seq(repeat($.annotation), 'enum', $.name, '{', $.identifier_list, '}'),
            seq(repeat($.annotation), 'enum', $.type_ref, $.name, '{', $.specified_identifier_list, '}'),
        ),

        error_declaration: $ => seq(
            'error', '{', $.identifier_list, '}'
        ),

        match_kind_declaration: $ => seq(
            'match_kind', '{', $.identifier_list, '}'
        ),

        identifier_list: $ => choice(
            $.name,
            seq($.identifier_list, ',', $.name),
        ),

        specified_identifier_list: $ => choice(
            $.specified_identifier,
            seq($.specified_identifier_list, ',', $.specified_identifier),
        ),

        specified_identifier: $ => seq(
            $.name, '=', $.initializer
        ),

        typedef_declaration: $ => choice(
            seq(repeat($.annotation), 'typedef', $.type_ref, $.name, ';'),
            seq(repeat($.annotation), 'typedef', $.derived_type_declaration, $.name, ';'),
            seq(repeat($.annotation), 'type', $.type_ref, $.name, ';'),
            seq(repeat($.annotation), 'type', $.derived_type_declaration, $.name, ';'),
        ),

        assignment_or_method_call_statement: $ => choice(
            seq($.lvalue, '(', optional($.argument_list), ')', ';'),
            seq($.lvalue, '<', optional($.type_argument_list), '>', '(', optional($.argument_list), ')', ';'),
            seq($.lvalue, '=', $.expression, ';'),
        ),

        empty_statement: $ => seq(
            ';',
        ),

        return_statement: $ => choice(
            seq('return', ';'),
            seq('return', $.expression, ';'),
        ),

        exit_statement: $ => seq(
            'exit', ';'
        ),

        conditional_statement: $ => choice(
            prec.left(seq('if', '(', $.expression, ')', $.statement)),
            prec.left(seq('if', '(', $.expression, ')', $.statement, 'else', $.statement)),
        ),

        direct_application: $ => choice(
            seq($.type_name, '.', 'apply', '(', optional($.argument_list), ')', ';'),
            seq($.specialized_type, '.', 'apply', '(', optional($.argument_list), ')', ';'),
        ),

        statement: $ => choice(
            $.assignment_or_method_call_statement,
            $.direct_application,
            $.conditional_statement,
            $.empty_statement,
            $.block_statement,
            $.exit_statement,
            $.return_statement,
            $.switch_statement,
        ),

        block_statement: $ => seq(
            repeat($.annotation), '{', optional($.stat_or_decl_list), '}'
        ),

        stat_or_decl_list: $ => repeat1($.statement_or_declaration),

        switch_statement: $ => seq(
            'switch', '(', $.expression, ')', '{', repeat($.switch_case), '}'
        ),

        switch_case: $ => choice(
            seq($.switch_label, ':', $.block_statement),
            seq($.switch_label, ':'),
        ),

        switch_label: $ => choice(
            'default',
            $.non_brace_expression,
        ),

        statement_or_declaration: $ => choice(
            $.variable_declaration,
            $.constant_declaration,
            $.statement,
        ),

        table_declaration: $ => seq(
            repeat($.annotation), 'table', $.name, '{', $.table_property_list, '}'
        ),

        table_property_list: $ => repeat1($.table_property),

        table_property: $ => choice(
            seq('key', '=', '{', optional($.key_element_list), '}'),
            seq('actions', '=', '{', optional($.action_list), '}'),
            seq(repeat($.annotation), 'const', 'entries', '=', '{', optional($.entries_list), '}'),
            seq(repeat($.annotation), 'const', $.non_table_kw_name, '=', $.initializer, ';'),
            seq(repeat($.annotation), $.non_table_kw_name, '=', $.initializer, ';'),
        ),

        key_element_list: $ => seq(
            optional($.key_element_list), $.key_element
        ),

        key_element: $ => seq(
            seq($.expression, ':', $.name, repeat($.annotation), ';'),
        ),

        action_list: $ => seq(
            optional($.action_list), repeat($.annotation), $.action_ref, ';'
        ),

        action_ref: $ => choice(
            $.prefixed_non_type_name,
            seq($.prefixed_non_type_name, '(', optional($.argument_list), ')'),
        ),

        entries_list: $ => seq(
            optional($.entries_list), $.entry
        ),

        entry: $ => seq(
            $.keyset_expression, ':', $.action_ref, repeat($.annotation), ';'
        ),

        action_declaration: $ => seq(
            repeat($.annotation), 'action', $.name, '(', optional($.parameter_list), ')', $.block_statement
        ),

        variable_declaration: $ => choice(
            seq(repeat($.annotation), $.type_ref, $.name, optional($.initializer), ';'),
            seq($.type_ref, $.name, optional($.initializer), ';'),
        ),

        constant_declaration: $ => seq(
            repeat($.annotation), 'const', $.type_ref, $.name, '=', $.initializer, ';'
        ),

        initializer: $ => seq(
            $.expression,
        ),

        function_declaration: $ => seq(
            $.function_prototype, $.block_statement
        ),

        argument_list: $ => choice(
            $.argument,
            seq($.argument_list, ',', $.argument),
        ),

        argument: $ => choice(
            $.expression,
            seq($.name, '=', $.expression),
            '_',
            seq($.name, '=', '_'),
        ),

        kv_list: $ => choice(
            $.kv_pair,
            seq($.kv_list, ',', $.kv_pair),
        ),

        kv_pair: $ => seq(
            $.name, '=', $.expression
        ),

        expression_list: $ => choice(
            $.expression,
            seq($.expression_list, ',', $.expression),
        ),

        annotation_body: $ => choice(
            seq($.annotation_body, '(', optional($.annotation_body), ')'),
            seq($.annotation_body, $.annotation_token),
        ),

        structured_annotation_body: $ => choice(
            $.expression_list,
            $.kv_list,
        ),

        annotation_token: $ => choice(
            'abstract',
            'action',
            'actions',
            'apply',
            'bool',
            'bit',
            'const',
            'control',
            'default',
            'else',
            'entries',
            'enum',
            'error',
            'exit',
            'extern',
            'false',
            'header',
            'header_union',
            'if',
            'in',
            'inout',
            'int',
            'key',
            'match_kind',
            'type',
            'out',
            'parser',
            'package',
            'pragma',
            'return',
            'select',
            'state',
            'string',
            'struct',
            'switch',
            'table',
            'transition',
            'true',
            'tuple',
            'typedef',
            'varbit',
            'valueset',
            'void',
            "_",
            $.identifier,
            $.type_identifier,
            $.string,
            $.integer,
            "&&&",
            "..",
            "<<",
            "&&",
            "||",
            "==",
            "!=",
            ">=",
            "<=",
            "++",
            "+",
            "|+|",
            "-",
            "|-|",
            "*",
            "/",
            "%",
            "|",
            "&",
            "^",
            "~",
            "[",
            "]",
            "{",
            "}",
            "<",
            ">",
            "!",
            ":",
            ",",
            "?",
            ".",
            "=",
            ";",
            "@",
            'unknown_token',
        ),

        member: $ => seq(
            $.name,
        ),

        prefixed_non_type_name: $ => choice(
            $.non_type_name,
            seq($.dot_prefix, $.non_type_name),
        ),

        lvalue: $ => choice(
            $.prefixed_non_type_name,
            'this',
            seq($.lvalue, '.', $.member),
            seq($.lvalue, '[', $.expression, ']'),
            seq($.lvalue, '[', $.expression, ':', $.expression, ']'),
        ),

        expression: $ => choice(
            $.integer,
            'true',
            'false',
            'this',
            $.string,
            $.non_type_name,
            seq($.dot_prefix, $.non_type_name),
            prec.left(1, seq($.expression, '[', $.expression, ']')),
            prec.left(1, seq($.expression, '[', $.expression, ':', $.expression, ']')),
            prec.left(1, seq('{', optional($.expression_list), '}')),
            prec.left(1, seq('{', $.kv_list, '}')),
            prec.left(1, seq('(', $.expression, ')')),
            prec.right(2, seq('!', $.expression)),
            prec.right(2, seq('~', $.expression)),
            prec.right(2, seq('-', $.expression)),
            prec.right(2, seq('+', $.expression)),
            prec.left(1, seq($.type_name, '.', $.member)),
            prec.left(1, seq('error', '.', $.member)),
            prec.left(1, seq($.expression, '.', $.member)),
            prec.left(3, seq($.expression, '*', $.expression)),
            prec.left(3, seq($.expression, '/', $.expression)),
            prec.left(3, seq($.expression, '%', $.expression)),
            prec.left(4, seq($.expression, '+', $.expression)),
            prec.left(4, seq($.expression, '-', $.expression)),
            prec.left(4, seq($.expression, '|+|', $.expression)),
            prec.left(4, seq($.expression, '|-|', $.expression)),
            prec.left(5, seq($.expression, '<<', $.expression)),
            prec.left(5, seq($.expression, '>>', $.expression)),
            prec.left(11, seq($.expression, '<=', $.expression)), //TODO: Double check precedence of <=,<... and == 
            prec.left(11, seq($.expression, '>=', $.expression)),
            prec.left(11, seq($.expression, '<', $.expression)),
            prec.left(11, seq($.expression, '>', $.expression)),
            prec.left(7, seq($.expression, '!=', $.expression)),
            prec.left(7, seq($.expression, '==', $.expression)),
            prec.left(8, seq($.expression, '&', $.expression)),
            prec.left(9, seq($.expression, '^', $.expression)),
            prec.left(10, seq($.expression, '|', $.expression)),
            prec.left(1, seq($.expression, '++', $.expression)),
            prec.left(12, seq($.expression, '&&', $.expression)),
            prec.left(12, seq($.expression, '||', $.expression)),
            prec.right(13, seq($.expression, '?', $.expression, ':', $.expression)),
            prec.left(1, seq($.expression, '<', $.real_type_argument_list, '>', '(', optional($.argument_list), ')')),
            prec.left(1, seq($.expression, '(', optional($.argument_list), ')')),
            prec.left(1, seq($.named_type, '(', optional($.argument_list), ')')),
            prec.right(2, seq('(', $.type_ref, ')', $.expression)),
        ),

        non_brace_expression: $ => choice(
            $.integer,
            $.string,
            'true',
            'false',
            'this',
            $.non_type_name,
            seq($.dot_prefix, $.non_type_name),
            seq($.non_brace_expression, '[', $.expression, ']'),
            seq($.non_brace_expression, '[', $.expression, ':', $.expression, ']'),
            seq('(', $.expression, ')'),
            seq('!', $.expression),
            seq('~', $.expression),
            seq('-', $.expression),
            seq('+', $.expression),
            seq($.type_name, '.', $.member),
            seq('error', '.', $.member),
            seq($.non_brace_expression, '.', $.member),
            seq($.non_brace_expression, '*', $.expression),
            seq($.non_brace_expression, '/', $.expression),
            seq($.non_brace_expression, '%', $.expression),
            seq($.non_brace_expression, '+', $.expression),
            seq($.non_brace_expression, '-', $.expression),
            seq($.non_brace_expression, '|+|', $.expression),
            seq($.non_brace_expression, '|-|', $.expression),
            seq($.non_brace_expression, '<<', $.expression),
            seq($.non_brace_expression, '>>', $.expression),
            seq($.non_brace_expression, '<=', $.expression),
            seq($.non_brace_expression, '>=', $.expression),
            seq($.non_brace_expression, '<', $.expression),
            seq($.non_brace_expression, '>', $.expression),
            seq($.non_brace_expression, '!=', $.expression),
            seq($.non_brace_expression, '==', $.expression),
            seq($.non_brace_expression, '&', $.expression),
            seq($.non_brace_expression, '^', $.expression),
            seq($.non_brace_expression, '|', $.expression),
            seq($.non_brace_expression, '++', $.expression),
            seq($.non_brace_expression, '&&', $.expression),
            seq($.non_brace_expression, '||', $.expression),
            seq($.non_brace_expression, '?', $.expression, ':', $.expression),
            seq($.non_brace_expression, '<', $.real_type_argument_list, '>', '(', optional($.argument_list), ')'),
            seq($.non_brace_expression, '(', optional($.argument_list), ')'),
            seq($.named_type, '(', optional($.argument_list), ')'),
            seq('(', $.type_ref, ')', $.expression),
        ),

        integer: $ => /(\d+([wWsS]))?\d+(([xX][0-9A-F_]+)|([bB][0-1_]+)|([oO][0-7_]+)|([dD][0-9_]+))?/,

        string: $ => /"(\\.|[^"\\])*"/,


        prec: $ => $.identifier,

        identifier: $ => /(_|[a-zA-Z])\w*/,

        type_identifier: $ => $.identifier,

    }
});
