#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 410
#define LARGE_STATE_COUNT 12
#define SYMBOL_COUNT 160
#define ALIAS_COUNT 0
#define TOKEN_COUNT 92
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_source_file_token1 = 1,
  anon_sym_apply = 2,
  anon_sym_key = 3,
  anon_sym_actions = 4,
  anon_sym_state = 5,
  anon_sym_entries = 6,
  anon_sym_type = 7,
  anon_sym_ = 8,
  anon_sym_AT = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  anon_sym_LBRACK = 12,
  anon_sym_RBRACK = 13,
  anon_sym_COMMA = 14,
  anon_sym_EQ = 15,
  anon_sym_in = 16,
  anon_sym_out = 17,
  anon_sym_inout = 18,
  anon_sym_package = 19,
  anon_sym_SEMI = 20,
  anon_sym_LBRACE = 21,
  anon_sym_RBRACE = 22,
  anon_sym_DOT = 23,
  anon_sym_parser = 24,
  anon_sym_transition = 25,
  anon_sym_select = 26,
  anon_sym_COLON = 27,
  anon_sym_AMP_AMP_AMP = 28,
  anon_sym_DOT_DOT = 29,
  anon_sym_default = 30,
  anon_sym__ = 31,
  anon_sym_valueset = 32,
  anon_sym_LT = 33,
  anon_sym_GT = 34,
  anon_sym_control = 35,
  anon_sym_extern = 36,
  anon_sym_tuple = 37,
  anon_sym_bool = 38,
  anon_sym_error = 39,
  anon_sym_match_kind = 40,
  anon_sym_string = 41,
  anon_sym_int = 42,
  anon_sym_bit = 43,
  anon_sym_varbit = 44,
  anon_sym_void = 45,
  anon_sym_comma = 46,
  anon_sym_header = 47,
  anon_sym_header_union = 48,
  anon_sym_struct = 49,
  anon_sym_enum = 50,
  anon_sym_typedef = 51,
  anon_sym_return = 52,
  anon_sym_exit = 53,
  anon_sym_if = 54,
  anon_sym_else = 55,
  anon_sym_switch = 56,
  anon_sym_table = 57,
  anon_sym_const = 58,
  anon_sym_action = 59,
  anon_sym_abstract = 60,
  anon_sym_false = 61,
  anon_sym_pragma = 62,
  anon_sym_true = 63,
  anon_sym_LT_LT = 64,
  anon_sym_AMP_AMP = 65,
  anon_sym_PIPE_PIPE = 66,
  anon_sym_EQ_EQ = 67,
  anon_sym_BANG_EQ = 68,
  anon_sym_GT_EQ = 69,
  anon_sym_LT_EQ = 70,
  anon_sym_PLUS_PLUS = 71,
  anon_sym_PLUS = 72,
  anon_sym_PIPE_PLUS_PIPE = 73,
  anon_sym_DASH = 74,
  anon_sym_PIPE_DASH_PIPE = 75,
  anon_sym_STAR = 76,
  anon_sym_SLASH = 77,
  anon_sym_PERCENT = 78,
  anon_sym_PIPE = 79,
  anon_sym_AMP = 80,
  anon_sym_CARET = 81,
  anon_sym_TILDE = 82,
  anon_sym_BANG = 83,
  anon_sym_QMARK = 84,
  anon_sym_unknown_token = 85,
  anon_sym_this = 86,
  anon_sym_prefix = 87,
  anon_sym_GT_GT = 88,
  sym_integer = 89,
  sym_string = 90,
  sym_identifier = 91,
  sym_source_file = 92,
  sym__declaration = 93,
  sym_nonTypeName = 94,
  sym_name = 95,
  sym_optAnnotations = 96,
  sym_annotations = 97,
  sym_annotation = 98,
  sym_parameterList = 99,
  sym_nonEmptyParameterList = 100,
  sym_parameter = 101,
  sym_direction = 102,
  sym_dotPrefix = 103,
  sym_externDeclaration = 104,
  sym_methodPrototypes = 105,
  sym_functionPrototype = 106,
  sym_methodPrototype = 107,
  sym_typeRef = 108,
  sym_namedType = 109,
  sym_prefixedType = 110,
  sym_typeName = 111,
  sym_tupleType = 112,
  sym_headerStackType = 113,
  sym_specializedType = 114,
  sym_baseType = 115,
  sym_typeOrVoid = 116,
  sym_optTypeParameters = 117,
  sym_typeParameters = 118,
  sym_typeParameterList = 119,
  sym_realTypeArg = 120,
  sym_typeArg = 121,
  sym_realTypeArgumentList = 122,
  sym_typeArgumentList = 123,
  sym_assignmentOrMethodCallStatement = 124,
  sym_emptyStatement = 125,
  sym_returnStatement = 126,
  sym_exitStatement = 127,
  sym_conditionalStatement = 128,
  sym_directApplication = 129,
  sym_statement = 130,
  sym_blockStatement = 131,
  sym_statOrDeclList = 132,
  sym_switchStatement = 133,
  sym_switchCases = 134,
  sym_switchCase = 135,
  sym_switchLabel = 136,
  sym_statementOrDeclaration = 137,
  sym_actionDeclaration = 138,
  sym_variableDeclaration = 139,
  sym_constantDeclaration = 140,
  sym_optInitializer = 141,
  sym_initializer = 142,
  sym_argumentList = 143,
  sym_nonEmptyArgList = 144,
  sym_argument = 145,
  sym_kvList = 146,
  sym_kvPair = 147,
  sym_expressionList = 148,
  sym_annotationBody = 149,
  sym_structuredAnnotationBody = 150,
  sym_annotationToken = 151,
  sym_member = 152,
  sym_prefixedNonTypeName = 153,
  sym_lvalue = 154,
  sym_expression = 155,
  sym_nonBraceExpression = 156,
  sym_prec = 157,
  sym_typeIdentifier = 158,
  aux_sym_source_file_repeat1 = 159,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_file_token1] = "source_file_token1",
  [anon_sym_apply] = "apply",
  [anon_sym_key] = "key",
  [anon_sym_actions] = "actions",
  [anon_sym_state] = "state",
  [anon_sym_entries] = "entries",
  [anon_sym_type] = "type",
  [anon_sym_] = "",
  [anon_sym_AT] = "@",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COMMA] = ",",
  [anon_sym_EQ] = "=",
  [anon_sym_in] = "in",
  [anon_sym_out] = "out",
  [anon_sym_inout] = "inout",
  [anon_sym_package] = "package",
  [anon_sym_SEMI] = ";",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DOT] = ".",
  [anon_sym_parser] = "parser",
  [anon_sym_transition] = "transition",
  [anon_sym_select] = "select",
  [anon_sym_COLON] = ":",
  [anon_sym_AMP_AMP_AMP] = "&&&",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_default] = "default",
  [anon_sym__] = "_",
  [anon_sym_valueset] = "valueset",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_control] = "control",
  [anon_sym_extern] = "extern",
  [anon_sym_tuple] = "tuple",
  [anon_sym_bool] = "bool",
  [anon_sym_error] = "error",
  [anon_sym_match_kind] = "match_kind",
  [anon_sym_string] = "string",
  [anon_sym_int] = "int",
  [anon_sym_bit] = "bit",
  [anon_sym_varbit] = "varbit",
  [anon_sym_void] = "void",
  [anon_sym_comma] = "comma",
  [anon_sym_header] = "header",
  [anon_sym_header_union] = "header_union",
  [anon_sym_struct] = "struct",
  [anon_sym_enum] = "enum",
  [anon_sym_typedef] = "typedef",
  [anon_sym_return] = "return",
  [anon_sym_exit] = "exit",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_switch] = "switch",
  [anon_sym_table] = "table",
  [anon_sym_const] = "const",
  [anon_sym_action] = "action",
  [anon_sym_abstract] = "abstract",
  [anon_sym_false] = "false",
  [anon_sym_pragma] = "pragma",
  [anon_sym_true] = "true",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_PLUS] = "+",
  [anon_sym_PIPE_PLUS_PIPE] = "|+|",
  [anon_sym_DASH] = "-",
  [anon_sym_PIPE_DASH_PIPE] = "|-|",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PIPE] = "|",
  [anon_sym_AMP] = "&",
  [anon_sym_CARET] = "^",
  [anon_sym_TILDE] = "~",
  [anon_sym_BANG] = "!",
  [anon_sym_QMARK] = "\?",
  [anon_sym_unknown_token] = "unknown_token",
  [anon_sym_this] = "this",
  [anon_sym_prefix] = "prefix",
  [anon_sym_GT_GT] = ">>",
  [sym_integer] = "integer",
  [sym_string] = "string",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym__declaration] = "_declaration",
  [sym_nonTypeName] = "nonTypeName",
  [sym_name] = "name",
  [sym_optAnnotations] = "optAnnotations",
  [sym_annotations] = "annotations",
  [sym_annotation] = "annotation",
  [sym_parameterList] = "parameterList",
  [sym_nonEmptyParameterList] = "nonEmptyParameterList",
  [sym_parameter] = "parameter",
  [sym_direction] = "direction",
  [sym_dotPrefix] = "dotPrefix",
  [sym_externDeclaration] = "externDeclaration",
  [sym_methodPrototypes] = "methodPrototypes",
  [sym_functionPrototype] = "functionPrototype",
  [sym_methodPrototype] = "methodPrototype",
  [sym_typeRef] = "typeRef",
  [sym_namedType] = "namedType",
  [sym_prefixedType] = "prefixedType",
  [sym_typeName] = "typeName",
  [sym_tupleType] = "tupleType",
  [sym_headerStackType] = "headerStackType",
  [sym_specializedType] = "specializedType",
  [sym_baseType] = "baseType",
  [sym_typeOrVoid] = "typeOrVoid",
  [sym_optTypeParameters] = "optTypeParameters",
  [sym_typeParameters] = "typeParameters",
  [sym_typeParameterList] = "typeParameterList",
  [sym_realTypeArg] = "realTypeArg",
  [sym_typeArg] = "typeArg",
  [sym_realTypeArgumentList] = "realTypeArgumentList",
  [sym_typeArgumentList] = "typeArgumentList",
  [sym_assignmentOrMethodCallStatement] = "assignmentOrMethodCallStatement",
  [sym_emptyStatement] = "emptyStatement",
  [sym_returnStatement] = "returnStatement",
  [sym_exitStatement] = "exitStatement",
  [sym_conditionalStatement] = "conditionalStatement",
  [sym_directApplication] = "directApplication",
  [sym_statement] = "statement",
  [sym_blockStatement] = "blockStatement",
  [sym_statOrDeclList] = "statOrDeclList",
  [sym_switchStatement] = "switchStatement",
  [sym_switchCases] = "switchCases",
  [sym_switchCase] = "switchCase",
  [sym_switchLabel] = "switchLabel",
  [sym_statementOrDeclaration] = "statementOrDeclaration",
  [sym_actionDeclaration] = "actionDeclaration",
  [sym_variableDeclaration] = "variableDeclaration",
  [sym_constantDeclaration] = "constantDeclaration",
  [sym_optInitializer] = "optInitializer",
  [sym_initializer] = "initializer",
  [sym_argumentList] = "argumentList",
  [sym_nonEmptyArgList] = "nonEmptyArgList",
  [sym_argument] = "argument",
  [sym_kvList] = "kvList",
  [sym_kvPair] = "kvPair",
  [sym_expressionList] = "expressionList",
  [sym_annotationBody] = "annotationBody",
  [sym_structuredAnnotationBody] = "structuredAnnotationBody",
  [sym_annotationToken] = "annotationToken",
  [sym_member] = "member",
  [sym_prefixedNonTypeName] = "prefixedNonTypeName",
  [sym_lvalue] = "lvalue",
  [sym_expression] = "expression",
  [sym_nonBraceExpression] = "nonBraceExpression",
  [sym_prec] = "prec",
  [sym_typeIdentifier] = "typeIdentifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_file_token1] = aux_sym_source_file_token1,
  [anon_sym_apply] = anon_sym_apply,
  [anon_sym_key] = anon_sym_key,
  [anon_sym_actions] = anon_sym_actions,
  [anon_sym_state] = anon_sym_state,
  [anon_sym_entries] = anon_sym_entries,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_] = anon_sym_,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_out] = anon_sym_out,
  [anon_sym_inout] = anon_sym_inout,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_parser] = anon_sym_parser,
  [anon_sym_transition] = anon_sym_transition,
  [anon_sym_select] = anon_sym_select,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_AMP_AMP_AMP] = anon_sym_AMP_AMP_AMP,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_default] = anon_sym_default,
  [anon_sym__] = anon_sym__,
  [anon_sym_valueset] = anon_sym_valueset,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_control] = anon_sym_control,
  [anon_sym_extern] = anon_sym_extern,
  [anon_sym_tuple] = anon_sym_tuple,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_error] = anon_sym_error,
  [anon_sym_match_kind] = anon_sym_match_kind,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_bit] = anon_sym_bit,
  [anon_sym_varbit] = anon_sym_varbit,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_comma] = anon_sym_comma,
  [anon_sym_header] = anon_sym_header,
  [anon_sym_header_union] = anon_sym_header_union,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_typedef] = anon_sym_typedef,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_exit] = anon_sym_exit,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_switch] = anon_sym_switch,
  [anon_sym_table] = anon_sym_table,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_action] = anon_sym_action,
  [anon_sym_abstract] = anon_sym_abstract,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_pragma] = anon_sym_pragma,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_PLUS_PLUS] = anon_sym_PLUS_PLUS,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_PIPE_PLUS_PIPE] = anon_sym_PIPE_PLUS_PIPE,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PIPE_DASH_PIPE] = anon_sym_PIPE_DASH_PIPE,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_unknown_token] = anon_sym_unknown_token,
  [anon_sym_this] = anon_sym_this,
  [anon_sym_prefix] = anon_sym_prefix,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [sym_integer] = sym_integer,
  [sym_string] = sym_string,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym__declaration] = sym__declaration,
  [sym_nonTypeName] = sym_nonTypeName,
  [sym_name] = sym_name,
  [sym_optAnnotations] = sym_optAnnotations,
  [sym_annotations] = sym_annotations,
  [sym_annotation] = sym_annotation,
  [sym_parameterList] = sym_parameterList,
  [sym_nonEmptyParameterList] = sym_nonEmptyParameterList,
  [sym_parameter] = sym_parameter,
  [sym_direction] = sym_direction,
  [sym_dotPrefix] = sym_dotPrefix,
  [sym_externDeclaration] = sym_externDeclaration,
  [sym_methodPrototypes] = sym_methodPrototypes,
  [sym_functionPrototype] = sym_functionPrototype,
  [sym_methodPrototype] = sym_methodPrototype,
  [sym_typeRef] = sym_typeRef,
  [sym_namedType] = sym_namedType,
  [sym_prefixedType] = sym_prefixedType,
  [sym_typeName] = sym_typeName,
  [sym_tupleType] = sym_tupleType,
  [sym_headerStackType] = sym_headerStackType,
  [sym_specializedType] = sym_specializedType,
  [sym_baseType] = sym_baseType,
  [sym_typeOrVoid] = sym_typeOrVoid,
  [sym_optTypeParameters] = sym_optTypeParameters,
  [sym_typeParameters] = sym_typeParameters,
  [sym_typeParameterList] = sym_typeParameterList,
  [sym_realTypeArg] = sym_realTypeArg,
  [sym_typeArg] = sym_typeArg,
  [sym_realTypeArgumentList] = sym_realTypeArgumentList,
  [sym_typeArgumentList] = sym_typeArgumentList,
  [sym_assignmentOrMethodCallStatement] = sym_assignmentOrMethodCallStatement,
  [sym_emptyStatement] = sym_emptyStatement,
  [sym_returnStatement] = sym_returnStatement,
  [sym_exitStatement] = sym_exitStatement,
  [sym_conditionalStatement] = sym_conditionalStatement,
  [sym_directApplication] = sym_directApplication,
  [sym_statement] = sym_statement,
  [sym_blockStatement] = sym_blockStatement,
  [sym_statOrDeclList] = sym_statOrDeclList,
  [sym_switchStatement] = sym_switchStatement,
  [sym_switchCases] = sym_switchCases,
  [sym_switchCase] = sym_switchCase,
  [sym_switchLabel] = sym_switchLabel,
  [sym_statementOrDeclaration] = sym_statementOrDeclaration,
  [sym_actionDeclaration] = sym_actionDeclaration,
  [sym_variableDeclaration] = sym_variableDeclaration,
  [sym_constantDeclaration] = sym_constantDeclaration,
  [sym_optInitializer] = sym_optInitializer,
  [sym_initializer] = sym_initializer,
  [sym_argumentList] = sym_argumentList,
  [sym_nonEmptyArgList] = sym_nonEmptyArgList,
  [sym_argument] = sym_argument,
  [sym_kvList] = sym_kvList,
  [sym_kvPair] = sym_kvPair,
  [sym_expressionList] = sym_expressionList,
  [sym_annotationBody] = sym_annotationBody,
  [sym_structuredAnnotationBody] = sym_structuredAnnotationBody,
  [sym_annotationToken] = sym_annotationToken,
  [sym_member] = sym_member,
  [sym_prefixedNonTypeName] = sym_prefixedNonTypeName,
  [sym_lvalue] = sym_lvalue,
  [sym_expression] = sym_expression,
  [sym_nonBraceExpression] = sym_nonBraceExpression,
  [sym_prec] = sym_prec,
  [sym_typeIdentifier] = sym_typeIdentifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_apply] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_key] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_actions] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_state] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_entries] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_out] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_parser] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_transition] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_select] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_valueset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_control] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extern] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tuple] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_error] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_match_kind] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_varbit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_comma] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_header] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_header_union] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_typedef] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_switch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_table] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_action] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_abstract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pragma] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PLUS_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_DASH_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unknown_token] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_this] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prefix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_nonTypeName] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_optAnnotations] = {
    .visible = true,
    .named = true,
  },
  [sym_annotations] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_parameterList] = {
    .visible = true,
    .named = true,
  },
  [sym_nonEmptyParameterList] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_direction] = {
    .visible = true,
    .named = true,
  },
  [sym_dotPrefix] = {
    .visible = true,
    .named = true,
  },
  [sym_externDeclaration] = {
    .visible = true,
    .named = true,
  },
  [sym_methodPrototypes] = {
    .visible = true,
    .named = true,
  },
  [sym_functionPrototype] = {
    .visible = true,
    .named = true,
  },
  [sym_methodPrototype] = {
    .visible = true,
    .named = true,
  },
  [sym_typeRef] = {
    .visible = true,
    .named = true,
  },
  [sym_namedType] = {
    .visible = true,
    .named = true,
  },
  [sym_prefixedType] = {
    .visible = true,
    .named = true,
  },
  [sym_typeName] = {
    .visible = true,
    .named = true,
  },
  [sym_tupleType] = {
    .visible = true,
    .named = true,
  },
  [sym_headerStackType] = {
    .visible = true,
    .named = true,
  },
  [sym_specializedType] = {
    .visible = true,
    .named = true,
  },
  [sym_baseType] = {
    .visible = true,
    .named = true,
  },
  [sym_typeOrVoid] = {
    .visible = true,
    .named = true,
  },
  [sym_optTypeParameters] = {
    .visible = true,
    .named = true,
  },
  [sym_typeParameters] = {
    .visible = true,
    .named = true,
  },
  [sym_typeParameterList] = {
    .visible = true,
    .named = true,
  },
  [sym_realTypeArg] = {
    .visible = true,
    .named = true,
  },
  [sym_typeArg] = {
    .visible = true,
    .named = true,
  },
  [sym_realTypeArgumentList] = {
    .visible = true,
    .named = true,
  },
  [sym_typeArgumentList] = {
    .visible = true,
    .named = true,
  },
  [sym_assignmentOrMethodCallStatement] = {
    .visible = true,
    .named = true,
  },
  [sym_emptyStatement] = {
    .visible = true,
    .named = true,
  },
  [sym_returnStatement] = {
    .visible = true,
    .named = true,
  },
  [sym_exitStatement] = {
    .visible = true,
    .named = true,
  },
  [sym_conditionalStatement] = {
    .visible = true,
    .named = true,
  },
  [sym_directApplication] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_blockStatement] = {
    .visible = true,
    .named = true,
  },
  [sym_statOrDeclList] = {
    .visible = true,
    .named = true,
  },
  [sym_switchStatement] = {
    .visible = true,
    .named = true,
  },
  [sym_switchCases] = {
    .visible = true,
    .named = true,
  },
  [sym_switchCase] = {
    .visible = true,
    .named = true,
  },
  [sym_switchLabel] = {
    .visible = true,
    .named = true,
  },
  [sym_statementOrDeclaration] = {
    .visible = true,
    .named = true,
  },
  [sym_actionDeclaration] = {
    .visible = true,
    .named = true,
  },
  [sym_variableDeclaration] = {
    .visible = true,
    .named = true,
  },
  [sym_constantDeclaration] = {
    .visible = true,
    .named = true,
  },
  [sym_optInitializer] = {
    .visible = true,
    .named = true,
  },
  [sym_initializer] = {
    .visible = true,
    .named = true,
  },
  [sym_argumentList] = {
    .visible = true,
    .named = true,
  },
  [sym_nonEmptyArgList] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_kvList] = {
    .visible = true,
    .named = true,
  },
  [sym_kvPair] = {
    .visible = true,
    .named = true,
  },
  [sym_expressionList] = {
    .visible = true,
    .named = true,
  },
  [sym_annotationBody] = {
    .visible = true,
    .named = true,
  },
  [sym_structuredAnnotationBody] = {
    .visible = true,
    .named = true,
  },
  [sym_annotationToken] = {
    .visible = true,
    .named = true,
  },
  [sym_member] = {
    .visible = true,
    .named = true,
  },
  [sym_prefixedNonTypeName] = {
    .visible = true,
    .named = true,
  },
  [sym_lvalue] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_nonBraceExpression] = {
    .visible = true,
    .named = true,
  },
  [sym_prec] = {
    .visible = true,
    .named = true,
  },
  [sym_typeIdentifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 2,
  [5] = 2,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 12,
  [14] = 12,
  [15] = 12,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 19,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 24,
  [27] = 27,
  [28] = 28,
  [29] = 27,
  [30] = 28,
  [31] = 25,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 16,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 40,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 16,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 56,
  [63] = 38,
  [64] = 44,
  [65] = 52,
  [66] = 41,
  [67] = 45,
  [68] = 51,
  [69] = 69,
  [70] = 70,
  [71] = 58,
  [72] = 72,
  [73] = 73,
  [74] = 39,
  [75] = 75,
  [76] = 76,
  [77] = 46,
  [78] = 43,
  [79] = 55,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 41,
  [84] = 84,
  [85] = 84,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 82,
  [90] = 90,
  [91] = 90,
  [92] = 92,
  [93] = 84,
  [94] = 84,
  [95] = 87,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 98,
  [101] = 101,
  [102] = 18,
  [103] = 18,
  [104] = 104,
  [105] = 105,
  [106] = 17,
  [107] = 107,
  [108] = 108,
  [109] = 16,
  [110] = 105,
  [111] = 111,
  [112] = 104,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 114,
  [122] = 108,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 115,
  [130] = 125,
  [131] = 131,
  [132] = 132,
  [133] = 116,
  [134] = 134,
  [135] = 113,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 16,
  [140] = 17,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 145,
  [147] = 16,
  [148] = 143,
  [149] = 144,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 162,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 162,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 162,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 166,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 184,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 16,
  [192] = 17,
  [193] = 108,
  [194] = 18,
  [195] = 195,
  [196] = 108,
  [197] = 16,
  [198] = 141,
  [199] = 199,
  [200] = 200,
  [201] = 141,
  [202] = 145,
  [203] = 203,
  [204] = 143,
  [205] = 205,
  [206] = 206,
  [207] = 144,
  [208] = 208,
  [209] = 16,
  [210] = 145,
  [211] = 211,
  [212] = 61,
  [213] = 213,
  [214] = 144,
  [215] = 211,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 143,
  [220] = 152,
  [221] = 131,
  [222] = 152,
  [223] = 223,
  [224] = 124,
  [225] = 225,
  [226] = 226,
  [227] = 126,
  [228] = 150,
  [229] = 154,
  [230] = 230,
  [231] = 231,
  [232] = 153,
  [233] = 142,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 18,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 246,
  [253] = 249,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 246,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 249,
  [264] = 264,
  [265] = 265,
  [266] = 264,
  [267] = 246,
  [268] = 268,
  [269] = 269,
  [270] = 18,
  [271] = 16,
  [272] = 17,
  [273] = 273,
  [274] = 260,
  [275] = 275,
  [276] = 178,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 168,
  [281] = 281,
  [282] = 281,
  [283] = 245,
  [284] = 275,
  [285] = 169,
  [286] = 161,
  [287] = 287,
  [288] = 179,
  [289] = 289,
  [290] = 172,
  [291] = 291,
  [292] = 247,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 16,
  [299] = 299,
  [300] = 17,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 249,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 313,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 18,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 314,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 322,
  [342] = 317,
  [343] = 343,
  [344] = 340,
  [345] = 319,
  [346] = 346,
  [347] = 320,
  [348] = 337,
  [349] = 349,
  [350] = 350,
  [351] = 350,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 338,
  [356] = 314,
  [357] = 357,
  [358] = 357,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 352,
  [363] = 363,
  [364] = 323,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 314,
  [371] = 325,
  [372] = 372,
  [373] = 373,
  [374] = 326,
  [375] = 334,
  [376] = 376,
  [377] = 308,
  [378] = 367,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 361,
  [388] = 388,
  [389] = 360,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 373,
  [394] = 353,
  [395] = 386,
  [396] = 360,
  [397] = 360,
  [398] = 385,
  [399] = 310,
  [400] = 328,
  [401] = 331,
  [402] = 354,
  [403] = 195,
  [404] = 404,
  [405] = 405,
  [406] = 69,
  [407] = 407,
  [408] = 41,
  [409] = 409,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 'f'
    ? (c < 'a'
      ? (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : c <= '_')
      : (c <= 'a' || (c >= 'c' && c <= 'd')))
    : (c <= 'h' || (c < 'u'
      ? (c < 'n'
        ? (c >= 'j' && c <= 'l')
        : c <= 'r')
      : (c <= 'u' || (c >= 'w' && c <= 'z')))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 'j'
    ? (c < 'c'
      ? (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : c <= '_')
      : (c <= 'd' || (c >= 'g' && c <= 'h')))
    : (c <= 'j' || (c < 'u'
      ? (c < 'n'
        ? c == 'l'
        : c <= 'r')
      : (c <= 'u' || (c >= 'w' && c <= 'z')))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 'f'
    ? (c < 'a'
      ? (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : c <= '_')
      : (c <= 'a' || c == 'd'))
    : (c <= 'h' || (c < 'u'
      ? (c < 'n'
        ? (c >= 'j' && c <= 'l')
        : c <= 'r')
      : (c <= 'u' || (c >= 'w' && c <= 'z')))));
}

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 'j'
    ? (c < 'c'
      ? (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : c <= '_')
      : (c <= 'd' || (c >= 'f' && c <= 'h')))
    : (c <= 'j' || (c < 'u'
      ? (c < 'n'
        ? c == 'l'
        : c <= 'r')
      : (c <= 'u' || (c >= 'w' && c <= 'z')))));
}

