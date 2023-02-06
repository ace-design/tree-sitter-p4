#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 97
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 65
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_source_file_token1 = 1,
  anon_sym_SEMI = 2,
  anon_sym_const = 3,
  anon_sym_EQ = 4,
  anon_sym_extern = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  anon_sym_ = 8,
  anon_sym_AT = 9,
  anon_sym_LT = 10,
  anon_sym_GT = 11,
  anon_sym_COMMA = 12,
  anon_sym_LPAREN = 13,
  anon_sym_RPAREN = 14,
  anon_sym_in = 15,
  anon_sym_out = 16,
  anon_sym_inout = 17,
  anon_sym_apply = 18,
  anon_sym_key = 19,
  anon_sym_actions = 20,
  anon_sym_state = 21,
  anon_sym_entries = 22,
  anon_sym_type = 23,
  sym_identifier = 24,
  anon_sym_bool = 25,
  anon_sym_error = 26,
  anon_sym_match_kind = 27,
  anon_sym_string = 28,
  anon_sym_int = 29,
  anon_sym_bit = 30,
  anon_sym_varbit = 31,
  sym_integer = 32,
  sym_string = 33,
  anon_sym_true = 34,
  anon_sym_false = 35,
  anon_sym_void = 36,
  anon_sym_this = 37,
  sym_source_file = 38,
  sym__declaration = 39,
  sym_constantDeclaration = 40,
  sym_externDeclaration = 41,
  sym__optAnnotations = 42,
  sym__annotations = 43,
  sym_annotation = 44,
  sym_optTypeParameters = 45,
  sym_typeParameters = 46,
  sym_typeParameterList = 47,
  sym_methodPrototypes = 48,
  sym_methodPrototype = 49,
  sym_functionPrototype = 50,
  sym_parameterList = 51,
  sym_nonEmptyParameterList = 52,
  sym_parameter = 53,
  sym_direction = 54,
  sym_name = 55,
  sym_nonTypeName = 56,
  sym_typeIdentifier = 57,
  sym_typeRef = 58,
  sym_baseType = 59,
  sym_boolean = 60,
  sym_typeOrVoid = 61,
  sym_expression = 62,
  sym_initializer = 63,
  aux_sym_source_file_repeat1 = 64,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_file_token1] = "source_file_token1",
  [anon_sym_SEMI] = ";",
  [anon_sym_const] = "const",
  [anon_sym_EQ] = "=",
  [anon_sym_extern] = "extern",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_] = "",
  [anon_sym_AT] = "@",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_COMMA] = ",",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_in] = "in",
  [anon_sym_out] = "out",
  [anon_sym_inout] = "inout",
  [anon_sym_apply] = "apply",
  [anon_sym_key] = "key",
  [anon_sym_actions] = "actions",
  [anon_sym_state] = "state",
  [anon_sym_entries] = "entries",
  [anon_sym_type] = "type",
  [sym_identifier] = "identifier",
  [anon_sym_bool] = "bool",
  [anon_sym_error] = "error",
  [anon_sym_match_kind] = "match_kind",
  [anon_sym_string] = "string",
  [anon_sym_int] = "int",
  [anon_sym_bit] = "bit",
  [anon_sym_varbit] = "varbit",
  [sym_integer] = "integer",
  [sym_string] = "string",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_void] = "void",
  [anon_sym_this] = "this",
  [sym_source_file] = "source_file",
  [sym__declaration] = "_declaration",
  [sym_constantDeclaration] = "constantDeclaration",
  [sym_externDeclaration] = "externDeclaration",
  [sym__optAnnotations] = "_optAnnotations",
  [sym__annotations] = "_annotations",
  [sym_annotation] = "annotation",
  [sym_optTypeParameters] = "optTypeParameters",
  [sym_typeParameters] = "typeParameters",
  [sym_typeParameterList] = "typeParameterList",
  [sym_methodPrototypes] = "methodPrototypes",
  [sym_methodPrototype] = "methodPrototype",
  [sym_functionPrototype] = "functionPrototype",
  [sym_parameterList] = "parameterList",
  [sym_nonEmptyParameterList] = "nonEmptyParameterList",
  [sym_parameter] = "parameter",
  [sym_direction] = "direction",
  [sym_name] = "name",
  [sym_nonTypeName] = "nonTypeName",
  [sym_typeIdentifier] = "typeIdentifier",
  [sym_typeRef] = "typeRef",
  [sym_baseType] = "baseType",
  [sym_boolean] = "boolean",
  [sym_typeOrVoid] = "typeOrVoid",
  [sym_expression] = "expression",
  [sym_initializer] = "initializer",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_file_token1] = aux_sym_source_file_token1,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_extern] = anon_sym_extern,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_] = anon_sym_,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_out] = anon_sym_out,
  [anon_sym_inout] = anon_sym_inout,
  [anon_sym_apply] = anon_sym_apply,
  [anon_sym_key] = anon_sym_key,
  [anon_sym_actions] = anon_sym_actions,
  [anon_sym_state] = anon_sym_state,
  [anon_sym_entries] = anon_sym_entries,
  [anon_sym_type] = anon_sym_type,
  [sym_identifier] = sym_identifier,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_error] = anon_sym_error,
  [anon_sym_match_kind] = anon_sym_match_kind,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_bit] = anon_sym_bit,
  [anon_sym_varbit] = anon_sym_varbit,
  [sym_integer] = sym_integer,
  [sym_string] = sym_string,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_this] = anon_sym_this,
  [sym_source_file] = sym_source_file,
  [sym__declaration] = sym__declaration,
  [sym_constantDeclaration] = sym_constantDeclaration,
  [sym_externDeclaration] = sym_externDeclaration,
  [sym__optAnnotations] = sym__optAnnotations,
  [sym__annotations] = sym__annotations,
  [sym_annotation] = sym_annotation,
  [sym_optTypeParameters] = sym_optTypeParameters,
  [sym_typeParameters] = sym_typeParameters,
  [sym_typeParameterList] = sym_typeParameterList,
  [sym_methodPrototypes] = sym_methodPrototypes,
  [sym_methodPrototype] = sym_methodPrototype,
  [sym_functionPrototype] = sym_functionPrototype,
  [sym_parameterList] = sym_parameterList,
  [sym_nonEmptyParameterList] = sym_nonEmptyParameterList,
  [sym_parameter] = sym_parameter,
  [sym_direction] = sym_direction,
  [sym_name] = sym_name,
  [sym_nonTypeName] = sym_nonTypeName,
  [sym_typeIdentifier] = sym_typeIdentifier,
  [sym_typeRef] = sym_typeRef,
  [sym_baseType] = sym_baseType,
  [sym_boolean] = sym_boolean,
  [sym_typeOrVoid] = sym_typeOrVoid,
  [sym_expression] = sym_expression,
  [sym_initializer] = sym_initializer,
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
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extern] = {
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
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
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
  [anon_sym_COMMA] = {
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
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
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_this] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_constantDeclaration] = {
    .visible = true,
    .named = true,
  },
  [sym_externDeclaration] = {
    .visible = true,
    .named = true,
  },
  [sym__optAnnotations] = {
    .visible = false,
    .named = true,
  },
  [sym__annotations] = {
    .visible = false,
    .named = true,
  },
  [sym_annotation] = {
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
  [sym_methodPrototypes] = {
    .visible = true,
    .named = true,
  },
  [sym_methodPrototype] = {
    .visible = true,
    .named = true,
  },
  [sym_functionPrototype] = {
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
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_nonTypeName] = {
    .visible = true,
    .named = true,
  },
  [sym_typeIdentifier] = {
    .visible = true,
    .named = true,
  },
  [sym_typeRef] = {
    .visible = true,
    .named = true,
  },
  [sym_baseType] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_typeOrVoid] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_initializer] = {
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
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 12,
  [16] = 16,
  [17] = 12,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 8,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 13,
  [37] = 37,
  [38] = 9,
  [39] = 39,
  [40] = 6,
  [41] = 11,
  [42] = 10,
  [43] = 9,
  [44] = 8,
  [45] = 13,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 6,
  [52] = 52,
  [53] = 53,
  [54] = 10,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 11,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 13,
  [66] = 66,
  [67] = 67,
  [68] = 8,
  [69] = 9,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
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

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 'f'
    ? (c < 'a'
      ? (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : c <= '_')
      : (c <= 'a' || (c >= 'c' && c <= 'd')))
    : (c <= 'h' || (c < 't'
      ? (c < 'n'
        ? (c >= 'j' && c <= 'l')
        : c <= 'r')
      : (c <= 'u' || (c >= 'w' && c <= 'z')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(anon_sym_);
      if (eof) ADVANCE(87);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == ')') ADVANCE(107);
      if (lookahead == ',') ADVANCE(105);
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == '=') ADVANCE(91);
      if (lookahead == '>') ADVANCE(104);
      if (lookahead == '@') ADVANCE(102);
      if (lookahead == 'a') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == 'k') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(75);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == 't') ADVANCE(80);
      if (lookahead == '}') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == ')') ADVANCE(107);
      if (lookahead == ',') ADVANCE(105);
      if (lookahead == '=') ADVANCE(91);
      if (lookahead == '>') ADVANCE(104);
      if (lookahead == '@') ADVANCE(102);
      if (lookahead == 'b') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(46);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == 'm') ADVANCE(10);
      if (lookahead == 's') ADVANCE(74);
      if (lookahead == 't') ADVANCE(24);
      if (lookahead == 'v') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(202);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(106);
      if (lookahead == ')') ADVANCE(107);
      if (lookahead == ',') ADVANCE(105);
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == '=') ADVANCE(91);
      if (lookahead == '>') ADVANCE(104);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(181);
      if (lookahead == 'a') ADVANCE(130);
      if (lookahead == 'b') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == 'k') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(125);
      if (lookahead == 's') ADVANCE(168);
      if (lookahead == 't') ADVANCE(180);
      if (lookahead == 'v') ADVANCE(124);
      if (lookahead == '{') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'j') ||
          ('l' <= lookahead && lookahead <= 'r') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (lookahead == 'a') ADVANCE(130);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == 'k') ADVANCE(135);
      if (lookahead == 's') ADVANCE(176);
      if (lookahead == 't') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      END_STATE();
    case 5:
      if (lookahead == '@') ADVANCE(102);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(181);
      if (lookahead == 'b') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == 'm') ADVANCE(125);
      if (lookahead == 's') ADVANCE(177);
      if (lookahead == 'v') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      END_STATE();
    case 6:
      if (lookahead == '_') ADVANCE(32);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 11:
      if (lookahead == 'b') ADVANCE(31);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(63);
      if (lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(186);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 22:
      if (lookahead == 'g') ADVANCE(188);
      END_STATE();
    case 23:
      if (lookahead == 'h') ADVANCE(6);
      END_STATE();
    case 24:
      if (lookahead == 'h') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 32:
      if (lookahead == 'k') ADVANCE(29);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 48:
      if (lookahead == 'p') ADVANCE(34);
      END_STATE();
    case 49:
      if (lookahead == 'p') ADVANCE(15);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(54);
      if (lookahead == 'x') ADVANCE(73);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(115);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(206);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 75:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 76:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 77:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 78:
      if (lookahead == 'y') ADVANCE(113);
      END_STATE();
    case 79:
      if (lookahead == 'y') ADVANCE(111);
      END_STATE();
    case 80:
      if (lookahead == 'y') ADVANCE(49);
      END_STATE();
    case 81:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(198);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(199);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(200);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_') ADVANCE(201);
      END_STATE();
    case 86:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ')') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '<') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'j') ||
          ('l' <= lookahead && lookahead <= 'r') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (lookahead == 'a') ADVANCE(130);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == 'k') ADVANCE(135);
      if (lookahead == 's') ADVANCE(176);
      if (lookahead == 't') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '@') ADVANCE(102);
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '@') ADVANCE(102);
      if (lookahead == '}') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_);
      if (eof) ADVANCE(87);
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == '@') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_inout);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_apply);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_apply);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_key);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_actions);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_actions);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_state);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_state);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_entries);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_entries);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == 'o') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == 'r') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(173);
      if (lookahead == 'p') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(169);
      if (lookahead == 'o') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(175);
      if (lookahead == 'r') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_error);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_match_kind);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_match_kind);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_bit);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_bit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_varbit);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_varbit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(81);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(84);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(82);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(85);
      if (lookahead == 'S' ||
          lookahead == 'W' ||
          lookahead == 's' ||
          lookahead == 'w') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(81);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(84);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(82);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_') ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_this);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 101},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 101},
  [5] = {.lex_state = 101},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 97},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 97},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 97},
  [15] = {.lex_state = 97},
  [16] = {.lex_state = 97},
  [17] = {.lex_state = 97},
  [18] = {.lex_state = 97},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 97},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 101},
  [24] = {.lex_state = 97},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 101},
  [27] = {.lex_state = 99},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 97},
  [30] = {.lex_state = 97},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 97},
  [33] = {.lex_state = 97},
  [34] = {.lex_state = 97},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 101},
  [40] = {.lex_state = 98},
  [41] = {.lex_state = 98},
  [42] = {.lex_state = 98},
  [43] = {.lex_state = 98},
  [44] = {.lex_state = 98},
  [45] = {.lex_state = 98},
  [46] = {.lex_state = 100},
  [47] = {.lex_state = 95},
  [48] = {.lex_state = 96},
  [49] = {.lex_state = 101},
  [50] = {.lex_state = 96},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 99},
  [53] = {.lex_state = 99},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 99},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 99},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 96},
  [65] = {.lex_state = 96},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 96},
  [69] = {.lex_state = 96},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_file_token1] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_out] = ACTIONS(1),
    [anon_sym_inout] = ACTIONS(1),
    [anon_sym_apply] = ACTIONS(1),
    [anon_sym_key] = ACTIONS(1),
    [anon_sym_actions] = ACTIONS(1),
    [anon_sym_state] = ACTIONS(1),
    [anon_sym_entries] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(87),
    [sym__declaration] = STATE(96),
    [sym_constantDeclaration] = STATE(96),
    [sym_externDeclaration] = STATE(96),
    [sym__optAnnotations] = STATE(72),
    [sym__annotations] = STATE(51),
    [sym_annotation] = STATE(51),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_source_file_token1] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_varbit,
    ACTIONS(23), 1,
      anon_sym_void,
    STATE(18), 1,
      sym_typeOrVoid,
    STATE(30), 1,
      sym_baseType,
    STATE(32), 1,
      sym_typeRef,
    STATE(48), 1,
      sym_nonTypeName,
    STATE(78), 1,
      sym_functionPrototype,
    ACTIONS(19), 2,
      anon_sym_int,
      anon_sym_bit,
    ACTIONS(17), 4,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
    ACTIONS(13), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [46] = 11,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(21), 1,
      anon_sym_varbit,
    ACTIONS(23), 1,
      anon_sym_void,
    ACTIONS(25), 1,
      sym_identifier,
    STATE(18), 1,
      sym_typeOrVoid,
    STATE(30), 1,
      sym_baseType,
    STATE(32), 1,
      sym_typeRef,
    STATE(75), 1,
      sym_functionPrototype,
    STATE(85), 1,
      sym_typeIdentifier,
    ACTIONS(19), 2,
      anon_sym_int,
      anon_sym_bit,
    ACTIONS(17), 4,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
  [84] = 9,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      aux_sym_source_file_repeat1,
    STATE(72), 1,
      sym__optAnnotations,
    STATE(51), 2,
      sym__annotations,
      sym_annotation,
    STATE(96), 3,
      sym__declaration,
      sym_constantDeclaration,
      sym_externDeclaration,
  [115] = 9,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_SEMI,
    ACTIONS(34), 1,
      anon_sym_,
    ACTIONS(37), 1,
      anon_sym_AT,
    STATE(5), 1,
      aux_sym_source_file_repeat1,
    STATE(72), 1,
      sym__optAnnotations,
    STATE(51), 2,
      sym__annotations,
      sym_annotation,
    STATE(96), 3,
      sym__declaration,
      sym_constantDeclaration,
      sym_externDeclaration,
  [146] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(40), 1,
      anon_sym_AT,
    STATE(10), 1,
      sym_annotation,
    ACTIONS(42), 9,
      sym_identifier,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_void,
  [167] = 5,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(46), 1,
      sym_identifier,
    STATE(60), 1,
      sym_name,
    STATE(36), 2,
      sym_nonTypeName,
      sym_typeIdentifier,
    ACTIONS(44), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [189] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(48), 1,
      anon_sym_AT,
    ACTIONS(50), 9,
      sym_identifier,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_void,
  [207] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(48), 1,
      anon_sym_AT,
    ACTIONS(50), 9,
      sym_identifier,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_void,
  [225] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(52), 1,
      anon_sym_AT,
    ACTIONS(54), 9,
      sym_identifier,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_void,
  [243] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(56), 1,
      anon_sym_AT,
    ACTIONS(58), 9,
      sym_identifier,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_void,
  [261] = 5,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(46), 1,
      sym_identifier,
    STATE(59), 1,
      sym_name,
    STATE(36), 2,
      sym_nonTypeName,
      sym_typeIdentifier,
    ACTIONS(44), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [283] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(60), 1,
      anon_sym_AT,
    ACTIONS(62), 9,
      sym_identifier,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
      anon_sym_void,
  [301] = 5,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(46), 1,
      sym_identifier,
    STATE(92), 1,
      sym_name,
    STATE(36), 2,
      sym_nonTypeName,
      sym_typeIdentifier,
    ACTIONS(44), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [323] = 5,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(66), 1,
      sym_identifier,
    STATE(11), 1,
      sym_name,
    STATE(13), 2,
      sym_nonTypeName,
      sym_typeIdentifier,
    ACTIONS(64), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [345] = 5,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(46), 1,
      sym_identifier,
    STATE(70), 1,
      sym_name,
    STATE(36), 2,
      sym_nonTypeName,
      sym_typeIdentifier,
    ACTIONS(44), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [367] = 5,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(70), 1,
      sym_identifier,
    STATE(41), 1,
      sym_name,
    STATE(45), 2,
      sym_nonTypeName,
      sym_typeIdentifier,
    ACTIONS(68), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [389] = 5,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(72), 1,
      sym_identifier,
    STATE(50), 1,
      sym_name,
    STATE(65), 2,
      sym_nonTypeName,
      sym_typeIdentifier,
    ACTIONS(13), 6,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
  [411] = 6,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(78), 1,
      anon_sym_varbit,
    STATE(14), 1,
      sym_typeRef,
    STATE(30), 1,
      sym_baseType,
    ACTIONS(76), 2,
      anon_sym_int,
      anon_sym_bit,
    ACTIONS(74), 4,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
  [434] = 6,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(78), 1,
      anon_sym_varbit,
    STATE(7), 1,
      sym_typeRef,
    STATE(30), 1,
      sym_baseType,
    ACTIONS(76), 2,
      anon_sym_int,
      anon_sym_bit,
    ACTIONS(74), 4,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
  [457] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(48), 1,
      anon_sym_LT,
    ACTIONS(50), 1,
      anon_sym_,
    ACTIONS(80), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [476] = 6,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    STATE(57), 1,
      sym_boolean,
    STATE(81), 1,
      sym_expression,
    STATE(82), 1,
      sym_initializer,
    ACTIONS(84), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(82), 3,
      sym_integer,
      sym_string,
      anon_sym_this,
  [498] = 8,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(86), 1,
      anon_sym_,
    ACTIONS(88), 1,
      anon_sym_AT,
    STATE(46), 1,
      sym__optAnnotations,
    STATE(61), 1,
      sym_parameter,
    STATE(63), 1,
      sym_nonEmptyParameterList,
    STATE(80), 1,
      sym_parameterList,
    STATE(40), 2,
      sym__annotations,
      sym_annotation,
  [524] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(90), 1,
      anon_sym_LT,
    ACTIONS(92), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [540] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [556] = 8,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(86), 1,
      anon_sym_,
    ACTIONS(88), 1,
      anon_sym_AT,
    STATE(46), 1,
      sym__optAnnotations,
    STATE(61), 1,
      sym_parameter,
    STATE(63), 1,
      sym_nonEmptyParameterList,
    STATE(88), 1,
      sym_parameterList,
    STATE(40), 2,
      sym__annotations,
      sym_annotation,
  [582] = 7,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(40), 1,
      anon_sym_AT,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    ACTIONS(98), 1,
      anon_sym_,
    STATE(3), 1,
      sym__optAnnotations,
    STATE(58), 1,
      sym_methodPrototype,
    STATE(6), 2,
      sym__annotations,
      sym_annotation,
  [605] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(48), 7,
      anon_sym_const,
      anon_sym_EQ,
      anon_sym_extern,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [618] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(100), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [631] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(102), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [644] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(104), 7,
      anon_sym_bool,
      anon_sym_error,
      anon_sym_match_kind,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bit,
      anon_sym_varbit,
  [657] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(80), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [670] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(106), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [683] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(92), 7,
      anon_sym_apply,
      anon_sym_key,
      anon_sym_actions,
      anon_sym_state,
      anon_sym_entries,
      anon_sym_type,
      sym_identifier,
  [696] = 5,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    STATE(57), 1,
      sym_boolean,
    STATE(74), 1,
      sym_expression,
    ACTIONS(84), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(82), 3,
      sym_integer,
      sym_string,
      anon_sym_this,
  [715] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(60), 7,
      anon_sym_const,
      anon_sym_EQ,
      anon_sym_extern,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [728] = 5,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    STATE(57), 1,
      sym_boolean,
    STATE(77), 1,
      sym_expression,
    ACTIONS(84), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(82), 3,
      sym_integer,
      sym_string,
      anon_sym_this,
  [747] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(48), 7,
      anon_sym_const,
      anon_sym_EQ,
      anon_sym_extern,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [760] = 6,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(88), 1,
      anon_sym_AT,
    ACTIONS(108), 1,
      anon_sym_,
    STATE(46), 1,
      sym__optAnnotations,
    STATE(73), 1,
      sym_parameter,
    STATE(40), 2,
      sym__annotations,
      sym_annotation,
  [780] = 5,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(88), 1,
      anon_sym_AT,
    STATE(42), 1,
      sym_annotation,
    ACTIONS(42), 2,
      anon_sym_,
      anon_sym_in,
    ACTIONS(110), 2,
      anon_sym_out,
      anon_sym_inout,
  [798] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(58), 2,
      anon_sym_,
      anon_sym_in,
    ACTIONS(56), 3,
      anon_sym_AT,
      anon_sym_out,
      anon_sym_inout,
  [811] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(54), 2,
      anon_sym_,
      anon_sym_in,
    ACTIONS(52), 3,
      anon_sym_AT,
      anon_sym_out,
      anon_sym_inout,
  [824] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(50), 2,
      anon_sym_,
      anon_sym_in,
    ACTIONS(48), 3,
      anon_sym_AT,
      anon_sym_out,
      anon_sym_inout,
  [837] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(50), 2,
      anon_sym_,
      anon_sym_in,
    ACTIONS(48), 3,
      anon_sym_AT,
      anon_sym_out,
      anon_sym_inout,
  [850] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(62), 2,
      anon_sym_,
      anon_sym_in,
    ACTIONS(60), 3,
      anon_sym_AT,
      anon_sym_out,
      anon_sym_inout,
  [863] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    STATE(20), 1,
      sym_direction,
    ACTIONS(112), 2,
      anon_sym_,
      anon_sym_in,
    ACTIONS(114), 2,
      anon_sym_out,
      anon_sym_inout,
  [878] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(116), 1,
      anon_sym_RPAREN,
    ACTIONS(42), 2,
      anon_sym_,
      anon_sym_in,
    ACTIONS(110), 2,
      anon_sym_out,
      anon_sym_inout,
  [893] = 5,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(118), 1,
      anon_sym_,
    ACTIONS(120), 1,
      anon_sym_LT,
    STATE(71), 1,
      sym_typeParameters,
    STATE(90), 1,
      sym_optTypeParameters,
  [909] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(122), 1,
      anon_sym_,
    ACTIONS(29), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AT,
  [921] = 5,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(118), 1,
      anon_sym_,
    ACTIONS(120), 1,
      anon_sym_LT,
    STATE(71), 1,
      sym_typeParameters,
    STATE(76), 1,
      sym_optTypeParameters,
  [937] = 4,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(11), 1,
      anon_sym_AT,
    STATE(54), 1,
      sym_annotation,
    ACTIONS(110), 2,
      anon_sym_const,
      anon_sym_extern,
  [951] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(126), 1,
      anon_sym_,
    ACTIONS(124), 2,
      anon_sym_RBRACE,
      anon_sym_AT,
  [962] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(130), 1,
      anon_sym_,
    ACTIONS(128), 2,
      anon_sym_RBRACE,
      anon_sym_AT,
  [973] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(52), 3,
      anon_sym_const,
      anon_sym_extern,
      anon_sym_AT,
  [982] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(132), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [991] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(136), 1,
      anon_sym_,
    ACTIONS(134), 2,
      anon_sym_RBRACE,
      anon_sym_AT,
  [1002] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(138), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1011] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(142), 1,
      anon_sym_,
    ACTIONS(140), 2,
      anon_sym_RBRACE,
      anon_sym_AT,
  [1022] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(56), 3,
      anon_sym_const,
      anon_sym_extern,
      anon_sym_AT,
  [1031] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(144), 1,
      anon_sym_EQ,
    ACTIONS(146), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1042] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(148), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1050] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 1,
      sym_integer,
  [1060] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(116), 1,
      anon_sym_RPAREN,
    ACTIONS(154), 1,
      anon_sym_COMMA,
  [1070] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(156), 1,
      anon_sym_,
    STATE(27), 1,
      sym_methodPrototypes,
  [1080] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(60), 1,
      anon_sym_LT,
    ACTIONS(62), 1,
      anon_sym_,
  [1090] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(158), 2,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
  [1098] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(160), 1,
      anon_sym_GT,
    ACTIONS(162), 1,
      anon_sym_COMMA,
  [1108] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(48), 1,
      anon_sym_LT,
    ACTIONS(50), 1,
      anon_sym_,
  [1118] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(48), 1,
      anon_sym_LT,
    ACTIONS(50), 1,
      anon_sym_,
  [1128] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(164), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [1136] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(166), 2,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
  [1144] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(168), 1,
      anon_sym_const,
    ACTIONS(170), 1,
      anon_sym_extern,
  [1154] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(172), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1162] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(174), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1170] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(176), 1,
      anon_sym_SEMI,
  [1177] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
  [1184] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(180), 1,
      anon_sym_RPAREN,
  [1191] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(182), 1,
      anon_sym_SEMI,
  [1198] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(184), 1,
      anon_sym_GT,
  [1205] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
  [1212] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(188), 1,
      anon_sym_SEMI,
  [1219] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(190), 1,
      anon_sym_SEMI,
  [1226] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(192), 1,
      anon_sym_SEMI,
  [1233] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(90), 1,
      anon_sym_LT,
  [1240] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
  [1247] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(196), 1,
      anon_sym_SEMI,
  [1254] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
  [1261] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(200), 1,
      anon_sym_RPAREN,
  [1268] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(202), 1,
      anon_sym_GT,
  [1275] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
  [1282] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    STATE(67), 1,
      sym_typeParameterList,
  [1289] = 2,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(206), 1,
      anon_sym_EQ,
  [1296] = 1,
    ACTIONS(208), 1,
      aux_sym_source_file_token1,
  [1300] = 1,
    ACTIONS(210), 1,
      aux_sym_source_file_token1,
  [1304] = 1,
    ACTIONS(212), 1,
      aux_sym_source_file_token1,
  [1308] = 1,
    ACTIONS(214), 1,
      aux_sym_source_file_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 84,
  [SMALL_STATE(5)] = 115,
  [SMALL_STATE(6)] = 146,
  [SMALL_STATE(7)] = 167,
  [SMALL_STATE(8)] = 189,
  [SMALL_STATE(9)] = 207,
  [SMALL_STATE(10)] = 225,
  [SMALL_STATE(11)] = 243,
  [SMALL_STATE(12)] = 261,
  [SMALL_STATE(13)] = 283,
  [SMALL_STATE(14)] = 301,
  [SMALL_STATE(15)] = 323,
  [SMALL_STATE(16)] = 345,
  [SMALL_STATE(17)] = 367,
  [SMALL_STATE(18)] = 389,
  [SMALL_STATE(19)] = 411,
  [SMALL_STATE(20)] = 434,
  [SMALL_STATE(21)] = 457,
  [SMALL_STATE(22)] = 476,
  [SMALL_STATE(23)] = 498,
  [SMALL_STATE(24)] = 524,
  [SMALL_STATE(25)] = 540,
  [SMALL_STATE(26)] = 556,
  [SMALL_STATE(27)] = 582,
  [SMALL_STATE(28)] = 605,
  [SMALL_STATE(29)] = 618,
  [SMALL_STATE(30)] = 631,
  [SMALL_STATE(31)] = 644,
  [SMALL_STATE(32)] = 657,
  [SMALL_STATE(33)] = 670,
  [SMALL_STATE(34)] = 683,
  [SMALL_STATE(35)] = 696,
  [SMALL_STATE(36)] = 715,
  [SMALL_STATE(37)] = 728,
  [SMALL_STATE(38)] = 747,
  [SMALL_STATE(39)] = 760,
  [SMALL_STATE(40)] = 780,
  [SMALL_STATE(41)] = 798,
  [SMALL_STATE(42)] = 811,
  [SMALL_STATE(43)] = 824,
  [SMALL_STATE(44)] = 837,
  [SMALL_STATE(45)] = 850,
  [SMALL_STATE(46)] = 863,
  [SMALL_STATE(47)] = 878,
  [SMALL_STATE(48)] = 893,
  [SMALL_STATE(49)] = 909,
  [SMALL_STATE(50)] = 921,
  [SMALL_STATE(51)] = 937,
  [SMALL_STATE(52)] = 951,
  [SMALL_STATE(53)] = 962,
  [SMALL_STATE(54)] = 973,
  [SMALL_STATE(55)] = 982,
  [SMALL_STATE(56)] = 991,
  [SMALL_STATE(57)] = 1002,
  [SMALL_STATE(58)] = 1011,
  [SMALL_STATE(59)] = 1022,
  [SMALL_STATE(60)] = 1031,
  [SMALL_STATE(61)] = 1042,
  [SMALL_STATE(62)] = 1050,
  [SMALL_STATE(63)] = 1060,
  [SMALL_STATE(64)] = 1070,
  [SMALL_STATE(65)] = 1080,
  [SMALL_STATE(66)] = 1090,
  [SMALL_STATE(67)] = 1098,
  [SMALL_STATE(68)] = 1108,
  [SMALL_STATE(69)] = 1118,
  [SMALL_STATE(70)] = 1128,
  [SMALL_STATE(71)] = 1136,
  [SMALL_STATE(72)] = 1144,
  [SMALL_STATE(73)] = 1154,
  [SMALL_STATE(74)] = 1162,
  [SMALL_STATE(75)] = 1170,
  [SMALL_STATE(76)] = 1177,
  [SMALL_STATE(77)] = 1184,
  [SMALL_STATE(78)] = 1191,
  [SMALL_STATE(79)] = 1198,
  [SMALL_STATE(80)] = 1205,
  [SMALL_STATE(81)] = 1212,
  [SMALL_STATE(82)] = 1219,
  [SMALL_STATE(83)] = 1226,
  [SMALL_STATE(84)] = 1233,
  [SMALL_STATE(85)] = 1240,
  [SMALL_STATE(86)] = 1247,
  [SMALL_STATE(87)] = 1254,
  [SMALL_STATE(88)] = 1261,
  [SMALL_STATE(89)] = 1268,
  [SMALL_STATE(90)] = 1275,
  [SMALL_STATE(91)] = 1282,
  [SMALL_STATE(92)] = 1289,
  [SMALL_STATE(93)] = 1296,
  [SMALL_STATE(94)] = 1300,
  [SMALL_STATE(95)] = 1304,
  [SMALL_STATE(96)] = 1308,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(96),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__optAnnotations, 1),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonTypeName, 1),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonTypeName, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotations, 2),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__annotations, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 2),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typeOrVoid, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_baseType, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeIdentifier, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_baseType, 6),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typeRef, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_baseType, 4),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optAnnotations, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterList, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_methodPrototype, 6),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_methodPrototype, 6),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_methodPrototypes, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_methodPrototypes, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_methodPrototype, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_methodPrototype, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_methodPrototypes, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_methodPrototypes, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonEmptyParameterList, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeParameters, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeParameterList, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optTypeParameters, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonEmptyParameterList, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 6),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_initializer, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functionPrototype, 6),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [198] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_externDeclaration, 4),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_externDeclaration, 7),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constantDeclaration, 7),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
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
