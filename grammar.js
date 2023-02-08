module.exports = grammar({
    name: 'p4',

    extras: $ => [/\s/, $.line_comment, $.block_comment],

    externals: $ => [$.block_comment],

    conflicts: $ => [
        [$.typeOrVoid, $.typeIdentifier],
        [$.nonTypeName, $.typeIdentifier],
        [$.annotationToken, $.typeIdentifier],
        [$.nonTableKwName, $.typeIdentifier],
    ],

    rules: {
        source_file: $ => repeat(
            seq($._declaration, /\s/),
        ),

        _declaration: $ => choice(
            $.constantDeclaration,
            $.externDeclaration,
            $.actionDeclaration,
            $.parserDeclaration,
            $.typeDeclaration,
            $.controlDeclaration,
            $.instantiation,
            $.errorDeclaration,
            $.matchKindDeclaration,
            $.functionDeclaration,
            $.includeDeclaration
        ),

        nonTypeName: $ => choice(
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
            $.nonTypeName,
            $.typeIdentifier,
        ),

        includeDeclaration: $ => seq(
            '#',
            'include',
            '<',
            $.fileName,
            '>'
        ),

        fileName: $ => /\w*.\w*/,

        nonTableKwName: $ => choice(
            $.identifier,
            $.typeIdentifier,
            'apply',
            'state',
            'type',
        ),

        annotations: $ => seq(
            optional($.annotations), $.annotation
        ),

        annotation: $ => choice(
            seq('@', $.name),
            seq('@', $.name, '(', optional($.annotationBody), ')'),
            seq('@', $.name, '[', $.structuredAnnotationBody, ']'),
        ),

        parameterList: $ => choice(
            $.parameter,
            seq($.parameterList, ',', $.parameter),
        ),

        parameter: $ => choice(
            seq(optional($.annotations), optional($.direction), $.typeRef, $.name),
            seq(optional($.annotations), optional($.direction), $.typeRef, $.name, '=', $.expression),
        ),

        direction: $ => choice(
            'in',
            'out',
            'inout',
        ),

        packageTypeDeclaration: $ => choice(
            seq(optional($.annotations), 'package', $.name, optional($.typeParameters)),
            seq(optional($.parameterList), ')'),
        ),

        instantiation: $ => choice(
            seq($.typeRef, '(', optional($.argumentList), ')', $.name, ';'),
            seq($.annotations, $.typeRef, '(', optional($.argumentList), ')', $.name, ';'),
            seq($.annotations, $.typeRef, '(', optional($.argumentList), ')', $.name, '=', $.objInitializer, ';'),
            seq($.typeRef, '(', optional($.argumentList), ')', $.name, '=', $.objInitializer, ';'),
        ),

        objInitializer: $ => seq(
            '{', optional($.objDeclarations), '}'
        ),

        objDeclarations: $ => seq(
            $.objDeclarations,
            $.objDeclaration
        ),


        objDeclaration: $ => choice(
            $.functionDeclaration,
            $.instantiation,
        ),

        dotPrefix: $ => seq(
            '.',
        ),

        parserDeclaration: $ => seq(
            $.parserTypeDeclaration,
            optional(seq('(', optional($.parameterList), ')')),
            '{',
            optional(optional($.parserLocalElements)),
            $.parserStates,
            '}'
        ),


        parserLocalElements: $ => seq(
            optional($.parserLocalElements), $.parserLocalElement
        ),

        parserLocalElement: $ => choice(
            $.constantDeclaration,
            $.variableDeclaration,
            $.instantiation,
            $.valueSetDeclaration,
        ),

        parserTypeDeclaration: $ => seq(
            optional($.annotations), 'parser', $.name, optional($.typeParameters), '(', optional($.parameterList), ')'
        ),

        parserStates: $ => choice(
            $.parserState,
            seq($.parserStates, $.parserState),
        ),

        parserState: $ => seq(
            optional($.annotations), 'state', $.name, '{', optional($.parserStatements), optional($.transitionStatement), '}'
        ),

        parserStatements: $ => seq(
            optional($.parserStatements), $.parserStatement
        ),

        parserStatement: $ => choice(
            $.assignmentOrMethodCallStatement,
            $.directApplication,
            $.parserBlockStatement,
            $.constantDeclaration,
            $.variableDeclaration,
            $.emptyStatement,
            $.conditionalStatement,
        ),

        parserBlockStatement: $ => seq(
            optional($.annotations), '{', optional($.parserStatements), '}'
        ),

        transitionStatement: $ => seq(
            'transition', $.stateExpression
        ),


        stateExpression: $ => choice(
            seq($.name, ';'),
            $.selectExpression,
        ),

        selectExpression: $ => seq(
            'select', '(', optional($.expressionList), ')', '{', optional($.selectCaseList), '}'
        ),

        selectCaseList: $ => seq(
            optional($.selectCaseList), $.selectCase
        ),

        selectCase: $ => seq(
            $.keysetExpression, ':', $.name, ';'
        ),

        keysetExpression: $ => choice(
            $.tupleKeysetExpression,
            $.simpleKeysetExpression,
        ),

        tupleKeysetExpression: $ => choice(
            seq("(", $.simpleKeysetExpression, ",", $.simpleExpressionList, ")"),
            seq("(", $.reducedSimpleKeysetExpression, ")"),
        ),

        simpleExpressionList: $ => choice(
            $.simpleKeysetExpression,
            seq($.simpleExpressionList, ',', $.simpleKeysetExpression),
        ),

        reducedSimpleKeysetExpression: $ => choice(
            seq($.expression, "&&&", $.expression),
            seq($.expression, "..", $.expression),
            'default',
            "_",
        ),

        simpleKeysetExpression: $ => choice(
            $.expression,
            'default',
            '_',
            seq($.expression, 'mask', $.expression),
            seq($.expression, 'range', $.expression),
        ),

        valueSetDeclaration: $ => choice(
            seq(optional($.annotations), 'valueset', '<', $.baseType, '>', '(', $.expression, ')', $.name, ';'),
            seq(optional($.annotations), 'valueset', '<', $.tupleType, '>', '(', $.expression, ')', $.name, ';'),
            seq(optional($.annotations), 'valueset', '<', $.typeName, '>', '(', $.expression, ')', $.name, ';'),
        ),

        controlDeclaration: $ => seq(
            $.controlTypeDeclaration,
            optional(seq('(', optional($.parameterList), ')')),
            '{',
            optional($.controlLocalDeclarations),
            'apply',
            $.controlBody,
            '}'
        ),

        controlTypeDeclaration: $ => seq(
            optional($.annotations), 'control', $.name, optional($.typeParameters), '(', optional($.parameterList), ')'
        ),

        controlLocalDeclarations: $ => seq(
            optional($.controlLocalDeclarations), $.controlLocalDeclaration
        ),

        controlLocalDeclaration: $ => choice(
            $.constantDeclaration,
            $.actionDeclaration,
            $.tableDeclaration,
            $.instantiation,
            $.variableDeclaration,
        ),

        controlBody: $ => seq(
            $.blockStatement,
        ),

        externDeclaration: $ => choice(
            seq(optional($.annotations), 'extern', $.nonTypeName, optional($.typeParameters), '{', optional($.methodPrototypes), '}'),
            seq(optional($.annotations), 'extern', $.functionPrototype, ';'),
        ),

        methodPrototypes: $ => seq(
            optional($.methodPrototypes), $.methodPrototype
        ),

        functionPrototype: $ => seq(
            $.typeOrVoid, $.name, optional($.typeParameters), '(', optional($.parameterList), ')'
        ),

        methodPrototype: $ => choice(
            seq(optional($.annotations), $.functionPrototype, ';'),
            seq(optional($.annotations), $.typeIdentifier, '(', optional($.parameterList), ')', ';'),
        ),

        typeRef: $ => choice(
            $.baseType,
            $.typeName,
            $.specializedType,
            $.headerStackType,
            $.tupleType,
        ),

        namedType: $ => choice(
            $.typeName,
            $.specializedType,
        ),

        prefixedType: $ => choice(
            $.typeIdentifier,
            seq($.dotPrefix, $.typeIdentifier),
        ),

        typeName: $ => seq(
            $.prefixedType,
        ),

        tupleType: $ => seq(
            'tuple', '<', optional($.typeArgumentList), '>'
        ),

        headerStackType: $ => choice(
            seq($.typeName, '[', $.expression, ']'),
            seq($.specializedType, '[', $.expression, ']'),
        ),

        specializedType: $ => seq(
            $.prefixedType, '<', optional($.typeArgumentList), '>'
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

        typeOrVoid: $ => prec.left(1, choice(
            $.typeRef,
            'void',
            $.identifier,
        )),

        typeParameters: $ => seq(
            '<', $.typeParameterList, '>'
        ),

        typeParameterList: $ => choice(
            $.name,
            seq($.typeParameterList, ',', $.name),
        ),

        realTypeArg: $ => choice(
            '_',
            $.typeRef,
            'void',
        ),

        typeArg: $ => choice(
            '_',
            $.typeRef,
            $.nonTypeName,
            'void',
        ),

        realTypeArgumentList: $ => choice(
            $.realTypeArg,
            seq($.realTypeArgumentList, 'comma', $.typeArg),
        ),

        typeArgumentList: $ => choice(
            $.typeArg,
            seq($.typeArgumentList, ',', $.typeArg),
        ),

        typeDeclaration: $ => choice(
            $.derivedTypeDeclaration,
            $.typedefDeclaration,
            seq($.parserTypeDeclaration, ';'),
            seq($.controlTypeDeclaration, ';'),
            seq($.packageTypeDeclaration, ';'),
        ),

        derivedTypeDeclaration: $ => choice(
            $.headerTypeDeclaration,
            $.headerUnionDeclaration,
            $.structTypeDeclaration,
            $.enumDeclaration,
        ),

        headerTypeDeclaration: $ => seq(
            optional($.annotations), 'header', $.name, optional($.typeParameters), '{', optional($.structFieldList), '}'
        ),

        headerUnionDeclaration: $ => seq(
            optional($.annotations), 'header_union', $.name, optional($.typeParameters), '{', optional($.structFieldList), '}'
        ),

        structTypeDeclaration: $ => seq(
            optional($.annotations), 'struct', $.name, optional($.typeParameters), '{', optional($.structFieldList), '}'
        ),

        structFieldList: $ => seq(
            optional($.structFieldList), $.structField
        ),

        structField: $ => seq(
            optional($.annotations), $.typeRef, $.name, ';'
        ),

        enumDeclaration: $ => choice(
            seq(optional($.annotations), 'enum', $.name, '{', $.identifierList, '}'),
            seq(optional($.annotations), 'enum', $.typeRef, $.name, '{', $.specifiedIdentifierList, '}'),
        ),

        errorDeclaration: $ => seq(
            'error', '{', $.identifierList, '}'
        ),

        matchKindDeclaration: $ => seq(
            'match_kind', '{', $.identifierList, '}'
        ),

        identifierList: $ => choice(
            $.name,
            seq($.identifierList, ',', $.name),
        ),

        specifiedIdentifierList: $ => choice(
            $.specifiedIdentifier,
            seq($.specifiedIdentifierList, ',', $.specifiedIdentifier),
        ),

        specifiedIdentifier: $ => seq(
            $.name, '=', $.initializer
        ),

        typedefDeclaration: $ => choice(
            seq(optional($.annotations), 'typedef', $.typeRef, $.name, ';'),
            seq(optional($.annotations), 'typedef', $.derivedTypeDeclaration, $.name, ';'),
            seq(optional($.annotations), 'type', $.typeRef, $.name, ';'),
            seq(optional($.annotations), 'type', $.derivedTypeDeclaration, $.name, ';'),
        ),

        assignmentOrMethodCallStatement: $ => choice(
            seq($.lvalue, '(', optional($.argumentList), ')', ';'),
            seq($.lvalue, '<', optional($.typeArgumentList), '>', '(', optional($.argumentList), ')', ';'),
            seq($.lvalue, '=', $.expression, ';'),
        ),

        emptyStatement: $ => seq(
            ';',
        ),

        returnStatement: $ => choice(
            seq('return', ';'),
            seq('return', $.expression, ';'),
        ),

        exitStatement: $ => seq(
            'exit', ';'
        ),

        conditionalStatement: $ => choice(
            prec.left(seq('if', '(', $.expression, ')', $.statement)),
            prec.left(seq('if', '(', $.expression, ')', $.statement, 'else', $.statement)),
        ),

        directApplication: $ => choice(
            seq($.typeName, '.', 'apply', '(', optional($.argumentList), ')', ';'),
            seq($.specializedType, '.', 'apply', '(', optional($.argumentList), ')', ';'),
        ),

        statement: $ => choice(
            $.assignmentOrMethodCallStatement,
            $.directApplication,
            $.conditionalStatement,
            $.emptyStatement,
            $.blockStatement,
            $.exitStatement,
            $.returnStatement,
            $.switchStatement,
        ),

        blockStatement: $ => seq(
            optional($.annotations), '{', optional($.statOrDeclList), '}'
        ),

        statOrDeclList: $ => seq(
            optional($.statOrDeclList), $.statementOrDeclaration
        ),

        switchStatement: $ => seq(
            'switch', '(', $.expression, ')', '{', optional($.switchCases), '}'
        ),

        switchCases: $ => seq(
            optional($.switchCases), $.switchCase
        ),

        switchCase: $ => choice(
            seq($.switchLabel, ':', $.blockStatement),
            seq($.switchLabel, ':'),
        ),

        switchLabel: $ => choice(
            'default',
            $.nonBraceExpression,
        ),

        statementOrDeclaration: $ => choice(
            $.variableDeclaration,
            $.constantDeclaration,
            $.statement,
        ),

        tableDeclaration: $ => seq(
            optional($.annotations), 'table', $.name, '{', $.tablePropertyList, '}'
        ),

        tablePropertyList: $ => choice(
            $.tableProperty,
            seq($.tablePropertyList, $.tableProperty),
        ),

        tableProperty: $ => choice(
            seq('key', '=', '{', optional($.keyElementList), '}'),
            seq('actions', '=', '{', optional($.actionList), '}'),
            seq(optional($.annotations), 'const', 'entries', '=', '{', optional($.entriesList), '}'),
            seq(optional($.annotations), 'const', $.nonTableKwName, '=', $.initializer, ';'),
            seq(optional($.annotations), $.nonTableKwName, '=', $.initializer, ';'),
        ),

        keyElementList: $ => seq(
            optional($.keyElementList), $.keyElement
        ),

        keyElement: $ => seq(
            seq($.expression, ':', $.name, optional($.annotations), ';'),
        ),

        actionList: $ => seq(
            optional($.actionList), optional($.annotations), $.actionRef, ';'
        ),

        actionRef: $ => choice(
            $.prefixedNonTypeName,
            seq($.prefixedNonTypeName, '(', optional($.argumentList), ')'),
        ),

        entriesList: $ => seq(
            optional($.entriesList), $.entry
        ),

        entry: $ => seq(
            $.keysetExpression, ':', $.actionRef, optional($.annotations), ';'
        ),

        actionDeclaration: $ => seq(
            optional($.annotations), 'action', $.name, '(', optional($.parameterList), ')', $.blockStatement
        ),

        variableDeclaration: $ => choice(
            seq($.annotations, $.typeRef, $.name, optional($.initializer), ';'),
            seq($.typeRef, $.name, optional($.initializer), ';'),
        ),

        constantDeclaration: $ => seq(
            optional($.annotations), 'const', $.typeRef, $.name, '=', $.initializer, ';'
        ),

        initializer: $ => seq(
            $.expression,
        ),

        functionDeclaration: $ => seq(
            $.functionPrototype, $.blockStatement
        ),

        argumentList: $ => choice(
            $.argument,
            seq($.argumentList, ',', $.argument),
        ),

        argument: $ => choice(
            $.expression,
            seq($.name, '=', $.expression),
            '_',
            seq($.name, '=', '_'),
        ),

        kvList: $ => choice(
            $.kvPair,
            seq($.kvList, ',', $.kvPair),
        ),

        kvPair: $ => seq(
            $.name, '=', $.expression
        ),

        expressionList: $ => choice(
            $.expression,
            seq($.expressionList, ',', $.expression),
        ),

        annotationBody: $ => choice(
            seq($.annotationBody, '(', optional($.annotationBody), ')'),
            seq($.annotationBody, $.annotationToken),
        ),

        structuredAnnotationBody: $ => choice(
            //TODO: expressionList should be optional
            $.expressionList,
            $.kvList,
        ),

        annotationToken: $ => choice(
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
            $.typeIdentifier,
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

        prefixedNonTypeName: $ => choice(
            $.nonTypeName,
            seq($.dotPrefix, $.nonTypeName),
        ),

        lvalue: $ => choice(
            $.prefixedNonTypeName,
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
            $.nonTypeName,
            // seq($.dotPrefix, $.nonTypeName),
            // seq($.expression, '[', $.expression, ']'),
            // seq($.expression, '[', $.expression, ':', $.expression, ']'),
            // seq('{', optional($.expressionList), '}'),
            // seq('{', $.kvList, '}'),
            // seq('(', $.expression, ')'),
            // seq('!', $.expression, $.prec, 'prefix'),
            // seq('~', $.expression, $.prec, 'prefix'),
            // seq('-', $.expression, $.prec, 'prefix'),
            // seq('+', $.expression, $.prec, 'prefix'),
            // seq($.typeName, '.', $.member),
            // seq('error', '.', $.member),
            // seq($.expression, '.', $.member),
            // seq($.expression, '*', $.expression),
            // seq($.expression, '/', $.expression),
            // seq($.expression, '%', $.expression),
            // seq($.expression, '+', $.expression),
            // seq($.expression, '-', $.expression),
            // seq($.expression, '|+|', $.expression),
            // seq($.expression, '|-|', $.expression),
            // seq($.expression, '<<', $.expression),
            // seq($.expression, '>>', $.expression),
            // seq($.expression, '<=', $.expression),
            // seq($.expression, '>=', $.expression),
            // seq($.expression, '<', $.expression),
            // seq($.expression, '>', $.expression),
            // seq($.expression, '!=', $.expression),
            // seq($.expression, '==', $.expression),
            // seq($.expression, '&', $.expression),
            // seq($.expression, '^', $.expression),
            // seq($.expression, '|', $.expression),
            // seq($.expression, '++', $.expression),
            // seq($.expression, '&&', $.expression),
            // seq($.expression, '||', $.expression),
            // seq($.expression, '?', $.expression, ':', $.expression),
            // seq($.expression, '<', $.realTypeArgumentList, '>', '(', optional($.argumentList), ')'),
            // seq($.expression, '(', optional($.argumentList), ')'),
            // seq($.namedType, '(', optional($.argumentList), ')'),
            // seq('(', $.typeRef, ')', $.expression),
        ),

        nonBraceExpression: $ => choice(
            $.integer,
            $.string,
            'true',
            'false',
            'this',
            $.nonTypeName,
            seq($.dotPrefix, $.nonTypeName),
            seq($.nonBraceExpression, '[', $.expression, ']'),
            seq($.nonBraceExpression, '[', $.expression, ':', $.expression, ']'),
            seq('(', $.expression, ')'),
            seq('!', $.expression, $.prec, 'prefix'),
            seq('~', $.expression, $.prec, 'prefix'),
            seq('-', $.expression, $.prec, 'prefix'),
            seq('+', $.expression, $.prec, 'prefix'),
            seq($.typeName, '.', $.member),
            seq('error', '.', $.member),
            seq($.nonBraceExpression, '.', $.member),
            seq($.nonBraceExpression, '*', $.expression),
            seq($.nonBraceExpression, '/', $.expression),
            seq($.nonBraceExpression, '%', $.expression),
            seq($.nonBraceExpression, '+', $.expression),
            seq($.nonBraceExpression, '-', $.expression),
            seq($.nonBraceExpression, '|+|', $.expression),
            seq($.nonBraceExpression, '|-|', $.expression),
            seq($.nonBraceExpression, '<<', $.expression),
            seq($.nonBraceExpression, '>>', $.expression),
            seq($.nonBraceExpression, '<=', $.expression),
            seq($.nonBraceExpression, '>=', $.expression),
            seq($.nonBraceExpression, '<', $.expression),
            seq($.nonBraceExpression, '>', $.expression),
            seq($.nonBraceExpression, '!=', $.expression),
            seq($.nonBraceExpression, '==', $.expression),
            seq($.nonBraceExpression, '&', $.expression),
            seq($.nonBraceExpression, '^', $.expression),
            seq($.nonBraceExpression, '|', $.expression),
            seq($.nonBraceExpression, '++', $.expression),
            seq($.nonBraceExpression, '&&', $.expression),
            seq($.nonBraceExpression, '||', $.expression),
            seq($.nonBraceExpression, '?', $.expression, ':', $.expression),
            seq($.nonBraceExpression, '<', $.realTypeArgumentList, '>', '(', optional($.argumentList), ')'),
            seq($.nonBraceExpression, '(', optional($.argumentList), ')'),
            seq($.namedType, '(', optional($.argumentList), ')'),
            seq('(', $.typeRef, ')', $.expression),
        ),

        integer: $ => /(\d+([wWsS]))?\d+(([xX][0-9A-F_]+)|([bB][0-1_]+)|([oO][0-7_]+)|([dD][0-9_]+))?/,

        string: $ => /"(\\.|[^"\\])*"/,


        prec: $ => $.identifier,

        identifier: $ => /(_|[a-zA-Z])\w*/,

        typeIdentifier: $ => $.identifier,

    }
});
