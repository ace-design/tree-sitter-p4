module.exports = grammar({
    name: 'p4',

    extras: $ => [/\s/],

    conflicts: $ => [
        [$.typeOrVoid, $.typeIdentifier],
        [$.nonTypeName, $.typeIdentifier],
        [$.annotationToken, $.typeIdentifier],
        [$.nonTableKwName, $.typeIdentifier],
    ],

    rules: {
        source_file: $ => repeat(seq($._declaration, /\s/)),

        _declaration: $ => choice(
            $.constantDeclaration,
            $.externDeclaration,
            $.actionDeclaration,
            // $.parserDeclaration,
            // $.typeDeclaration,
            // $.controlDeclaration,
            // $.instantiation,
            // $.errorDeclaration,
            // $.matchKindDeclaration,
            // $.functionDeclaration,
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

        name: $ => choice(
            $.nonTypeName,
            $.typeIdentifier,
        ),

        nonTableKwName: $ => choice(
            $.identifier,
            $.typeIdentifier,
            'apply',
            'state',
            'type',
        ),

        optAnnotations: $ => choice(
            '',
            $.annotations,
        ),

        annotations: $ => choice(
            $.annotation,
            seq($.annotations, $.annotation),
        ),

        annotation: $ => choice(
            seq('@', $.name),
            seq('@', $.name, '(', $.annotationBody, ')'),
            seq('@', $.name, '[', $.structuredAnnotationBody, ']'),
        ),

        parameterList: $ => choice(
            '',
            $.nonEmptyParameterList,
        ),

        nonEmptyParameterList: $ => choice(
            $.parameter,
            seq($.nonEmptyParameterList, ',', $.parameter),
        ),

        parameter: $ => choice(
            seq($.optAnnotations, $.direction, $.typeRef, $.name),
            seq($.optAnnotations, $.direction, $.typeRef, $.name, '=', $.expression),
        ),

        direction: $ => choice(
            'in',
            'out',
            'inout',
            '',
        ),

        packageTypeDeclaration: $ => choice(
            seq($.optAnnotations, 'package', $.name, $.optTypeParameters),
            seq($.parameterList, ')'),
        ),

        instantiation: $ => choice(
            seq($.typeRef, '(', $.argumentList, ')', $.name, ';'),
            seq($.annotations, $.typeRef, '(', $.argumentList, ')', $.name, ';'),
            seq($.annotations, $.typeRef, '(', $.argumentList, ')', $.name, '=', $.objInitializer, ';'),
            seq($.typeRef, '(', $.argumentList, ')', $.name, '=', $.objInitializer, ';'),
        ),

        objInitializer: $ => seq(
            seq('{', $.objDeclarations, '}'),
        ),

        objDeclarations: $ => choice(
            '',
            seq($.objDeclarations, $.objDeclaration),
        ),

        objDeclaration: $ => choice(
            $.functionDeclaration,
            $.instantiation,
        ),

        optConstructorParameters: $ => choice(
            '',
            seq('(', $.parameterList, ')'),
        ),

        dotPrefix: $ => seq(
            '.',
        ),

        parserDeclaration: $ => seq(
            seq($.parserTypeDeclaration, $.optConstructorParameters, '{', $.parserLocalElements, $.parserStates, '}'),
        ),

        parserLocalElements: $ => choice(
            '',
            seq($.parserLocalElements, $.parserLocalElement),
        ),

        parserLocalElement: $ => choice(
            $.constantDeclaration,
            $.variableDeclaration,
            $.instantiation,
            $.valueSetDeclaration,
        ),

        parserTypeDeclaration: $ => seq(
            seq($.optAnnotations, 'parser', $.name, $.optTypeParameters, '(', $.parameterList, ')'),
        ),

        parserStates: $ => choice(
            $.parserState,
            seq($.parserStates, $.parserState),
        ),

        parserState: $ => seq(
            seq($.optAnnotations, 'state', $.name, '{', $.parserStatements, $.transitionStatement, '}'),
        ),

        parserStatements: $ => choice(
            '',
            seq($.parserStatements, $.parserStatement),
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
            seq($.optAnnotations, '{', $.parserStatements, '}'),
        ),

        transitionStatement: $ => choice(
            '',
            seq('transition', $.stateExpression),
        ),

        stateExpression: $ => choice(
            seq($.name, ';'),
            $.selectExpression,
        ),

        selectExpression: $ => seq(
            seq('select', '(', $.expressionList, ')', '{', $.selectCaseList, '}'),
        ),

        selectCaseList: $ => choice(
            '',
            seq($.selectCaseList, $.selectCase),
        ),

        selectCase: $ => seq(
            seq($.keysetExpression, ':', $.name, ';'),
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
            seq($.optAnnotations, 'valueset', '<', $.baseType, '>', '(', $.expression, ')', $.name, ';'),
            seq($.optAnnotations, 'valueset', '<', $.tupleType, '>', '(', $.expression, ')', $.name, ';'),
            seq($.optAnnotations, 'valueset', '<', $.typeName, '>', '(', $.expression, ')', $.name, ';'),
        ),

        controlDeclaration: $ => seq(
            seq($.controlTypeDeclaration, $.optConstructorParameters, '{', $.controlLocalDeclarations, 'apply', $.controlBody, '}'),
        ),

        controlTypeDeclaration: $ => seq(
            seq($.optAnnotations, 'control', $.name, $.optTypeParameters, '(', $.parameterList, ')'),
        ),

        controlLocalDeclarations: $ => choice(
            '',
            seq($.controlLocalDeclarations, $.controlLocalDeclaration),
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
            seq($.optAnnotations, 'extern', $.nonTypeName, $.optTypeParameters, '{', $.methodPrototypes, '}'),
            seq($.optAnnotations, 'extern', $.functionPrototype, ';'),
        ),

        methodPrototypes: $ => choice(
            '',
            seq($.methodPrototypes, $.methodPrototype),
        ),

        functionPrototype: $ => seq(
            seq($.typeOrVoid, $.name, $.optTypeParameters, '(', $.parameterList, ')'),
        ),

        methodPrototype: $ => choice(
            seq($.optAnnotations, $.functionPrototype, ';'),
            seq($.optAnnotations, $.typeIdentifier, '(', $.parameterList, ')', ';'),
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
            seq('tuple', '<', $.typeArgumentList, '>'),
        ),

        headerStackType: $ => choice(
            seq($.typeName, '[', $.expression, ']'),
            seq($.specializedType, '[', $.expression, ']'),
        ),

        specializedType: $ => seq(
            seq($.prefixedType, '<', $.typeArgumentList, '>'),
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

        typeOrVoid: $ => choice(
            $.typeRef,
            'void',
            $.identifier,
        ),

        optTypeParameters: $ => choice(
            '',
            $.typeParameters,
        ),

        typeParameters: $ => seq(
            seq('<', $.typeParameterList, '>'),
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
            '',
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
            seq($.optAnnotations, 'header', $.name, $.optTypeParameters, '{', $.structFieldList, '}'),
        ),

        headerUnionDeclaration: $ => seq(
            seq($.optAnnotations, 'header_union', $.name, $.optTypeParameters, '{', $.structFieldList, '}'),
        ),

        structTypeDeclaration: $ => seq(
            seq($.optAnnotations, 'struct', $.name, $.optTypeParameters, '{', $.structFieldList, '}'),
        ),

        structFieldList: $ => choice(
            '',
            seq($.structFieldList, $.structField),
        ),

        structField: $ => seq(
            seq($.optAnnotations, $.typeRef, $.name, ';'),
        ),

        enumDeclaration: $ => choice(
            seq($.optAnnotations, 'enum', $.name, '{', $.identifierList, '}'),
            seq($.optAnnotations, 'enum', $.typeRef, $.name, '{', $.specifiedIdentifierList, '}'),
        ),

        errorDeclaration: $ => seq(
            seq('error', '{', $.identifierList, '}'),
        ),

        matchKindDeclaration: $ => seq(
            seq('match_kind', '{', $.identifierList, '}'),
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
            seq($.name, '=', $.initializer),
        ),

        typedefDeclaration: $ => choice(
            seq($.optAnnotations, 'typedef', $.typeRef, $.name, ';'),
            seq($.optAnnotations, 'typedef', $.derivedTypeDeclaration, $.name, ';'),
            seq($.optAnnotations, 'type', $.typeRef, $.name, ';'),
            seq($.optAnnotations, 'type', $.derivedTypeDeclaration, $.name, ';'),
        ),

        assignmentOrMethodCallStatement: $ => choice(
            seq($.lvalue, '(', $.argumentList, ')', ';'),
            seq($.lvalue, '<', $.typeArgumentList, '>', '(', $.argumentList, ')', ';'),
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
            seq('exit', ';'),
        ),

        conditionalStatement: $ => choice(
            prec.left(seq('if', '(', $.expression, ')', $.statement)),
            prec.left(seq('if', '(', $.expression, ')', $.statement, 'else', $.statement)),
        ),

        directApplication: $ => choice(
            seq($.typeName, '.', 'apply', '(', $.argumentList, ')', ';'),
            seq($.specializedType, '.', 'apply', '(', $.argumentList, ')', ';'),
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
            seq($.optAnnotations, '{', $.statOrDeclList, '}'),
        ),

        statOrDeclList: $ => choice(
            '',
            seq($.statOrDeclList, $.statementOrDeclaration),
        ),

        switchStatement: $ => seq(
            seq('switch', '(', $.expression, ')', '{', $.switchCases, '}'),
        ),

        switchCases: $ => choice(
            '',
            seq($.switchCases, $.switchCase),
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
            seq($.optAnnotations, 'table', $.name, '{', $.tablePropertyList, '}'),
        ),

        tablePropertyList: $ => choice(
            $.tableProperty,
            seq($.tablePropertyList, $.tableProperty),
        ),

        tableProperty: $ => choice(
            seq('key', '=', '{', $.keyElementList, '}'),
            seq('actions', '=', '{', $.actionList, '}'),
            seq($.optAnnotations, 'const', 'entries', '=', '{', $.entriesList, '}'),
            seq($.optAnnotations, 'const', $.nonTableKwName, '=', $.initializer, ';'),
            seq($.optAnnotations, $.nonTableKwName, '=', $.initializer, ';'),
        ),

        keyElementList: $ => choice(
            '',
            seq($.keyElementList, $.keyElement),
        ),

        keyElement: $ => seq(
            seq($.expression, ':', $.name, $.optAnnotations, ';'),
        ),

        actionList: $ => choice(
            '',
            seq($.actionList, $.optAnnotations, $.actionRef, ';'),
        ),

        actionRef: $ => choice(
            $.prefixedNonTypeName,
            seq($.prefixedNonTypeName, '(', $.argumentList, ')'),
        ),

        entriesList: $ => choice(
            '',
            seq($.entriesList, $.entry),
        ),

        entry: $ => seq(
            seq($.keysetExpression, ':', $.actionRef, $.optAnnotations, ';'),
        ),

        actionDeclaration: $ => seq(
            seq($.optAnnotations, 'action', $.name, '(', $.parameterList, ')', $.blockStatement),
        ),

        variableDeclaration: $ => choice(
            seq($.annotations, $.typeRef, $.name, $.optInitializer, ';'),
            seq($.typeRef, $.name, $.optInitializer, ';'),
        ),

        constantDeclaration: $ => seq(
            seq($.optAnnotations, 'const', $.typeRef, $.name, '=', $.initializer, ';'),
        ),

        optInitializer: $ => choice(
            '',
            seq('=', $.initializer),
        ),

        initializer: $ => seq(
            $.expression,
        ),

        functionDeclaration: $ => seq(
            seq($.functionPrototype, $.blockStatement),
        ),

        argumentList: $ => choice(
            '',
            $.nonEmptyArgList,
        ),

        nonEmptyArgList: $ => choice(
            $.argument,
            seq($.nonEmptyArgList, ',', $.argument),
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
            seq($.name, '=', $.expression),
        ),

        expressionList: $ => choice(
            '',
            $.expression,
            seq($.expressionList, ',', $.expression),
        ),

        annotationBody: $ => choice(
            '',
            seq($.annotationBody, '(', $.annotationBody, ')'),
            seq($.annotationBody, $.annotationToken),
        ),

        structuredAnnotationBody: $ => choice(
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
            // seq('{', $.expressionList, '}'),
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
            // seq($.expression, '<', $.realTypeArgumentList, '>', '(', $.argumentList, ')'),
            // seq($.expression, '(', $.argumentList, ')'),
            // seq($.namedType, '(', $.argumentList, ')'),
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
            seq($.nonBraceExpression, '<', $.realTypeArgumentList, '>', '(', $.argumentList, ')'),
            seq($.nonBraceExpression, '(', $.argumentList, ')'),
            seq($.namedType, '(', $.argumentList, ')'),
            seq('(', $.typeRef, ')', $.expression),
        ),

        integer: $ => /(\d+([wWsS]))?\d+(([xX][0-9A-F_]+)|([bB][0-1_]+)|([oO][0-7_]+)|([dD][0-9_]+))?/,

        string: $ => /"(\\.|[^"\\])*"/,


        prec: $ => $.identifier,

        identifier: $ => /(_|[a-zA-Z])\w*/,

        typeIdentifier: $ => $.identifier,

    }
});
