module.exports = grammar({
    name: 'p4',

    extras: $ => [/\s/],

    rules: {
        source_file: $ => repeat(seq($._declaration, /\s/)),

        _declaration: $ => choice(
            $.constantDeclaration,
            $.externDeclaration,
            //$.actionDeclaration,
            //$.parserDeclaration,
            //$.typeDeclaration,
            //$.controlDeclaration,
            //$.instantiation,
            //$.errorDeclaration,
            //$.matchKindDeclaration,
            //$.functionDeclaration,
            ';'
        ),

        constantDeclaration: $ => seq(
            $._optAnnotations,
            'const',
            $.typeRef,
            $.name,
            '=',
            $.initializer,
            ';'
        ),
 
        externDeclaration: $ => choice(
            seq(
                $._optAnnotations,
                'extern',
                $.nonTypeName,
                $.optTypeParameters,
                '{',
                $.methodPrototypes,
                '}'
            ),
            seq(
                $._optAnnotations,
                'extern',
                $.functionPrototype,
                ';'
            )
        ),

        _optAnnotations: $ => choice(
            '',
            $._annotations
        ),

        _annotations: $ => choice(
            $.annotation,
            seq(
                $._annotations,
                $.annotation
            )
        ),

        annotation: $ => seq(
            '@',
            $.name,
            //choice(
            //    '',
                //seq('(', $.annotationBody, ')'),
                //seq('[', $.structuredAnnotationBody, ']')
            //)
        ),

        optTypeParameters: $ => choice(
            '',
            $.typeParameters
        ),

        typeParameters: $ => seq(
            '<',
            $.typeParameterList,
            '>'
        ),

        typeParameterList: $ => seq(
            $.typeParameterList,
            ',',
            $.name
        ),

        methodPrototypes: $ => choice(
            '',
            seq($.methodPrototypes, $.methodPrototype)
        ),

        methodPrototype: $ => choice(
            seq($._optAnnotations, $.functionPrototype, ';'),
            seq($._optAnnotations, $.typeIdentifier, '(', $.parameterList, ')', ';')
        ),

        functionPrototype: $ => seq(
            $.typeOrVoid, $.name, $.optTypeParameters, '(', $.parameterList, ')'
        ), 

        parameterList: $ => choice(
            '',
            $.nonEmptyParameterList
        ),

        nonEmptyParameterList: $ => choice(
            $.parameter,
            seq($.nonEmptyParameterList, ',', $.parameter),
        ),

        parameter: $ => choice(
            seq($._optAnnotations, $.direction, $.typeRef, $.name),
            seq($._optAnnotations, $.direction, $.typeRef, $.name, '=', $.expression),
        ),


        direction: $ => choice(
            'in',
            'out',
            'inout',
            '',
        ),

        name: $ => choice(
            $.nonTypeName,
            $.typeIdentifier
        ),

        nonTypeName: $ => prec(2, choice(
            $.identifier,
            'apply',
            'key',
            'actions',
            'state',
            'entries',
            'type'
        )),

        identifier: $ => /(_|[a-zA-Z])\w*/,

        typeIdentifier: $ => $.identifier,

        typeRef: $ => choice(
            $.baseType,
            //$.typeName,
            //$.specializedType,
            //$.headerStackType,
            //$.tupleType
        ),
        
        baseType: $ => choice(
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

        integer: $ => /(\d+([wWsS]))?\d+(([xX][0-9A-F_]+)|([bB][0-1_]+)|([oO][0-7_]+)|([dD][0-9_]+))?/,

        string: $ => /"(\\.|[^"\\])*"/,

        boolean: $ => choice(
            'true',
            'false',
        ),

        typeOrVoid: $ => choice(
            $.typeRef,
            'void',
            $.identifier
        ),

        expression: $ => choice(
            $.integer,
            $.string,
            $.boolean,
            'this',
            //TODO
        ),

        initializer: $ => $.expression,
    }
});