static inline bool sym_identifier_character_set_5(int32_t c) {
  return (c < 'j'
    ? (c < 'c'
      ? (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : c <= '_')
      : (c <= 'd' || (c >= 'f' && c <= 'h')))
    : (c <= 'j' || (c < 'u'
      ? (c < 'n'
        ? c == 'l'
        : c <= 'q')
      : (c <= 'u' || (c >= 'w' && c <= 'z')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(anon_sym_);
      if (eof) ADVANCE(54);
      if (lookahead == '!') ADVANCE(169);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '+') ADVANCE(156);
      if (lookahead == '-') ADVANCE(159);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(110);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(205);
      if (lookahead == 'b') ADVANCE(255);
      if (lookahead == 'd') ADVANCE(215);
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead == 'f') ADVANCE(185);
      if (lookahead == 'i') ADVANCE(238);
      if (lookahead == 'k') ADVANCE(216);
      if (lookahead == 'm') ADVANCE(196);
      if (lookahead == 'o') ADVANCE(373);
      if (lookahead == 'r') ADVANCE(230);
      if (lookahead == 's') ADVANCE(344);
      if (lookahead == 't') ADVANCE(248);
      if (lookahead == 'v') ADVANCE(189);
      if (lookahead == '}') ADVANCE(98);
      if (lookahead == '~') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(170);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '%') ADVANCE(163);
      if (lookahead == '&') ADVANCE(165);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '*') ADVANCE(161);
      if (lookahead == '+') ADVANCE(157);
      if (lookahead == ',') ADVANCE(86);
      if (lookahead == '-') ADVANCE(159);
      if (lookahead == '.') ADVANCE(100);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(111);
      if (lookahead == '=') ADVANCE(88);
      if (lookahead == '>') ADVANCE(113);
      if (lookahead == '?') ADVANCE(171);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == ']') ADVANCE(85);
      if (lookahead == '^') ADVANCE(167);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(202);
      if (lookahead == 'b') ADVANCE(255);
      if (lookahead == 'c') ADVANCE(312);
      if (lookahead == 'd') ADVANCE(215);
      if (lookahead == 'e') ADVANCE(272);
      if (lookahead == 'f') ADVANCE(185);
      if (lookahead == 'h') ADVANCE(228);
      if (lookahead == 'i') ADVANCE(238);
      if (lookahead == 'k') ADVANCE(216);
      if (lookahead == 'm') ADVANCE(196);
      if (lookahead == 'o') ADVANCE(373);
      if (lookahead == 'p') ADVANCE(186);
      if (lookahead == 'r') ADVANCE(230);
      if (lookahead == 's') ADVANCE(236);
      if (lookahead == 't') ADVANCE(191);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == 'v') ADVANCE(187);
      if (lookahead == '{') ADVANCE(97);
      if (lookahead == '|') ADVANCE(164);
      if (lookahead == '}') ADVANCE(98);
      if (lookahead == '~') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '%') ADVANCE(163);
      if (lookahead == '&') ADVANCE(166);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '*') ADVANCE(161);
      if (lookahead == '+') ADVANCE(157);
      if (lookahead == ',') ADVANCE(86);
      if (lookahead == '-') ADVANCE(159);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(111);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(114);
      if (lookahead == '?') ADVANCE(171);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == ']') ADVANCE(85);
      if (lookahead == '^') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      if (lookahead == '|') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '%') ADVANCE(163);
      if (lookahead == '&') ADVANCE(166);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == '*') ADVANCE(161);
      if (lookahead == '+') ADVANCE(157);
      if (lookahead == '-') ADVANCE(159);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == '<') ADVANCE(111);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(114);
      if (lookahead == '?') ADVANCE(171);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == '^') ADVANCE(167);
      if (lookahead == 'a') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead == '{') ADVANCE(97);
      if (lookahead == '|') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '%') ADVANCE(163);
      if (lookahead == '&') ADVANCE(166);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == '*') ADVANCE(161);
      if (lookahead == '+') ADVANCE(157);
      if (lookahead == '-') ADVANCE(159);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == '<') ADVANCE(111);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(114);
      if (lookahead == '?') ADVANCE(171);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == '^') ADVANCE(167);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(385);
      if (lookahead == 'b') ADVANCE(255);
      if (lookahead == 'e') ADVANCE(321);
      if (lookahead == 'i') ADVANCE(304);
      if (lookahead == 'm') ADVANCE(196);
      if (lookahead == 's') ADVANCE(370);
      if (lookahead == 't') ADVANCE(380);
      if (lookahead == 'v') ADVANCE(189);
      if (lookahead == '|') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == ',') ADVANCE(86);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == '>') ADVANCE(112);
      if (lookahead == ']') ADVANCE(85);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(205);
      if (lookahead == 'b') ADVANCE(255);
      if (lookahead == 'e') ADVANCE(297);
      if (lookahead == 'f') ADVANCE(185);
      if (lookahead == 'i') ADVANCE(304);
      if (lookahead == 'k') ADVANCE(216);
      if (lookahead == 'm') ADVANCE(196);
      if (lookahead == 's') ADVANCE(345);
      if (lookahead == 't') ADVANCE(248);
      if (lookahead == 'v') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '.') ADVANCE(99);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(385);
      if (lookahead == 'a') ADVANCE(205);
      if (lookahead == 'b') ADVANCE(255);
      if (lookahead == 'e') ADVANCE(297);
      if (lookahead == 'f') ADVANCE(185);
      if (lookahead == 'i') ADVANCE(304);
      if (lookahead == 'k') ADVANCE(216);
      if (lookahead == 'm') ADVANCE(196);
      if (lookahead == 's') ADVANCE(345);
      if (lookahead == 't') ADVANCE(248);
      if (lookahead == 'v') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == ';') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'd') ||
          ('g' <= lookahead && lookahead <= 'j') ||
          ('l' <= lookahead && lookahead <= 'r') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      if (lookahead == 'a') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(299);
      if (lookahead == 'f') ADVANCE(185);
      if (lookahead == 'k') ADVANCE(216);
      if (lookahead == 's') ADVANCE(369);
      if (lookahead == 't') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(182);
      if (lookahead == '\\') ADVANCE(53);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == ',') ADVANCE(86);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(110);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == '>') ADVANCE(112);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == ']') ADVANCE(85);
      if (lookahead == 'a') ADVANCE(17);
      if (lookahead == 'c') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == '{') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == ',') ADVANCE(86);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '<') ADVANCE(110);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == '>') ADVANCE(112);
      if (lookahead == '[') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'j') ||
          ('l' <= lookahead && lookahead <= 'r') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      if (lookahead == 'a') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(299);
      if (lookahead == 'k') ADVANCE(216);
      if (lookahead == 's') ADVANCE(369);
      if (lookahead == 't') ADVANCE(384);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead == '[') ADVANCE(84);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(385);
      if (lookahead == 'b') ADVANCE(255);
      if (lookahead == 'c') ADVANCE(316);
      if (lookahead == 'e') ADVANCE(321);
      if (lookahead == 'i') ADVANCE(304);
      if (lookahead == 'm') ADVANCE(196);
      if (lookahead == 's') ADVANCE(370);
      if (lookahead == 't') ADVANCE(380);
      if (lookahead == 'v') ADVANCE(190);
      if (lookahead == '{') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(99);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(385);
      if (lookahead == 'a') ADVANCE(205);
      if (lookahead == 'b') ADVANCE(255);
      if (lookahead == 'e') ADVANCE(297);
      if (lookahead == 'i') ADVANCE(304);
      if (lookahead == 'k') ADVANCE(216);
      if (lookahead == 'm') ADVANCE(196);
      if (lookahead == 's') ADVANCE(345);
      if (lookahead == 't') ADVANCE(379);
      if (lookahead == 'v') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(99);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(385);
      if (lookahead == 'b') ADVANCE(255);
      if (lookahead == 'e') ADVANCE(321);
      if (lookahead == 'i') ADVANCE(304);
      if (lookahead == 'm') ADVANCE(196);
      if (lookahead == 's') ADVANCE(370);
      if (lookahead == 't') ADVANCE(380);
      if (lookahead == 'v') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(152);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(151);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(36);
      if (lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 21:
      if (lookahead == 'f') ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 25:
      if (lookahead == 'm') ADVANCE(26);
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 26:
      if (lookahead == 'm') ADVANCE(16);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 32:
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 41:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 42:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 43:
      if (lookahead == 'x') ADVANCE(174);
      END_STATE();
    case 44:
      if (lookahead == 'x') ADVANCE(40);
      END_STATE();
    case 45:
      if (lookahead == 'y') ADVANCE(56);
      END_STATE();
    case 46:
      if (lookahead == '|') ADVANCE(158);
      END_STATE();
    case 47:
      if (lookahead == '|') ADVANCE(160);
      END_STATE();
    case 48:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(178);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(179);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(180);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_') ADVANCE(181);
      END_STATE();
    case 53:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_apply);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_apply);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_actions);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_state);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_entries);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == 'd') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '!') ADVANCE(169);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == '+') ADVANCE(156);
      if (lookahead == '-') ADVANCE(159);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '@') ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'b' ||
          lookahead == 'c' ||
          ('g' <= lookahead && lookahead <= 'j') ||
          ('l' <= lookahead && lookahead <= 'r') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      if (lookahead == 'a') ADVANCE(205);
      if (lookahead == 'd') ADVANCE(215);
      if (lookahead == 'e') ADVANCE(297);
      if (lookahead == 'f') ADVANCE(185);
      if (lookahead == 'k') ADVANCE(216);
      if (lookahead == 's') ADVANCE(369);
      if (lookahead == 't') ADVANCE(249);
      if (lookahead == '}') ADVANCE(98);
      if (lookahead == '~') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(299);
      if (lookahead == 'f') ADVANCE(185);
      if (lookahead == 'k') ADVANCE(216);
      if (lookahead == 's') ADVANCE(369);
      if (lookahead == 't') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '"') ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'd') ||
          ('g' <= lookahead && lookahead <= 'j') ||
          ('l' <= lookahead && lookahead <= 'r') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      if (lookahead == 'a') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(299);
      if (lookahead == 'f') ADVANCE(185);
      if (lookahead == 'k') ADVANCE(216);
      if (lookahead == 's') ADVANCE(369);
      if (lookahead == 't') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '@') ADVANCE(81);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(385);
      if (lookahead == 'a') ADVANCE(205);
      if (lookahead == 'b') ADVANCE(255);
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead == 'i') ADVANCE(239);
      if (lookahead == 'k') ADVANCE(216);
      if (lookahead == 'm') ADVANCE(196);
      if (lookahead == 'r') ADVANCE(230);
      if (lookahead == 's') ADVANCE(344);
      if (lookahead == 't') ADVANCE(250);
      if (lookahead == 'v') ADVANCE(190);
      if (lookahead == '}') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '@') ADVANCE(81);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(385);
      if (lookahead == 'a') ADVANCE(205);
      if (lookahead == 'b') ADVANCE(255);
      if (lookahead == 'e') ADVANCE(296);
      if (lookahead == 'i') ADVANCE(239);
      if (lookahead == 'k') ADVANCE(216);
      if (lookahead == 'm') ADVANCE(196);
      if (lookahead == 'r') ADVANCE(230);
      if (lookahead == 's') ADVANCE(344);
      if (lookahead == 't') ADVANCE(250);
      if (lookahead == 'v') ADVANCE(190);
      if (lookahead == '}') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '@') ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h') ||
          lookahead == 'j' ||
          ('l' <= lookahead && lookahead <= 'q') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      if (lookahead == 'a') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(298);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == 'k') ADVANCE(216);
      if (lookahead == 'r') ADVANCE(230);
      if (lookahead == 's') ADVANCE(368);
      if (lookahead == 't') ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(205);
      if (lookahead == 'b') ADVANCE(255);
      if (lookahead == 'e') ADVANCE(297);
      if (lookahead == 'i') ADVANCE(304);
      if (lookahead == 'k') ADVANCE(216);
      if (lookahead == 'm') ADVANCE(196);
      if (lookahead == 's') ADVANCE(345);
      if (lookahead == 't') ADVANCE(379);
      if (lookahead == 'v') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '<') ADVANCE(110);
      if (lookahead == '[') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'j') ||
          ('l' <= lookahead && lookahead <= 'r') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      if (lookahead == 'a') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(299);
      if (lookahead == 'k') ADVANCE(216);
      if (lookahead == 's') ADVANCE(369);
      if (lookahead == 't') ADVANCE(384);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '<') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead == '}') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_);
      if (eof) ADVANCE(54);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(151);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'o') ADVANCE(376);
      if (lookahead == 't') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_out);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_inout);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_inout);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_package);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(106);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_parser);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_transition);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_select);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_AMP_AMP_AMP);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_valueset);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(147);
      if (lookahead == '=') ADVANCE(154);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(153);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(153);
      if (lookahead == '>') ADVANCE(175);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_control);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_extern);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_tuple);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_error);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_match_kind);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_bit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_varbit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_comma);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_header);
      if (lookahead == '_') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_header_union);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_typedef);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_exit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_switch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_table);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_action);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_action);
      if (lookahead == 's') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_pragma);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      if (lookahead == '&') ADVANCE(105);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(155);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_PIPE_PLUS_PIPE);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_PIPE_DASH_PIPE);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '|') ADVANCE(150);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(149);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(148);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(152);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_unknown_token);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_this);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_prefix);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(48);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(51);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(49);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(52);
      if (lookahead == 'S' ||
          lookahead == 'W' ||
          lookahead == 's' ||
          lookahead == 'w') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(48);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(51);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(49);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_') ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(208);
      if (lookahead == 'r') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(282);
      if (lookahead == 'o') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(322);
      if (lookahead == 'o') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(204);
      if (lookahead == 'r') ADVANCE(200);
      if (lookahead == 'u') ADVANCE(318);
      if (lookahead == 'y') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(365);
      if (lookahead == 'r') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(365);
      if (lookahead == 'r') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(302);
      if (lookahead == 'u') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(343);
      if (lookahead == 'c') ADVANCE(366);
      if (lookahead == 'p') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(362);
      if (lookahead == 'p') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(268);
      if (lookahead == 'r') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(279);
      if (lookahead == 't') ADVANCE(197);
      if (lookahead == 'w') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(135);
      if (lookahead == 'n') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(135);
      if (lookahead == 'n') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(256);
      if (lookahead == 'r') ADVANCE(372);
      if (lookahead == 'u') ADVANCE(318);
      if (lookahead == 'y') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(256);
      if (lookahead == 'r') ADVANCE(372);
      if (lookahead == 'y') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(256);
      if (lookahead == 'u') ADVANCE(318);
      if (lookahead == 'y') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(256);
      if (lookahead == 'y') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(285);
      if (lookahead == 'u') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(346);
      if (lookahead == 'o') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(350);
      if (lookahead == 't') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(336);
      if (lookahead == 'n') ADVANCE(360);
      if (lookahead == 'r') ADVANCE(326);
      if (lookahead == 'x') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(336);
      if (lookahead == 'n') ADVANCE(361);
      if (lookahead == 'r') ADVANCE(326);
      if (lookahead == 'x') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(378);
      if (lookahead == 'r') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(361);
      if (lookahead == 'r') ADVANCE(326);
      if (lookahead == 'x') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(361);
      if (lookahead == 'r') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(361);
      if (lookahead == 'x') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(354);
      if (lookahead == 't') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(198);
      if (lookahead == 'w') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(329);
      if (lookahead == 'u') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(199);
      if (lookahead == 'w') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(318);
      if (lookahead == 'y') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 80},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 70},
  [13] = {.lex_state = 70},
  [14] = {.lex_state = 70},
  [15] = {.lex_state = 70},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 71},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 71},
  [22] = {.lex_state = 71},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 72},
  [25] = {.lex_state = 64},
  [26] = {.lex_state = 72},
  [27] = {.lex_state = 72},
  [28] = {.lex_state = 72},
  [29] = {.lex_state = 72},
  [30] = {.lex_state = 72},
  [31] = {.lex_state = 64},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 12},
  [34] = {.lex_state = 72},
  [35] = {.lex_state = 72},
  [36] = {.lex_state = 64},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 69},
  [39] = {.lex_state = 69},
  [40] = {.lex_state = 69},
  [41] = {.lex_state = 69},
  [42] = {.lex_state = 69},
  [43] = {.lex_state = 69},
  [44] = {.lex_state = 69},
  [45] = {.lex_state = 69},
  [46] = {.lex_state = 69},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 69},
  [52] = {.lex_state = 69},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 69},
  [56] = {.lex_state = 69},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 69},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 70},
  [63] = {.lex_state = 70},
  [64] = {.lex_state = 70},
  [65] = {.lex_state = 70},
  [66] = {.lex_state = 70},
  [67] = {.lex_state = 70},
  [68] = {.lex_state = 70},
  [69] = {.lex_state = 70},
  [70] = {.lex_state = 70},
  [71] = {.lex_state = 70},
  [72] = {.lex_state = 70},
  [73] = {.lex_state = 70},
  [74] = {.lex_state = 70},
  [75] = {.lex_state = 70},
  [76] = {.lex_state = 70},
  [77] = {.lex_state = 70},
  [78] = {.lex_state = 70},
  [79] = {.lex_state = 70},
  [80] = {.lex_state = 11},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 65},
  [83] = {.lex_state = 64},
  [84] = {.lex_state = 66},
  [85] = {.lex_state = 66},
  [86] = {.lex_state = 65},
  [87] = {.lex_state = 65},
  [88] = {.lex_state = 64},
  [89] = {.lex_state = 65},
  [90] = {.lex_state = 65},
  [91] = {.lex_state = 65},
  [92] = {.lex_state = 64},
  [93] = {.lex_state = 66},
  [94] = {.lex_state = 66},
  [95] = {.lex_state = 65},
  [96] = {.lex_state = 64},
  [97] = {.lex_state = 65},
  [98] = {.lex_state = 13},
  [99] = {.lex_state = 13},
  [100] = {.lex_state = 13},
  [101] = {.lex_state = 65},
  [102] = {.lex_state = 9},
  [103] = {.lex_state = 11},
  [104] = {.lex_state = 66},
  [105] = {.lex_state = 7},
  [106] = {.lex_state = 11},
  [107] = {.lex_state = 65},
  [108] = {.lex_state = 11},
  [109] = {.lex_state = 11},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 66},
  [112] = {.lex_state = 66},
  [113] = {.lex_state = 66},
  [114] = {.lex_state = 66},
  [115] = {.lex_state = 66},
  [116] = {.lex_state = 66},
  [117] = {.lex_state = 66},
  [118] = {.lex_state = 66},
  [119] = {.lex_state = 66},
  [120] = {.lex_state = 66},
  [121] = {.lex_state = 66},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 66},
  [124] = {.lex_state = 10},
  [125] = {.lex_state = 66},
  [126] = {.lex_state = 10},
  [127] = {.lex_state = 66},
  [128] = {.lex_state = 66},
  [129] = {.lex_state = 66},
  [130] = {.lex_state = 66},
  [131] = {.lex_state = 10},
  [132] = {.lex_state = 66},
  [133] = {.lex_state = 66},
  [134] = {.lex_state = 66},
  [135] = {.lex_state = 66},
  [136] = {.lex_state = 66},
  [137] = {.lex_state = 66},
  [138] = {.lex_state = 66},
  [139] = {.lex_state = 9},
  [140] = {.lex_state = 9},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 10},
  [143] = {.lex_state = 11},
  [144] = {.lex_state = 11},
  [145] = {.lex_state = 11},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 10},
  [148] = {.lex_state = 4},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 10},
  [151] = {.lex_state = 80},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 10},
  [154] = {.lex_state = 10},
  [155] = {.lex_state = 80},
  [156] = {.lex_state = 10},
  [157] = {.lex_state = 10},
  [158] = {.lex_state = 10},
  [159] = {.lex_state = 10},
  [160] = {.lex_state = 10},
  [161] = {.lex_state = 10},
  [162] = {.lex_state = 10},
  [163] = {.lex_state = 10},
  [164] = {.lex_state = 10},
  [165] = {.lex_state = 10},
  [166] = {.lex_state = 10},
  [167] = {.lex_state = 10},
  [168] = {.lex_state = 10},
  [169] = {.lex_state = 10},
  [170] = {.lex_state = 10},
  [171] = {.lex_state = 10},
  [172] = {.lex_state = 10},
  [173] = {.lex_state = 10},
  [174] = {.lex_state = 10},
  [175] = {.lex_state = 73},
  [176] = {.lex_state = 10},
  [177] = {.lex_state = 13},
  [178] = {.lex_state = 10},
  [179] = {.lex_state = 10},
  [180] = {.lex_state = 10},
  [181] = {.lex_state = 10},
  [182] = {.lex_state = 10},
  [183] = {.lex_state = 10},
  [184] = {.lex_state = 10},
  [185] = {.lex_state = 10},
  [186] = {.lex_state = 80},
  [187] = {.lex_state = 80},
  [188] = {.lex_state = 80},
  [189] = {.lex_state = 77},
  [190] = {.lex_state = 10},
  [191] = {.lex_state = 67},
  [192] = {.lex_state = 67},
  [193] = {.lex_state = 3},
  [194] = {.lex_state = 67},
  [195] = {.lex_state = 10},
  [196] = {.lex_state = 67},
  [197] = {.lex_state = 9},
  [198] = {.lex_state = 3},
  [199] = {.lex_state = 80},
  [200] = {.lex_state = 80},
  [201] = {.lex_state = 76},
  [202] = {.lex_state = 76},
  [203] = {.lex_state = 68},
  [204] = {.lex_state = 76},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 76},
  [208] = {.lex_state = 78},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 3},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 3},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 3},
  [220] = {.lex_state = 3},
  [221] = {.lex_state = 9},
  [222] = {.lex_state = 78},
  [223] = {.lex_state = 5},
  [224] = {.lex_state = 9},
  [225] = {.lex_state = 74},
  [226] = {.lex_state = 74},
  [227] = {.lex_state = 9},
  [228] = {.lex_state = 9},
  [229] = {.lex_state = 9},
  [230] = {.lex_state = 77},
  [231] = {.lex_state = 9},
  [232] = {.lex_state = 9},
  [233] = {.lex_state = 9},
  [234] = {.lex_state = 77},
  [235] = {.lex_state = 80},
  [236] = {.lex_state = 75},
  [237] = {.lex_state = 77},
  [238] = {.lex_state = 75},
  [239] = {.lex_state = 5},
  [240] = {.lex_state = 3},
  [241] = {.lex_state = 77},
  [242] = {.lex_state = 1},
  [243] = {.lex_state = 75},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 5},
  [246] = {.lex_state = 79},
  [247] = {.lex_state = 2},
  [248] = {.lex_state = 1},
  [249] = {.lex_state = 79},
  [250] = {.lex_state = 2},
  [251] = {.lex_state = 1},
  [252] = {.lex_state = 79},
  [253] = {.lex_state = 79},
  [254] = {.lex_state = 1},
  [255] = {.lex_state = 9},
  [256] = {.lex_state = 9},
  [257] = {.lex_state = 9},
  [258] = {.lex_state = 1},
  [259] = {.lex_state = 79},
  [260] = {.lex_state = 79},
  [261] = {.lex_state = 1},
  [262] = {.lex_state = 9},
  [263] = {.lex_state = 79},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 1},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 79},
  [268] = {.lex_state = 79},
  [269] = {.lex_state = 1},
  [270] = {.lex_state = 74},
  [271] = {.lex_state = 74},
  [272] = {.lex_state = 74},
  [273] = {.lex_state = 5},
  [274] = {.lex_state = 79},
  [275] = {.lex_state = 5},
  [276] = {.lex_state = 9},
  [277] = {.lex_state = 5},
  [278] = {.lex_state = 5},
  [279] = {.lex_state = 79},
  [280] = {.lex_state = 9},
  [281] = {.lex_state = 5},
  [282] = {.lex_state = 5},
  [283] = {.lex_state = 5},
  [284] = {.lex_state = 5},
  [285] = {.lex_state = 9},
  [286] = {.lex_state = 9},
  [287] = {.lex_state = 1},
  [288] = {.lex_state = 9},
  [289] = {.lex_state = 1},
  [290] = {.lex_state = 9},
  [291] = {.lex_state = 1},
  [292] = {.lex_state = 2},
  [293] = {.lex_state = 1},
  [294] = {.lex_state = 1},
  [295] = {.lex_state = 1},
  [296] = {.lex_state = 1},
  [297] = {.lex_state = 1},
  [298] = {.lex_state = 75},
  [299] = {.lex_state = 1},
  [300] = {.lex_state = 75},
  [301] = {.lex_state = 1},
  [302] = {.lex_state = 5},
  [303] = {.lex_state = 5},
  [304] = {.lex_state = 3},
  [305] = {.lex_state = 1},
  [306] = {.lex_state = 79},
  [307] = {.lex_state = 1},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 1},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 5},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 3},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 2},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 1},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 5},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 1},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 5},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 1},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 5},
  [356] = {.lex_state = 1},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 1},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 1},
  [364] = {.lex_state = 3},
  [365] = {.lex_state = 1},
  [366] = {.lex_state = 1},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 1},
  [370] = {.lex_state = 1},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 1},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 1},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 1},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 3},
  [383] = {.lex_state = 3},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 1},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 1},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 1},
  [397] = {.lex_state = 1},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 2},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_file_token1] = ACTIONS(3),
    [anon_sym_apply] = ACTIONS(1),
    [anon_sym_key] = ACTIONS(1),
    [anon_sym_actions] = ACTIONS(1),
    [anon_sym_state] = ACTIONS(1),
    [anon_sym_entries] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_out] = ACTIONS(1),
    [anon_sym_inout] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_tuple] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_error] = ACTIONS(1),
    [anon_sym_match_kind] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_bit] = ACTIONS(1),
    [anon_sym_varbit] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_exit] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_switch] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_this] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(384),
    [sym__declaration] = STATE(409),
    [sym_optAnnotations] = STATE(240),
    [sym_annotations] = STATE(198),
    [sym_annotation] = STATE(219),
    [sym_externDeclaration] = STATE(409),
    [sym_actionDeclaration] = STATE(409),
    [sym_constantDeclaration] = STATE(409),
    [aux_sym_source_file_repeat1] = STATE(151),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_source_file_token1] = ACTIONS(3),
    [anon_sym_] = ACTIONS(7),
    [anon_sym_AT] = ACTIONS(9),
  },
  [2] = {
    [sym_annotationToken] = STATE(7),
    [sym_typeIdentifier] = STATE(9),
    [aux_sym_source_file_token1] = ACTIONS(3),
    [anon_sym_apply] = ACTIONS(11),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_actions] = ACTIONS(11),
    [anon_sym_state] = ACTIONS(11),
    [anon_sym_entries] = ACTIONS(11),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(11),
    [anon_sym_in] = ACTIONS(11),
    [anon_sym_out] = ACTIONS(11),
    [anon_sym_inout] = ACTIONS(11),
    [anon_sym_package] = ACTIONS(11),
    [anon_sym_SEMI] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_parser] = ACTIONS(11),
    [anon_sym_transition] = ACTIONS(11),
    [anon_sym_select] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_AMP_AMP_AMP] = ACTIONS(13),
    [anon_sym_DOT_DOT] = ACTIONS(13),
    [anon_sym_default] = ACTIONS(11),
    [anon_sym__] = ACTIONS(11),
    [anon_sym_valueset] = ACTIONS(11),
    [anon_sym_LT] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_control] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(11),
    [anon_sym_tuple] = ACTIONS(11),
    [anon_sym_bool] = ACTIONS(11),
    [anon_sym_error] = ACTIONS(11),
    [anon_sym_match_kind] = ACTIONS(11),
    [anon_sym_string] = ACTIONS(11),
    [anon_sym_int] = ACTIONS(11),
    [anon_sym_bit] = ACTIONS(11),
    [anon_sym_varbit] = ACTIONS(11),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_header] = ACTIONS(11),
    [anon_sym_header_union] = ACTIONS(11),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_typedef] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_exit] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(11),
    [anon_sym_switch] = ACTIONS(11),
    [anon_sym_table] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_action] = ACTIONS(11),
    [anon_sym_abstract] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
    [anon_sym_pragma] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_LT_LT] = ACTIONS(13),
    [anon_sym_AMP_AMP] = ACTIONS(11),
    [anon_sym_PIPE_PIPE] = ACTIONS(13),
    [anon_sym_EQ_EQ] = ACTIONS(13),
    [anon_sym_BANG_EQ] = ACTIONS(13),
    [anon_sym_GT_EQ] = ACTIONS(13),
    [anon_sym_LT_EQ] = ACTIONS(13),
    [anon_sym_PLUS_PLUS] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_PIPE_PLUS_PIPE] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_PIPE_DASH_PIPE] = ACTIONS(13),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_SLASH] = ACTIONS(13),
    [anon_sym_PERCENT] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(11),
    [anon_sym_AMP] = ACTIONS(11),
    [anon_sym_CARET] = ACTIONS(13),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_QMARK] = ACTIONS(13),
    [anon_sym_unknown_token] = ACTIONS(11),
    [sym_integer] = ACTIONS(13),
    [sym_string] = ACTIONS(13),
    [sym_identifier] = ACTIONS(19),
  },
  [3] = {
    [sym_annotationToken] = STATE(7),
    [sym_typeIdentifier] = STATE(9),
    [aux_sym_source_file_token1] = ACTIONS(3),
    [anon_sym_apply] = ACTIONS(11),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_actions] = ACTIONS(11),
    [anon_sym_state] = ACTIONS(11),
    [anon_sym_entries] = ACTIONS(11),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(11),
    [anon_sym_in] = ACTIONS(11),
    [anon_sym_out] = ACTIONS(11),
    [anon_sym_inout] = ACTIONS(11),
    [anon_sym_package] = ACTIONS(11),
    [anon_sym_SEMI] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_parser] = ACTIONS(11),
    [anon_sym_transition] = ACTIONS(11),
    [anon_sym_select] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_AMP_AMP_AMP] = ACTIONS(13),
    [anon_sym_DOT_DOT] = ACTIONS(13),
    [anon_sym_default] = ACTIONS(11),
    [anon_sym__] = ACTIONS(11),
    [anon_sym_valueset] = ACTIONS(11),
    [anon_sym_LT] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_control] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(11),
    [anon_sym_tuple] = ACTIONS(11),
    [anon_sym_bool] = ACTIONS(11),
    [anon_sym_error] = ACTIONS(11),
    [anon_sym_match_kind] = ACTIONS(11),
    [anon_sym_string] = ACTIONS(11),
    [anon_sym_int] = ACTIONS(11),
    [anon_sym_bit] = ACTIONS(11),
    [anon_sym_varbit] = ACTIONS(11),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_header] = ACTIONS(11),
    [anon_sym_header_union] = ACTIONS(11),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_typedef] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_exit] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(11),
    [anon_sym_switch] = ACTIONS(11),
    [anon_sym_table] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_action] = ACTIONS(11),
    [anon_sym_abstract] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
    [anon_sym_pragma] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_LT_LT] = ACTIONS(13),
    [anon_sym_AMP_AMP] = ACTIONS(11),
    [anon_sym_PIPE_PIPE] = ACTIONS(13),
    [anon_sym_EQ_EQ] = ACTIONS(13),
    [anon_sym_BANG_EQ] = ACTIONS(13),
    [anon_sym_GT_EQ] = ACTIONS(13),
    [anon_sym_LT_EQ] = ACTIONS(13),
    [anon_sym_PLUS_PLUS] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_PIPE_PLUS_PIPE] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_PIPE_DASH_PIPE] = ACTIONS(13),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_SLASH] = ACTIONS(13),
    [anon_sym_PERCENT] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(11),
    [anon_sym_AMP] = ACTIONS(11),
    [anon_sym_CARET] = ACTIONS(13),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_QMARK] = ACTIONS(13),
    [anon_sym_unknown_token] = ACTIONS(11),
    [sym_integer] = ACTIONS(13),
    [sym_string] = ACTIONS(13),
    [sym_identifier] = ACTIONS(19),
  },
  [4] = {
    [sym_annotationToken] = STATE(7),
    [sym_typeIdentifier] = STATE(9),
    [aux_sym_source_file_token1] = ACTIONS(3),
    [anon_sym_apply] = ACTIONS(11),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_actions] = ACTIONS(11),
    [anon_sym_state] = ACTIONS(11),
    [anon_sym_entries] = ACTIONS(11),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(11),
    [anon_sym_in] = ACTIONS(11),
    [anon_sym_out] = ACTIONS(11),
    [anon_sym_inout] = ACTIONS(11),
    [anon_sym_package] = ACTIONS(11),
    [anon_sym_SEMI] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_parser] = ACTIONS(11),
    [anon_sym_transition] = ACTIONS(11),
    [anon_sym_select] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_AMP_AMP_AMP] = ACTIONS(13),
    [anon_sym_DOT_DOT] = ACTIONS(13),
    [anon_sym_default] = ACTIONS(11),
    [anon_sym__] = ACTIONS(11),
    [anon_sym_valueset] = ACTIONS(11),
    [anon_sym_LT] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_control] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(11),
    [anon_sym_tuple] = ACTIONS(11),
    [anon_sym_bool] = ACTIONS(11),
    [anon_sym_error] = ACTIONS(11),
    [anon_sym_match_kind] = ACTIONS(11),
    [anon_sym_string] = ACTIONS(11),
    [anon_sym_int] = ACTIONS(11),
    [anon_sym_bit] = ACTIONS(11),
    [anon_sym_varbit] = ACTIONS(11),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_header] = ACTIONS(11),
    [anon_sym_header_union] = ACTIONS(11),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_typedef] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_exit] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(11),
    [anon_sym_switch] = ACTIONS(11),
    [anon_sym_table] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_action] = ACTIONS(11),
    [anon_sym_abstract] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
    [anon_sym_pragma] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_LT_LT] = ACTIONS(13),
    [anon_sym_AMP_AMP] = ACTIONS(11),
    [anon_sym_PIPE_PIPE] = ACTIONS(13),
    [anon_sym_EQ_EQ] = ACTIONS(13),
    [anon_sym_BANG_EQ] = ACTIONS(13),
    [anon_sym_GT_EQ] = ACTIONS(13),
    [anon_sym_LT_EQ] = ACTIONS(13),
    [anon_sym_PLUS_PLUS] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_PIPE_PLUS_PIPE] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_PIPE_DASH_PIPE] = ACTIONS(13),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_SLASH] = ACTIONS(13),
    [anon_sym_PERCENT] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(11),
    [anon_sym_AMP] = ACTIONS(11),
    [anon_sym_CARET] = ACTIONS(13),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_QMARK] = ACTIONS(13),
    [anon_sym_unknown_token] = ACTIONS(11),
    [sym_integer] = ACTIONS(13),
    [sym_string] = ACTIONS(13),
    [sym_identifier] = ACTIONS(19),
  },
  [5] = {
    [sym_annotationToken] = STATE(7),
    [sym_typeIdentifier] = STATE(9),
    [aux_sym_source_file_token1] = ACTIONS(3),
    [anon_sym_apply] = ACTIONS(11),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_actions] = ACTIONS(11),
    [anon_sym_state] = ACTIONS(11),
    [anon_sym_entries] = ACTIONS(11),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(11),
    [anon_sym_in] = ACTIONS(11),
    [anon_sym_out] = ACTIONS(11),
    [anon_sym_inout] = ACTIONS(11),
    [anon_sym_package] = ACTIONS(11),
    [anon_sym_SEMI] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_parser] = ACTIONS(11),
    [anon_sym_transition] = ACTIONS(11),
    [anon_sym_select] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_AMP_AMP_AMP] = ACTIONS(13),
    [anon_sym_DOT_DOT] = ACTIONS(13),
    [anon_sym_default] = ACTIONS(11),
    [anon_sym__] = ACTIONS(11),
    [anon_sym_valueset] = ACTIONS(11),
    [anon_sym_LT] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_control] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(11),
    [anon_sym_tuple] = ACTIONS(11),
    [anon_sym_bool] = ACTIONS(11),
    [anon_sym_error] = ACTIONS(11),
    [anon_sym_match_kind] = ACTIONS(11),
    [anon_sym_string] = ACTIONS(11),
    [anon_sym_int] = ACTIONS(11),
    [anon_sym_bit] = ACTIONS(11),
    [anon_sym_varbit] = ACTIONS(11),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_header] = ACTIONS(11),
    [anon_sym_header_union] = ACTIONS(11),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_typedef] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_exit] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(11),
    [anon_sym_switch] = ACTIONS(11),
    [anon_sym_table] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_action] = ACTIONS(11),
    [anon_sym_abstract] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
    [anon_sym_pragma] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_LT_LT] = ACTIONS(13),
    [anon_sym_AMP_AMP] = ACTIONS(11),
    [anon_sym_PIPE_PIPE] = ACTIONS(13),
    [anon_sym_EQ_EQ] = ACTIONS(13),
    [anon_sym_BANG_EQ] = ACTIONS(13),
    [anon_sym_GT_EQ] = ACTIONS(13),
    [anon_sym_LT_EQ] = ACTIONS(13),
    [anon_sym_PLUS_PLUS] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_PIPE_PLUS_PIPE] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_PIPE_DASH_PIPE] = ACTIONS(13),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_SLASH] = ACTIONS(13),
    [anon_sym_PERCENT] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(11),
    [anon_sym_AMP] = ACTIONS(11),
    [anon_sym_CARET] = ACTIONS(13),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_QMARK] = ACTIONS(13),
    [anon_sym_unknown_token] = ACTIONS(11),
    [sym_integer] = ACTIONS(13),
    [sym_string] = ACTIONS(13),
    [sym_identifier] = ACTIONS(19),
  },
  [6] = {
    [sym_annotationToken] = STATE(7),
    [sym_typeIdentifier] = STATE(9),
    [aux_sym_source_file_token1] = ACTIONS(3),
    [anon_sym_apply] = ACTIONS(11),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_actions] = ACTIONS(11),
    [anon_sym_state] = ACTIONS(11),
    [anon_sym_entries] = ACTIONS(11),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(11),
    [anon_sym_in] = ACTIONS(11),
    [anon_sym_out] = ACTIONS(11),
    [anon_sym_inout] = ACTIONS(11),
    [anon_sym_package] = ACTIONS(11),
    [anon_sym_SEMI] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_parser] = ACTIONS(11),
    [anon_sym_transition] = ACTIONS(11),
    [anon_sym_select] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_AMP_AMP_AMP] = ACTIONS(13),
    [anon_sym_DOT_DOT] = ACTIONS(13),
    [anon_sym_default] = ACTIONS(11),
    [anon_sym__] = ACTIONS(11),
    [anon_sym_valueset] = ACTIONS(11),
    [anon_sym_LT] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_control] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(11),
    [anon_sym_tuple] = ACTIONS(11),
    [anon_sym_bool] = ACTIONS(11),
    [anon_sym_error] = ACTIONS(11),
    [anon_sym_match_kind] = ACTIONS(11),
    [anon_sym_string] = ACTIONS(11),
    [anon_sym_int] = ACTIONS(11),
    [anon_sym_bit] = ACTIONS(11),
    [anon_sym_varbit] = ACTIONS(11),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_header] = ACTIONS(11),
    [anon_sym_header_union] = ACTIONS(11),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_typedef] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_exit] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(11),
    [anon_sym_switch] = ACTIONS(11),
    [anon_sym_table] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_action] = ACTIONS(11),
    [anon_sym_abstract] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
    [anon_sym_pragma] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_LT_LT] = ACTIONS(13),
    [anon_sym_AMP_AMP] = ACTIONS(11),
    [anon_sym_PIPE_PIPE] = ACTIONS(13),
    [anon_sym_EQ_EQ] = ACTIONS(13),
    [anon_sym_BANG_EQ] = ACTIONS(13),
    [anon_sym_GT_EQ] = ACTIONS(13),
    [anon_sym_LT_EQ] = ACTIONS(13),
    [anon_sym_PLUS_PLUS] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_PIPE_PLUS_PIPE] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_PIPE_DASH_PIPE] = ACTIONS(13),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_SLASH] = ACTIONS(13),
    [anon_sym_PERCENT] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(11),
    [anon_sym_AMP] = ACTIONS(11),
    [anon_sym_CARET] = ACTIONS(13),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_QMARK] = ACTIONS(13),
    [anon_sym_unknown_token] = ACTIONS(11),
    [sym_integer] = ACTIONS(13),
    [sym_string] = ACTIONS(13),
    [sym_identifier] = ACTIONS(19),
  },
  [7] = {
    [aux_sym_source_file_token1] = ACTIONS(3),
    [anon_sym_apply] = ACTIONS(29),
    [anon_sym_key] = ACTIONS(29),
    [anon_sym_actions] = ACTIONS(29),
    [anon_sym_state] = ACTIONS(29),
    [anon_sym_entries] = ACTIONS(29),
    [anon_sym_type] = ACTIONS(29),
    [anon_sym_AT] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(31),
    [anon_sym_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_out] = ACTIONS(29),
    [anon_sym_inout] = ACTIONS(29),
    [anon_sym_package] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(29),
    [anon_sym_parser] = ACTIONS(29),
    [anon_sym_transition] = ACTIONS(29),
    [anon_sym_select] = ACTIONS(29),
    [anon_sym_COLON] = ACTIONS(31),
    [anon_sym_AMP_AMP_AMP] = ACTIONS(31),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym__] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_control] = ACTIONS(29),
    [anon_sym_extern] = ACTIONS(29),
    [anon_sym_tuple] = ACTIONS(29),
    [anon_sym_bool] = ACTIONS(29),
    [anon_sym_error] = ACTIONS(29),
    [anon_sym_match_kind] = ACTIONS(29),
    [anon_sym_string] = ACTIONS(29),
    [anon_sym_int] = ACTIONS(29),
    [anon_sym_bit] = ACTIONS(29),
    [anon_sym_varbit] = ACTIONS(29),
    [anon_sym_void] = ACTIONS(29),
    [anon_sym_header] = ACTIONS(29),
    [anon_sym_header_union] = ACTIONS(29),
    [anon_sym_struct] = ACTIONS(29),
    [anon_sym_enum] = ACTIONS(29),
    [anon_sym_typedef] = ACTIONS(29),
    [anon_sym_return] = ACTIONS(29),
    [anon_sym_exit] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_else] = ACTIONS(29),
    [anon_sym_switch] = ACTIONS(29),
    [anon_sym_table] = ACTIONS(29),
    [anon_sym_const] = ACTIONS(29),
    [anon_sym_action] = ACTIONS(29),
    [anon_sym_abstract] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_pragma] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_LT_LT] = ACTIONS(31),
    [anon_sym_AMP_AMP] = ACTIONS(29),
    [anon_sym_PIPE_PIPE] = ACTIONS(31),
    [anon_sym_EQ_EQ] = ACTIONS(31),
    [anon_sym_BANG_EQ] = ACTIONS(31),
    [anon_sym_GT_EQ] = ACTIONS(31),
    [anon_sym_LT_EQ] = ACTIONS(31),
    [anon_sym_PLUS_PLUS] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_PIPE_PLUS_PIPE] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_PIPE_DASH_PIPE] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_SLASH] = ACTIONS(31),
    [anon_sym_PERCENT] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(29),
    [anon_sym_CARET] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_unknown_token] = ACTIONS(29),
    [sym_integer] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [sym_identifier] = ACTIONS(29),
  },
  [8] = {
    [aux_sym_source_file_token1] = ACTIONS(3),
    [anon_sym_apply] = ACTIONS(33),
    [anon_sym_key] = ACTIONS(33),
    [anon_sym_actions] = ACTIONS(33),
    [anon_sym_state] = ACTIONS(33),
    [anon_sym_entries] = ACTIONS(33),
    [anon_sym_type] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(36),
    [anon_sym_LPAREN] = ACTIONS(36),
    [anon_sym_RPAREN] = ACTIONS(36),
    [anon_sym_LBRACK] = ACTIONS(36),
    [anon_sym_RBRACK] = ACTIONS(36),
    [anon_sym_COMMA] = ACTIONS(36),
    [anon_sym_EQ] = ACTIONS(33),
    [anon_sym_in] = ACTIONS(33),
    [anon_sym_out] = ACTIONS(33),
    [anon_sym_inout] = ACTIONS(33),
    [anon_sym_package] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(36),
    [anon_sym_LBRACE] = ACTIONS(36),
    [anon_sym_RBRACE] = ACTIONS(36),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_parser] = ACTIONS(33),
    [anon_sym_transition] = ACTIONS(33),
    [anon_sym_select] = ACTIONS(33),
    [anon_sym_COLON] = ACTIONS(36),
    [anon_sym_AMP_AMP_AMP] = ACTIONS(36),
    [anon_sym_DOT_DOT] = ACTIONS(36),
    [anon_sym_default] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_valueset] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_GT] = ACTIONS(33),
    [anon_sym_control] = ACTIONS(33),
    [anon_sym_extern] = ACTIONS(33),
    [anon_sym_tuple] = ACTIONS(33),
    [anon_sym_bool] = ACTIONS(33),
    [anon_sym_error] = ACTIONS(33),
    [anon_sym_match_kind] = ACTIONS(33),
    [anon_sym_string] = ACTIONS(33),
    [anon_sym_int] = ACTIONS(33),
    [anon_sym_bit] = ACTIONS(33),
    [anon_sym_varbit] = ACTIONS(33),
    [anon_sym_void] = ACTIONS(33),
    [anon_sym_header] = ACTIONS(33),
    [anon_sym_header_union] = ACTIONS(33),
    [anon_sym_struct] = ACTIONS(33),
    [anon_sym_enum] = ACTIONS(33),
    [anon_sym_typedef] = ACTIONS(33),
    [anon_sym_return] = ACTIONS(33),
    [anon_sym_exit] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_else] = ACTIONS(33),
    [anon_sym_switch] = ACTIONS(33),
    [anon_sym_table] = ACTIONS(33),
    [anon_sym_const] = ACTIONS(33),
    [anon_sym_action] = ACTIONS(33),
    [anon_sym_abstract] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [anon_sym_pragma] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_LT_LT] = ACTIONS(36),
    [anon_sym_AMP_AMP] = ACTIONS(33),
    [anon_sym_PIPE_PIPE] = ACTIONS(36),
    [anon_sym_EQ_EQ] = ACTIONS(36),
    [anon_sym_BANG_EQ] = ACTIONS(36),
    [anon_sym_GT_EQ] = ACTIONS(36),
    [anon_sym_LT_EQ] = ACTIONS(36),
    [anon_sym_PLUS_PLUS] = ACTIONS(36),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_PIPE_PLUS_PIPE] = ACTIONS(36),
    [anon_sym_DASH] = ACTIONS(36),
    [anon_sym_PIPE_DASH_PIPE] = ACTIONS(36),
    [anon_sym_STAR] = ACTIONS(36),
    [anon_sym_SLASH] = ACTIONS(36),
    [anon_sym_PERCENT] = ACTIONS(36),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_CARET] = ACTIONS(36),
    [anon_sym_TILDE] = ACTIONS(36),
    [anon_sym_BANG] = ACTIONS(33),
    [anon_sym_QMARK] = ACTIONS(36),
    [anon_sym_unknown_token] = ACTIONS(33),
    [sym_integer] = ACTIONS(36),
    [sym_string] = ACTIONS(36),
    [sym_identifier] = ACTIONS(33),
  },
  [9] = {
    [aux_sym_source_file_token1] = ACTIONS(3),
    [anon_sym_apply] = ACTIONS(39),
    [anon_sym_key] = ACTIONS(39),
    [anon_sym_actions] = ACTIONS(39),
    [anon_sym_state] = ACTIONS(39),
    [anon_sym_entries] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_RPAREN] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_RBRACK] = ACTIONS(41),
    [anon_sym_COMMA] = ACTIONS(41),
    [anon_sym_EQ] = ACTIONS(39),
    [anon_sym_in] = ACTIONS(39),
    [anon_sym_out] = ACTIONS(39),
    [anon_sym_inout] = ACTIONS(39),
    [anon_sym_package] = ACTIONS(39),
    [anon_sym_SEMI] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_RBRACE] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(39),
    [anon_sym_parser] = ACTIONS(39),
    [anon_sym_transition] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_AMP_AMP_AMP] = ACTIONS(41),
    [anon_sym_DOT_DOT] = ACTIONS(41),
    [anon_sym_default] = ACTIONS(39),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_valueset] = ACTIONS(39),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_control] = ACTIONS(39),
    [anon_sym_extern] = ACTIONS(39),
    [anon_sym_tuple] = ACTIONS(39),
    [anon_sym_bool] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_match_kind] = ACTIONS(39),
    [anon_sym_string] = ACTIONS(39),
    [anon_sym_int] = ACTIONS(39),
    [anon_sym_bit] = ACTIONS(39),
    [anon_sym_varbit] = ACTIONS(39),
    [anon_sym_void] = ACTIONS(39),
    [anon_sym_header] = ACTIONS(39),
    [anon_sym_header_union] = ACTIONS(39),
    [anon_sym_struct] = ACTIONS(39),
    [anon_sym_enum] = ACTIONS(39),
    [anon_sym_typedef] = ACTIONS(39),
    [anon_sym_return] = ACTIONS(39),
    [anon_sym_exit] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_else] = ACTIONS(39),
    [anon_sym_switch] = ACTIONS(39),
    [anon_sym_table] = ACTIONS(39),
    [anon_sym_const] = ACTIONS(39),
    [anon_sym_action] = ACTIONS(39),
    [anon_sym_abstract] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_pragma] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_LT_LT] = ACTIONS(41),
    [anon_sym_AMP_AMP] = ACTIONS(39),
    [anon_sym_PIPE_PIPE] = ACTIONS(41),
    [anon_sym_EQ_EQ] = ACTIONS(41),
    [anon_sym_BANG_EQ] = ACTIONS(41),
    [anon_sym_GT_EQ] = ACTIONS(41),
    [anon_sym_LT_EQ] = ACTIONS(41),
    [anon_sym_PLUS_PLUS] = ACTIONS(41),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_PIPE_PLUS_PIPE] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_PIPE_DASH_PIPE] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(41),
    [anon_sym_SLASH] = ACTIONS(41),
    [anon_sym_PERCENT] = ACTIONS(41),
    [anon_sym_PIPE] = ACTIONS(39),
    [anon_sym_AMP] = ACTIONS(39),
    [anon_sym_CARET] = ACTIONS(41),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(39),
    [anon_sym_QMARK] = ACTIONS(41),
    [anon_sym_unknown_token] = ACTIONS(39),
    [sym_integer] = ACTIONS(41),
    [sym_string] = ACTIONS(41),
    [sym_identifier] = ACTIONS(39),
  },
  [10] = {
    [aux_sym_source_file_token1] = ACTIONS(3),
    [anon_sym_apply] = ACTIONS(43),
    [anon_sym_key] = ACTIONS(43),
    [anon_sym_actions] = ACTIONS(43),
    [anon_sym_state] = ACTIONS(43),
    [anon_sym_entries] = ACTIONS(43),
    [anon_sym_type] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(45),
    [anon_sym_RPAREN] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_RBRACK] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_EQ] = ACTIONS(43),
    [anon_sym_in] = ACTIONS(43),
    [anon_sym_out] = ACTIONS(43),
    [anon_sym_inout] = ACTIONS(43),
    [anon_sym_package] = ACTIONS(43),
    [anon_sym_SEMI] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(45),
    [anon_sym_DOT] = ACTIONS(43),
    [anon_sym_parser] = ACTIONS(43),
    [anon_sym_transition] = ACTIONS(43),
    [anon_sym_select] = ACTIONS(43),
    [anon_sym_COLON] = ACTIONS(45),
    [anon_sym_AMP_AMP_AMP] = ACTIONS(45),
    [anon_sym_DOT_DOT] = ACTIONS(45),
    [anon_sym_default] = ACTIONS(43),
    [anon_sym__] = ACTIONS(43),
    [anon_sym_valueset] = ACTIONS(43),
    [anon_sym_LT] = ACTIONS(43),
    [anon_sym_GT] = ACTIONS(43),
    [anon_sym_control] = ACTIONS(43),
    [anon_sym_extern] = ACTIONS(43),
    [anon_sym_tuple] = ACTIONS(43),
    [anon_sym_bool] = ACTIONS(43),
    [anon_sym_error] = ACTIONS(43),
    [anon_sym_match_kind] = ACTIONS(43),
    [anon_sym_string] = ACTIONS(43),
    [anon_sym_int] = ACTIONS(43),
    [anon_sym_bit] = ACTIONS(43),
    [anon_sym_varbit] = ACTIONS(43),
    [anon_sym_void] = ACTIONS(43),
    [anon_sym_header] = ACTIONS(43),
    [anon_sym_header_union] = ACTIONS(43),
    [anon_sym_struct] = ACTIONS(43),
    [anon_sym_enum] = ACTIONS(43),
    [anon_sym_typedef] = ACTIONS(43),
    [anon_sym_return] = ACTIONS(43),
    [anon_sym_exit] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(43),
    [anon_sym_else] = ACTIONS(43),
    [anon_sym_switch] = ACTIONS(43),
    [anon_sym_table] = ACTIONS(43),
    [anon_sym_const] = ACTIONS(43),
    [anon_sym_action] = ACTIONS(43),
    [anon_sym_abstract] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_pragma] = ACTIONS(43),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_LT_LT] = ACTIONS(45),
    [anon_sym_AMP_AMP] = ACTIONS(43),
    [anon_sym_PIPE_PIPE] = ACTIONS(45),
    [anon_sym_EQ_EQ] = ACTIONS(45),
    [anon_sym_BANG_EQ] = ACTIONS(45),
    [anon_sym_GT_EQ] = ACTIONS(45),
    [anon_sym_LT_EQ] = ACTIONS(45),
    [anon_sym_PLUS_PLUS] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_PIPE_PLUS_PIPE] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_PIPE_DASH_PIPE] = ACTIONS(45),
    [anon_sym_STAR] = ACTIONS(45),
    [anon_sym_SLASH] = ACTIONS(45),
    [anon_sym_PERCENT] = ACTIONS(45),
    [anon_sym_PIPE] = ACTIONS(43),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_CARET] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(45),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_QMARK] = ACTIONS(45),
    [anon_sym_unknown_token] = ACTIONS(43),
    [sym_integer] = ACTIONS(45),
    [sym_string] = ACTIONS(45),
    [sym_identifier] = ACTIONS(43),
  },
  [11] = {
    [aux_sym_source_file_token1] = ACTIONS(3),
    [anon_sym_apply] = ACTIONS(47),
    [anon_sym_key] = ACTIONS(47),
    [anon_sym_actions] = ACTIONS(47),
    [anon_sym_state] = ACTIONS(47),
    [anon_sym_entries] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_AT] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_RPAREN] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_RBRACK] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_in] = ACTIONS(47),
    [anon_sym_out] = ACTIONS(47),
    [anon_sym_inout] = ACTIONS(47),
    [anon_sym_package] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_parser] = ACTIONS(47),
    [anon_sym_transition] = ACTIONS(47),
    [anon_sym_select] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_AMP_AMP_AMP] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(49),
    [anon_sym_default] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_valueset] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_control] = ACTIONS(47),
    [anon_sym_extern] = ACTIONS(47),
    [anon_sym_tuple] = ACTIONS(47),
    [anon_sym_bool] = ACTIONS(47),
    [anon_sym_error] = ACTIONS(47),
    [anon_sym_match_kind] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_int] = ACTIONS(47),
    [anon_sym_bit] = ACTIONS(47),
    [anon_sym_varbit] = ACTIONS(47),
    [anon_sym_void] = ACTIONS(47),
    [anon_sym_header] = ACTIONS(47),
    [anon_sym_header_union] = ACTIONS(47),
    [anon_sym_struct] = ACTIONS(47),
    [anon_sym_enum] = ACTIONS(47),
    [anon_sym_typedef] = ACTIONS(47),
    [anon_sym_return] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_if] = ACTIONS(47),
    [anon_sym_else] = ACTIONS(47),
    [anon_sym_switch] = ACTIONS(47),
    [anon_sym_table] = ACTIONS(47),
    [anon_sym_const] = ACTIONS(47),
    [anon_sym_action] = ACTIONS(47),
    [anon_sym_abstract] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_pragma] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_LT_LT] = ACTIONS(49),
    [anon_sym_AMP_AMP] = ACTIONS(47),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_PLUS_PLUS] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_PIPE_PLUS_PIPE] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_PIPE_DASH_PIPE] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_SLASH] = ACTIONS(49),
    [anon_sym_PERCENT] = ACTIONS(49),
    [anon_sym_PIPE] = ACTIONS(47),
    [anon_sym_AMP] = ACTIONS(47),
    [anon_sym_CARET] = ACTIONS(49),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_QMARK] = ACTIONS(49),
    [anon_sym_unknown_token] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [sym_string] = ACTIONS(49),
    [sym_identifier] = ACTIONS(47),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 32,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(7), 1,
      anon_sym_,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      anon_sym_SEMI,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(59), 1,
      anon_sym_DOT,
    ACTIONS(61), 1,
      anon_sym_tuple,
    ACTIONS(67), 1,
      anon_sym_varbit,
    ACTIONS(69), 1,
      anon_sym_return,
    ACTIONS(71), 1,
      anon_sym_exit,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_switch,
    ACTIONS(77), 1,
      anon_sym_this,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(72), 1,
      sym_statementOrDeclaration,
    STATE(80), 1,
      sym_annotations,
    STATE(126), 1,
      sym_prefixedType,
    STATE(131), 1,
      sym_typeIdentifier,
    STATE(143), 1,
      sym_annotation,
    STATE(170), 1,
      sym_typeRef,
    STATE(184), 1,
      sym_dotPrefix,
    STATE(211), 1,
      sym_lvalue,
    STATE(216), 1,
      sym_nonTypeName,
    STATE(217), 1,
      sym_prefixedNonTypeName,
    STATE(304), 1,
      sym_optAnnotations,
    ACTIONS(65), 2,
      anon_sym_int,
      anon_sym_bit,
    STATE(182), 2,
      sym_typeName,
      sym_specializedType,
    STATE(73), 3,
      sym_statement,
      sym_variableDeclaration,
      sym_constantDeclaration,
    STATE(168), 3,
      sym_tupleType,
      sym_headerStackType,
      sym_baseType,
    ACTIONS(63), 4,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
    ACTIONS(51), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
    STATE(74), 8,
      sym_assignmentOrMethodCallStatement,
      sym_emptyStatement,
      sym_returnStatement,
      sym_exitStatement,
      sym_conditionalStatement,
      sym_directApplication,
      sym_blockStatement,
      sym_switchStatement,
  [118] = 32,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(7), 1,
      anon_sym_,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      anon_sym_SEMI,
    ACTIONS(59), 1,
      anon_sym_DOT,
    ACTIONS(61), 1,
      anon_sym_tuple,
    ACTIONS(67), 1,
      anon_sym_varbit,
    ACTIONS(69), 1,
      anon_sym_return,
    ACTIONS(71), 1,
      anon_sym_exit,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_switch,
    ACTIONS(77), 1,
      anon_sym_this,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      sym_statementOrDeclaration,
    STATE(80), 1,
      sym_annotations,
    STATE(126), 1,
      sym_prefixedType,
    STATE(131), 1,
      sym_typeIdentifier,
    STATE(143), 1,
      sym_annotation,
    STATE(170), 1,
      sym_typeRef,
    STATE(184), 1,
      sym_dotPrefix,
    STATE(211), 1,
      sym_lvalue,
    STATE(216), 1,
      sym_nonTypeName,
    STATE(217), 1,
      sym_prefixedNonTypeName,
    STATE(304), 1,
      sym_optAnnotations,
    ACTIONS(65), 2,
      anon_sym_int,
      anon_sym_bit,
    STATE(182), 2,
      sym_typeName,
      sym_specializedType,
    STATE(73), 3,
      sym_statement,
      sym_variableDeclaration,
      sym_constantDeclaration,
    STATE(168), 3,
      sym_tupleType,
      sym_headerStackType,
      sym_baseType,
    ACTIONS(63), 4,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
    ACTIONS(51), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
    STATE(74), 8,
      sym_assignmentOrMethodCallStatement,
      sym_emptyStatement,
      sym_returnStatement,
      sym_exitStatement,
      sym_conditionalStatement,
      sym_directApplication,
      sym_blockStatement,
      sym_switchStatement,
  [236] = 32,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(7), 1,
      anon_sym_,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      anon_sym_SEMI,
    ACTIONS(59), 1,
      anon_sym_DOT,
    ACTIONS(61), 1,
      anon_sym_tuple,
    ACTIONS(67), 1,
      anon_sym_varbit,
    ACTIONS(69), 1,
      anon_sym_return,
    ACTIONS(71), 1,
      anon_sym_exit,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_switch,
    ACTIONS(77), 1,
      anon_sym_this,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      sym_statementOrDeclaration,
    STATE(80), 1,
      sym_annotations,
    STATE(126), 1,
      sym_prefixedType,
    STATE(131), 1,
      sym_typeIdentifier,
    STATE(143), 1,
      sym_annotation,
    STATE(170), 1,
      sym_typeRef,
    STATE(184), 1,
      sym_dotPrefix,
    STATE(211), 1,
      sym_lvalue,
    STATE(216), 1,
      sym_nonTypeName,
    STATE(217), 1,
      sym_prefixedNonTypeName,
    STATE(304), 1,
      sym_optAnnotations,
    ACTIONS(65), 2,
      anon_sym_int,
      anon_sym_bit,
    STATE(182), 2,
      sym_typeName,
      sym_specializedType,
    STATE(73), 3,
      sym_statement,
      sym_variableDeclaration,
      sym_constantDeclaration,
    STATE(168), 3,
      sym_tupleType,
      sym_headerStackType,
      sym_baseType,
    ACTIONS(63), 4,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
    ACTIONS(51), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
    STATE(74), 8,
      sym_assignmentOrMethodCallStatement,
      sym_emptyStatement,
      sym_returnStatement,
      sym_exitStatement,
      sym_conditionalStatement,
      sym_directApplication,
      sym_blockStatement,
      sym_switchStatement,
  [354] = 32,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(7), 1,
      anon_sym_,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      anon_sym_SEMI,
    ACTIONS(59), 1,
      anon_sym_DOT,
    ACTIONS(61), 1,
      anon_sym_tuple,
    ACTIONS(67), 1,
      anon_sym_varbit,
    ACTIONS(69), 1,
      anon_sym_return,
    ACTIONS(71), 1,
      anon_sym_exit,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_switch,
    ACTIONS(77), 1,
      anon_sym_this,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      sym_statementOrDeclaration,
    STATE(80), 1,
      sym_annotations,
    STATE(126), 1,
      sym_prefixedType,
    STATE(131), 1,
      sym_typeIdentifier,
    STATE(143), 1,
      sym_annotation,
    STATE(170), 1,
      sym_typeRef,
    STATE(184), 1,
      sym_dotPrefix,
    STATE(211), 1,
      sym_lvalue,
    STATE(216), 1,
      sym_nonTypeName,
    STATE(217), 1,
      sym_prefixedNonTypeName,
    STATE(304), 1,
      sym_optAnnotations,
    ACTIONS(65), 2,
      anon_sym_int,
      anon_sym_bit,
    STATE(182), 2,
      sym_typeName,
      sym_specializedType,
    STATE(73), 3,
      sym_statement,
      sym_variableDeclaration,
      sym_constantDeclaration,
    STATE(168), 3,
      sym_tupleType,
      sym_headerStackType,
      sym_baseType,
    ACTIONS(63), 4,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
    ACTIONS(51), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
    STATE(74), 8,
      sym_assignmentOrMethodCallStatement,
      sym_emptyStatement,
      sym_returnStatement,
      sym_exitStatement,
      sym_conditionalStatement,
      sym_directApplication,
      sym_blockStatement,
      sym_switchStatement,
  [472] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(90), 15,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_tuple,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_void,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_AMP,
      sym_identifier,
    ACTIONS(87), 22,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_LT_LT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_PIPE_PLUS_PIPE,
      anon_sym_DASH,
      anon_sym_PIPE_DASH_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_GT_GT,
  [517] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(95), 15,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_tuple,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_void,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_AMP,
      sym_identifier,
    ACTIONS(93), 22,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_LT_LT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_PIPE_PLUS_PIPE,
      anon_sym_DASH,
      anon_sym_PIPE_DASH_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_GT_GT,
  [562] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(99), 15,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_tuple,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_void,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_AMP,
      sym_identifier,
    ACTIONS(97), 22,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_LT_LT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_PIPE_PLUS_PIPE,
      anon_sym_DASH,
      anon_sym_PIPE_DASH_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_GT_GT,
  [607] = 24,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(7), 1,
      anon_sym_,
    ACTIONS(9), 1,
      anon_sym_AT,
    ACTIONS(59), 1,
      anon_sym_DOT,
    ACTIONS(77), 1,
      anon_sym_this,
    ACTIONS(101), 1,
      anon_sym_SEMI,
    ACTIONS(103), 1,
      anon_sym_return,
    ACTIONS(105), 1,
      anon_sym_exit,
    ACTIONS(107), 1,
      anon_sym_if,
    ACTIONS(109), 1,
      anon_sym_switch,
    ACTIONS(111), 1,
      sym_identifier,
    STATE(42), 1,
      sym_statement,
    STATE(126), 1,
      sym_prefixedType,
    STATE(131), 1,
      sym_typeIdentifier,
    STATE(185), 1,
      sym_dotPrefix,
    STATE(198), 1,
      sym_annotations,
    STATE(215), 1,
      sym_lvalue,
    STATE(216), 1,
      sym_nonTypeName,
    STATE(217), 1,
      sym_prefixedNonTypeName,
    STATE(219), 1,
      sym_annotation,
    STATE(389), 1,
      sym_optAnnotations,
    STATE(357), 2,
      sym_typeName,
      sym_specializedType,
    ACTIONS(51), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
    STATE(39), 8,
      sym_assignmentOrMethodCallStatement,
      sym_emptyStatement,
      sym_returnStatement,
      sym_exitStatement,
      sym_conditionalStatement,
      sym_directApplication,
      sym_blockStatement,
      sym_switchStatement,
  [693] = 21,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(119), 1,
      anon_sym_tuple,
    ACTIONS(125), 1,
      anon_sym_varbit,
    ACTIONS(131), 1,
      sym_identifier,
    STATE(32), 1,
      sym_nonTypeName,
    STATE(50), 1,
      sym_expression,
    STATE(221), 1,
      sym_typeIdentifier,
    STATE(227), 1,
      sym_prefixedType,
    STATE(255), 1,
      sym_typeRef,
    STATE(256), 1,
      sym_realTypeArg,
    STATE(257), 1,
      sym_realTypeArgumentList,
    STATE(292), 1,
      sym_dotPrefix,
    ACTIONS(117), 2,
      anon_sym__,
      anon_sym_void,
    ACTIONS(123), 2,
      anon_sym_int,
      anon_sym_bit,
    ACTIONS(129), 2,
      sym_integer,
      sym_string,
    STATE(232), 2,
      sym_typeName,
      sym_specializedType,
    ACTIONS(127), 3,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
    STATE(280), 3,
      sym_tupleType,
      sym_headerStackType,
      sym_baseType,
    ACTIONS(121), 4,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
    ACTIONS(113), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [773] = 24,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(7), 1,
      anon_sym_,
    ACTIONS(9), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      anon_sym_SEMI,
    ACTIONS(59), 1,
      anon_sym_DOT,
    ACTIONS(69), 1,
      anon_sym_return,
    ACTIONS(71), 1,
      anon_sym_exit,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_switch,
    ACTIONS(77), 1,
      anon_sym_this,
    ACTIONS(111), 1,
      sym_identifier,
    STATE(79), 1,
      sym_statement,
    STATE(126), 1,
      sym_prefixedType,
    STATE(131), 1,
      sym_typeIdentifier,
    STATE(185), 1,
      sym_dotPrefix,
    STATE(198), 1,
      sym_annotations,
    STATE(211), 1,
      sym_lvalue,
    STATE(216), 1,
      sym_nonTypeName,
    STATE(217), 1,
      sym_prefixedNonTypeName,
    STATE(219), 1,
      sym_annotation,
    STATE(396), 1,
      sym_optAnnotations,
    STATE(358), 2,
      sym_typeName,
      sym_specializedType,
    ACTIONS(51), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
    STATE(74), 8,
      sym_assignmentOrMethodCallStatement,
      sym_emptyStatement,
      sym_returnStatement,
      sym_exitStatement,
      sym_conditionalStatement,
      sym_directApplication,
      sym_blockStatement,
      sym_switchStatement,
  [859] = 24,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(7), 1,
      anon_sym_,
    ACTIONS(9), 1,
      anon_sym_AT,
    ACTIONS(59), 1,
      anon_sym_DOT,
    ACTIONS(77), 1,
      anon_sym_this,
    ACTIONS(101), 1,
      anon_sym_SEMI,
    ACTIONS(103), 1,
      anon_sym_return,
    ACTIONS(105), 1,
      anon_sym_exit,
    ACTIONS(107), 1,
      anon_sym_if,
    ACTIONS(109), 1,
      anon_sym_switch,
    ACTIONS(111), 1,
      sym_identifier,
    STATE(40), 1,
      sym_statement,
    STATE(126), 1,
      sym_prefixedType,
    STATE(131), 1,
      sym_typeIdentifier,
    STATE(185), 1,
      sym_dotPrefix,
    STATE(198), 1,
      sym_annotations,
    STATE(215), 1,
      sym_lvalue,
    STATE(216), 1,
      sym_nonTypeName,
    STATE(217), 1,
      sym_prefixedNonTypeName,
    STATE(219), 1,
      sym_annotation,
    STATE(389), 1,
      sym_optAnnotations,
    STATE(357), 2,
      sym_typeName,
      sym_specializedType,
    ACTIONS(51), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
    STATE(39), 8,
      sym_assignmentOrMethodCallStatement,
      sym_emptyStatement,
      sym_returnStatement,
      sym_exitStatement,
      sym_conditionalStatement,
      sym_directApplication,
      sym_blockStatement,
      sym_switchStatement,
  [945] = 18,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(61), 1,
      anon_sym_tuple,
    ACTIONS(67), 1,
      anon_sym_varbit,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(133), 1,
      sym_identifier,
    STATE(32), 1,
      sym_nonTypeName,
    STATE(126), 1,
      sym_prefixedType,
    STATE(131), 1,
      sym_typeIdentifier,
    STATE(247), 1,
      sym_dotPrefix,
    STATE(309), 1,
      sym_expression,
    STATE(390), 1,
      sym_typeRef,
    ACTIONS(65), 2,
      anon_sym_int,
      anon_sym_bit,
    ACTIONS(129), 2,
      sym_integer,
      sym_string,
    STATE(153), 2,
      sym_typeName,
      sym_specializedType,
    ACTIONS(127), 3,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
    STATE(168), 3,
      sym_tupleType,
      sym_headerStackType,
      sym_baseType,
    ACTIONS(63), 4,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
    ACTIONS(51), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [1015] = 18,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(61), 1,
      anon_sym_tuple,
    ACTIONS(67), 1,
      anon_sym_varbit,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(135), 1,
      anon_sym_,
    STATE(126), 1,
      sym_prefixedType,
    STATE(131), 1,
      sym_typeIdentifier,
    STATE(247), 1,
      sym_dotPrefix,
    STATE(273), 1,
      sym_typeArg,
    STATE(283), 1,
      sym_typeArgumentList,
    ACTIONS(65), 2,
      anon_sym_int,
      anon_sym_bit,
    ACTIONS(137), 2,
      anon_sym__,
      anon_sym_void,
    STATE(153), 2,
      sym_typeName,
      sym_specializedType,
    STATE(231), 2,
      sym_nonTypeName,
      sym_typeRef,
    STATE(168), 3,
      sym_tupleType,
      sym_headerStackType,
      sym_baseType,
    ACTIONS(63), 4,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
    ACTIONS(51), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [1084] = 21,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(59), 1,
      anon_sym_DOT,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
    ACTIONS(143), 1,
      anon_sym_default,
    ACTIONS(145), 1,
      anon_sym_error,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(48), 1,
      sym_nonTypeName,
    STATE(60), 1,
      sym_nonBraceExpression,
    STATE(88), 1,
      sym_switchCase,
    STATE(126), 1,
      sym_prefixedType,
    STATE(131), 1,
      sym_typeIdentifier,
    STATE(183), 1,
      sym_dotPrefix,
    STATE(244), 1,
      sym_typeName,
    STATE(324), 1,
      sym_namedType,
    STATE(359), 1,
      sym_specializedType,
    STATE(365), 1,
      sym_switchLabel,
    ACTIONS(151), 2,
      sym_integer,
      sym_string,
    ACTIONS(147), 3,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
    ACTIONS(149), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(113), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [1159] = 18,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(61), 1,
      anon_sym_tuple,
    ACTIONS(67), 1,
      anon_sym_varbit,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(135), 1,
      anon_sym_,
    STATE(126), 1,
      sym_prefixedType,
    STATE(131), 1,
      sym_typeIdentifier,
    STATE(245), 1,
      sym_typeArgumentList,
    STATE(247), 1,
      sym_dotPrefix,
    STATE(273), 1,
      sym_typeArg,
    ACTIONS(65), 2,
      anon_sym_int,
      anon_sym_bit,
    ACTIONS(137), 2,
      anon_sym__,
      anon_sym_void,
    STATE(153), 2,
      sym_typeName,
      sym_specializedType,
    STATE(231), 2,
      sym_nonTypeName,
      sym_typeRef,
    STATE(168), 3,
      sym_tupleType,
      sym_headerStackType,
      sym_baseType,
    ACTIONS(63), 4,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
    ACTIONS(51), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [1228] = 18,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(61), 1,
      anon_sym_tuple,
    ACTIONS(67), 1,
      anon_sym_varbit,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(135), 1,
      anon_sym_,
    STATE(126), 1,
      sym_prefixedType,
    STATE(131), 1,
      sym_typeIdentifier,
    STATE(247), 1,
      sym_dotPrefix,
    STATE(273), 1,
      sym_typeArg,
    STATE(281), 1,
      sym_typeArgumentList,
    ACTIONS(65), 2,
      anon_sym_int,
      anon_sym_bit,
    ACTIONS(137), 2,
      anon_sym__,
      anon_sym_void,
    STATE(153), 2,
      sym_typeName,
      sym_specializedType,
    STATE(231), 2,
      sym_nonTypeName,
      sym_typeRef,
    STATE(168), 3,
      sym_tupleType,
      sym_headerStackType,
      sym_baseType,
    ACTIONS(63), 4,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
    ACTIONS(51), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [1297] = 18,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(61), 1,
      anon_sym_tuple,
    ACTIONS(67), 1,
      anon_sym_varbit,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(135), 1,
      anon_sym_,
    STATE(126), 1,
      sym_prefixedType,
    STATE(131), 1,
      sym_typeIdentifier,
    STATE(247), 1,
      sym_dotPrefix,
    STATE(273), 1,
      sym_typeArg,
    STATE(284), 1,
      sym_typeArgumentList,
    ACTIONS(65), 2,
      anon_sym_int,
      anon_sym_bit,
    ACTIONS(137), 2,
      anon_sym__,
      anon_sym_void,
    STATE(153), 2,
      sym_typeName,
      sym_specializedType,
    STATE(231), 2,
      sym_nonTypeName,
      sym_typeRef,
    STATE(168), 3,
      sym_tupleType,
      sym_headerStackType,
      sym_baseType,
    ACTIONS(63), 4,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
    ACTIONS(51), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [1366] = 18,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(61), 1,
      anon_sym_tuple,
    ACTIONS(67), 1,
      anon_sym_varbit,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(135), 1,
      anon_sym_,
    STATE(126), 1,
      sym_prefixedType,
    STATE(131), 1,
      sym_typeIdentifier,
    STATE(247), 1,
      sym_dotPrefix,
    STATE(273), 1,
      sym_typeArg,
    STATE(282), 1,
      sym_typeArgumentList,
    ACTIONS(65), 2,
      anon_sym_int,
      anon_sym_bit,
    ACTIONS(137), 2,
      anon_sym__,
      anon_sym_void,
    STATE(153), 2,
      sym_typeName,
      sym_specializedType,
    STATE(231), 2,
      sym_nonTypeName,
      sym_typeRef,
    STATE(168), 3,
      sym_tupleType,
      sym_headerStackType,
      sym_baseType,
    ACTIONS(63), 4,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
    ACTIONS(51), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [1435] = 18,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(61), 1,
      anon_sym_tuple,
    ACTIONS(67), 1,
      anon_sym_varbit,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(135), 1,
      anon_sym_,
    STATE(126), 1,
      sym_prefixedType,
    STATE(131), 1,
      sym_typeIdentifier,
    STATE(247), 1,
      sym_dotPrefix,
    STATE(273), 1,
      sym_typeArg,
    STATE(275), 1,
      sym_typeArgumentList,
    ACTIONS(65), 2,
      anon_sym_int,
      anon_sym_bit,
    ACTIONS(137), 2,
      anon_sym__,
      anon_sym_void,
    STATE(153), 2,
      sym_typeName,
      sym_specializedType,
    STATE(231), 2,
      sym_nonTypeName,
      sym_typeRef,
    STATE(168), 3,
      sym_tupleType,
      sym_headerStackType,
      sym_baseType,
    ACTIONS(63), 4,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
    ACTIONS(51), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [1504] = 21,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(59), 1,
      anon_sym_DOT,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_default,
    ACTIONS(145), 1,
      anon_sym_error,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      sym_nonTypeName,
    STATE(60), 1,
      sym_nonBraceExpression,
    STATE(88), 1,
      sym_switchCase,
    STATE(126), 1,
      sym_prefixedType,
    STATE(131), 1,
      sym_typeIdentifier,
    STATE(183), 1,
      sym_dotPrefix,
    STATE(244), 1,
      sym_typeName,
    STATE(324), 1,
      sym_namedType,
    STATE(359), 1,
      sym_specializedType,
    STATE(365), 1,
      sym_switchLabel,
    ACTIONS(151), 2,
      sym_integer,
      sym_string,
    ACTIONS(147), 3,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
    ACTIONS(149), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(113), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [1579] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(159), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(157), 26,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_LT_LT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_PIPE_PLUS_PIPE,
      anon_sym_DASH,
      anon_sym_PIPE_DASH_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_GT_GT,
      sym_identifier,
  [1618] = 18,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(61), 1,
      anon_sym_tuple,
    ACTIONS(67), 1,
      anon_sym_varbit,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(163), 1,
      anon_sym_void,
    ACTIONS(165), 1,
      sym_identifier,
    STATE(126), 1,
      sym_prefixedType,
    STATE(131), 1,
      sym_typeIdentifier,
    STATE(163), 1,
      sym_typeOrVoid,
    STATE(190), 1,
      sym_typeRef,
    STATE(225), 1,
      sym_nonTypeName,
    STATE(247), 1,
      sym_dotPrefix,
    STATE(392), 1,
      sym_functionPrototype,
    ACTIONS(65), 2,
      anon_sym_int,
      anon_sym_bit,
    STATE(153), 2,
      sym_typeName,
      sym_specializedType,
    STATE(168), 3,
      sym_tupleType,
      sym_headerStackType,
      sym_baseType,
    ACTIONS(63), 4,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
    ACTIONS(161), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [1685] = 16,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(119), 1,
      anon_sym_tuple,
    ACTIONS(125), 1,
      anon_sym_varbit,
    ACTIONS(133), 1,
      sym_identifier,
    STATE(221), 1,
      sym_typeIdentifier,
    STATE(227), 1,
      sym_prefixedType,
    STATE(262), 1,
      sym_typeArg,
    STATE(292), 1,
      sym_dotPrefix,
    ACTIONS(123), 2,
      anon_sym_int,
      anon_sym_bit,
    ACTIONS(137), 2,
      anon_sym__,
      anon_sym_void,
    STATE(231), 2,
      sym_nonTypeName,
      sym_typeRef,
    STATE(232), 2,
      sym_typeName,
      sym_specializedType,
    STATE(280), 3,
      sym_tupleType,
      sym_headerStackType,
      sym_baseType,
    ACTIONS(121), 4,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
    ACTIONS(51), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [1748] = 16,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(61), 1,
      anon_sym_tuple,
    ACTIONS(67), 1,
      anon_sym_varbit,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(133), 1,
      sym_identifier,
    STATE(126), 1,
      sym_prefixedType,
    STATE(131), 1,
      sym_typeIdentifier,
    STATE(247), 1,
      sym_dotPrefix,
    STATE(302), 1,
      sym_typeArg,
    ACTIONS(65), 2,
      anon_sym_int,
      anon_sym_bit,
    ACTIONS(137), 2,
      anon_sym__,
      anon_sym_void,
    STATE(153), 2,
      sym_typeName,
      sym_specializedType,
    STATE(231), 2,
      sym_nonTypeName,
      sym_typeRef,
    STATE(168), 3,
      sym_tupleType,
      sym_headerStackType,
      sym_baseType,
    ACTIONS(63), 4,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
    ACTIONS(51), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [1811] = 9,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(7), 1,
      anon_sym_,
    ACTIONS(9), 1,
      anon_sym_AT,
    STATE(92), 1,
      sym_blockStatement,
    STATE(198), 1,
      sym_annotations,
    STATE(219), 1,
      sym_annotation,
    STATE(397), 1,
      sym_optAnnotations,
    ACTIONS(169), 9,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
      sym_integer,
      sym_string,
    ACTIONS(167), 12,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      anon_sym_default,
      anon_sym_error,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
      sym_identifier,
  [1858] = 6,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(87), 1,
      anon_sym_LBRACK,
    ACTIONS(171), 1,
      anon_sym_comma,
    ACTIONS(90), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(97), 20,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_LT_LT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_PIPE_PLUS_PIPE,
      anon_sym_DASH,
      anon_sym_PIPE_DASH_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_GT_GT,
  [1899] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(175), 4,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(173), 22,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      anon_sym_,
      anon_sym_tuple,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_else,
      anon_sym_switch,
      anon_sym_this,
      sym_identifier,
  [1933] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(179), 4,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(177), 22,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      anon_sym_,
      anon_sym_tuple,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_else,
      anon_sym_switch,
      anon_sym_this,
      sym_identifier,
  [1967] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(185), 1,
      anon_sym_else,
    ACTIONS(183), 4,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(181), 21,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      anon_sym_,
      anon_sym_tuple,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_this,
      sym_identifier,
  [2003] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(189), 4,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(187), 22,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      anon_sym_,
      anon_sym_tuple,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_else,
      anon_sym_switch,
      anon_sym_this,
      sym_identifier,
  [2037] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(183), 4,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(181), 22,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      anon_sym_,
      anon_sym_tuple,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_else,
      anon_sym_switch,
      anon_sym_this,
      sym_identifier,
  [2071] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(193), 4,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(191), 22,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      anon_sym_,
      anon_sym_tuple,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_else,
      anon_sym_switch,
      anon_sym_this,
      sym_identifier,
  [2105] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(197), 4,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(195), 22,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      anon_sym_,
      anon_sym_tuple,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_else,
      anon_sym_switch,
      anon_sym_this,
      sym_identifier,
  [2139] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(201), 4,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(199), 22,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      anon_sym_,
      anon_sym_tuple,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_else,
      anon_sym_switch,
      anon_sym_this,
      sym_identifier,
  [2173] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(205), 4,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(203), 22,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      anon_sym_,
      anon_sym_tuple,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_else,
      anon_sym_switch,
      anon_sym_this,
      sym_identifier,
  [2207] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(209), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(207), 21,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_LT_LT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_PIPE_PLUS_PIPE,
      anon_sym_DASH,
      anon_sym_PIPE_DASH_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_GT_GT,
  [2241] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(213), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(211), 21,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_LT_LT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_PIPE_PLUS_PIPE,
      anon_sym_DASH,
      anon_sym_PIPE_DASH_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_GT_GT,
  [2275] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(217), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(215), 21,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_LT_LT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_PIPE_PLUS_PIPE,
      anon_sym_DASH,
      anon_sym_PIPE_DASH_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_GT_GT,
  [2309] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(221), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(219), 21,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_LT_LT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_PIPE_PLUS_PIPE,
      anon_sym_DASH,
      anon_sym_PIPE_DASH_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_GT_GT,
  [2343] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(225), 4,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(223), 22,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      anon_sym_,
      anon_sym_tuple,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_else,
      anon_sym_switch,
      anon_sym_this,
      sym_identifier,
  [2377] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(229), 4,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(227), 22,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      anon_sym_,
      anon_sym_tuple,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_else,
      anon_sym_switch,
      anon_sym_this,
      sym_identifier,
  [2411] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(233), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(231), 21,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_LT_LT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_PIPE_PLUS_PIPE,
      anon_sym_DASH,
      anon_sym_PIPE_DASH_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_GT_GT,
  [2445] = 5,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(90), 1,
      anon_sym_LT,
    ACTIONS(87), 2,
      anon_sym_LPAREN,
      anon_sym_DOT,
    ACTIONS(99), 4,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(97), 19,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_LT_LT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_PIPE_PLUS_PIPE,
      anon_sym_DASH,
      anon_sym_PIPE_DASH_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_GT_GT,
  [2483] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(237), 4,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(235), 22,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      anon_sym_,
      anon_sym_tuple,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_else,
      anon_sym_switch,
      anon_sym_this,
      sym_identifier,
  [2517] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(241), 4,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(239), 22,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      anon_sym_,
      anon_sym_tuple,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_else,
      anon_sym_switch,
      anon_sym_this,
      sym_identifier,
  [2551] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(245), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(243), 21,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_LT_LT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_PIPE_PLUS_PIPE,
      anon_sym_DASH,
      anon_sym_PIPE_DASH_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_GT_GT,
  [2585] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(249), 4,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(247), 22,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      anon_sym_,
      anon_sym_tuple,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_else,
      anon_sym_switch,
      anon_sym_this,
      sym_identifier,
  [2619] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(253), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(251), 21,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_LT_LT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_PIPE_PLUS_PIPE,
      anon_sym_DASH,
      anon_sym_PIPE_DASH_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_GT_GT,
  [2653] = 9,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    ACTIONS(259), 1,
      anon_sym_DOT,
    ACTIONS(261), 1,
      anon_sym_COLON,
    ACTIONS(263), 1,
      anon_sym_LT,
    ACTIONS(269), 1,
      anon_sym_QMARK,
    ACTIONS(265), 4,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(267), 16,
      anon_sym_LT_LT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_PIPE_PLUS_PIPE,
      anon_sym_DASH,
      anon_sym_PIPE_DASH_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_GT_GT,
  [2699] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(273), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(271), 21,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_LT_LT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_PIPE_PLUS_PIPE,
      anon_sym_DASH,
      anon_sym_PIPE_DASH_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_QMARK,
      anon_sym_GT_GT,
  [2733] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(241), 4,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(239), 21,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      anon_sym_,
      anon_sym_tuple,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_this,
      sym_identifier,
  [2766] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(175), 4,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(173), 21,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      anon_sym_,
      anon_sym_tuple,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_this,
      sym_identifier,
  [2799] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(197), 4,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(195), 21,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      anon_sym_,
      anon_sym_tuple,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_this,
      sym_identifier,
  [2832] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(229), 4,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(227), 21,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      anon_sym_,
      anon_sym_tuple,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_this,
      sym_identifier,
  [2865] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(189), 4,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(187), 21,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      anon_sym_,
      anon_sym_tuple,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_this,
      sym_identifier,
  [2898] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(201), 4,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(199), 21,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      anon_sym_,
      anon_sym_tuple,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_this,
      sym_identifier,
  [2931] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(225), 4,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(223), 21,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      anon_sym_,
      anon_sym_tuple,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_this,
      sym_identifier,
  [2964] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(277), 4,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(275), 21,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      anon_sym_,
      anon_sym_tuple,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_this,
      sym_identifier,
  [2997] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(281), 4,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(279), 21,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      anon_sym_,
      anon_sym_tuple,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_this,
      sym_identifier,
  [3030] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(249), 4,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(247), 21,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      anon_sym_,
      anon_sym_tuple,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_this,
      sym_identifier,
  [3063] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(285), 4,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(283), 21,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      anon_sym_,
      anon_sym_tuple,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_this,
      sym_identifier,
  [3096] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(289), 4,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(287), 21,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      anon_sym_,
      anon_sym_tuple,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_this,
      sym_identifier,
  [3129] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(179), 4,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(177), 21,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      anon_sym_,
      anon_sym_tuple,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_this,
      sym_identifier,
  [3162] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(293), 4,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(291), 21,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      anon_sym_,
      anon_sym_tuple,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_this,
      sym_identifier,
  [3195] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(297), 4,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(295), 21,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      anon_sym_,
      anon_sym_tuple,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_this,
      sym_identifier,
  [3228] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(205), 4,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(203), 21,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      anon_sym_,
      anon_sym_tuple,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_this,
      sym_identifier,
  [3261] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(193), 4,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(191), 21,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      anon_sym_,
      anon_sym_tuple,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_this,
      sym_identifier,
  [3294] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(237), 4,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(235), 21,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      anon_sym_,
      anon_sym_tuple,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_this,
      sym_identifier,
  [3327] = 17,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(61), 1,
      anon_sym_tuple,
    ACTIONS(67), 1,
      anon_sym_varbit,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    ACTIONS(301), 1,
      anon_sym_const,
    ACTIONS(303), 1,
      sym_identifier,
    STATE(126), 1,
      sym_prefixedType,
    STATE(131), 1,
      sym_typeIdentifier,
    STATE(144), 1,
      sym_annotation,
    STATE(165), 1,
      sym_typeRef,
    STATE(247), 1,
      sym_dotPrefix,
    ACTIONS(65), 2,
      anon_sym_int,
      anon_sym_bit,
    STATE(153), 2,
      sym_typeName,
      sym_specializedType,
    STATE(168), 3,
      sym_tupleType,
      sym_headerStackType,
      sym_baseType,
    ACTIONS(63), 4,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
  [3386] = 16,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(61), 1,
      anon_sym_tuple,
    ACTIONS(67), 1,
      anon_sym_varbit,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(163), 1,
      anon_sym_void,
    ACTIONS(305), 1,
      sym_identifier,
    STATE(126), 1,
      sym_prefixedType,
    STATE(163), 1,
      sym_typeOrVoid,
    STATE(167), 1,
      sym_typeIdentifier,
    STATE(190), 1,
      sym_typeRef,
    STATE(247), 1,
      sym_dotPrefix,
    STATE(312), 1,
      sym_functionPrototype,
    ACTIONS(65), 2,
      anon_sym_int,
      anon_sym_bit,
    STATE(153), 2,
      sym_typeName,
      sym_specializedType,
    STATE(168), 3,
      sym_tupleType,
      sym_headerStackType,
      sym_baseType,
    ACTIONS(63), 4,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
  [3442] = 14,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(307), 1,
      anon_sym_,
    ACTIONS(309), 1,
      anon_sym__,
    ACTIONS(311), 1,
      sym_identifier,
    STATE(140), 1,
      sym_typeIdentifier,
    STATE(223), 1,
      sym_nonTypeName,
    STATE(289), 1,
      sym_argument,
    STATE(291), 1,
      sym_nonEmptyArgList,
    STATE(294), 1,
      sym_expression,
    STATE(333), 1,
      sym_name,
    STATE(375), 1,
      sym_argumentList,
    ACTIONS(129), 2,
      sym_integer,
      sym_string,
    ACTIONS(127), 3,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
    ACTIONS(51), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [3493] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(189), 9,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
      sym_integer,
      sym_string,
    ACTIONS(187), 12,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      anon_sym_default,
      anon_sym_error,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
      sym_identifier,
  [3522] = 14,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(311), 1,
      sym_identifier,
    ACTIONS(313), 1,
      anon_sym_,
    STATE(140), 1,
      sym_typeIdentifier,
    STATE(223), 1,
      sym_nonTypeName,
    STATE(248), 1,
      sym_expression,
    STATE(251), 1,
      sym_kvList,
    STATE(258), 1,
      sym_kvPair,
    STATE(261), 1,
      sym_expressionList,
    STATE(336), 1,
      sym_structuredAnnotationBody,
    STATE(388), 1,
      sym_name,
    ACTIONS(129), 2,
      sym_integer,
      sym_string,
    ACTIONS(127), 3,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
    ACTIONS(51), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [3573] = 14,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(311), 1,
      sym_identifier,
    ACTIONS(313), 1,
      anon_sym_,
    STATE(140), 1,
      sym_typeIdentifier,
    STATE(223), 1,
      sym_nonTypeName,
    STATE(248), 1,
      sym_expression,
    STATE(251), 1,
      sym_kvList,
    STATE(258), 1,
      sym_kvPair,
    STATE(261), 1,
      sym_expressionList,
    STATE(370), 1,
      sym_structuredAnnotationBody,
    STATE(388), 1,
      sym_name,
    ACTIONS(129), 2,
      sym_integer,
      sym_string,
    ACTIONS(127), 3,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
    ACTIONS(51), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [3624] = 14,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(307), 1,
      anon_sym_,
    ACTIONS(309), 1,
      anon_sym__,
    ACTIONS(311), 1,
      sym_identifier,
    STATE(140), 1,
      sym_typeIdentifier,
    STATE(223), 1,
      sym_nonTypeName,
    STATE(289), 1,
      sym_argument,
    STATE(291), 1,
      sym_nonEmptyArgList,
    STATE(294), 1,
      sym_expression,
    STATE(333), 1,
      sym_name,
    STATE(368), 1,
      sym_argumentList,
    ACTIONS(129), 2,
      sym_integer,
      sym_string,
    ACTIONS(127), 3,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
    ACTIONS(51), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [3675] = 14,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(307), 1,
      anon_sym_,
    ACTIONS(309), 1,
      anon_sym__,
    ACTIONS(311), 1,
      sym_identifier,
    STATE(140), 1,
      sym_typeIdentifier,
    STATE(223), 1,
      sym_nonTypeName,
    STATE(289), 1,
      sym_argument,
    STATE(291), 1,
      sym_nonEmptyArgList,
    STATE(294), 1,
      sym_expression,
    STATE(333), 1,
      sym_name,
    STATE(378), 1,
      sym_argumentList,
    ACTIONS(129), 2,
      sym_integer,
      sym_string,
    ACTIONS(127), 3,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
    ACTIONS(51), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [3726] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(317), 9,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
      sym_integer,
      sym_string,
    ACTIONS(315), 12,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      anon_sym_default,
      anon_sym_error,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
      sym_identifier,
  [3755] = 14,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(307), 1,
      anon_sym_,
    ACTIONS(309), 1,
      anon_sym__,
    ACTIONS(311), 1,
      sym_identifier,
    STATE(140), 1,
      sym_typeIdentifier,
    STATE(223), 1,
      sym_nonTypeName,
    STATE(289), 1,
      sym_argument,
    STATE(291), 1,
      sym_nonEmptyArgList,
    STATE(294), 1,
      sym_expression,
    STATE(333), 1,
      sym_name,
    STATE(334), 1,
      sym_argumentList,
    ACTIONS(129), 2,
      sym_integer,
      sym_string,
    ACTIONS(127), 3,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
    ACTIONS(51), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [3806] = 14,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(307), 1,
      anon_sym_,
    ACTIONS(309), 1,
      anon_sym__,
    ACTIONS(311), 1,
      sym_identifier,
    STATE(140), 1,
      sym_typeIdentifier,
    STATE(223), 1,
      sym_nonTypeName,
    STATE(289), 1,
      sym_argument,
    STATE(291), 1,
      sym_nonEmptyArgList,
    STATE(294), 1,
      sym_expression,
    STATE(308), 1,
      sym_argumentList,
    STATE(333), 1,
      sym_name,
    ACTIONS(129), 2,
      sym_integer,
      sym_string,
    ACTIONS(127), 3,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
    ACTIONS(51), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [3857] = 14,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(307), 1,
      anon_sym_,
    ACTIONS(309), 1,
      anon_sym__,
    ACTIONS(311), 1,
      sym_identifier,
    STATE(140), 1,
      sym_typeIdentifier,
    STATE(223), 1,
      sym_nonTypeName,
    STATE(289), 1,
      sym_argument,
    STATE(291), 1,
      sym_nonEmptyArgList,
    STATE(294), 1,
      sym_expression,
    STATE(333), 1,
      sym_name,
    STATE(377), 1,
      sym_argumentList,
    ACTIONS(129), 2,
      sym_integer,
      sym_string,
    ACTIONS(127), 3,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
    ACTIONS(51), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [3908] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(321), 9,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
      sym_integer,
      sym_string,
    ACTIONS(319), 12,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      anon_sym_default,
      anon_sym_error,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
      sym_identifier,
  [3937] = 14,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(311), 1,
      sym_identifier,
    ACTIONS(313), 1,
      anon_sym_,
    STATE(140), 1,
      sym_typeIdentifier,
    STATE(223), 1,
      sym_nonTypeName,
    STATE(248), 1,
      sym_expression,
    STATE(251), 1,
      sym_kvList,
    STATE(258), 1,
      sym_kvPair,
    STATE(261), 1,
      sym_expressionList,
    STATE(356), 1,
      sym_structuredAnnotationBody,
    STATE(388), 1,
      sym_name,
    ACTIONS(129), 2,
      sym_integer,
      sym_string,
    ACTIONS(127), 3,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
    ACTIONS(51), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [3988] = 14,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(311), 1,
      sym_identifier,
    ACTIONS(313), 1,
      anon_sym_,
    STATE(140), 1,
      sym_typeIdentifier,
    STATE(223), 1,
      sym_nonTypeName,
    STATE(248), 1,
      sym_expression,
    STATE(251), 1,
      sym_kvList,
    STATE(258), 1,
      sym_kvPair,
    STATE(261), 1,
      sym_expressionList,
    STATE(314), 1,
      sym_structuredAnnotationBody,
    STATE(388), 1,
      sym_name,
    ACTIONS(129), 2,
      sym_integer,
      sym_string,
    ACTIONS(127), 3,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
    ACTIONS(51), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [4039] = 14,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(307), 1,
      anon_sym_,
    ACTIONS(309), 1,
      anon_sym__,
    ACTIONS(311), 1,
      sym_identifier,
    STATE(140), 1,
      sym_typeIdentifier,
    STATE(223), 1,
      sym_nonTypeName,
    STATE(289), 1,
      sym_argument,
    STATE(291), 1,
      sym_nonEmptyArgList,
    STATE(294), 1,
      sym_expression,
    STATE(333), 1,
      sym_name,
    STATE(367), 1,
      sym_argumentList,
    ACTIONS(129), 2,
      sym_integer,
      sym_string,
    ACTIONS(127), 3,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
    ACTIONS(51), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [4090] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(325), 9,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
      sym_integer,
      sym_string,
    ACTIONS(323), 12,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      anon_sym_default,
      anon_sym_error,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
      sym_identifier,
  [4119] = 14,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(307), 1,
      anon_sym_,
    ACTIONS(309), 1,
      anon_sym__,
    ACTIONS(311), 1,
      sym_identifier,
    STATE(140), 1,
      sym_typeIdentifier,
    STATE(223), 1,
      sym_nonTypeName,
    STATE(289), 1,
      sym_argument,
    STATE(291), 1,
      sym_nonEmptyArgList,
    STATE(294), 1,
      sym_expression,
    STATE(333), 1,
      sym_name,
    STATE(381), 1,
      sym_argumentList,
    ACTIONS(129), 2,
      sym_integer,
      sym_string,
    ACTIONS(127), 3,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
    ACTIONS(51), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [4170] = 13,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(61), 1,
      anon_sym_tuple,
    ACTIONS(67), 1,
      anon_sym_varbit,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      sym_identifier,
    STATE(126), 1,
      sym_prefixedType,
    STATE(131), 1,
      sym_typeIdentifier,
    STATE(180), 1,
      sym_typeRef,
    STATE(247), 1,
      sym_dotPrefix,
    ACTIONS(65), 2,
      anon_sym_int,
      anon_sym_bit,
    STATE(153), 2,
      sym_typeName,
      sym_specializedType,
    STATE(168), 3,
      sym_tupleType,
      sym_headerStackType,
      sym_baseType,
    ACTIONS(63), 4,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
  [4217] = 13,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(61), 1,
      anon_sym_tuple,
    ACTIONS(67), 1,
      anon_sym_varbit,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      sym_identifier,
    STATE(126), 1,
      sym_prefixedType,
    STATE(131), 1,
      sym_typeIdentifier,
    STATE(173), 1,
      sym_typeRef,
    STATE(247), 1,
      sym_dotPrefix,
    ACTIONS(65), 2,
      anon_sym_int,
      anon_sym_bit,
    STATE(153), 2,
      sym_typeName,
      sym_specializedType,
    STATE(168), 3,
      sym_tupleType,
      sym_headerStackType,
      sym_baseType,
    ACTIONS(63), 4,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
  [4264] = 13,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(61), 1,
      anon_sym_tuple,
    ACTIONS(67), 1,
      anon_sym_varbit,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      sym_identifier,
    STATE(126), 1,
      sym_prefixedType,
    STATE(131), 1,
      sym_typeIdentifier,
    STATE(166), 1,
      sym_typeRef,
    STATE(247), 1,
      sym_dotPrefix,
    ACTIONS(65), 2,
      anon_sym_int,
      anon_sym_bit,
    STATE(153), 2,
      sym_typeName,
      sym_specializedType,
    STATE(168), 3,
      sym_tupleType,
      sym_headerStackType,
      sym_baseType,
    ACTIONS(63), 4,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
  [4311] = 11,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(309), 1,
      anon_sym__,
    ACTIONS(311), 1,
      sym_identifier,
    STATE(140), 1,
      sym_typeIdentifier,
    STATE(223), 1,
      sym_nonTypeName,
    STATE(269), 1,
      sym_argument,
    STATE(294), 1,
      sym_expression,
    STATE(333), 1,
      sym_name,
    ACTIONS(129), 2,
      sym_integer,
      sym_string,
    ACTIONS(127), 3,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
    ACTIONS(51), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [4353] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(97), 17,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_extern,
      anon_sym_comma,
      anon_sym_const,
      anon_sym_action,
  [4376] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(97), 5,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DOT,
    ACTIONS(99), 10,
      anon_sym_tuple,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_const,
      sym_identifier,
  [4399] = 7,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    STATE(32), 1,
      sym_nonTypeName,
    STATE(321), 1,
      sym_expression,
    STATE(322), 1,
      sym_initializer,
    ACTIONS(129), 2,
      sym_integer,
      sym_string,
    ACTIONS(127), 3,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
    ACTIONS(51), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [4430] = 7,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(327), 1,
      anon_sym_SEMI,
    STATE(32), 1,
      sym_nonTypeName,
    STATE(347), 1,
      sym_expression,
    ACTIONS(129), 2,
      sym_integer,
      sym_string,
    ACTIONS(127), 3,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
    ACTIONS(51), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [4461] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(93), 5,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DOT,
    ACTIONS(95), 10,
      anon_sym_tuple,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_const,
      sym_identifier,
  [4484] = 7,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(329), 1,
      anon_sym__,
    STATE(32), 1,
      sym_nonTypeName,
    STATE(242), 1,
      sym_expression,
    ACTIONS(129), 2,
      sym_integer,
      sym_string,
    ACTIONS(127), 3,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
    ACTIONS(51), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [4515] = 5,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    ACTIONS(335), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 3,
      anon_sym_AT,
      anon_sym_LBRACE,
      anon_sym_DOT,
    ACTIONS(337), 10,
      anon_sym_tuple,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_const,
      sym_identifier,
  [4542] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(87), 5,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DOT,
    ACTIONS(90), 10,
      anon_sym_tuple,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_const,
      sym_identifier,
  [4565] = 7,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(339), 1,
      anon_sym_SEMI,
    STATE(32), 1,
      sym_nonTypeName,
    STATE(320), 1,
      sym_expression,
    ACTIONS(129), 2,
      sym_integer,
      sym_string,
    ACTIONS(127), 3,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
    ACTIONS(51), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [4596] = 7,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    STATE(32), 1,
      sym_nonTypeName,
    STATE(321), 1,
      sym_expression,
    STATE(349), 1,
      sym_initializer,
    ACTIONS(129), 2,
      sym_integer,
      sym_string,
    ACTIONS(127), 3,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
    ACTIONS(51), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [4627] = 7,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    STATE(32), 1,
      sym_nonTypeName,
    STATE(321), 1,
      sym_expression,
    STATE(341), 1,
      sym_initializer,
    ACTIONS(129), 2,
      sym_integer,
      sym_string,
    ACTIONS(127), 3,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
    ACTIONS(51), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [4658] = 6,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    STATE(32), 1,
      sym_nonTypeName,
    STATE(371), 1,
      sym_expression,
    ACTIONS(129), 2,
      sym_integer,
      sym_string,
    ACTIONS(127), 3,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
    ACTIONS(51), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [4686] = 6,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    STATE(32), 1,
      sym_nonTypeName,
    STATE(344), 1,
      sym_expression,
    ACTIONS(129), 2,
      sym_integer,
      sym_string,
    ACTIONS(127), 3,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
    ACTIONS(51), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [4714] = 6,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    STATE(32), 1,
      sym_nonTypeName,
    STATE(400), 1,
      sym_expression,
    ACTIONS(129), 2,
      sym_integer,
      sym_string,
    ACTIONS(127), 3,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
    ACTIONS(51), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [4742] = 6,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    STATE(32), 1,
      sym_nonTypeName,
    STATE(337), 1,
      sym_expression,
    ACTIONS(129), 2,
      sym_integer,
      sym_string,
    ACTIONS(127), 3,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
    ACTIONS(51), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [4770] = 6,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    STATE(32), 1,
      sym_nonTypeName,
    STATE(376), 1,
      sym_expression,
    ACTIONS(129), 2,
      sym_integer,
      sym_string,
    ACTIONS(127), 3,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
    ACTIONS(51), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [4798] = 6,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    STATE(32), 1,
      sym_nonTypeName,
    STATE(287), 1,
      sym_expression,
    ACTIONS(129), 2,
      sym_integer,
      sym_string,
    ACTIONS(127), 3,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
    ACTIONS(51), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [4826] = 6,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    STATE(32), 1,
      sym_nonTypeName,
    STATE(49), 1,
      sym_expression,
    ACTIONS(129), 2,
      sym_integer,
      sym_string,
    ACTIONS(127), 3,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
    ACTIONS(113), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [4854] = 6,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    STATE(32), 1,
      sym_nonTypeName,
    STATE(380), 1,
      sym_expression,
    ACTIONS(129), 2,
      sym_integer,
      sym_string,
    ACTIONS(127), 3,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
    ACTIONS(51), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [4882] = 6,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    STATE(32), 1,
      sym_nonTypeName,
    STATE(340), 1,
      sym_expression,
    ACTIONS(129), 2,
      sym_integer,
      sym_string,
    ACTIONS(127), 3,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
    ACTIONS(51), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [4910] = 5,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 2,
      anon_sym_AT,
      anon_sym_DOT,
    ACTIONS(337), 10,
      anon_sym_tuple,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_void,
      sym_identifier,
  [4936] = 6,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    STATE(32), 1,
      sym_nonTypeName,
    STATE(307), 1,
      sym_expression,
    ACTIONS(129), 2,
      sym_integer,
      sym_string,
    ACTIONS(127), 3,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
    ACTIONS(51), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [4964] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(345), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
    ACTIONS(347), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_GT,
  [4986] = 6,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    STATE(32), 1,
      sym_nonTypeName,
    STATE(374), 1,
      sym_expression,
    ACTIONS(129), 2,
      sym_integer,
      sym_string,
    ACTIONS(127), 3,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
    ACTIONS(51), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [5014] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(353), 1,
      anon_sym_LT,
    ACTIONS(351), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_GT,
    ACTIONS(349), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [5038] = 6,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    STATE(32), 1,
      sym_nonTypeName,
    STATE(250), 1,
      sym_expression,
    ACTIONS(129), 2,
      sym_integer,
      sym_string,
    ACTIONS(127), 3,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
    ACTIONS(355), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [5066] = 6,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    STATE(32), 1,
      sym_nonTypeName,
    STATE(254), 1,
      sym_expression,
    ACTIONS(129), 2,
      sym_integer,
      sym_string,
    ACTIONS(127), 3,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
    ACTIONS(51), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [5094] = 6,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    STATE(32), 1,
      sym_nonTypeName,
    STATE(328), 1,
      sym_expression,
    ACTIONS(129), 2,
      sym_integer,
      sym_string,
    ACTIONS(127), 3,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
    ACTIONS(51), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [5122] = 6,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    STATE(32), 1,
      sym_nonTypeName,
    STATE(326), 1,
      sym_expression,
    ACTIONS(129), 2,
      sym_integer,
      sym_string,
    ACTIONS(127), 3,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
    ACTIONS(51), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [5150] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(357), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
    ACTIONS(359), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_GT,
  [5172] = 6,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    STATE(32), 1,
      sym_nonTypeName,
    STATE(363), 1,
      sym_expression,
    ACTIONS(129), 2,
      sym_integer,
      sym_string,
    ACTIONS(127), 3,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
    ACTIONS(51), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [5200] = 6,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    STATE(32), 1,
      sym_nonTypeName,
    STATE(348), 1,
      sym_expression,
    ACTIONS(129), 2,
      sym_integer,
      sym_string,
    ACTIONS(127), 3,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
    ACTIONS(51), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [5228] = 6,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    STATE(32), 1,
      sym_nonTypeName,
    STATE(50), 1,
      sym_expression,
    ACTIONS(129), 2,
      sym_integer,
      sym_string,
    ACTIONS(127), 3,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
    ACTIONS(113), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [5256] = 6,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    STATE(32), 1,
      sym_nonTypeName,
    STATE(325), 1,
      sym_expression,
    ACTIONS(129), 2,
      sym_integer,
      sym_string,
    ACTIONS(127), 3,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
    ACTIONS(51), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [5284] = 6,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    STATE(32), 1,
      sym_nonTypeName,
    STATE(299), 1,
      sym_expression,
    ACTIONS(129), 2,
      sym_integer,
      sym_string,
    ACTIONS(127), 3,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
    ACTIONS(51), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [5312] = 6,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    STATE(32), 1,
      sym_nonTypeName,
    STATE(296), 1,
      sym_expression,
    ACTIONS(129), 2,
      sym_integer,
      sym_string,
    ACTIONS(127), 3,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
    ACTIONS(51), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [5340] = 6,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    STATE(32), 1,
      sym_nonTypeName,
    STATE(57), 1,
      sym_expression,
    ACTIONS(129), 2,
      sym_integer,
      sym_string,
    ACTIONS(127), 3,
      anon_sym_false,
      anon_sym_true,
      anon_sym_this,
    ACTIONS(113), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [5368] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(97), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(87), 10,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_extern,
      anon_sym_const,
      anon_sym_action,
  [5389] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(93), 13,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_extern,
      anon_sym_const,
      anon_sym_action,
  [5408] = 5,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(299), 1,
      anon_sym_DOT,
    ACTIONS(361), 1,
      anon_sym_AT,
    STATE(149), 1,
      sym_annotation,
    ACTIONS(301), 10,
      anon_sym_tuple,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_void,
      sym_identifier,
  [5433] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(365), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_GT,
    ACTIONS(363), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [5454] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(367), 3,
      anon_sym_AT,
      anon_sym_LBRACE,
      anon_sym_DOT,
    ACTIONS(369), 10,
      anon_sym_tuple,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_const,
      sym_identifier,
  [5475] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(371), 3,
      anon_sym_AT,
      anon_sym_LBRACE,
      anon_sym_DOT,
    ACTIONS(373), 10,
      anon_sym_tuple,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_const,
      sym_identifier,
  [5496] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(375), 3,
      anon_sym_AT,
      anon_sym_LBRACE,
      anon_sym_DOT,
    ACTIONS(377), 10,
      anon_sym_tuple,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_const,
      sym_identifier,
  [5517] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(375), 2,
      anon_sym_AT,
      anon_sym_DOT,
    ACTIONS(377), 10,
      anon_sym_tuple,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_void,
      sym_identifier,
  [5537] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(97), 2,
      anon_sym_LPAREN,
      anon_sym_EQ,
    ACTIONS(87), 3,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_LT,
    ACTIONS(379), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [5559] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(367), 2,
      anon_sym_AT,
      anon_sym_DOT,
    ACTIONS(369), 10,
      anon_sym_tuple,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_void,
      sym_identifier,
  [5579] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(371), 2,
      anon_sym_AT,
      anon_sym_DOT,
    ACTIONS(373), 10,
      anon_sym_tuple,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_void,
      sym_identifier,
  [5599] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(171), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(379), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [5619] = 9,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(7), 1,
      anon_sym_,
    ACTIONS(9), 1,
      anon_sym_AT,
    ACTIONS(381), 1,
      ts_builtin_sym_end,
    STATE(155), 1,
      aux_sym_source_file_repeat1,
    STATE(198), 1,
      sym_annotations,
    STATE(219), 1,
      sym_annotation,
    STATE(240), 1,
      sym_optAnnotations,
    STATE(409), 4,
      sym__declaration,
      sym_externDeclaration,
      sym_actionDeclaration,
      sym_constantDeclaration,
  [5650] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(299), 1,
      anon_sym_DOT,
    ACTIONS(301), 10,
      anon_sym_tuple,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_void,
      sym_identifier,
  [5669] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(387), 1,
      anon_sym_LBRACK,
    ACTIONS(385), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(383), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [5690] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(393), 1,
      anon_sym_LT,
    ACTIONS(391), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(389), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [5711] = 9,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(395), 1,
      ts_builtin_sym_end,
    ACTIONS(397), 1,
      anon_sym_,
    ACTIONS(400), 1,
      anon_sym_AT,
    STATE(155), 1,
      aux_sym_source_file_repeat1,
    STATE(198), 1,
      sym_annotations,
    STATE(219), 1,
      sym_annotation,
    STATE(240), 1,
      sym_optAnnotations,
    STATE(409), 4,
      sym__declaration,
      sym_externDeclaration,
      sym_actionDeclaration,
      sym_constantDeclaration,
  [5742] = 6,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(311), 1,
      sym_identifier,
    STATE(297), 1,
      sym_kvPair,
    STATE(388), 1,
      sym_name,
    STATE(140), 2,
      sym_nonTypeName,
      sym_typeIdentifier,
    ACTIONS(51), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [5767] = 6,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(133), 1,
      sym_identifier,
    STATE(277), 1,
      sym_name,
    STATE(278), 1,
      sym_typeParameterList,
    STATE(140), 2,
      sym_nonTypeName,
      sym_typeIdentifier,
    ACTIONS(51), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [5792] = 6,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(403), 1,
      sym_identifier,
    STATE(50), 1,
      sym_member,
    STATE(61), 1,
      sym_name,
    STATE(17), 2,
      sym_nonTypeName,
      sym_typeIdentifier,
    ACTIONS(113), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [5817] = 6,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(311), 1,
      sym_identifier,
    STATE(205), 1,
      sym_member,
    STATE(212), 1,
      sym_name,
    STATE(140), 2,
      sym_nonTypeName,
      sym_typeIdentifier,
    ACTIONS(51), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [5842] = 5,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(311), 1,
      sym_identifier,
    STATE(391), 1,
      sym_name,
    STATE(140), 2,
      sym_nonTypeName,
      sym_typeIdentifier,
    ACTIONS(51), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [5864] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(407), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(405), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [5882] = 5,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(403), 1,
      sym_identifier,
    STATE(122), 1,
      sym_name,
    STATE(17), 2,
      sym_nonTypeName,
      sym_typeIdentifier,
    ACTIONS(113), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [5904] = 5,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(409), 1,
      sym_identifier,
    STATE(226), 1,
      sym_name,
    STATE(272), 2,
      sym_nonTypeName,
      sym_typeIdentifier,
    ACTIONS(161), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [5926] = 5,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(413), 1,
      sym_identifier,
    STATE(196), 1,
      sym_name,
    STATE(192), 2,
      sym_nonTypeName,
      sym_typeIdentifier,
    ACTIONS(411), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [5948] = 5,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(417), 1,
      sym_identifier,
    STATE(236), 1,
      sym_name,
    STATE(300), 2,
      sym_nonTypeName,
      sym_typeIdentifier,
    ACTIONS(415), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [5970] = 5,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(311), 1,
      sym_identifier,
    STATE(361), 1,
      sym_name,
    STATE(140), 2,
      sym_nonTypeName,
      sym_typeIdentifier,
    ACTIONS(51), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [5992] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(419), 1,
      anon_sym_LPAREN,
    ACTIONS(359), 2,
      anon_sym_LBRACK,
      anon_sym_LT,
    ACTIONS(357), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [6012] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(385), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(383), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [6030] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(423), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(421), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [6048] = 5,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(417), 1,
      sym_identifier,
    STATE(238), 1,
      sym_name,
    STATE(300), 2,
      sym_nonTypeName,
      sym_typeIdentifier,
    ACTIONS(415), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [6070] = 5,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(427), 1,
      sym_identifier,
    STATE(108), 1,
      sym_name,
    STATE(106), 2,
      sym_nonTypeName,
      sym_typeIdentifier,
    ACTIONS(425), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [6092] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(431), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(429), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [6110] = 5,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(133), 1,
      sym_identifier,
    STATE(239), 1,
      sym_name,
    STATE(140), 2,
      sym_nonTypeName,
      sym_typeIdentifier,
    ACTIONS(51), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [6132] = 5,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(133), 1,
      sym_identifier,
    STATE(303), 1,
      sym_name,
    STATE(140), 2,
      sym_nonTypeName,
      sym_typeIdentifier,
    ACTIONS(51), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [6154] = 5,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(87), 1,
      anon_sym_LT,
    ACTIONS(99), 1,
      anon_sym_,
    ACTIONS(171), 1,
      anon_sym_LBRACK,
    ACTIONS(433), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [6176] = 5,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(311), 1,
      sym_identifier,
    STATE(193), 1,
      sym_name,
    STATE(140), 2,
      sym_nonTypeName,
      sym_typeIdentifier,
    ACTIONS(51), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [6198] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(436), 1,
      anon_sym_DOT,
    ACTIONS(438), 9,
      anon_sym_tuple,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      sym_identifier,
  [6216] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(391), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(389), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [6234] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(442), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(440), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [6252] = 5,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(311), 1,
      sym_identifier,
    STATE(387), 1,
      sym_name,
    STATE(140), 2,
      sym_nonTypeName,
      sym_typeIdentifier,
    ACTIONS(51), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [6274] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(171), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LT,
    ACTIONS(433), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [6292] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(387), 1,
      anon_sym_LBRACK,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(383), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [6311] = 5,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(47), 1,
      sym_nonTypeName,
    STATE(124), 1,
      sym_typeIdentifier,
    ACTIONS(113), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [6332] = 5,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(124), 1,
      sym_typeIdentifier,
    STATE(218), 1,
      sym_nonTypeName,
    ACTIONS(51), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [6353] = 5,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(111), 1,
      sym_identifier,
    STATE(124), 1,
      sym_typeIdentifier,
    STATE(218), 1,
      sym_nonTypeName,
    ACTIONS(51), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [6374] = 9,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(446), 1,
      anon_sym_,
    ACTIONS(448), 1,
      anon_sym_AT,
    STATE(201), 1,
      sym_annotations,
    STATE(204), 1,
      sym_annotation,
    STATE(208), 1,
      sym_optAnnotations,
    STATE(293), 1,
      sym_nonEmptyParameterList,
    STATE(295), 1,
      sym_parameter,
    STATE(335), 1,
      sym_parameterList,
  [6402] = 9,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(446), 1,
      anon_sym_,
    ACTIONS(448), 1,
      anon_sym_AT,
    STATE(201), 1,
      sym_annotations,
    STATE(204), 1,
      sym_annotation,
    STATE(208), 1,
      sym_optAnnotations,
    STATE(293), 1,
      sym_nonEmptyParameterList,
    STATE(295), 1,
      sym_parameter,
    STATE(315), 1,
      sym_parameterList,
  [6430] = 9,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(446), 1,
      anon_sym_,
    ACTIONS(448), 1,
      anon_sym_AT,
    STATE(201), 1,
      sym_annotations,
    STATE(204), 1,
      sym_annotation,
    STATE(208), 1,
      sym_optAnnotations,
    STATE(293), 1,
      sym_nonEmptyParameterList,
    STATE(295), 1,
      sym_parameter,
    STATE(339), 1,
      sym_parameterList,
  [6458] = 8,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(361), 1,
      anon_sym_AT,
    ACTIONS(450), 1,
      anon_sym_,
    ACTIONS(452), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      sym_optAnnotations,
    STATE(141), 1,
      sym_annotations,
    STATE(148), 1,
      sym_annotation,
    STATE(234), 1,
      sym_methodPrototype,
  [6483] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(454), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [6496] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(90), 2,
      anon_sym_,
      anon_sym_in,
    ACTIONS(87), 5,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_out,
      anon_sym_inout,
  [6511] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(95), 2,
      anon_sym_,
      anon_sym_in,
    ACTIONS(93), 5,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_out,
      anon_sym_inout,
  [6526] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(456), 1,
      anon_sym_LPAREN,
    ACTIONS(458), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 5,
      anon_sym_AT,
      anon_sym_LBRACE,
      anon_sym_extern,
      anon_sym_const,
      anon_sym_action,
  [6543] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(99), 2,
      anon_sym_,
      anon_sym_in,
    ACTIONS(97), 5,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_out,
      anon_sym_inout,
  [6558] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(460), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [6571] = 5,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    ACTIONS(464), 1,
      anon_sym_LBRACK,
    ACTIONS(337), 2,
      anon_sym_,
      anon_sym_in,
    ACTIONS(331), 3,
      anon_sym_AT,
      anon_sym_out,
      anon_sym_inout,
  [6590] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(171), 2,
      anon_sym_LBRACK,
      anon_sym_LT,
    ACTIONS(87), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_comma,
  [6605] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(9), 1,
      anon_sym_AT,
    STATE(214), 1,
      sym_annotation,
    ACTIONS(299), 4,
      anon_sym_LBRACE,
      anon_sym_extern,
      anon_sym_const,
      anon_sym_action,
  [6621] = 7,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(7), 1,
      anon_sym_,
    ACTIONS(9), 1,
      anon_sym_AT,
    STATE(198), 1,
      sym_annotations,
    STATE(219), 1,
      sym_annotation,
    STATE(360), 1,
      sym_optAnnotations,
    STATE(407), 1,
      sym_blockStatement,
  [6643] = 7,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(448), 1,
      anon_sym_AT,
    ACTIONS(466), 1,
      anon_sym_,
    STATE(201), 1,
      sym_annotations,
    STATE(204), 1,
      sym_annotation,
    STATE(208), 1,
      sym_optAnnotations,
    STATE(305), 1,
      sym_parameter,
  [6665] = 5,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(448), 1,
      anon_sym_AT,
    STATE(207), 1,
      sym_annotation,
    ACTIONS(299), 2,
      anon_sym_out,
      anon_sym_inout,
    ACTIONS(301), 2,
      anon_sym_,
      anon_sym_in,
  [6683] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(377), 2,
      anon_sym_,
      anon_sym_in,
    ACTIONS(375), 3,
      anon_sym_AT,
      anon_sym_out,
      anon_sym_inout,
  [6696] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(468), 1,
      anon_sym_RPAREN,
    ACTIONS(299), 2,
      anon_sym_out,
      anon_sym_inout,
    ACTIONS(301), 2,
      anon_sym_,
      anon_sym_in,
  [6711] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(369), 2,
      anon_sym_,
      anon_sym_in,
    ACTIONS(367), 3,
      anon_sym_AT,
      anon_sym_out,
      anon_sym_inout,
  [6724] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(470), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT,
  [6735] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(472), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT,
  [6746] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(373), 2,
      anon_sym_,
      anon_sym_in,
    ACTIONS(371), 3,
      anon_sym_AT,
      anon_sym_out,
      anon_sym_inout,
  [6759] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    STATE(99), 1,
      sym_direction,
    ACTIONS(474), 2,
      anon_sym_,
      anon_sym_in,
    ACTIONS(476), 2,
      anon_sym_out,
      anon_sym_inout,
  [6774] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(87), 2,
      anon_sym_DOT,
      anon_sym_LT,
    ACTIONS(97), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [6787] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(375), 5,
      anon_sym_AT,
      anon_sym_LBRACE,
      anon_sym_extern,
      anon_sym_const,
      anon_sym_action,
  [6798] = 6,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(478), 1,
      anon_sym_LPAREN,
    ACTIONS(480), 1,
      anon_sym_LBRACK,
    ACTIONS(482), 1,
      anon_sym_EQ,
    ACTIONS(484), 1,
      anon_sym_DOT,
    ACTIONS(486), 1,
      anon_sym_LT,
  [6817] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(271), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT,
  [6828] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(488), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT,
  [6839] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(371), 5,
      anon_sym_AT,
      anon_sym_LBRACE,
      anon_sym_extern,
      anon_sym_const,
      anon_sym_action,
  [6850] = 6,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(480), 1,
      anon_sym_LBRACK,
    ACTIONS(484), 1,
      anon_sym_DOT,
    ACTIONS(490), 1,
      anon_sym_LPAREN,
    ACTIONS(492), 1,
      anon_sym_EQ,
    ACTIONS(494), 1,
      anon_sym_LT,
  [6869] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(496), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT,
  [6880] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(498), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT,
  [6891] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(500), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT,
  [6902] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(367), 5,
      anon_sym_AT,
      anon_sym_LBRACE,
      anon_sym_extern,
      anon_sym_const,
      anon_sym_action,
  [6913] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(299), 4,
      anon_sym_LBRACE,
      anon_sym_extern,
      anon_sym_const,
      anon_sym_action,
  [6923] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(359), 4,
      anon_sym_LBRACK,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_comma,
  [6933] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(299), 2,
      anon_sym_out,
      anon_sym_inout,
    ACTIONS(301), 2,
      anon_sym_,
      anon_sym_in,
  [6945] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(93), 1,
      anon_sym_EQ,
    ACTIONS(157), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [6957] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(347), 4,
      anon_sym_LBRACK,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_comma,
  [6967] = 5,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(502), 1,
      anon_sym_,
    ACTIONS(504), 1,
      anon_sym_LT,
    STATE(265), 1,
      sym_typeParameters,
    STATE(366), 1,
      sym_optTypeParameters,
  [6983] = 5,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(502), 1,
      anon_sym_,
    ACTIONS(504), 1,
      anon_sym_LT,
    STATE(265), 1,
      sym_typeParameters,
    STATE(343), 1,
      sym_optTypeParameters,
  [6999] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(506), 1,
      anon_sym_LT,
    ACTIONS(351), 3,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_comma,
  [7011] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(171), 4,
      anon_sym_LBRACK,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_comma,
  [7021] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(508), 1,
      anon_sym_LT,
    ACTIONS(391), 2,
      anon_sym_GT,
      anon_sym_comma,
  [7032] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(510), 1,
      anon_sym_,
    ACTIONS(512), 2,
      anon_sym_AT,
      anon_sym_RBRACE,
  [7043] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(514), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_comma,
  [7052] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(516), 1,
      anon_sym_LBRACK,
    ACTIONS(385), 2,
      anon_sym_GT,
      anon_sym_comma,
  [7063] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(365), 3,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_comma,
  [7072] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(518), 1,
      anon_sym_,
    ACTIONS(520), 2,
      anon_sym_AT,
      anon_sym_RBRACE,
  [7083] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(522), 1,
      anon_sym_,
    ACTIONS(395), 2,
      ts_builtin_sym_end,
      anon_sym_AT,
  [7094] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(524), 1,
      anon_sym_,
    ACTIONS(526), 1,
      anon_sym_EQ,
    STATE(346), 1,
      sym_optInitializer,
  [7107] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(528), 1,
      anon_sym_,
    ACTIONS(530), 2,
      anon_sym_AT,
      anon_sym_RBRACE,
  [7118] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(524), 1,
      anon_sym_,
    ACTIONS(526), 1,
      anon_sym_EQ,
    STATE(330), 1,
      sym_optInitializer,
  [7131] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(534), 1,
      anon_sym_EQ,
    ACTIONS(532), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7142] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(536), 1,
      anon_sym_extern,
    ACTIONS(538), 1,
      anon_sym_const,
    ACTIONS(540), 1,
      anon_sym_action,
  [7155] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(542), 1,
      anon_sym_,
    ACTIONS(544), 2,
      anon_sym_AT,
      anon_sym_RBRACE,
  [7166] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(546), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7174] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(97), 1,
      anon_sym_EQ,
    ACTIONS(99), 1,
      anon_sym_,
  [7184] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(259), 1,
      anon_sym_DOT,
    ACTIONS(548), 1,
      anon_sym_LPAREN,
  [7194] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(550), 1,
      anon_sym_COMMA,
    ACTIONS(552), 1,
      anon_sym_GT,
  [7204] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(554), 1,
      anon_sym_,
    STATE(5), 1,
      sym_annotationBody,
  [7214] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(556), 1,
      sym_identifier,
    STATE(124), 1,
      sym_typeIdentifier,
  [7224] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(558), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [7232] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(560), 1,
      anon_sym_,
    STATE(12), 1,
      sym_statOrDeclList,
  [7242] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(562), 1,
      sym_identifier,
    STATE(382), 1,
      sym_prec,
  [7252] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(564), 1,
      anon_sym_RBRACK,
    ACTIONS(566), 1,
      anon_sym_COMMA,
  [7262] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(554), 1,
      anon_sym_,
    STATE(2), 1,
      sym_annotationBody,
  [7272] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(560), 1,
      anon_sym_,
    STATE(13), 1,
      sym_statOrDeclList,
  [7282] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(568), 1,
      anon_sym_RBRACK,
    ACTIONS(570), 1,
      anon_sym_COLON,
  [7292] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(572), 2,
      anon_sym_GT,
      anon_sym_comma,
  [7300] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(574), 2,
      anon_sym_GT,
      anon_sym_comma,
  [7308] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(576), 1,
      anon_sym_GT,
    ACTIONS(578), 1,
      anon_sym_comma,
  [7318] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(580), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [7326] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(554), 1,
      anon_sym_,
    STATE(3), 1,
      sym_annotationBody,
  [7336] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(582), 1,
      anon_sym_,
    STATE(31), 1,
      sym_switchCases,
  [7346] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(564), 1,
      anon_sym_RBRACK,
    ACTIONS(584), 1,
      anon_sym_COMMA,
  [7356] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(586), 2,
      anon_sym_GT,
      anon_sym_comma,
  [7364] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(560), 1,
      anon_sym_,
    STATE(14), 1,
      sym_statOrDeclList,
  [7374] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(588), 1,
      anon_sym_LPAREN,
    ACTIONS(590), 1,
      sym_integer,
  [7384] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(592), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [7392] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(594), 1,
      anon_sym_LPAREN,
    ACTIONS(596), 1,
      sym_integer,
  [7402] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(554), 1,
      anon_sym_,
    STATE(4), 1,
      sym_annotationBody,
  [7412] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(554), 1,
      anon_sym_,
    STATE(6), 1,
      sym_annotationBody,
  [7422] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(598), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7430] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(97), 1,
      anon_sym_LT,
    ACTIONS(99), 1,
      anon_sym_,
  [7440] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(87), 1,
      anon_sym_LT,
    ACTIONS(90), 1,
      anon_sym_,
  [7450] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(93), 1,
      anon_sym_LT,
    ACTIONS(95), 1,
      anon_sym_,
  [7460] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(600), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [7468] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(582), 1,
      anon_sym_,
    STATE(25), 1,
      sym_switchCases,
  [7478] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(550), 1,
      anon_sym_COMMA,
    ACTIONS(602), 1,
      anon_sym_GT,
  [7488] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(391), 2,
      anon_sym_GT,
      anon_sym_comma,
  [7496] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(604), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [7504] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(606), 1,
      anon_sym_COMMA,
    ACTIONS(608), 1,
      anon_sym_GT,
  [7514] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(610), 1,
      anon_sym_,
    STATE(189), 1,
      sym_methodPrototypes,
  [7524] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(385), 2,
      anon_sym_GT,
      anon_sym_comma,
  [7532] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(550), 1,
      anon_sym_COMMA,
    ACTIONS(612), 1,
      anon_sym_GT,
  [7542] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(550), 1,
      anon_sym_COMMA,
    ACTIONS(614), 1,
      anon_sym_GT,
  [7552] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(550), 1,
      anon_sym_COMMA,
    ACTIONS(616), 1,
      anon_sym_GT,
  [7562] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(550), 1,
      anon_sym_COMMA,
    ACTIONS(618), 1,
      anon_sym_GT,
  [7572] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(423), 2,
      anon_sym_GT,
      anon_sym_comma,
  [7580] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(407), 2,
      anon_sym_GT,
      anon_sym_comma,
  [7588] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(620), 1,
      anon_sym_RBRACK,
    ACTIONS(622), 1,
      anon_sym_COLON,
  [7598] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(442), 2,
      anon_sym_GT,
      anon_sym_comma,
  [7606] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(624), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7614] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(431), 2,
      anon_sym_GT,
      anon_sym_comma,
  [7622] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(626), 1,
      anon_sym_RPAREN,
    ACTIONS(628), 1,
      anon_sym_COMMA,
  [7632] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(630), 1,
      sym_identifier,
    STATE(224), 1,
      sym_typeIdentifier,
  [7642] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(468), 1,
      anon_sym_RPAREN,
    ACTIONS(632), 1,
      anon_sym_COMMA,
  [7652] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(634), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7660] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(636), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7668] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(638), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [7676] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(640), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [7684] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(87), 1,
      anon_sym_EQ,
    ACTIONS(90), 1,
      anon_sym_,
  [7694] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(642), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [7702] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(93), 1,
      anon_sym_EQ,
    ACTIONS(95), 1,
      anon_sym_,
  [7712] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(644), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [7720] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(646), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [7728] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(648), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [7736] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(650), 1,
      anon_sym_LBRACE,
    ACTIONS(652), 1,
      anon_sym_const,
  [7746] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(654), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7754] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(560), 1,
      anon_sym_,
    STATE(15), 1,
      sym_statOrDeclList,
  [7764] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(656), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7772] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(658), 1,
      anon_sym_RPAREN,
  [7779] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(660), 1,
      anon_sym_RPAREN,
  [7786] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(662), 1,
      anon_sym_LPAREN,
  [7793] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(664), 1,
      anon_sym_SEMI,
  [7800] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(666), 1,
      anon_sym_SEMI,
  [7807] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(668), 1,
      anon_sym_LPAREN,
  [7814] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(17), 1,
      anon_sym_RBRACK,
  [7821] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(670), 1,
      anon_sym_RPAREN,
  [7828] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(672), 1,
      anon_sym_SEMI,
  [7835] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(674), 1,
      anon_sym_GT,
  [7842] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(676), 1,
      anon_sym_LPAREN,
  [7849] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(678), 1,
      anon_sym_SEMI,
  [7856] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(680), 1,
      anon_sym_SEMI,
  [7863] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(682), 1,
      anon_sym_SEMI,
  [7870] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(684), 1,
      anon_sym_SEMI,
  [7877] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(686), 1,
      anon_sym_apply,
  [7884] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
  [7891] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(688), 1,
      anon_sym_RPAREN,
  [7898] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(690), 1,
      anon_sym_RPAREN,
  [7905] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(97), 1,
      sym_identifier,
  [7912] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(692), 1,
      anon_sym_RPAREN,
  [7919] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(694), 1,
      anon_sym_SEMI,
  [7926] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(696), 1,
      anon_sym_SEMI,
  [7933] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(698), 1,
      anon_sym_LPAREN,
  [7940] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(626), 1,
      anon_sym_RPAREN,
  [7947] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(700), 1,
      anon_sym_EQ,
  [7954] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(702), 1,
      anon_sym_RPAREN,
  [7961] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(704), 1,
      anon_sym_RPAREN,
  [7968] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(23), 1,
      anon_sym_RBRACK,
  [7975] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(706), 1,
      anon_sym_SEMI,
  [7982] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(708), 1,
      anon_sym_GT,
  [7989] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(710), 1,
      anon_sym_RPAREN,
  [7996] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(712), 1,
      anon_sym_RBRACK,
  [8003] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(714), 1,
      anon_sym_SEMI,
  [8010] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(716), 1,
      anon_sym_GT,
  [8017] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(718), 1,
      anon_sym_LPAREN,
  [8024] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(720), 1,
      anon_sym_RBRACK,
  [8031] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(722), 1,
      anon_sym_SEMI,
  [8038] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(724), 1,
      anon_sym_SEMI,
  [8045] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(726), 1,
      anon_sym_SEMI,
  [8052] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(728), 1,
      anon_sym_SEMI,
  [8059] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(730), 1,
      anon_sym_SEMI,
  [8066] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(732), 1,
      anon_sym_SEMI,
  [8073] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(734), 1,
      anon_sym_SEMI,
  [8080] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(736), 1,
      anon_sym_SEMI,
  [8087] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(738), 1,
      anon_sym_SEMI,
  [8094] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(740), 1,
      anon_sym_LPAREN,
  [8101] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(742), 1,
      anon_sym_GT,
  [8108] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(21), 1,
      anon_sym_RBRACK,
  [8115] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(744), 1,
      anon_sym_DOT,
  [8122] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(444), 1,
      anon_sym_DOT,
  [8129] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(548), 1,
      anon_sym_LPAREN,
  [8136] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(746), 1,
      anon_sym_LBRACE,
  [8143] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(748), 1,
      anon_sym_EQ,
  [8150] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(750), 1,
      anon_sym_SEMI,
  [8157] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(752), 1,
      anon_sym_RBRACK,
  [8164] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(754), 1,
      anon_sym_apply,
  [8171] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(756), 1,
      anon_sym_COLON,
  [8178] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(758), 1,
      anon_sym_LBRACE,
  [8185] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(760), 1,
      anon_sym_RPAREN,
  [8192] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(762), 1,
      anon_sym_RPAREN,
  [8199] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(261), 1,
      anon_sym_COLON,
  [8206] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(25), 1,
      anon_sym_RBRACK,
  [8213] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(764), 1,
      anon_sym_RPAREN,
  [8220] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(259), 1,
      anon_sym_DOT,
  [8227] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(766), 1,
      anon_sym_LBRACE,
  [8234] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(768), 1,
      anon_sym_RPAREN,
  [8241] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(770), 1,
      anon_sym_RPAREN,
  [8248] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(772), 1,
      anon_sym_RBRACK,
  [8255] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(774), 1,
      anon_sym_RPAREN,
  [8262] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(776), 1,
      anon_sym_RPAREN,
  [8269] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(778), 1,
      anon_sym_LPAREN,
  [8276] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(780), 1,
      anon_sym_COLON,
  [8283] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(568), 1,
      anon_sym_RPAREN,
  [8290] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(568), 1,
      anon_sym_prefix,
  [8297] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(782), 1,
      anon_sym_prefix,
  [8304] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(784), 1,
      ts_builtin_sym_end,
  [8311] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(786), 1,
      anon_sym_LT,
  [8318] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(508), 1,
      anon_sym_LT,
  [8325] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(788), 1,
      anon_sym_EQ,
  [8332] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(790), 1,
      anon_sym_EQ,
  [8339] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(792), 1,
      anon_sym_LBRACE,
  [8346] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(794), 1,
      anon_sym_RPAREN,
  [8353] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(796), 1,
      anon_sym_LPAREN,
  [8360] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(798), 1,
      anon_sym_SEMI,
  [8367] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(800), 1,
      anon_sym_LBRACE,
  [8374] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(802), 1,
      anon_sym_SEMI,
  [8381] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(393), 1,
      anon_sym_LT,
  [8388] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(650), 1,
      anon_sym_LBRACE,
  [8395] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(804), 1,
      anon_sym_LBRACE,
  [8402] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(806), 1,
      anon_sym_LT,
  [8409] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(808), 1,
      anon_sym_LPAREN,
  [8416] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(810), 1,
      anon_sym_RPAREN,
  [8423] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(812), 1,
      anon_sym_LPAREN,
  [8430] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(814), 1,
      anon_sym_LPAREN,
  [8437] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(816), 1,
      sym_identifier,
  [8444] = 1,
    ACTIONS(818), 1,
      aux_sym_source_file_token1,
  [8448] = 1,
    ACTIONS(820), 1,
      aux_sym_source_file_token1,
  [8452] = 1,
    ACTIONS(277), 1,
      aux_sym_source_file_token1,
  [8456] = 1,
    ACTIONS(822), 1,
      aux_sym_source_file_token1,
  [8460] = 1,
    ACTIONS(189), 1,
      aux_sym_source_file_token1,
  [8464] = 1,
    ACTIONS(824), 1,
      aux_sym_source_file_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(12)] = 0,
  [SMALL_STATE(13)] = 118,
  [SMALL_STATE(14)] = 236,
  [SMALL_STATE(15)] = 354,
  [SMALL_STATE(16)] = 472,
  [SMALL_STATE(17)] = 517,
  [SMALL_STATE(18)] = 562,
  [SMALL_STATE(19)] = 607,
  [SMALL_STATE(20)] = 693,
  [SMALL_STATE(21)] = 773,
  [SMALL_STATE(22)] = 859,
  [SMALL_STATE(23)] = 945,
  [SMALL_STATE(24)] = 1015,
  [SMALL_STATE(25)] = 1084,
  [SMALL_STATE(26)] = 1159,
  [SMALL_STATE(27)] = 1228,
  [SMALL_STATE(28)] = 1297,
  [SMALL_STATE(29)] = 1366,
  [SMALL_STATE(30)] = 1435,
  [SMALL_STATE(31)] = 1504,
  [SMALL_STATE(32)] = 1579,
  [SMALL_STATE(33)] = 1618,
  [SMALL_STATE(34)] = 1685,
  [SMALL_STATE(35)] = 1748,
  [SMALL_STATE(36)] = 1811,
  [SMALL_STATE(37)] = 1858,
  [SMALL_STATE(38)] = 1899,
  [SMALL_STATE(39)] = 1933,
  [SMALL_STATE(40)] = 1967,
  [SMALL_STATE(41)] = 2003,
  [SMALL_STATE(42)] = 2037,
  [SMALL_STATE(43)] = 2071,
  [SMALL_STATE(44)] = 2105,
  [SMALL_STATE(45)] = 2139,
  [SMALL_STATE(46)] = 2173,
  [SMALL_STATE(47)] = 2207,
  [SMALL_STATE(48)] = 2241,
  [SMALL_STATE(49)] = 2275,
  [SMALL_STATE(50)] = 2309,
  [SMALL_STATE(51)] = 2343,
  [SMALL_STATE(52)] = 2377,
  [SMALL_STATE(53)] = 2411,
  [SMALL_STATE(54)] = 2445,
  [SMALL_STATE(55)] = 2483,
  [SMALL_STATE(56)] = 2517,
  [SMALL_STATE(57)] = 2551,
  [SMALL_STATE(58)] = 2585,
  [SMALL_STATE(59)] = 2619,
  [SMALL_STATE(60)] = 2653,
  [SMALL_STATE(61)] = 2699,
  [SMALL_STATE(62)] = 2733,
  [SMALL_STATE(63)] = 2766,
  [SMALL_STATE(64)] = 2799,
  [SMALL_STATE(65)] = 2832,
  [SMALL_STATE(66)] = 2865,
  [SMALL_STATE(67)] = 2898,
  [SMALL_STATE(68)] = 2931,
  [SMALL_STATE(69)] = 2964,
  [SMALL_STATE(70)] = 2997,
  [SMALL_STATE(71)] = 3030,
  [SMALL_STATE(72)] = 3063,
  [SMALL_STATE(73)] = 3096,
  [SMALL_STATE(74)] = 3129,
  [SMALL_STATE(75)] = 3162,
  [SMALL_STATE(76)] = 3195,
  [SMALL_STATE(77)] = 3228,
  [SMALL_STATE(78)] = 3261,
  [SMALL_STATE(79)] = 3294,
  [SMALL_STATE(80)] = 3327,
  [SMALL_STATE(81)] = 3386,
  [SMALL_STATE(82)] = 3442,
  [SMALL_STATE(83)] = 3493,
  [SMALL_STATE(84)] = 3522,
  [SMALL_STATE(85)] = 3573,
  [SMALL_STATE(86)] = 3624,
  [SMALL_STATE(87)] = 3675,
  [SMALL_STATE(88)] = 3726,
  [SMALL_STATE(89)] = 3755,
  [SMALL_STATE(90)] = 3806,
  [SMALL_STATE(91)] = 3857,
  [SMALL_STATE(92)] = 3908,
  [SMALL_STATE(93)] = 3937,
  [SMALL_STATE(94)] = 3988,
  [SMALL_STATE(95)] = 4039,
  [SMALL_STATE(96)] = 4090,
  [SMALL_STATE(97)] = 4119,
  [SMALL_STATE(98)] = 4170,
  [SMALL_STATE(99)] = 4217,
  [SMALL_STATE(100)] = 4264,
  [SMALL_STATE(101)] = 4311,
  [SMALL_STATE(102)] = 4353,
  [SMALL_STATE(103)] = 4376,
  [SMALL_STATE(104)] = 4399,
  [SMALL_STATE(105)] = 4430,
  [SMALL_STATE(106)] = 4461,
  [SMALL_STATE(107)] = 4484,
  [SMALL_STATE(108)] = 4515,
  [SMALL_STATE(109)] = 4542,
  [SMALL_STATE(110)] = 4565,
  [SMALL_STATE(111)] = 4596,
  [SMALL_STATE(112)] = 4627,
  [SMALL_STATE(113)] = 4658,
  [SMALL_STATE(114)] = 4686,
  [SMALL_STATE(115)] = 4714,
  [SMALL_STATE(116)] = 4742,
  [SMALL_STATE(117)] = 4770,
  [SMALL_STATE(118)] = 4798,
  [SMALL_STATE(119)] = 4826,
  [SMALL_STATE(120)] = 4854,
  [SMALL_STATE(121)] = 4882,
  [SMALL_STATE(122)] = 4910,
  [SMALL_STATE(123)] = 4936,
  [SMALL_STATE(124)] = 4964,
  [SMALL_STATE(125)] = 4986,
  [SMALL_STATE(126)] = 5014,
  [SMALL_STATE(127)] = 5038,
  [SMALL_STATE(128)] = 5066,
  [SMALL_STATE(129)] = 5094,
  [SMALL_STATE(130)] = 5122,
  [SMALL_STATE(131)] = 5150,
  [SMALL_STATE(132)] = 5172,
  [SMALL_STATE(133)] = 5200,
  [SMALL_STATE(134)] = 5228,
  [SMALL_STATE(135)] = 5256,
  [SMALL_STATE(136)] = 5284,
  [SMALL_STATE(137)] = 5312,
  [SMALL_STATE(138)] = 5340,
  [SMALL_STATE(139)] = 5368,
  [SMALL_STATE(140)] = 5389,
  [SMALL_STATE(141)] = 5408,
  [SMALL_STATE(142)] = 5433,
  [SMALL_STATE(143)] = 5454,
  [SMALL_STATE(144)] = 5475,
  [SMALL_STATE(145)] = 5496,
  [SMALL_STATE(146)] = 5517,
  [SMALL_STATE(147)] = 5537,
  [SMALL_STATE(148)] = 5559,
  [SMALL_STATE(149)] = 5579,
  [SMALL_STATE(150)] = 5599,
  [SMALL_STATE(151)] = 5619,
  [SMALL_STATE(152)] = 5650,
  [SMALL_STATE(153)] = 5669,
  [SMALL_STATE(154)] = 5690,
  [SMALL_STATE(155)] = 5711,
  [SMALL_STATE(156)] = 5742,
  [SMALL_STATE(157)] = 5767,
  [SMALL_STATE(158)] = 5792,
  [SMALL_STATE(159)] = 5817,
  [SMALL_STATE(160)] = 5842,
  [SMALL_STATE(161)] = 5864,
  [SMALL_STATE(162)] = 5882,
  [SMALL_STATE(163)] = 5904,
  [SMALL_STATE(164)] = 5926,
  [SMALL_STATE(165)] = 5948,
  [SMALL_STATE(166)] = 5970,
  [SMALL_STATE(167)] = 5992,
  [SMALL_STATE(168)] = 6012,
  [SMALL_STATE(169)] = 6030,
  [SMALL_STATE(170)] = 6048,
  [SMALL_STATE(171)] = 6070,
  [SMALL_STATE(172)] = 6092,
  [SMALL_STATE(173)] = 6110,
  [SMALL_STATE(174)] = 6132,
  [SMALL_STATE(175)] = 6154,
  [SMALL_STATE(176)] = 6176,
  [SMALL_STATE(177)] = 6198,
  [SMALL_STATE(178)] = 6216,
  [SMALL_STATE(179)] = 6234,
  [SMALL_STATE(180)] = 6252,
  [SMALL_STATE(181)] = 6274,
  [SMALL_STATE(182)] = 6292,
  [SMALL_STATE(183)] = 6311,
  [SMALL_STATE(184)] = 6332,
  [SMALL_STATE(185)] = 6353,
  [SMALL_STATE(186)] = 6374,
  [SMALL_STATE(187)] = 6402,
  [SMALL_STATE(188)] = 6430,
  [SMALL_STATE(189)] = 6458,
  [SMALL_STATE(190)] = 6483,
  [SMALL_STATE(191)] = 6496,
  [SMALL_STATE(192)] = 6511,
  [SMALL_STATE(193)] = 6526,
  [SMALL_STATE(194)] = 6543,
  [SMALL_STATE(195)] = 6558,
  [SMALL_STATE(196)] = 6571,
  [SMALL_STATE(197)] = 6590,
  [SMALL_STATE(198)] = 6605,
  [SMALL_STATE(199)] = 6621,
  [SMALL_STATE(200)] = 6643,
  [SMALL_STATE(201)] = 6665,
  [SMALL_STATE(202)] = 6683,
  [SMALL_STATE(203)] = 6696,
  [SMALL_STATE(204)] = 6711,
  [SMALL_STATE(205)] = 6724,
  [SMALL_STATE(206)] = 6735,
  [SMALL_STATE(207)] = 6746,
  [SMALL_STATE(208)] = 6759,
  [SMALL_STATE(209)] = 6774,
  [SMALL_STATE(210)] = 6787,
  [SMALL_STATE(211)] = 6798,
  [SMALL_STATE(212)] = 6817,
  [SMALL_STATE(213)] = 6828,
  [SMALL_STATE(214)] = 6839,
  [SMALL_STATE(215)] = 6850,
  [SMALL_STATE(216)] = 6869,
  [SMALL_STATE(217)] = 6880,
  [SMALL_STATE(218)] = 6891,
  [SMALL_STATE(219)] = 6902,
  [SMALL_STATE(220)] = 6913,
  [SMALL_STATE(221)] = 6923,
  [SMALL_STATE(222)] = 6933,
  [SMALL_STATE(223)] = 6945,
  [SMALL_STATE(224)] = 6957,
  [SMALL_STATE(225)] = 6967,
  [SMALL_STATE(226)] = 6983,
  [SMALL_STATE(227)] = 6999,
  [SMALL_STATE(228)] = 7011,
  [SMALL_STATE(229)] = 7021,
  [SMALL_STATE(230)] = 7032,
  [SMALL_STATE(231)] = 7043,
  [SMALL_STATE(232)] = 7052,
  [SMALL_STATE(233)] = 7063,
  [SMALL_STATE(234)] = 7072,
  [SMALL_STATE(235)] = 7083,
  [SMALL_STATE(236)] = 7094,
  [SMALL_STATE(237)] = 7107,
  [SMALL_STATE(238)] = 7118,
  [SMALL_STATE(239)] = 7131,
  [SMALL_STATE(240)] = 7142,
  [SMALL_STATE(241)] = 7155,
  [SMALL_STATE(242)] = 7166,
  [SMALL_STATE(243)] = 7174,
  [SMALL_STATE(244)] = 7184,
  [SMALL_STATE(245)] = 7194,
  [SMALL_STATE(246)] = 7204,
  [SMALL_STATE(247)] = 7214,
  [SMALL_STATE(248)] = 7224,
  [SMALL_STATE(249)] = 7232,
  [SMALL_STATE(250)] = 7242,
  [SMALL_STATE(251)] = 7252,
  [SMALL_STATE(252)] = 7262,
  [SMALL_STATE(253)] = 7272,
  [SMALL_STATE(254)] = 7282,
  [SMALL_STATE(255)] = 7292,
  [SMALL_STATE(256)] = 7300,
  [SMALL_STATE(257)] = 7308,
  [SMALL_STATE(258)] = 7318,
  [SMALL_STATE(259)] = 7326,
  [SMALL_STATE(260)] = 7336,
  [SMALL_STATE(261)] = 7346,
  [SMALL_STATE(262)] = 7356,
  [SMALL_STATE(263)] = 7364,
  [SMALL_STATE(264)] = 7374,
  [SMALL_STATE(265)] = 7384,
  [SMALL_STATE(266)] = 7392,
  [SMALL_STATE(267)] = 7402,
  [SMALL_STATE(268)] = 7412,
  [SMALL_STATE(269)] = 7422,
  [SMALL_STATE(270)] = 7430,
  [SMALL_STATE(271)] = 7440,
  [SMALL_STATE(272)] = 7450,
  [SMALL_STATE(273)] = 7460,
  [SMALL_STATE(274)] = 7468,
  [SMALL_STATE(275)] = 7478,
  [SMALL_STATE(276)] = 7488,
  [SMALL_STATE(277)] = 7496,
  [SMALL_STATE(278)] = 7504,
  [SMALL_STATE(279)] = 7514,
  [SMALL_STATE(280)] = 7524,
  [SMALL_STATE(281)] = 7532,
  [SMALL_STATE(282)] = 7542,
  [SMALL_STATE(283)] = 7552,
  [SMALL_STATE(284)] = 7562,
  [SMALL_STATE(285)] = 7572,
  [SMALL_STATE(286)] = 7580,
  [SMALL_STATE(287)] = 7588,
  [SMALL_STATE(288)] = 7598,
  [SMALL_STATE(289)] = 7606,
  [SMALL_STATE(290)] = 7614,
  [SMALL_STATE(291)] = 7622,
  [SMALL_STATE(292)] = 7632,
  [SMALL_STATE(293)] = 7642,
  [SMALL_STATE(294)] = 7652,
  [SMALL_STATE(295)] = 7660,
  [SMALL_STATE(296)] = 7668,
  [SMALL_STATE(297)] = 7676,
  [SMALL_STATE(298)] = 7684,
  [SMALL_STATE(299)] = 7694,
  [SMALL_STATE(300)] = 7702,
  [SMALL_STATE(301)] = 7712,
  [SMALL_STATE(302)] = 7720,
  [SMALL_STATE(303)] = 7728,
  [SMALL_STATE(304)] = 7736,
  [SMALL_STATE(305)] = 7746,
  [SMALL_STATE(306)] = 7754,
  [SMALL_STATE(307)] = 7764,
  [SMALL_STATE(308)] = 7772,
  [SMALL_STATE(309)] = 7779,
  [SMALL_STATE(310)] = 7786,
  [SMALL_STATE(311)] = 7793,
  [SMALL_STATE(312)] = 7800,
  [SMALL_STATE(313)] = 7807,
  [SMALL_STATE(314)] = 7814,
  [SMALL_STATE(315)] = 7821,
  [SMALL_STATE(316)] = 7828,
  [SMALL_STATE(317)] = 7835,
  [SMALL_STATE(318)] = 7842,
  [SMALL_STATE(319)] = 7849,
  [SMALL_STATE(320)] = 7856,
  [SMALL_STATE(321)] = 7863,
  [SMALL_STATE(322)] = 7870,
  [SMALL_STATE(323)] = 7877,
  [SMALL_STATE(324)] = 7884,
  [SMALL_STATE(325)] = 7891,
  [SMALL_STATE(326)] = 7898,
  [SMALL_STATE(327)] = 7905,
  [SMALL_STATE(328)] = 7912,
  [SMALL_STATE(329)] = 7919,
  [SMALL_STATE(330)] = 7926,
  [SMALL_STATE(331)] = 7933,
  [SMALL_STATE(332)] = 7940,
  [SMALL_STATE(333)] = 7947,
  [SMALL_STATE(334)] = 7954,
  [SMALL_STATE(335)] = 7961,
  [SMALL_STATE(336)] = 7968,
  [SMALL_STATE(337)] = 7975,
  [SMALL_STATE(338)] = 7982,
  [SMALL_STATE(339)] = 7989,
  [SMALL_STATE(340)] = 7996,
  [SMALL_STATE(341)] = 8003,
  [SMALL_STATE(342)] = 8010,
  [SMALL_STATE(343)] = 8017,
  [SMALL_STATE(344)] = 8024,
  [SMALL_STATE(345)] = 8031,
  [SMALL_STATE(346)] = 8038,
  [SMALL_STATE(347)] = 8045,
  [SMALL_STATE(348)] = 8052,
  [SMALL_STATE(349)] = 8059,
  [SMALL_STATE(350)] = 8066,
  [SMALL_STATE(351)] = 8073,
  [SMALL_STATE(352)] = 8080,
  [SMALL_STATE(353)] = 8087,
  [SMALL_STATE(354)] = 8094,
  [SMALL_STATE(355)] = 8101,
  [SMALL_STATE(356)] = 8108,
  [SMALL_STATE(357)] = 8115,
  [SMALL_STATE(358)] = 8122,
  [SMALL_STATE(359)] = 8129,
  [SMALL_STATE(360)] = 8136,
  [SMALL_STATE(361)] = 8143,
  [SMALL_STATE(362)] = 8150,
  [SMALL_STATE(363)] = 8157,
  [SMALL_STATE(364)] = 8164,
  [SMALL_STATE(365)] = 8171,
  [SMALL_STATE(366)] = 8178,
  [SMALL_STATE(367)] = 8185,
  [SMALL_STATE(368)] = 8192,
  [SMALL_STATE(369)] = 8199,
  [SMALL_STATE(370)] = 8206,
  [SMALL_STATE(371)] = 8213,
  [SMALL_STATE(372)] = 8220,
  [SMALL_STATE(373)] = 8227,
  [SMALL_STATE(374)] = 8234,
  [SMALL_STATE(375)] = 8241,
  [SMALL_STATE(376)] = 8248,
  [SMALL_STATE(377)] = 8255,
  [SMALL_STATE(378)] = 8262,
  [SMALL_STATE(379)] = 8269,
  [SMALL_STATE(380)] = 8276,
  [SMALL_STATE(381)] = 8283,
  [SMALL_STATE(382)] = 8290,
  [SMALL_STATE(383)] = 8297,
  [SMALL_STATE(384)] = 8304,
  [SMALL_STATE(385)] = 8311,
  [SMALL_STATE(386)] = 8318,
  [SMALL_STATE(387)] = 8325,
  [SMALL_STATE(388)] = 8332,
  [SMALL_STATE(389)] = 8339,
  [SMALL_STATE(390)] = 8346,
  [SMALL_STATE(391)] = 8353,
  [SMALL_STATE(392)] = 8360,
  [SMALL_STATE(393)] = 8367,
  [SMALL_STATE(394)] = 8374,
  [SMALL_STATE(395)] = 8381,
  [SMALL_STATE(396)] = 8388,
  [SMALL_STATE(397)] = 8395,
  [SMALL_STATE(398)] = 8402,
  [SMALL_STATE(399)] = 8409,
  [SMALL_STATE(400)] = 8416,
  [SMALL_STATE(401)] = 8423,
  [SMALL_STATE(402)] = 8430,
  [SMALL_STATE(403)] = 8437,
  [SMALL_STATE(404)] = 8444,
  [SMALL_STATE(405)] = 8448,
  [SMALL_STATE(406)] = 8452,
  [SMALL_STATE(407)] = 8456,
  [SMALL_STATE(408)] = 8460,
  [SMALL_STATE(409)] = 8464,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotationBody, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotationBody, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_annotationToken, 1), REDUCE(sym_typeIdentifier, 1),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_annotationToken, 1), REDUCE(sym_typeIdentifier, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotationToken, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotationToken, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotationBody, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotationBody, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotationBody, 4),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotationBody, 4),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_nonTypeName, 1), REDUCE(sym_typeIdentifier, 1),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_nonTypeName, 1), REDUCE(sym_typeIdentifier, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonTypeName, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonTypeName, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switchCase, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switchCase, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeIdentifier, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switchStatement, 7),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switchStatement, 7),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditionalStatement, 5),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditionalStatement, 5),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blockStatement, 4),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blockStatement, 4),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignmentOrMethodCallStatement, 4),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignmentOrMethodCallStatement, 4),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignmentOrMethodCallStatement, 8),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignmentOrMethodCallStatement, 8),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directApplication, 7),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directApplication, 7),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_emptyStatement, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emptyStatement, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonBraceExpression, 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonBraceExpression, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonBraceExpression, 1),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonBraceExpression, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonBraceExpression, 5),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonBraceExpression, 5),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonBraceExpression, 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonBraceExpression, 3),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_returnStatement, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnStatement, 2),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exitStatement, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exitStatement, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonBraceExpression, 6),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonBraceExpression, 6),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditionalStatement, 7),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditionalStatement, 7),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignmentOrMethodCallStatement, 5),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignmentOrMethodCallStatement, 5),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonBraceExpression, 4),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonBraceExpression, 4),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_returnStatement, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnStatement, 3),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonBraceExpression, 7),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonBraceExpression, 7),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switchLabel, 1),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 1),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member, 1),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constantDeclaration, 7),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constantDeclaration, 7),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statOrDeclList, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statOrDeclList, 1),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statOrDeclList, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statOrDeclList, 2),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statementOrDeclaration, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statementOrDeclaration, 1),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variableDeclaration, 4),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variableDeclaration, 4),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variableDeclaration, 5),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variableDeclaration, 5),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optAnnotations, 1),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optAnnotations, 1),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switchCases, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switchCases, 2),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switchCase, 3),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switchCase, 3),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switchCases, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switchCases, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefixedType, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefixedType, 2),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typeName, 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeName, 1),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefixedType, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefixedType, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_specializedType, 4),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_specializedType, 4),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotations, 1),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotations, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotations, 2),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotations, 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 5),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 5),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typeIdentifier, 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typeRef, 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeRef, 1),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_baseType, 1),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseType, 1),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [397] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(220),
  [400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(176),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_baseType, 4),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseType, 4),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tupleType, 4),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tupleType, 4),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_baseType, 6),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseType, 6),
  [433] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_typeOrVoid, 1), REDUCE(sym_typeIdentifier, 1),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction, 1),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headerStackType, 4),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headerStackType, 4),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typeOrVoid, 1),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotPrefix, 1),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterList, 1),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lvalue, 3),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lvalue, 4),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lvalue, 6),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefixedNonTypeName, 1),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lvalue, 1),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefixedNonTypeName, 2),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_methodPrototypes, 1),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_methodPrototypes, 1),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeArg, 1),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_methodPrototypes, 2),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_methodPrototypes, 2),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_methodPrototype, 6),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_methodPrototype, 6),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_methodPrototype, 3),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_methodPrototype, 3),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namedType, 1),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expressionList, 1),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structuredAnnotationBody, 1),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_realTypeArg, 1),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_realTypeArgumentList, 1),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kvList, 1),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_realTypeArgumentList, 3),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optTypeParameters, 1),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonEmptyArgList, 3),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeArgumentList, 1),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeParameterList, 1),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonEmptyArgList, 1),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argumentList, 1),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonEmptyParameterList, 1),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kvPair, 3),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kvList, 3),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expressionList, 3),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeParameters, 3),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeArgumentList, 3),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeParameterList, 3),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonEmptyParameterList, 3),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 6),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functionPrototype, 6),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_initializer, 1),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optInitializer, 1),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optInitializer, 2),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prec, 1),
  [784] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotPrefix, 1),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_externDeclaration, 4),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_externDeclaration, 7),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actionDeclaration, 7),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_p4(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
