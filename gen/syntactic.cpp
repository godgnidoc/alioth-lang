// A Bison parser, made by GNU Bison 3.7.5.

// Skeleton implementation for Bison GLR parsers in C

// Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

/* C GLR parser skeleton written by Paul Hilfinger.  */

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.

/* Identify Bison output, and Bison version.  */
#define YYBISON 30705

/* Bison version string.  */
#define YYBISON_VERSION "3.7.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "glr.cc"

/* Pure parsers.  */
#define YYPURE 1


// "%code top" blocks.
#line 1 "../gen/syntactic.ypp"

#include "syntactic.hpp"
#include "lexer.hpp"

#line 59 "syntactic.cpp"





# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "syntactic.hpp"

#undef TK_YYEMPTY
#define TK_YYEMPTY alioth::Parser::token::TK_YYEMPTY
#undef TK_YYEOF
#define TK_YYEOF alioth::Parser::token::TK_YYEOF
#undef TK_YYerror
#define TK_YYerror alioth::Parser::token::TK_YYerror

#ifndef YYSTYPE
# define YYSTYPE alioth::Parser::semantic_type
#endif
#ifndef YYLTYPE
# define YYLTYPE alioth::Parser::location_type
#endif

typedef alioth::Parser::symbol_kind_type yysymbol_kind_t;

// Expose C++ symbol kinds to C.
#define S_YYEMPTY       alioth::Parser::symbol_kind::S_YYEMPTY
#define S_YYEOF         alioth::Parser::symbol_kind::S_YYEOF
#define S_YYerror       alioth::Parser::symbol_kind::S_YYerror
#define S_YYUNDEF       alioth::Parser::symbol_kind::S_YYUNDEF
#define S_SPACE         alioth::Parser::symbol_kind::S_SPACE
#define S_COMMENT       alioth::Parser::symbol_kind::S_COMMENT
#define S_CONST         alioth::Parser::symbol_kind::S_CONST
#define S_AS            alioth::Parser::symbol_kind::S_AS
#define S_LET           alioth::Parser::symbol_kind::S_LET
#define S_USE           alioth::Parser::symbol_kind::S_USE
#define S_IN            alioth::Parser::symbol_kind::S_IN
#define S_IMPORT        alioth::Parser::symbol_kind::S_IMPORT
#define S_FROM          alioth::Parser::symbol_kind::S_FROM
#define S_CLASS         alioth::Parser::symbol_kind::S_CLASS
#define S_ENUM          alioth::Parser::symbol_kind::S_ENUM
#define S_UNIT          alioth::Parser::symbol_kind::S_UNIT
#define S_INTERFACE     alioth::Parser::symbol_kind::S_INTERFACE
#define S_MODULE        alioth::Parser::symbol_kind::S_MODULE
#define S_IF            alioth::Parser::symbol_kind::S_IF
#define S_ELSE          alioth::Parser::symbol_kind::S_ELSE
#define S_FOR           alioth::Parser::symbol_kind::S_FOR
#define S_WHILE         alioth::Parser::symbol_kind::S_WHILE
#define S_DO            alioth::Parser::symbol_kind::S_DO
#define S_RETURN        alioth::Parser::symbol_kind::S_RETURN
#define S_BREAK         alioth::Parser::symbol_kind::S_BREAK
#define S_CONTINUE      alioth::Parser::symbol_kind::S_CONTINUE
#define S_PUBLIC        alioth::Parser::symbol_kind::S_PUBLIC
#define S_PRIVATE       alioth::Parser::symbol_kind::S_PRIVATE
#define S_PROTECTED     alioth::Parser::symbol_kind::S_PROTECTED
#define S_ID            alioth::Parser::symbol_kind::S_ID
#define S_INTEGER       alioth::Parser::symbol_kind::S_INTEGER
#define S_DECIMAL       alioth::Parser::symbol_kind::S_DECIMAL
#define S_OCTAL         alioth::Parser::symbol_kind::S_OCTAL
#define S_HEX           alioth::Parser::symbol_kind::S_HEX
#define S_TRUE          alioth::Parser::symbol_kind::S_TRUE
#define S_FALSE         alioth::Parser::symbol_kind::S_FALSE
#define S_NULL          alioth::Parser::symbol_kind::S_NULL
#define S_DQSTR         alioth::Parser::symbol_kind::S_DQSTR
#define S_SQSTR         alioth::Parser::symbol_kind::S_SQSTR
#define S_THIS          alioth::Parser::symbol_kind::S_THIS
#define S_COMMA         alioth::Parser::symbol_kind::S_COMMA
#define S_COLON         alioth::Parser::symbol_kind::S_COLON
#define S_SEMI          alioth::Parser::symbol_kind::S_SEMI
#define S_OPE           alioth::Parser::symbol_kind::S_OPE
#define S_CLE           alioth::Parser::symbol_kind::S_CLE
#define S_OPI           alioth::Parser::symbol_kind::S_OPI
#define S_CLI           alioth::Parser::symbol_kind::S_CLI
#define S_OPB           alioth::Parser::symbol_kind::S_OPB
#define S_CLB           alioth::Parser::symbol_kind::S_CLB
#define S_DOT           alioth::Parser::symbol_kind::S_DOT
#define S_ETC           alioth::Parser::symbol_kind::S_ETC
#define S_MOL           alioth::Parser::symbol_kind::S_MOL
#define S_BITAND        alioth::Parser::symbol_kind::S_BITAND
#define S_BITOR         alioth::Parser::symbol_kind::S_BITOR
#define S_BITXOR        alioth::Parser::symbol_kind::S_BITXOR
#define S_BITNOT        alioth::Parser::symbol_kind::S_BITNOT
#define S_SHL           alioth::Parser::symbol_kind::S_SHL
#define S_SHR           alioth::Parser::symbol_kind::S_SHR
#define S_ASS           alioth::Parser::symbol_kind::S_ASS
#define S_ASS_ADD       alioth::Parser::symbol_kind::S_ASS_ADD
#define S_ASS_SUB       alioth::Parser::symbol_kind::S_ASS_SUB
#define S_ASS_MUL       alioth::Parser::symbol_kind::S_ASS_MUL
#define S_ASS_DIV       alioth::Parser::symbol_kind::S_ASS_DIV
#define S_ASS_MOL       alioth::Parser::symbol_kind::S_ASS_MOL
#define S_ASS_SHL       alioth::Parser::symbol_kind::S_ASS_SHL
#define S_ASS_SHR       alioth::Parser::symbol_kind::S_ASS_SHR
#define S_ASS_BITAND    alioth::Parser::symbol_kind::S_ASS_BITAND
#define S_ASS_BITOR     alioth::Parser::symbol_kind::S_ASS_BITOR
#define S_ASS_BITXOR    alioth::Parser::symbol_kind::S_ASS_BITXOR
#define S_NOT           alioth::Parser::symbol_kind::S_NOT
#define S_AND           alioth::Parser::symbol_kind::S_AND
#define S_OR            alioth::Parser::symbol_kind::S_OR
#define S_XOR           alioth::Parser::symbol_kind::S_XOR
#define S_ADD           alioth::Parser::symbol_kind::S_ADD
#define S_SUB           alioth::Parser::symbol_kind::S_SUB
#define S_MUL           alioth::Parser::symbol_kind::S_MUL
#define S_DIV           alioth::Parser::symbol_kind::S_DIV
#define S_SUP           alioth::Parser::symbol_kind::S_SUP
#define S_QST           alioth::Parser::symbol_kind::S_QST
#define S_YYACCEPT      alioth::Parser::symbol_kind::S_YYACCEPT
#define S_doc           alioth::Parser::symbol_kind::S_doc
#define S_80_doc_header alioth::Parser::symbol_kind::S_80_doc_header
#define S_81_doc_body   alioth::Parser::symbol_kind::S_81_doc_body
#define S_enum          alioth::Parser::symbol_kind::S_enum
#define S_83_enum_items alioth::Parser::symbol_kind::S_83_enum_items
#define S_enumi         alioth::Parser::symbol_kind::S_enumi
#define S_modecl        alioth::Parser::symbol_kind::S_modecl
#define S_import        alioth::Parser::symbol_kind::S_import
#define S_87_1          alioth::Parser::symbol_kind::S_87_1
#define S_88_import_package alioth::Parser::symbol_kind::S_88_import_package
#define S_89_import_modules alioth::Parser::symbol_kind::S_89_import_modules
#define S_modesc        alioth::Parser::symbol_kind::S_modesc


/* Default (constant) value used for initialization for null
   right-hand sides.  Unlike the standard yacc.c template, here we set
   the default value of $$ to a zeroed-out value.  Since the default
   value is undefined, this behavior is technically correct.  */
static YYSTYPE yyval_default;

// Second part of user prologue.
#line 206 "syntactic.cpp"
static void
yyerror (alioth::Parser& yyparser, alioth::Lexer& yylex, alioth::doc_t& doc,
         const char* msg);
#line 210 "syntactic.cpp"

// Unqualified %code blocks.
#line 43 "../gen/syntactic.ypp"

namespace alioth {
    template<typename ... Args>
    void kick( Args ... args ) {
        (node_t(args), ...);
    }
}

using namespace alioth;


#line 225 "syntactic.cpp"

#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif
#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YYFREE
# define YYFREE free
#endif
#ifndef YYMALLOC
# define YYMALLOC malloc
#endif
#ifndef YYREALLOC
# define YYREALLOC realloc
#endif

#ifdef __cplusplus
  typedef bool yybool;
# define yytrue true
# define yyfalse false
#else
  /* When we move to stdbool, get rid of the various casts to yybool.  */
  typedef signed char yybool;
# define yytrue 1
# define yyfalse 0
#endif

#ifndef YYSETJMP
# include <setjmp.h>
# define YYJMP_BUF jmp_buf
# define YYSETJMP(Env) setjmp (Env)
/* Pacify Clang and ICC.  */
# define YYLONGJMP(Env, Val)                    \
 do {                                           \
   longjmp (Env, Val);                          \
   YY_ASSERT (0);                               \
 } while (yyfalse)
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* The _Noreturn keyword of C11.  */
#ifndef _Noreturn
# if (defined __cplusplus \
      && ((201103 <= __cplusplus && !(__GNUC__ == 4 && __GNUC_MINOR__ == 7)) \
          || (defined _MSC_VER && 1900 <= _MSC_VER)))
#  define _Noreturn [[noreturn]]
# elif ((!defined __cplusplus || defined __clang__) \
        && (201112 <= (defined __STDC_VERSION__ ? __STDC_VERSION__ : 0) \
            || (!defined __STRICT_ANSI__ \
                && (__4 < __GNUC__ + (7 <= __GNUC_MINOR__) \
                    || (defined __apple_build_version__ \
                        ? 6000000 <= __apple_build_version__ \
                        : 3 < __clang_major__ + (5 <= __clang_minor__))))))
   /* _Noreturn works as-is.  */
# elif (2 < __GNUC__ + (8 <= __GNUC_MINOR__) || defined __clang__ \
        || 0x5110 <= __SUNPRO_C)
#  define _Noreturn __attribute__ ((__noreturn__))
# elif 1200 <= (defined _MSC_VER ? _MSC_VER : 0)
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   28

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  78
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  13
/* YYNRULES -- Number of rules.  */
#define YYNRULES  21
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  35
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 5
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   332

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX) YY_CAST (yysymbol_kind_t, YYX)

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   103,   103,   111,   115,   121,   124,   128,   138,   142,
     145,   151,   155,   162,   169,   169,   179,   179,   182,   186,
     193,   198
};
#endif

#define YYPACT_NINF (-41)
#define YYTABLE_NINF (-1)

  // YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
  // STATE-NUM.
static const yytype_int8 yypact[] =
{
     -10,   -21,     8,    -1,   -41,   -41,   -41,   -41,    -3,   -41,
     -17,   -15,   -41,     9,   -11,   -41,   -32,   -12,   -33,   -17,
      -9,   -41,   -41,   -41,   -41,   -41,   -40,   -27,   -41,    -8,
      -9,   -41,   -41,   -41,   -41
};

  // YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
  // Performed when YYTABLE does not specify something else to do.  Zero
  // means the default is an error.
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     5,     3,    13,     1,    14,     2,     4,
       0,     0,     6,    20,     0,    18,     0,     0,     0,     0,
       0,    21,    16,    17,    15,    19,    11,     0,     8,     0,
       0,     7,     9,    12,    10
};

  // YYPGOTO[NTERM-NUM].
static const yytype_int8 yypgoto[] =
{
     -41,   -41,   -41,   -41,   -41,   -41,   -25,   -41,   -41,   -41,
     -41,   -41,     2
};

  // YYDEFGOTO[NTERM-NUM].
static const yytype_int8 yydefgoto[] =
{
       0,     2,     3,     8,    12,    27,    28,     4,     9,    10,
      24,    14,    15
};

  // YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
  // positive, shift that token.  If negative, reduce the rule whose
  // number is the opposite.  If YYTABLE_NINF, syntax error.
static const yytype_int8 yytable[] =
{
      18,    26,    32,    22,    23,    34,     1,     5,     6,     7,
      11,    13,    30,    16,    20,    17,    21,    29,     0,    26,
      31,    25,    33,     0,     0,     0,     0,     0,    19
};

static const yytype_int8 yycheck[] =
{
      11,    28,    27,    36,    37,    30,    16,    28,     0,    10,
      13,    28,    39,    28,    46,     6,    28,    57,    -1,    28,
      47,    19,    30,    -1,    -1,    -1,    -1,    -1,    39
};

  // YYSTOS[STATE-NUM] -- The (internal number of the) accessing
  // symbol of state STATE-NUM.
static const yytype_int8 yystos[] =
{
       0,    16,    79,    80,    85,    28,     0,    10,    81,    86,
      87,    13,    82,    28,    89,    90,    28,     6,    11,    39,
      46,    28,    36,    37,    88,    90,    28,    83,    84,    57,
      39,    47,    84,    30,    84
};

  // YYR1[YYN] -- Symbol number of symbol that rule YYN derives.
static const yytype_int8 yyr1[] =
{
       0,    78,    79,    80,    80,    81,    81,    82,    83,    83,
      83,    84,    84,    85,    87,    86,    88,    88,    89,    89,
      90,    90
};

  // YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     2,     0,     2,     5,     1,     2,
       3,     1,     3,     2,     0,     5,     1,     1,     1,     3,
       1,     3
};


/* YYDPREC[RULE-NUM] -- Dynamic precedence of rule #RULE-NUM (0 if none).  */
static const yytype_int8 yydprec[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0
};

/* YYMERGER[RULE-NUM] -- Index of merging function for rule #RULE-NUM.  */
static const yytype_int8 yymerger[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0
};

/* YYIMMEDIATE[RULE-NUM] -- True iff rule #RULE-NUM is not to be deferred, as
   in the case of predicates.  */
static const yybool yyimmediate[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0
};

/* YYCONFLP[YYPACT[STATE-NUM]] -- Pointer into YYCONFL of start of
   list of conflicting reductions corresponding to action entry for
   state STATE-NUM in yytable.  0 means no conflicts.  The list in
   yyconfl is terminated by a rule number of 0.  */
static const yytype_int8 yyconflp[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short yyconfl[] =
{
       0
};




#undef yynerrs
#define yynerrs (yystackp->yyerrcnt)
#undef yychar
#define yychar (yystackp->yyrawchar)
#undef yylval
#define yylval (yystackp->yyval)
#undef yylloc
#define yylloc (yystackp->yyloc)


enum { YYENOMEM = -2 };

typedef enum { yyok, yyaccept, yyabort, yyerr } YYRESULTTAG;

#define YYCHK(YYE)                              \
  do {                                          \
    YYRESULTTAG yychk_flag = YYE;               \
    if (yychk_flag != yyok)                     \
      return yychk_flag;                        \
  } while (0)

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYMAXDEPTH * sizeof (GLRStackItem)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

/* Minimum number of free items on the stack allowed after an
   allocation.  This is to allow allocation and initialization
   to be completed by functions that call yyexpandGLRStack before the
   stack is expanded, thus insuring that all necessary pointers get
   properly redirected to new data.  */
#define YYHEADROOM 2

#ifndef YYSTACKEXPANDABLE
#  define YYSTACKEXPANDABLE 1
#endif

#if YYSTACKEXPANDABLE
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyexpandGLRStack (Yystack);                       \
  } while (0)
#else
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyMemoryExhausted (Yystack);                      \
  } while (0)
#endif

/** State numbers. */
typedef int yy_state_t;

/** Rule numbers. */
typedef int yyRuleNum;

/** Item references. */
typedef short yyItemNum;

typedef struct yyGLRState yyGLRState;
typedef struct yyGLRStateSet yyGLRStateSet;
typedef struct yySemanticOption yySemanticOption;
typedef union yyGLRStackItem yyGLRStackItem;
typedef struct yyGLRStack yyGLRStack;

struct yyGLRState {
  /** Type tag: always true.  */
  yybool yyisState;
  /** Type tag for yysemantics.  If true, yysval applies, otherwise
   *  yyfirstVal applies.  */
  yybool yyresolved;
  /** Number of corresponding LALR(1) machine state.  */
  yy_state_t yylrState;
  /** Preceding state in this stack */
  yyGLRState* yypred;
  /** Source position of the last token produced by my symbol */
  YYPTRDIFF_T yyposn;
  union {
    /** First in a chain of alternative reductions producing the
     *  nonterminal corresponding to this state, threaded through
     *  yynext.  */
    yySemanticOption* yyfirstVal;
    /** Semantic value for this state.  */
    YYSTYPE yysval;
  } yysemantics;
};

struct yyGLRStateSet {
  yyGLRState** yystates;
  /** During nondeterministic operation, yylookaheadNeeds tracks which
   *  stacks have actually needed the current lookahead.  During deterministic
   *  operation, yylookaheadNeeds[0] is not maintained since it would merely
   *  duplicate yychar != TK_YYEMPTY.  */
  yybool* yylookaheadNeeds;
  YYPTRDIFF_T yysize;
  YYPTRDIFF_T yycapacity;
};

struct yySemanticOption {
  /** Type tag: always false.  */
  yybool yyisState;
  /** Rule number for this reduction */
  yyRuleNum yyrule;
  /** The last RHS state in the list of states to be reduced.  */
  yyGLRState* yystate;
  /** The lookahead for this reduction.  */
  int yyrawchar;
  YYSTYPE yyval;
  /** Next sibling in chain of options.  To facilitate merging,
   *  options are chained in decreasing order by address.  */
  yySemanticOption* yynext;
};

/** Type of the items in the GLR stack.  The yyisState field
 *  indicates which item of the union is valid.  */
union yyGLRStackItem {
  yyGLRState yystate;
  yySemanticOption yyoption;
};

struct yyGLRStack {
  int yyerrState;


  int yyerrcnt;
  int yyrawchar;
  YYSTYPE yyval;

  YYJMP_BUF yyexception_buffer;
  yyGLRStackItem* yyitems;
  yyGLRStackItem* yynextFree;
  YYPTRDIFF_T yyspaceLeft;
  yyGLRState* yysplitPoint;
  yyGLRState* yylastDeleted;
  yyGLRStateSet yytops;
};

#if YYSTACKEXPANDABLE
static void yyexpandGLRStack (yyGLRStack* yystackp);
#endif

_Noreturn static void
yyFail (yyGLRStack* yystackp, alioth::Parser& yyparser, alioth::Lexer& yylex, alioth::doc_t& doc, const char* yymsg)
{
  if (yymsg != YY_NULLPTR)
    yyerror (yyparser, yylex, doc, yymsg);
  YYLONGJMP (yystackp->yyexception_buffer, 1);
}

_Noreturn static void
yyMemoryExhausted (yyGLRStack* yystackp)
{
  YYLONGJMP (yystackp->yyexception_buffer, 2);
}

/** Accessing symbol of state YYSTATE.  */
static inline yysymbol_kind_t
yy_accessing_symbol (yy_state_t yystate)
{
  return YY_CAST (yysymbol_kind_t, yystos[yystate]);
}

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "SPACE", "COMMENT",
  "CONST", "AS", "LET", "USE", "IN", "IMPORT", "FROM", "CLASS", "ENUM",
  "UNIT", "INTERFACE", "MODULE", "IF", "ELSE", "FOR", "WHILE", "DO",
  "RETURN", "BREAK", "CONTINUE", "PUBLIC", "PRIVATE", "PROTECTED", "ID",
  "INTEGER", "DECIMAL", "OCTAL", "HEX", "TRUE", "FALSE", "NULL", "DQSTR",
  "SQSTR", "THIS", "COMMA", "COLON", "SEMI", "OPE", "CLE", "OPI", "CLI",
  "OPB", "CLB", "DOT", "ETC", "MOL", "BITAND", "BITOR", "BITXOR", "BITNOT",
  "SHL", "SHR", "ASS", "ASS_ADD", "ASS_SUB", "ASS_MUL", "ASS_DIV",
  "ASS_MOL", "ASS_SHL", "ASS_SHR", "ASS_BITAND", "ASS_BITOR", "ASS_BITXOR",
  "NOT", "AND", "OR", "XOR", "ADD", "SUB", "MUL", "DIV", "SUP", "QST",
  "$accept", "doc", "doc.header", "doc.body", "enum", "enum.items",
  "enumi", "modecl", "import", "$@1", "import.package", "import.modules",
  "modesc", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#if YYDEBUG

# ifndef YYFPRINTF
#  define YYFPRINTF fprintf
# endif

# define YY_FPRINTF                             \
  YY_IGNORE_USELESS_CAST_BEGIN YY_FPRINTF_

# define YY_FPRINTF_(Args)                      \
  do {                                          \
    YYFPRINTF Args;                             \
    YY_IGNORE_USELESS_CAST_END                  \
  } while (0)

# define YY_DPRINTF                             \
  YY_IGNORE_USELESS_CAST_BEGIN YY_DPRINTF_

# define YY_DPRINTF_(Args)                      \
  do {                                          \
    if (yydebug)                                \
      YYFPRINTF Args;                           \
    YY_IGNORE_USELESS_CAST_END                  \
  } while (0)

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


/*--------------------.
| Print this symbol.  |
`--------------------*/

static void
yy_symbol_print (FILE *, alioth::Parser::symbol_kind_type yytoken,
                 const alioth::Parser::semantic_type *yyvaluep, alioth::Parser& yyparser, alioth::Lexer& yylex, alioth::doc_t& doc)
{
  YY_USE (yyparser);
  YY_USE (yylex);
  YY_USE (doc);
  yyparser.yy_symbol_print_ (yytoken, yyvaluep);
}


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                  \
  do {                                                                  \
    if (yydebug)                                                        \
      {                                                                 \
        YY_FPRINTF ((stderr, "%s ", Title));                            \
        yy_symbol_print (stderr, Kind, Value, yyparser, yylex, doc);        \
        YY_FPRINTF ((stderr, "\n"));                                    \
      }                                                                 \
  } while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;

static void yypstack (yyGLRStack* yystackp, YYPTRDIFF_T yyk)
  YY_ATTRIBUTE_UNUSED;
static void yypdumpstack (yyGLRStack* yystackp)
  YY_ATTRIBUTE_UNUSED;

#else /* !YYDEBUG */

# define YY_DPRINTF(Args) do {} while (yyfalse)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)

#endif /* !YYDEBUG */

#ifndef yystrlen
# define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


/** Fill in YYVSP[YYLOW1 .. YYLOW0-1] from the chain of states starting
 *  at YYVSP[YYLOW0].yystate.yypred.  Leaves YYVSP[YYLOW1].yystate.yypred
 *  containing the pointer to the next state in the chain.  */
static void yyfillin (yyGLRStackItem *, int, int) YY_ATTRIBUTE_UNUSED;
static void
yyfillin (yyGLRStackItem *yyvsp, int yylow0, int yylow1)
{
  int i;
  yyGLRState *s = yyvsp[yylow0].yystate.yypred;
  for (i = yylow0-1; i >= yylow1; i -= 1)
    {
#if YYDEBUG
      yyvsp[i].yystate.yylrState = s->yylrState;
#endif
      yyvsp[i].yystate.yyresolved = s->yyresolved;
      if (s->yyresolved)
        yyvsp[i].yystate.yysemantics.yysval = s->yysemantics.yysval;
      else
        /* The effect of using yysval or yyloc (in an immediate rule) is
         * undefined.  */
        yyvsp[i].yystate.yysemantics.yyfirstVal = YY_NULLPTR;
      s = yyvsp[i].yystate.yypred = s->yypred;
    }
}


/** If yychar is empty, fetch the next token.  */
static inline yysymbol_kind_t
yygetToken (int *yycharp, yyGLRStack* yystackp, alioth::Parser& yyparser, alioth::Lexer& yylex, alioth::doc_t& doc)
{
  yysymbol_kind_t yytoken;
  YY_USE (yyparser);
  YY_USE (yylex);
  YY_USE (doc);
  if (*yycharp == TK_YYEMPTY)
    {
      YY_DPRINTF ((stderr, "Reading a token\n"));
#if YY_EXCEPTIONS
      try
        {
#endif // YY_EXCEPTIONS
          *yycharp = yylex (&yylval);
#if YY_EXCEPTIONS
        }
      catch (const alioth::Parser::syntax_error& yyexc)
        {
          YY_DPRINTF ((stderr, "Caught exception: %s\n", yyexc.what()));
          yyerror (yyparser, yylex, doc, yyexc.what ());
          // Map errors caught in the scanner to the undefined token,
          // so that error handling is started.  However, record this
          // with this special value of yychar.
          *yycharp = TK_YYerror;
        }
#endif // YY_EXCEPTIONS
    }
  if (*yycharp <= TK_YYEOF)
    {
      *yycharp = TK_YYEOF;
      yytoken = S_YYEOF;
      YY_DPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (*yycharp);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }
  return yytoken;
}

/* Do nothing if YYNORMAL or if *YYLOW <= YYLOW1.  Otherwise, fill in
 * YYVSP[YYLOW1 .. *YYLOW-1] as in yyfillin and set *YYLOW = YYLOW1.
 * For convenience, always return YYLOW1.  */
static inline int yyfill (yyGLRStackItem *, int *, int, yybool)
     YY_ATTRIBUTE_UNUSED;
static inline int
yyfill (yyGLRStackItem *yyvsp, int *yylow, int yylow1, yybool yynormal)
{
  if (!yynormal && yylow1 < *yylow)
    {
      yyfillin (yyvsp, *yylow, yylow1);
      *yylow = yylow1;
    }
  return yylow1;
}

/** Perform user action for rule number YYN, with RHS length YYRHSLEN,
 *  and top stack item YYVSP.  YYLVALP points to place to put semantic
 *  value ($$), and yylocp points to place for location information
 *  (@$).  Returns yyok for normal return, yyaccept for YYACCEPT,
 *  yyerr for YYERROR, yyabort for YYABORT.  */
static YYRESULTTAG
yyuserAction (yyRuleNum yyn, int yyrhslen, yyGLRStackItem* yyvsp,
              yyGLRStack* yystackp,
              YYSTYPE* yyvalp, alioth::Parser& yyparser, alioth::Lexer& yylex, alioth::doc_t& doc)
{
  yybool yynormal YY_ATTRIBUTE_UNUSED = yystackp->yysplitPoint == YY_NULLPTR;
  int yylow;
  YY_USE (yyvalp);
  YY_USE (yyparser);
  YY_USE (yylex);
  YY_USE (doc);
  YY_USE (yyrhslen);
# undef yyerrok
# define yyerrok (yystackp->yyerrState = 0)
# undef YYACCEPT
# define YYACCEPT return yyaccept
# undef YYABORT
# define YYABORT return yyabort
# undef YYERROR
# define YYERROR return yyerrok, yyerr
# undef YYRECOVERING
# define YYRECOVERING() (yystackp->yyerrState != 0)
# undef yyclearin
# define yyclearin (yychar = TK_YYEMPTY)
# undef YYFILL
# define YYFILL(N) yyfill (yyvsp, &yylow, (N), yynormal)
# undef YYBACKUP
# define YYBACKUP(Token, Value)                                              \
  return yyerror (yyparser, yylex, doc, YY_("syntax error: cannot back up")),     \
         yyerrok, yyerr

  yylow = 1;
  if (yyrhslen == 0)
    *yyvalp = yyval_default;
  else
    *yyvalp = yyvsp[YYFILL (1-yyrhslen)].yystate.yysemantics.yysval;
#if YY_EXCEPTIONS
  typedef alioth::Parser::syntax_error syntax_error;
  try
  {
#endif // YY_EXCEPTIONS
  switch (yyn)
    {
  case 2: // doc: doc.header doc.body
#line 103 "../gen/syntactic.ypp"
                        {
        auto hdr = (st_nters*)YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval; doc = new st_doc;
        hdr->outqueue((node_t&)doc->modecl);
        for( auto import : *hdr ) doc->imports.push((import_t)import);
        for( auto stmt : *(st_nters*)YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval ) doc->body.push(stmt);
        (*yyvalp) = doc; }
#line 1126 "syntactic.cpp"
    break;

  case 3: // doc.header: modecl
#line 111 "../gen/syntactic.ypp"
           { 
        auto res = new st_nters(); 
        res->push(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); 
        (*yyvalp) = res; }
#line 1135 "syntactic.cpp"
    break;

  case 4: // doc.header: doc.header import
#line 115 "../gen/syntactic.ypp"
                        { 
        auto res = (st_nters*)YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval; 
        res->push(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); 
        (*yyvalp) = res; }
#line 1144 "syntactic.cpp"
    break;

  case 5: // doc.body: %empty
#line 121 "../gen/syntactic.ypp"
           {
        auto res = new st_nters();
        (*yyvalp) = res; }
#line 1152 "syntactic.cpp"
    break;

  case 6: // doc.body: doc.body enum
#line 124 "../gen/syntactic.ypp"
                    {
        ((st_nters*)YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval)->push(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
        (*yyvalp) = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval; }
#line 1160 "syntactic.cpp"
    break;

  case 7: // enum: ENUM ID OPB enum.items CLB
#line 128 "../gen/syntactic.ypp"
                               {
        auto res = new st_enum;
        res->name = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval;
        for( auto enumi : *(st_nters*)YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval )
            res->items.push((enumi_t)enumi);
        (*yyvalp) = res;
        kick(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
    }
#line 1173 "syntactic.cpp"
    break;

  case 8: // enum.items: enumi
#line 138 "../gen/syntactic.ypp"
          {
        auto res = new st_nters();
        res->push(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
        (*yyvalp) = res; }
#line 1182 "syntactic.cpp"
    break;

  case 9: // enum.items: enum.items enumi
#line 142 "../gen/syntactic.ypp"
                       {
        ((st_nters*)YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval)->push(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
        (*yyvalp) = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval; }
#line 1190 "syntactic.cpp"
    break;

  case 10: // enum.items: enum.items COMMA enumi
#line 145 "../gen/syntactic.ypp"
                             {
        ((st_nters*)YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval)->push(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
        (*yyvalp) = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval;
        kick(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval); }
#line 1199 "syntactic.cpp"
    break;

  case 11: // enumi: ID
#line 151 "../gen/syntactic.ypp"
       {
        auto res = new st_enumi;
        res->name = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval;
        (*yyvalp) = res; }
#line 1208 "syntactic.cpp"
    break;

  case 12: // enumi: ID ASS DECIMAL
#line 155 "../gen/syntactic.ypp"
                     {
        auto res = new st_enumi;
        res->name = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval;
        res->value = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval;
        (*yyvalp) = res;
        kick(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval); }
#line 1219 "syntactic.cpp"
    break;

  case 13: // modecl: MODULE ID
#line 162 "../gen/syntactic.ypp"
              { 
        auto res = new st_modecl; 
        res->name = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval; 
        (*yyvalp) = res; 
        kick(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval); }
#line 1229 "syntactic.cpp"
    break;

  case 14: // $@1: %empty
#line 169 "../gen/syntactic.ypp"
           { yylex.begin(SC::DEPENDENCY); }
#line 1235 "syntactic.cpp"
    break;

  case 15: // import: IMPORT $@1 import.modules FROM import.package
#line 169 "../gen/syntactic.ypp"
                                                                               { 
        auto deps = (st_nters*)YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval;
        auto res = new st_import;
        res->from = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval;
        for( auto dep : *deps )
            res->modules.push((modesc_t)dep); 
        (*yyvalp) = res; 
        kick(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
        yylex.begin(SC::INITIAL); }
#line 1249 "syntactic.cpp"
    break;

  case 18: // import.modules: modesc
#line 182 "../gen/syntactic.ypp"
           { 
        auto res = new st_nters(); 
        res->push(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); 
        (*yyvalp) = res; }
#line 1258 "syntactic.cpp"
    break;

  case 19: // import.modules: import.modules COMMA modesc
#line 186 "../gen/syntactic.ypp"
                                  { 
        auto res = (st_nters*)YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval; 
        res->push(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); 
        (*yyvalp) = res;
        kick( YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); }
#line 1268 "syntactic.cpp"
    break;

  case 20: // modesc: ID
#line 193 "../gen/syntactic.ypp"
       { 
        auto res = new st_modesc; 
        res->module = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval; 
        (*yyvalp) = res;
        kick(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); }
#line 1278 "syntactic.cpp"
    break;

  case 21: // modesc: ID AS ID
#line 198 "../gen/syntactic.ypp"
               { 
        auto res = new st_modesc;
        res->module = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval; 
        res->alias = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval; 
        (*yyvalp) = res; 
        kick(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); }
#line 1289 "syntactic.cpp"
    break;


#line 1293 "syntactic.cpp"

      default: break;
    }
#if YY_EXCEPTIONS
  }
  catch (const syntax_error& yyexc)
    {
      YY_DPRINTF ((stderr, "Caught exception: %s\n", yyexc.what()));
      yyerror (yyparser, yylex, doc, yyexc.what ());
      YYERROR;
    }
#endif // YY_EXCEPTIONS

  return yyok;
# undef yyerrok
# undef YYABORT
# undef YYACCEPT
# undef YYERROR
# undef YYBACKUP
# undef yyclearin
# undef YYRECOVERING
}


static void
yyuserMerge (int yyn, YYSTYPE* yy0, YYSTYPE* yy1)
{
  YY_USE (yy0);
  YY_USE (yy1);

  switch (yyn)
    {

      default: break;
    }
}

                              /* Bison grammar-table manipulation.  */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, alioth::Parser& yyparser, alioth::Lexer& yylex, alioth::doc_t& doc)
{
  YY_USE (yyvaluep);
  YY_USE (yyparser);
  YY_USE (yylex);
  YY_USE (doc);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yykind)
    {
    case S_SPACE: // SPACE
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1355 "syntactic.cpp"
        break;

    case S_COMMENT: // COMMENT
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1361 "syntactic.cpp"
        break;

    case S_CONST: // CONST
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1367 "syntactic.cpp"
        break;

    case S_AS: // AS
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1373 "syntactic.cpp"
        break;

    case S_LET: // LET
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1379 "syntactic.cpp"
        break;

    case S_USE: // USE
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1385 "syntactic.cpp"
        break;

    case S_IN: // IN
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1391 "syntactic.cpp"
        break;

    case S_IMPORT: // IMPORT
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1397 "syntactic.cpp"
        break;

    case S_FROM: // FROM
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1403 "syntactic.cpp"
        break;

    case S_CLASS: // CLASS
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1409 "syntactic.cpp"
        break;

    case S_ENUM: // ENUM
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1415 "syntactic.cpp"
        break;

    case S_UNIT: // UNIT
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1421 "syntactic.cpp"
        break;

    case S_INTERFACE: // INTERFACE
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1427 "syntactic.cpp"
        break;

    case S_MODULE: // MODULE
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1433 "syntactic.cpp"
        break;

    case S_IF: // IF
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1439 "syntactic.cpp"
        break;

    case S_ELSE: // ELSE
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1445 "syntactic.cpp"
        break;

    case S_FOR: // FOR
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1451 "syntactic.cpp"
        break;

    case S_WHILE: // WHILE
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1457 "syntactic.cpp"
        break;

    case S_DO: // DO
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1463 "syntactic.cpp"
        break;

    case S_RETURN: // RETURN
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1469 "syntactic.cpp"
        break;

    case S_BREAK: // BREAK
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1475 "syntactic.cpp"
        break;

    case S_CONTINUE: // CONTINUE
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1481 "syntactic.cpp"
        break;

    case S_PUBLIC: // PUBLIC
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1487 "syntactic.cpp"
        break;

    case S_PRIVATE: // PRIVATE
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1493 "syntactic.cpp"
        break;

    case S_PROTECTED: // PROTECTED
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1499 "syntactic.cpp"
        break;

    case S_ID: // ID
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1505 "syntactic.cpp"
        break;

    case S_INTEGER: // INTEGER
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1511 "syntactic.cpp"
        break;

    case S_DECIMAL: // DECIMAL
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1517 "syntactic.cpp"
        break;

    case S_OCTAL: // OCTAL
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1523 "syntactic.cpp"
        break;

    case S_HEX: // HEX
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1529 "syntactic.cpp"
        break;

    case S_TRUE: // TRUE
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1535 "syntactic.cpp"
        break;

    case S_FALSE: // FALSE
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1541 "syntactic.cpp"
        break;

    case S_NULL: // NULL
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1547 "syntactic.cpp"
        break;

    case S_DQSTR: // DQSTR
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1553 "syntactic.cpp"
        break;

    case S_SQSTR: // SQSTR
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1559 "syntactic.cpp"
        break;

    case S_THIS: // THIS
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1565 "syntactic.cpp"
        break;

    case S_COMMA: // COMMA
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1571 "syntactic.cpp"
        break;

    case S_COLON: // COLON
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1577 "syntactic.cpp"
        break;

    case S_SEMI: // SEMI
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1583 "syntactic.cpp"
        break;

    case S_OPE: // OPE
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1589 "syntactic.cpp"
        break;

    case S_CLE: // CLE
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1595 "syntactic.cpp"
        break;

    case S_OPI: // OPI
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1601 "syntactic.cpp"
        break;

    case S_CLI: // CLI
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1607 "syntactic.cpp"
        break;

    case S_OPB: // OPB
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1613 "syntactic.cpp"
        break;

    case S_CLB: // CLB
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1619 "syntactic.cpp"
        break;

    case S_DOT: // DOT
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1625 "syntactic.cpp"
        break;

    case S_ETC: // ETC
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1631 "syntactic.cpp"
        break;

    case S_MOL: // MOL
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1637 "syntactic.cpp"
        break;

    case S_BITAND: // BITAND
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1643 "syntactic.cpp"
        break;

    case S_BITOR: // BITOR
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1649 "syntactic.cpp"
        break;

    case S_BITXOR: // BITXOR
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1655 "syntactic.cpp"
        break;

    case S_BITNOT: // BITNOT
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1661 "syntactic.cpp"
        break;

    case S_SHL: // SHL
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1667 "syntactic.cpp"
        break;

    case S_SHR: // SHR
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1673 "syntactic.cpp"
        break;

    case S_ASS: // ASS
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1679 "syntactic.cpp"
        break;

    case S_ASS_ADD: // ASS_ADD
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1685 "syntactic.cpp"
        break;

    case S_ASS_SUB: // ASS_SUB
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1691 "syntactic.cpp"
        break;

    case S_ASS_MUL: // ASS_MUL
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1697 "syntactic.cpp"
        break;

    case S_ASS_DIV: // ASS_DIV
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1703 "syntactic.cpp"
        break;

    case S_ASS_MOL: // ASS_MOL
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1709 "syntactic.cpp"
        break;

    case S_ASS_SHL: // ASS_SHL
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1715 "syntactic.cpp"
        break;

    case S_ASS_SHR: // ASS_SHR
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1721 "syntactic.cpp"
        break;

    case S_ASS_BITAND: // ASS_BITAND
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1727 "syntactic.cpp"
        break;

    case S_ASS_BITOR: // ASS_BITOR
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1733 "syntactic.cpp"
        break;

    case S_ASS_BITXOR: // ASS_BITXOR
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1739 "syntactic.cpp"
        break;

    case S_NOT: // NOT
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1745 "syntactic.cpp"
        break;

    case S_AND: // AND
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1751 "syntactic.cpp"
        break;

    case S_OR: // OR
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1757 "syntactic.cpp"
        break;

    case S_XOR: // XOR
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1763 "syntactic.cpp"
        break;

    case S_ADD: // ADD
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1769 "syntactic.cpp"
        break;

    case S_SUB: // SUB
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1775 "syntactic.cpp"
        break;

    case S_MUL: // MUL
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1781 "syntactic.cpp"
        break;

    case S_DIV: // DIV
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1787 "syntactic.cpp"
        break;

    case S_SUP: // SUP
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1793 "syntactic.cpp"
        break;

    case S_QST: // QST
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1799 "syntactic.cpp"
        break;

    case S_doc: // doc
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1805 "syntactic.cpp"
        break;

    case S_80_doc_header: // doc.header
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1811 "syntactic.cpp"
        break;

    case S_81_doc_body: // doc.body
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1817 "syntactic.cpp"
        break;

    case S_enum: // enum
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1823 "syntactic.cpp"
        break;

    case S_83_enum_items: // enum.items
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1829 "syntactic.cpp"
        break;

    case S_enumi: // enumi
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1835 "syntactic.cpp"
        break;

    case S_modecl: // modecl
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1841 "syntactic.cpp"
        break;

    case S_import: // import
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1847 "syntactic.cpp"
        break;

    case S_88_import_package: // import.package
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1853 "syntactic.cpp"
        break;

    case S_89_import_modules: // import.modules
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1859 "syntactic.cpp"
        break;

    case S_modesc: // modesc
#line 67 "../gen/syntactic.ypp"
            { {if( (*yyvaluep) ) { node_t node = (*yyvaluep);} } }
#line 1865 "syntactic.cpp"
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}

/** Number of symbols composing the right hand side of rule #RULE.  */
static inline int
yyrhsLength (yyRuleNum yyrule)
{
  return yyr2[yyrule];
}

static void
yydestroyGLRState (char const *yymsg, yyGLRState *yys, alioth::Parser& yyparser, alioth::Lexer& yylex, alioth::doc_t& doc)
{
  if (yys->yyresolved)
    yydestruct (yymsg, yy_accessing_symbol (yys->yylrState),
                &yys->yysemantics.yysval, yyparser, yylex, doc);
  else
    {
#if YYDEBUG
      if (yydebug)
        {
          if (yys->yysemantics.yyfirstVal)
            YY_FPRINTF ((stderr, "%s unresolved", yymsg));
          else
            YY_FPRINTF ((stderr, "%s incomplete", yymsg));
          YY_SYMBOL_PRINT ("", yy_accessing_symbol (yys->yylrState), YY_NULLPTR, &yys->yyloc);
        }
#endif

      if (yys->yysemantics.yyfirstVal)
        {
          yySemanticOption *yyoption = yys->yysemantics.yyfirstVal;
          yyGLRState *yyrh;
          int yyn;
          for (yyrh = yyoption->yystate, yyn = yyrhsLength (yyoption->yyrule);
               yyn > 0;
               yyrh = yyrh->yypred, yyn -= 1)
            yydestroyGLRState (yymsg, yyrh, yyparser, yylex, doc);
        }
    }
}

/** Left-hand-side symbol for rule #YYRULE.  */
static inline yysymbol_kind_t
yylhsNonterm (yyRuleNum yyrule)
{
  return YY_CAST (yysymbol_kind_t, yyr1[yyrule]);
}

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

/** True iff LR state YYSTATE has only a default reduction (regardless
 *  of token).  */
static inline yybool
yyisDefaultedState (yy_state_t yystate)
{
  return yypact_value_is_default (yypact[yystate]);
}

/** The default reduction for YYSTATE, assuming it has one.  */
static inline yyRuleNum
yydefaultAction (yy_state_t yystate)
{
  return yydefact[yystate];
}

#define yytable_value_is_error(Yyn) \
  0

/** The action to take in YYSTATE on seeing YYTOKEN.
 *  Result R means
 *    R < 0:  Reduce on rule -R.
 *    R = 0:  Error.
 *    R > 0:  Shift to state R.
 *  Set *YYCONFLICTS to a pointer into yyconfl to a 0-terminated list
 *  of conflicting reductions.
 */
static inline int
yygetLRActions (yy_state_t yystate, yysymbol_kind_t yytoken, const short** yyconflicts)
{
  int yyindex = yypact[yystate] + yytoken;
  if (yytoken == S_YYerror)
    {
      // This is the error token.
      *yyconflicts = yyconfl;
      return 0;
    }
  else if (yyisDefaultedState (yystate)
           || yyindex < 0 || YYLAST < yyindex || yycheck[yyindex] != yytoken)
    {
      *yyconflicts = yyconfl;
      return -yydefact[yystate];
    }
  else if (! yytable_value_is_error (yytable[yyindex]))
    {
      *yyconflicts = yyconfl + yyconflp[yyindex];
      return yytable[yyindex];
    }
  else
    {
      *yyconflicts = yyconfl + yyconflp[yyindex];
      return 0;
    }
}

/** Compute post-reduction state.
 * \param yystate   the current state
 * \param yysym     the nonterminal to push on the stack
 */
static inline yy_state_t
yyLRgotoState (yy_state_t yystate, yysymbol_kind_t yysym)
{
  int yyr = yypgoto[yysym - YYNTOKENS] + yystate;
  if (0 <= yyr && yyr <= YYLAST && yycheck[yyr] == yystate)
    return yytable[yyr];
  else
    return yydefgoto[yysym - YYNTOKENS];
}

static inline yybool
yyisShiftAction (int yyaction)
{
  return 0 < yyaction;
}

static inline yybool
yyisErrorAction (int yyaction)
{
  return yyaction == 0;
}

                                /* GLRStates */

/** Return a fresh GLRStackItem in YYSTACKP.  The item is an LR state
 *  if YYISSTATE, and otherwise a semantic option.  Callers should call
 *  YY_RESERVE_GLRSTACK afterwards to make sure there is sufficient
 *  headroom.  */

static inline yyGLRStackItem*
yynewGLRStackItem (yyGLRStack* yystackp, yybool yyisState)
{
  yyGLRStackItem* yynewItem = yystackp->yynextFree;
  yystackp->yyspaceLeft -= 1;
  yystackp->yynextFree += 1;
  yynewItem->yystate.yyisState = yyisState;
  return yynewItem;
}

/** Add a new semantic action that will execute the action for rule
 *  YYRULE on the semantic values in YYRHS to the list of
 *  alternative actions for YYSTATE.  Assumes that YYRHS comes from
 *  stack #YYK of *YYSTACKP. */
static void
yyaddDeferredAction (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yyGLRState* yystate,
                     yyGLRState* yyrhs, yyRuleNum yyrule)
{
  yySemanticOption* yynewOption =
    &yynewGLRStackItem (yystackp, yyfalse)->yyoption;
  YY_ASSERT (!yynewOption->yyisState);
  yynewOption->yystate = yyrhs;
  yynewOption->yyrule = yyrule;
  if (yystackp->yytops.yylookaheadNeeds[yyk])
    {
      yynewOption->yyrawchar = yychar;
      yynewOption->yyval = yylval;
    }
  else
    yynewOption->yyrawchar = TK_YYEMPTY;
  yynewOption->yynext = yystate->yysemantics.yyfirstVal;
  yystate->yysemantics.yyfirstVal = yynewOption;

  YY_RESERVE_GLRSTACK (yystackp);
}

                                /* GLRStacks */

/** Initialize YYSET to a singleton set containing an empty stack.  */
static yybool
yyinitStateSet (yyGLRStateSet* yyset)
{
  yyset->yysize = 1;
  yyset->yycapacity = 16;
  yyset->yystates
    = YY_CAST (yyGLRState**,
               YYMALLOC (YY_CAST (YYSIZE_T, yyset->yycapacity)
                         * sizeof yyset->yystates[0]));
  if (! yyset->yystates)
    return yyfalse;
  yyset->yystates[0] = YY_NULLPTR;
  yyset->yylookaheadNeeds
    = YY_CAST (yybool*,
               YYMALLOC (YY_CAST (YYSIZE_T, yyset->yycapacity)
                         * sizeof yyset->yylookaheadNeeds[0]));
  if (! yyset->yylookaheadNeeds)
    {
      YYFREE (yyset->yystates);
      return yyfalse;
    }
  memset (yyset->yylookaheadNeeds,
          0,
          YY_CAST (YYSIZE_T, yyset->yycapacity) * sizeof yyset->yylookaheadNeeds[0]);
  return yytrue;
}

static void yyfreeStateSet (yyGLRStateSet* yyset)
{
  YYFREE (yyset->yystates);
  YYFREE (yyset->yylookaheadNeeds);
}

/** Initialize *YYSTACKP to a single empty stack, with total maximum
 *  capacity for all stacks of YYSIZE.  */
static yybool
yyinitGLRStack (yyGLRStack* yystackp, YYPTRDIFF_T yysize)
{
  yystackp->yyerrState = 0;
  yynerrs = 0;
  yystackp->yyspaceLeft = yysize;
  yystackp->yyitems
    = YY_CAST (yyGLRStackItem*,
               YYMALLOC (YY_CAST (YYSIZE_T, yysize)
                         * sizeof yystackp->yynextFree[0]));
  if (!yystackp->yyitems)
    return yyfalse;
  yystackp->yynextFree = yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULLPTR;
  yystackp->yylastDeleted = YY_NULLPTR;
  return yyinitStateSet (&yystackp->yytops);
}


#if YYSTACKEXPANDABLE
# define YYRELOC(YYFROMITEMS, YYTOITEMS, YYX, YYTYPE)                   \
  &((YYTOITEMS)                                                         \
    - ((YYFROMITEMS) - YY_REINTERPRET_CAST (yyGLRStackItem*, (YYX))))->YYTYPE

/** If *YYSTACKP is expandable, extend it.  WARNING: Pointers into the
    stack from outside should be considered invalid after this call.
    We always expand when there are 1 or fewer items left AFTER an
    allocation, so that we can avoid having external pointers exist
    across an allocation.  */
static void
yyexpandGLRStack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yynewItems;
  yyGLRStackItem* yyp0, *yyp1;
  YYPTRDIFF_T yynewSize;
  YYPTRDIFF_T yyn;
  YYPTRDIFF_T yysize = yystackp->yynextFree - yystackp->yyitems;
  if (YYMAXDEPTH - YYHEADROOM < yysize)
    yyMemoryExhausted (yystackp);
  yynewSize = 2*yysize;
  if (YYMAXDEPTH < yynewSize)
    yynewSize = YYMAXDEPTH;
  yynewItems
    = YY_CAST (yyGLRStackItem*,
               YYMALLOC (YY_CAST (YYSIZE_T, yynewSize)
                         * sizeof yynewItems[0]));
  if (! yynewItems)
    yyMemoryExhausted (yystackp);
  for (yyp0 = yystackp->yyitems, yyp1 = yynewItems, yyn = yysize;
       0 < yyn;
       yyn -= 1, yyp0 += 1, yyp1 += 1)
    {
      *yyp1 = *yyp0;
      if (*YY_REINTERPRET_CAST (yybool *, yyp0))
        {
          yyGLRState* yys0 = &yyp0->yystate;
          yyGLRState* yys1 = &yyp1->yystate;
          if (yys0->yypred != YY_NULLPTR)
            yys1->yypred =
              YYRELOC (yyp0, yyp1, yys0->yypred, yystate);
          if (! yys0->yyresolved && yys0->yysemantics.yyfirstVal != YY_NULLPTR)
            yys1->yysemantics.yyfirstVal =
              YYRELOC (yyp0, yyp1, yys0->yysemantics.yyfirstVal, yyoption);
        }
      else
        {
          yySemanticOption* yyv0 = &yyp0->yyoption;
          yySemanticOption* yyv1 = &yyp1->yyoption;
          if (yyv0->yystate != YY_NULLPTR)
            yyv1->yystate = YYRELOC (yyp0, yyp1, yyv0->yystate, yystate);
          if (yyv0->yynext != YY_NULLPTR)
            yyv1->yynext = YYRELOC (yyp0, yyp1, yyv0->yynext, yyoption);
        }
    }
  if (yystackp->yysplitPoint != YY_NULLPTR)
    yystackp->yysplitPoint = YYRELOC (yystackp->yyitems, yynewItems,
                                      yystackp->yysplitPoint, yystate);

  for (yyn = 0; yyn < yystackp->yytops.yysize; yyn += 1)
    if (yystackp->yytops.yystates[yyn] != YY_NULLPTR)
      yystackp->yytops.yystates[yyn] =
        YYRELOC (yystackp->yyitems, yynewItems,
                 yystackp->yytops.yystates[yyn], yystate);
  YYFREE (yystackp->yyitems);
  yystackp->yyitems = yynewItems;
  yystackp->yynextFree = yynewItems + yysize;
  yystackp->yyspaceLeft = yynewSize - yysize;
}
#endif

static void
yyfreeGLRStack (yyGLRStack* yystackp)
{
  YYFREE (yystackp->yyitems);
  yyfreeStateSet (&yystackp->yytops);
}

/** Assuming that YYS is a GLRState somewhere on *YYSTACKP, update the
 *  splitpoint of *YYSTACKP, if needed, so that it is at least as deep as
 *  YYS.  */
static inline void
yyupdateSplit (yyGLRStack* yystackp, yyGLRState* yys)
{
  if (yystackp->yysplitPoint != YY_NULLPTR && yystackp->yysplitPoint > yys)
    yystackp->yysplitPoint = yys;
}

/** Invalidate stack #YYK in *YYSTACKP.  */
static inline void
yymarkStackDeleted (yyGLRStack* yystackp, YYPTRDIFF_T yyk)
{
  if (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
    yystackp->yylastDeleted = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yystates[yyk] = YY_NULLPTR;
}

/** Undelete the last stack in *YYSTACKP that was marked as deleted.  Can
    only be done once after a deletion, and only when all other stacks have
    been deleted.  */
static void
yyundeleteLastStack (yyGLRStack* yystackp)
{
  if (yystackp->yylastDeleted == YY_NULLPTR || yystackp->yytops.yysize != 0)
    return;
  yystackp->yytops.yystates[0] = yystackp->yylastDeleted;
  yystackp->yytops.yysize = 1;
  YY_DPRINTF ((stderr, "Restoring last deleted stack as stack #0.\n"));
  yystackp->yylastDeleted = YY_NULLPTR;
}

static inline void
yyremoveDeletes (yyGLRStack* yystackp)
{
  YYPTRDIFF_T yyi, yyj;
  yyi = yyj = 0;
  while (yyj < yystackp->yytops.yysize)
    {
      if (yystackp->yytops.yystates[yyi] == YY_NULLPTR)
        {
          if (yyi == yyj)
            YY_DPRINTF ((stderr, "Removing dead stacks.\n"));
          yystackp->yytops.yysize -= 1;
        }
      else
        {
          yystackp->yytops.yystates[yyj] = yystackp->yytops.yystates[yyi];
          /* In the current implementation, it's unnecessary to copy
             yystackp->yytops.yylookaheadNeeds[yyi] since, after
             yyremoveDeletes returns, the parser immediately either enters
             deterministic operation or shifts a token.  However, it doesn't
             hurt, and the code might evolve to need it.  */
          yystackp->yytops.yylookaheadNeeds[yyj] =
            yystackp->yytops.yylookaheadNeeds[yyi];
          if (yyj != yyi)
            YY_DPRINTF ((stderr, "Rename stack %ld -> %ld.\n",
                        YY_CAST (long, yyi), YY_CAST (long, yyj)));
          yyj += 1;
        }
      yyi += 1;
    }
}

/** Shift to a new state on stack #YYK of *YYSTACKP, corresponding to LR
 * state YYLRSTATE, at input position YYPOSN, with (resolved) semantic
 * value *YYVALP and source location *YYLOCP.  */
static inline void
yyglrShift (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yy_state_t yylrState,
            YYPTRDIFF_T yyposn,
            YYSTYPE* yyvalp)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yytrue;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yysval = *yyvalp;
  yystackp->yytops.yystates[yyk] = yynewState;

  YY_RESERVE_GLRSTACK (yystackp);
}

/** Shift stack #YYK of *YYSTACKP, to a new state corresponding to LR
 *  state YYLRSTATE, at input position YYPOSN, with the (unresolved)
 *  semantic value of YYRHS under the action for YYRULE.  */
static inline void
yyglrShiftDefer (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yy_state_t yylrState,
                 YYPTRDIFF_T yyposn, yyGLRState* yyrhs, yyRuleNum yyrule)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;
  YY_ASSERT (yynewState->yyisState);

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yyfalse;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yyfirstVal = YY_NULLPTR;
  yystackp->yytops.yystates[yyk] = yynewState;

  /* Invokes YY_RESERVE_GLRSTACK.  */
  yyaddDeferredAction (yystackp, yyk, yynewState, yyrhs, yyrule);
}

#if !YYDEBUG
# define YY_REDUCE_PRINT(Args)
#else
# define YY_REDUCE_PRINT(Args)          \
  do {                                  \
    if (yydebug)                        \
      yy_reduce_print Args;             \
  } while (0)

/*----------------------------------------------------------------------.
| Report that stack #YYK of *YYSTACKP is going to be reduced by YYRULE. |
`----------------------------------------------------------------------*/

static inline void
yy_reduce_print (yybool yynormal, yyGLRStackItem* yyvsp, YYPTRDIFF_T yyk,
                 yyRuleNum yyrule, alioth::Parser& yyparser, alioth::Lexer& yylex, alioth::doc_t& doc)
{
  int yynrhs = yyrhsLength (yyrule);
  int yyi;
  YY_FPRINTF ((stderr, "Reducing stack %ld by rule %d (line %d):\n",
               YY_CAST (long, yyk), yyrule - 1, yyrline[yyrule]));
  if (! yynormal)
    yyfillin (yyvsp, 1, -yynrhs);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YY_FPRINTF ((stderr, "   $%d = ", yyi + 1));
      yy_symbol_print (stderr,
                       yy_accessing_symbol (yyvsp[yyi - yynrhs + 1].yystate.yylrState),
                       &yyvsp[yyi - yynrhs + 1].yystate.yysemantics.yysval                       , yyparser, yylex, doc);
      if (!yyvsp[yyi - yynrhs + 1].yystate.yyresolved)
        YY_FPRINTF ((stderr, " (unresolved)"));
      YY_FPRINTF ((stderr, "\n"));
    }
}
#endif

/** Pop the symbols consumed by reduction #YYRULE from the top of stack
 *  #YYK of *YYSTACKP, and perform the appropriate semantic action on their
 *  semantic values.  Assumes that all ambiguities in semantic values
 *  have been previously resolved.  Set *YYVALP to the resulting value,
 *  and *YYLOCP to the computed location (if any).  Return value is as
 *  for userAction.  */
static inline YYRESULTTAG
yydoAction (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yyRuleNum yyrule,
            YYSTYPE* yyvalp, alioth::Parser& yyparser, alioth::Lexer& yylex, alioth::doc_t& doc)
{
  int yynrhs = yyrhsLength (yyrule);

  if (yystackp->yysplitPoint == YY_NULLPTR)
    {
      /* Standard special case: single stack.  */
      yyGLRStackItem* yyrhs
        = YY_REINTERPRET_CAST (yyGLRStackItem*, yystackp->yytops.yystates[yyk]);
      YY_ASSERT (yyk == 0);
      yystackp->yynextFree -= yynrhs;
      yystackp->yyspaceLeft += yynrhs;
      yystackp->yytops.yystates[0] = & yystackp->yynextFree[-1].yystate;
      YY_REDUCE_PRINT ((yytrue, yyrhs, yyk, yyrule, yyparser, yylex, doc));
      return yyuserAction (yyrule, yynrhs, yyrhs, yystackp,
                           yyvalp, yyparser, yylex, doc);
    }
  else
    {
      yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
      yyGLRState* yys = yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred
        = yystackp->yytops.yystates[yyk];
      int yyi;
      for (yyi = 0; yyi < yynrhs; yyi += 1)
        {
          yys = yys->yypred;
          YY_ASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yystackp->yytops.yystates[yyk] = yys;
      YY_REDUCE_PRINT ((yyfalse, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1, yyk, yyrule, yyparser, yylex, doc));
      return yyuserAction (yyrule, yynrhs, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, yyvalp, yyparser, yylex, doc);
    }
}

/** Pop items off stack #YYK of *YYSTACKP according to grammar rule YYRULE,
 *  and push back on the resulting nonterminal symbol.  Perform the
 *  semantic action associated with YYRULE and store its value with the
 *  newly pushed state, if YYFORCEEVAL or if *YYSTACKP is currently
 *  unambiguous.  Otherwise, store the deferred semantic action with
 *  the new state.  If the new state would have an identical input
 *  position, LR state, and predecessor to an existing state on the stack,
 *  it is identified with that existing state, eliminating stack #YYK from
 *  *YYSTACKP.  In this case, the semantic value is
 *  added to the options for the existing state's semantic value.
 */
static inline YYRESULTTAG
yyglrReduce (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yyRuleNum yyrule,
             yybool yyforceEval, alioth::Parser& yyparser, alioth::Lexer& yylex, alioth::doc_t& doc)
{
  YYPTRDIFF_T yyposn = yystackp->yytops.yystates[yyk]->yyposn;

  if (yyforceEval || yystackp->yysplitPoint == YY_NULLPTR)
    {
      YYSTYPE yysval;

      YYRESULTTAG yyflag = yydoAction (yystackp, yyk, yyrule, &yysval, yyparser, yylex, doc);
      if (yyflag == yyerr && yystackp->yysplitPoint != YY_NULLPTR)
        YY_DPRINTF ((stderr,
                     "Parse on stack %ld rejected by rule %d (line %d).\n",
                     YY_CAST (long, yyk), yyrule - 1, yyrline[yyrule - 1]));
      if (yyflag != yyok)
        return yyflag;
      YY_SYMBOL_PRINT ("-> $$ =", yylhsNonterm (yyrule), &yysval, &yyloc);
      yyglrShift (yystackp, yyk,
                  yyLRgotoState (yystackp->yytops.yystates[yyk]->yylrState,
                                 yylhsNonterm (yyrule)),
                  yyposn, &yysval);
    }
  else
    {
      YYPTRDIFF_T yyi;
      int yyn;
      yyGLRState* yys, *yys0 = yystackp->yytops.yystates[yyk];
      yy_state_t yynewLRState;

      for (yys = yystackp->yytops.yystates[yyk], yyn = yyrhsLength (yyrule);
           0 < yyn; yyn -= 1)
        {
          yys = yys->yypred;
          YY_ASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yynewLRState = yyLRgotoState (yys->yylrState, yylhsNonterm (yyrule));
      YY_DPRINTF ((stderr,
                   "Reduced stack %ld by rule %d (line %d); action deferred.  "
                   "Now in state %d.\n",
                   YY_CAST (long, yyk), yyrule - 1, yyrline[yyrule - 1],
                   yynewLRState));
      for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
        if (yyi != yyk && yystackp->yytops.yystates[yyi] != YY_NULLPTR)
          {
            yyGLRState *yysplit = yystackp->yysplitPoint;
            yyGLRState *yyp = yystackp->yytops.yystates[yyi];
            while (yyp != yys && yyp != yysplit && yyp->yyposn >= yyposn)
              {
                if (yyp->yylrState == yynewLRState && yyp->yypred == yys)
                  {
                    yyaddDeferredAction (yystackp, yyk, yyp, yys0, yyrule);
                    yymarkStackDeleted (yystackp, yyk);
                    YY_DPRINTF ((stderr, "Merging stack %ld into stack %ld.\n",
                                 YY_CAST (long, yyk), YY_CAST (long, yyi)));
                    return yyok;
                  }
                yyp = yyp->yypred;
              }
          }
      yystackp->yytops.yystates[yyk] = yys;
      yyglrShiftDefer (yystackp, yyk, yynewLRState, yyposn, yys0, yyrule);
    }
  return yyok;
}

static YYPTRDIFF_T
yysplitStack (yyGLRStack* yystackp, YYPTRDIFF_T yyk)
{
  if (yystackp->yysplitPoint == YY_NULLPTR)
    {
      YY_ASSERT (yyk == 0);
      yystackp->yysplitPoint = yystackp->yytops.yystates[yyk];
    }
  if (yystackp->yytops.yycapacity <= yystackp->yytops.yysize)
    {
      YYPTRDIFF_T state_size = YYSIZEOF (yystackp->yytops.yystates[0]);
      YYPTRDIFF_T half_max_capacity = YYSIZE_MAXIMUM / 2 / state_size;
      if (half_max_capacity < yystackp->yytops.yycapacity)
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yycapacity *= 2;

      {
        yyGLRState** yynewStates
          = YY_CAST (yyGLRState**,
                     YYREALLOC (yystackp->yytops.yystates,
                                (YY_CAST (YYSIZE_T, yystackp->yytops.yycapacity)
                                 * sizeof yynewStates[0])));
        if (yynewStates == YY_NULLPTR)
          yyMemoryExhausted (yystackp);
        yystackp->yytops.yystates = yynewStates;
      }

      {
        yybool* yynewLookaheadNeeds
          = YY_CAST (yybool*,
                     YYREALLOC (yystackp->yytops.yylookaheadNeeds,
                                (YY_CAST (YYSIZE_T, yystackp->yytops.yycapacity)
                                 * sizeof yynewLookaheadNeeds[0])));
        if (yynewLookaheadNeeds == YY_NULLPTR)
          yyMemoryExhausted (yystackp);
        yystackp->yytops.yylookaheadNeeds = yynewLookaheadNeeds;
      }
    }
  yystackp->yytops.yystates[yystackp->yytops.yysize]
    = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yylookaheadNeeds[yystackp->yytops.yysize]
    = yystackp->yytops.yylookaheadNeeds[yyk];
  yystackp->yytops.yysize += 1;
  return yystackp->yytops.yysize - 1;
}

/** True iff YYY0 and YYY1 represent identical options at the top level.
 *  That is, they represent the same rule applied to RHS symbols
 *  that produce the same terminal symbols.  */
static yybool
yyidenticalOptions (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  if (yyy0->yyrule == yyy1->yyrule)
    {
      yyGLRState *yys0, *yys1;
      int yyn;
      for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
           yyn = yyrhsLength (yyy0->yyrule);
           yyn > 0;
           yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
        if (yys0->yyposn != yys1->yyposn)
          return yyfalse;
      return yytrue;
    }
  else
    return yyfalse;
}

/** Assuming identicalOptions (YYY0,YYY1), destructively merge the
 *  alternative semantic values for the RHS-symbols of YYY1 and YYY0.  */
static void
yymergeOptionSets (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  yyGLRState *yys0, *yys1;
  int yyn;
  for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
       yyn = yyrhsLength (yyy0->yyrule);
       0 < yyn;
       yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
    {
      if (yys0 == yys1)
        break;
      else if (yys0->yyresolved)
        {
          yys1->yyresolved = yytrue;
          yys1->yysemantics.yysval = yys0->yysemantics.yysval;
        }
      else if (yys1->yyresolved)
        {
          yys0->yyresolved = yytrue;
          yys0->yysemantics.yysval = yys1->yysemantics.yysval;
        }
      else
        {
          yySemanticOption** yyz0p = &yys0->yysemantics.yyfirstVal;
          yySemanticOption* yyz1 = yys1->yysemantics.yyfirstVal;
          while (yytrue)
            {
              if (yyz1 == *yyz0p || yyz1 == YY_NULLPTR)
                break;
              else if (*yyz0p == YY_NULLPTR)
                {
                  *yyz0p = yyz1;
                  break;
                }
              else if (*yyz0p < yyz1)
                {
                  yySemanticOption* yyz = *yyz0p;
                  *yyz0p = yyz1;
                  yyz1 = yyz1->yynext;
                  (*yyz0p)->yynext = yyz;
                }
              yyz0p = &(*yyz0p)->yynext;
            }
          yys1->yysemantics.yyfirstVal = yys0->yysemantics.yyfirstVal;
        }
    }
}

/** Y0 and Y1 represent two possible actions to take in a given
 *  parsing state; return 0 if no combination is possible,
 *  1 if user-mergeable, 2 if Y0 is preferred, 3 if Y1 is preferred.  */
static int
yypreference (yySemanticOption* y0, yySemanticOption* y1)
{
  yyRuleNum r0 = y0->yyrule, r1 = y1->yyrule;
  int p0 = yydprec[r0], p1 = yydprec[r1];

  if (p0 == p1)
    {
      if (yymerger[r0] == 0 || yymerger[r0] != yymerger[r1])
        return 0;
      else
        return 1;
    }
  if (p0 == 0 || p1 == 0)
    return 0;
  if (p0 < p1)
    return 3;
  if (p1 < p0)
    return 2;
  return 0;
}

static YYRESULTTAG yyresolveValue (yyGLRState* yys,
                                   yyGLRStack* yystackp, alioth::Parser& yyparser, alioth::Lexer& yylex, alioth::doc_t& doc);


/** Resolve the previous YYN states starting at and including state YYS
 *  on *YYSTACKP. If result != yyok, some states may have been left
 *  unresolved possibly with empty semantic option chains.  Regardless
 *  of whether result = yyok, each state has been left with consistent
 *  data so that yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveStates (yyGLRState* yys, int yyn,
                 yyGLRStack* yystackp, alioth::Parser& yyparser, alioth::Lexer& yylex, alioth::doc_t& doc)
{
  if (0 < yyn)
    {
      YY_ASSERT (yys->yypred);
      YYCHK (yyresolveStates (yys->yypred, yyn-1, yystackp, yyparser, yylex, doc));
      if (! yys->yyresolved)
        YYCHK (yyresolveValue (yys, yystackp, yyparser, yylex, doc));
    }
  return yyok;
}

/** Resolve the states for the RHS of YYOPT on *YYSTACKP, perform its
 *  user action, and return the semantic value and location in *YYVALP
 *  and *YYLOCP.  Regardless of whether result = yyok, all RHS states
 *  have been destroyed (assuming the user action destroys all RHS
 *  semantic values if invoked).  */
static YYRESULTTAG
yyresolveAction (yySemanticOption* yyopt, yyGLRStack* yystackp,
                 YYSTYPE* yyvalp, alioth::Parser& yyparser, alioth::Lexer& yylex, alioth::doc_t& doc)
{
  yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
  int yynrhs = yyrhsLength (yyopt->yyrule);
  YYRESULTTAG yyflag =
    yyresolveStates (yyopt->yystate, yynrhs, yystackp, yyparser, yylex, doc);
  if (yyflag != yyok)
    {
      yyGLRState *yys;
      for (yys = yyopt->yystate; yynrhs > 0; yys = yys->yypred, yynrhs -= 1)
        yydestroyGLRState ("Cleanup: popping", yys, yyparser, yylex, doc);
      return yyflag;
    }

  yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred = yyopt->yystate;
  {
    int yychar_current = yychar;
    YYSTYPE yylval_current = yylval;
    yychar = yyopt->yyrawchar;
    yylval = yyopt->yyval;
    yyflag = yyuserAction (yyopt->yyrule, yynrhs,
                           yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, yyvalp, yyparser, yylex, doc);
    yychar = yychar_current;
    yylval = yylval_current;
  }
  return yyflag;
}

#if YYDEBUG
static void
yyreportTree (yySemanticOption* yyx, int yyindent)
{
  int yynrhs = yyrhsLength (yyx->yyrule);
  int yyi;
  yyGLRState* yys;
  yyGLRState* yystates[1 + YYMAXRHS];
  yyGLRState yyleftmost_state;

  for (yyi = yynrhs, yys = yyx->yystate; 0 < yyi; yyi -= 1, yys = yys->yypred)
    yystates[yyi] = yys;
  if (yys == YY_NULLPTR)
    {
      yyleftmost_state.yyposn = 0;
      yystates[0] = &yyleftmost_state;
    }
  else
    yystates[0] = yys;

  if (yyx->yystate->yyposn < yys->yyposn + 1)
    YY_FPRINTF ((stderr, "%*s%s -> <Rule %d, empty>\n",
                 yyindent, "", yysymbol_name (yylhsNonterm (yyx->yyrule)),
                 yyx->yyrule - 1));
  else
    YY_FPRINTF ((stderr, "%*s%s -> <Rule %d, tokens %ld .. %ld>\n",
                 yyindent, "", yysymbol_name (yylhsNonterm (yyx->yyrule)),
                 yyx->yyrule - 1, YY_CAST (long, yys->yyposn + 1),
                 YY_CAST (long, yyx->yystate->yyposn)));
  for (yyi = 1; yyi <= yynrhs; yyi += 1)
    {
      if (yystates[yyi]->yyresolved)
        {
          if (yystates[yyi-1]->yyposn+1 > yystates[yyi]->yyposn)
            YY_FPRINTF ((stderr, "%*s%s <empty>\n", yyindent+2, "",
                         yysymbol_name (yy_accessing_symbol (yystates[yyi]->yylrState))));
          else
            YY_FPRINTF ((stderr, "%*s%s <tokens %ld .. %ld>\n", yyindent+2, "",
                         yysymbol_name (yy_accessing_symbol (yystates[yyi]->yylrState)),
                         YY_CAST (long, yystates[yyi-1]->yyposn + 1),
                         YY_CAST (long, yystates[yyi]->yyposn)));
        }
      else
        yyreportTree (yystates[yyi]->yysemantics.yyfirstVal, yyindent+2);
    }
}
#endif

static YYRESULTTAG
yyreportAmbiguity (yySemanticOption* yyx0,
                   yySemanticOption* yyx1, alioth::Parser& yyparser, alioth::Lexer& yylex, alioth::doc_t& doc)
{
  YY_USE (yyx0);
  YY_USE (yyx1);

#if YYDEBUG
  YY_FPRINTF ((stderr, "Ambiguity detected.\n"));
  YY_FPRINTF ((stderr, "Option 1,\n"));
  yyreportTree (yyx0, 2);
  YY_FPRINTF ((stderr, "\nOption 2,\n"));
  yyreportTree (yyx1, 2);
  YY_FPRINTF ((stderr, "\n"));
#endif

  yyerror (yyparser, yylex, doc, YY_("syntax is ambiguous"));
  return yyabort;
}

/** Resolve the ambiguity represented in state YYS in *YYSTACKP,
 *  perform the indicated actions, and set the semantic value of YYS.
 *  If result != yyok, the chain of semantic options in YYS has been
 *  cleared instead or it has been left unmodified except that
 *  redundant options may have been removed.  Regardless of whether
 *  result = yyok, YYS has been left with consistent data so that
 *  yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveValue (yyGLRState* yys, yyGLRStack* yystackp, alioth::Parser& yyparser, alioth::Lexer& yylex, alioth::doc_t& doc)
{
  yySemanticOption* yyoptionList = yys->yysemantics.yyfirstVal;
  yySemanticOption* yybest = yyoptionList;
  yySemanticOption** yypp;
  yybool yymerge = yyfalse;
  YYSTYPE yysval;
  YYRESULTTAG yyflag;

  for (yypp = &yyoptionList->yynext; *yypp != YY_NULLPTR; )
    {
      yySemanticOption* yyp = *yypp;

      if (yyidenticalOptions (yybest, yyp))
        {
          yymergeOptionSets (yybest, yyp);
          *yypp = yyp->yynext;
        }
      else
        {
          switch (yypreference (yybest, yyp))
            {
            case 0:
              return yyreportAmbiguity (yybest, yyp, yyparser, yylex, doc);
              break;
            case 1:
              yymerge = yytrue;
              break;
            case 2:
              break;
            case 3:
              yybest = yyp;
              yymerge = yyfalse;
              break;
            default:
              /* This cannot happen so it is not worth a YY_ASSERT (yyfalse),
                 but some compilers complain if the default case is
                 omitted.  */
              break;
            }
          yypp = &yyp->yynext;
        }
    }

  if (yymerge)
    {
      yySemanticOption* yyp;
      int yyprec = yydprec[yybest->yyrule];
      yyflag = yyresolveAction (yybest, yystackp, &yysval, yyparser, yylex, doc);
      if (yyflag == yyok)
        for (yyp = yybest->yynext; yyp != YY_NULLPTR; yyp = yyp->yynext)
          {
            if (yyprec == yydprec[yyp->yyrule])
              {
                YYSTYPE yysval_other;
                yyflag = yyresolveAction (yyp, yystackp, &yysval_other, yyparser, yylex, doc);
                if (yyflag != yyok)
                  {
                    yydestruct ("Cleanup: discarding incompletely merged value for",
                                yy_accessing_symbol (yys->yylrState),
                                &yysval, yyparser, yylex, doc);
                    break;
                  }
                yyuserMerge (yymerger[yyp->yyrule], &yysval, &yysval_other);
              }
          }
    }
  else
    yyflag = yyresolveAction (yybest, yystackp, &yysval, yyparser, yylex, doc);

  if (yyflag == yyok)
    {
      yys->yyresolved = yytrue;
      yys->yysemantics.yysval = yysval;
    }
  else
    yys->yysemantics.yyfirstVal = YY_NULLPTR;
  return yyflag;
}

static YYRESULTTAG
yyresolveStack (yyGLRStack* yystackp, alioth::Parser& yyparser, alioth::Lexer& yylex, alioth::doc_t& doc)
{
  if (yystackp->yysplitPoint != YY_NULLPTR)
    {
      yyGLRState* yys;
      int yyn;

      for (yyn = 0, yys = yystackp->yytops.yystates[0];
           yys != yystackp->yysplitPoint;
           yys = yys->yypred, yyn += 1)
        continue;
      YYCHK (yyresolveStates (yystackp->yytops.yystates[0], yyn, yystackp
                             , yyparser, yylex, doc));
    }
  return yyok;
}

static void
yycompressStack (yyGLRStack* yystackp)
{
  yyGLRState* yyp, *yyq, *yyr;

  if (yystackp->yytops.yysize != 1 || yystackp->yysplitPoint == YY_NULLPTR)
    return;

  for (yyp = yystackp->yytops.yystates[0], yyq = yyp->yypred, yyr = YY_NULLPTR;
       yyp != yystackp->yysplitPoint;
       yyr = yyp, yyp = yyq, yyq = yyp->yypred)
    yyp->yypred = yyr;

  yystackp->yyspaceLeft += yystackp->yynextFree - yystackp->yyitems;
  yystackp->yynextFree = YY_REINTERPRET_CAST (yyGLRStackItem*, yystackp->yysplitPoint) + 1;
  yystackp->yyspaceLeft -= yystackp->yynextFree - yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULLPTR;
  yystackp->yylastDeleted = YY_NULLPTR;

  while (yyr != YY_NULLPTR)
    {
      yystackp->yynextFree->yystate = *yyr;
      yyr = yyr->yypred;
      yystackp->yynextFree->yystate.yypred = &yystackp->yynextFree[-1].yystate;
      yystackp->yytops.yystates[0] = &yystackp->yynextFree->yystate;
      yystackp->yynextFree += 1;
      yystackp->yyspaceLeft -= 1;
    }
}

static YYRESULTTAG
yyprocessOneStack (yyGLRStack* yystackp, YYPTRDIFF_T yyk,
                   YYPTRDIFF_T yyposn, alioth::Parser& yyparser, alioth::Lexer& yylex, alioth::doc_t& doc)
{
  while (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
    {
      yy_state_t yystate = yystackp->yytops.yystates[yyk]->yylrState;
      YY_DPRINTF ((stderr, "Stack %ld Entering state %d\n",
                   YY_CAST (long, yyk), yystate));

      YY_ASSERT (yystate != YYFINAL);

      if (yyisDefaultedState (yystate))
        {
          YYRESULTTAG yyflag;
          yyRuleNum yyrule = yydefaultAction (yystate);
          if (yyrule == 0)
            {
              YY_DPRINTF ((stderr, "Stack %ld dies.\n", YY_CAST (long, yyk)));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          yyflag = yyglrReduce (yystackp, yyk, yyrule, yyimmediate[yyrule], yyparser, yylex, doc);
          if (yyflag == yyerr)
            {
              YY_DPRINTF ((stderr,
                           "Stack %ld dies "
                           "(predicate failure or explicit user error).\n",
                           YY_CAST (long, yyk)));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          if (yyflag != yyok)
            return yyflag;
        }
      else
        {
          yysymbol_kind_t yytoken = yygetToken (&yychar, yystackp, yyparser, yylex, doc);
          const short* yyconflicts;
          const int yyaction = yygetLRActions (yystate, yytoken, &yyconflicts);
          yystackp->yytops.yylookaheadNeeds[yyk] = yytrue;

          for (/* nothing */; *yyconflicts; yyconflicts += 1)
            {
              YYRESULTTAG yyflag;
              YYPTRDIFF_T yynewStack = yysplitStack (yystackp, yyk);
              YY_DPRINTF ((stderr, "Splitting off stack %ld from %ld.\n",
                           YY_CAST (long, yynewStack), YY_CAST (long, yyk)));
              yyflag = yyglrReduce (yystackp, yynewStack,
                                    *yyconflicts,
                                    yyimmediate[*yyconflicts], yyparser, yylex, doc);
              if (yyflag == yyok)
                YYCHK (yyprocessOneStack (yystackp, yynewStack,
                                          yyposn, yyparser, yylex, doc));
              else if (yyflag == yyerr)
                {
                  YY_DPRINTF ((stderr, "Stack %ld dies.\n", YY_CAST (long, yynewStack)));
                  yymarkStackDeleted (yystackp, yynewStack);
                }
              else
                return yyflag;
            }

          if (yyisShiftAction (yyaction))
            break;
          else if (yyisErrorAction (yyaction))
            {
              YY_DPRINTF ((stderr, "Stack %ld dies.\n", YY_CAST (long, yyk)));
              yymarkStackDeleted (yystackp, yyk);
              break;
            }
          else
            {
              YYRESULTTAG yyflag = yyglrReduce (yystackp, yyk, -yyaction,
                                                yyimmediate[-yyaction], yyparser, yylex, doc);
              if (yyflag == yyerr)
                {
                  YY_DPRINTF ((stderr,
                               "Stack %ld dies "
                               "(predicate failure or explicit user error).\n",
                               YY_CAST (long, yyk)));
                  yymarkStackDeleted (yystackp, yyk);
                  break;
                }
              else if (yyflag != yyok)
                return yyflag;
            }
        }
    }
  return yyok;
}

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYSTACKP, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  */
static int
yypcontext_expected_tokens (const yyGLRStack* yystackp,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[yystackp->yytops.yystates[0]->yylrState];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != S_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = S_YYEMPTY;
  return yycount;
}

static int
yy_syntax_error_arguments (const yyGLRStack* yystackp,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  yysymbol_kind_t yytoken = yychar == TK_YYEMPTY ? S_YYEMPTY : YYTRANSLATE (yychar);
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.b4_lac_if([
       In the first two cases, it might appear that the current syntax
       error should have been detected in the previous state when yy_lac
       was invoked.  However, at that time, there might have been a
       different syntax error that discarded a different initial context
       during error recovery, leaving behind the current lookahead.], [
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.])
  */
  if (yytoken != S_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yystackp,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}



static void
yyreportSyntaxError (yyGLRStack* yystackp, alioth::Parser& yyparser, alioth::Lexer& yylex, alioth::doc_t& doc)
{
  if (yystackp->yyerrState != 0)
    return;
  {
  yybool yysize_overflow = yyfalse;
  char* yymsg = YY_NULLPTR;
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount
    = yy_syntax_error_arguments (yystackp, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    yyMemoryExhausted (yystackp);

  switch (yycount)
    {
#define YYCASE_(N, S)                   \
      case N:                           \
        yyformat = S;                   \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysz
          = yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (YYSIZE_MAXIMUM - yysize < yysz)
          yysize_overflow = yytrue;
        else
          yysize += yysz;
      }
  }

  if (!yysize_overflow)
    yymsg = YY_CAST (char *, YYMALLOC (YY_CAST (YYSIZE_T, yysize)));

  if (yymsg)
    {
      char *yyp = yymsg;
      int yyi = 0;
      while ((*yyp = *yyformat))
        {
          if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
            {
              yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
              yyformat += 2;
            }
          else
            {
              ++yyp;
              ++yyformat;
            }
        }
      yyerror (yyparser, yylex, doc, yymsg);
      YYFREE (yymsg);
    }
  else
    {
      yyerror (yyparser, yylex, doc, YY_("syntax error"));
      yyMemoryExhausted (yystackp);
    }
  }
  yynerrs += 1;
}

/* Recover from a syntax error on *YYSTACKP, assuming that *YYSTACKP->YYTOKENP,
   yylval, and yylloc are the syntactic category, semantic value, and location
   of the lookahead.  */
static void
yyrecoverSyntaxError (yyGLRStack* yystackp, alioth::Parser& yyparser, alioth::Lexer& yylex, alioth::doc_t& doc)
{
  if (yystackp->yyerrState == 3)
    /* We just shifted the error token and (perhaps) took some
       reductions.  Skip tokens until we can proceed.  */
    while (yytrue)
      {
        yysymbol_kind_t yytoken;
        int yyj;
        if (yychar == TK_YYEOF)
          yyFail (yystackp, yyparser, yylex, doc, YY_NULLPTR);
        if (yychar != TK_YYEMPTY)
          {
            yytoken = YYTRANSLATE (yychar);
            yydestruct ("Error: discarding",
                        yytoken, &yylval, yyparser, yylex, doc);
            yychar = TK_YYEMPTY;
          }
        yytoken = yygetToken (&yychar, yystackp, yyparser, yylex, doc);
        yyj = yypact[yystackp->yytops.yystates[0]->yylrState];
        if (yypact_value_is_default (yyj))
          return;
        yyj += yytoken;
        if (yyj < 0 || YYLAST < yyj || yycheck[yyj] != yytoken)
          {
            if (yydefact[yystackp->yytops.yystates[0]->yylrState] != 0)
              return;
          }
        else if (! yytable_value_is_error (yytable[yyj]))
          return;
      }

  /* Reduce to one stack.  */
  {
    YYPTRDIFF_T yyk;
    for (yyk = 0; yyk < yystackp->yytops.yysize; yyk += 1)
      if (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
        break;
    if (yyk >= yystackp->yytops.yysize)
      yyFail (yystackp, yyparser, yylex, doc, YY_NULLPTR);
    for (yyk += 1; yyk < yystackp->yytops.yysize; yyk += 1)
      yymarkStackDeleted (yystackp, yyk);
    yyremoveDeletes (yystackp);
    yycompressStack (yystackp);
  }

  /* Pop stack until we find a state that shifts the error token.  */
  yystackp->yyerrState = 3;
  while (yystackp->yytops.yystates[0] != YY_NULLPTR)
    {
      yyGLRState *yys = yystackp->yytops.yystates[0];
      int yyj = yypact[yys->yylrState];
      if (! yypact_value_is_default (yyj))
        {
          yyj += S_YYerror;
          if (0 <= yyj && yyj <= YYLAST && yycheck[yyj] == S_YYerror
              && yyisShiftAction (yytable[yyj]))
            {
              /* Shift the error token.  */
              int yyaction = yytable[yyj];
              YY_SYMBOL_PRINT ("Shifting", yy_accessing_symbol (yyaction),
                               &yylval, &yyerrloc);
              yyglrShift (yystackp, 0, yyaction,
                          yys->yyposn, &yylval);
              yys = yystackp->yytops.yystates[0];
              break;
            }
        }
      if (yys->yypred != YY_NULLPTR)
        yydestroyGLRState ("Error: popping", yys, yyparser, yylex, doc);
      yystackp->yytops.yystates[0] = yys->yypred;
      yystackp->yynextFree -= 1;
      yystackp->yyspaceLeft += 1;
    }
  if (yystackp->yytops.yystates[0] == YY_NULLPTR)
    yyFail (yystackp, yyparser, yylex, doc, YY_NULLPTR);
}

#define YYCHK1(YYE)                                                          \
  do {                                                                       \
    switch (YYE) {                                                           \
    case yyok:                                                               \
      break;                                                                 \
    case yyabort:                                                            \
      goto yyabortlab;                                                       \
    case yyaccept:                                                           \
      goto yyacceptlab;                                                      \
    case yyerr:                                                              \
      goto yyuser_error;                                                     \
    default:                                                                 \
      goto yybuglab;                                                         \
    }                                                                        \
  } while (0)

/*----------.
| yyparse.  |
`----------*/

int
yy_parse_impl (alioth::Parser& yyparser, alioth::Lexer& yylex, alioth::doc_t& doc)
{
  int yyresult;
  yyGLRStack yystack;
  yyGLRStack* const yystackp = &yystack;
  YYPTRDIFF_T yyposn;

  YY_DPRINTF ((stderr, "Starting parse\n"));

  yychar = TK_YYEMPTY;
  yylval = yyval_default;

  // User initialization code.
#line 64 "../gen/syntactic.ypp"
{
}

#line 3243 "syntactic.cpp"


  if (! yyinitGLRStack (yystackp, YYINITDEPTH))
    goto yyexhaustedlab;
  switch (YYSETJMP (yystack.yyexception_buffer))
    {
    case 0: break;
    case 1: goto yyabortlab;
    case 2: goto yyexhaustedlab;
    default: goto yybuglab;
    }
  yyglrShift (&yystack, 0, 0, 0, &yylval);
  yyposn = 0;

  while (yytrue)
    {
      /* For efficiency, we have two loops, the first of which is
         specialized to deterministic operation (single stack, no
         potential ambiguity).  */
      /* Standard mode. */
      while (yytrue)
        {
          yy_state_t yystate = yystack.yytops.yystates[0]->yylrState;
          YY_DPRINTF ((stderr, "Entering state %d\n", yystate));
          if (yystate == YYFINAL)
            goto yyacceptlab;
          if (yyisDefaultedState (yystate))
            {
              yyRuleNum yyrule = yydefaultAction (yystate);
              if (yyrule == 0)
                {
                  yyreportSyntaxError (&yystack, yyparser, yylex, doc);
                  goto yyuser_error;
                }
              YYCHK1 (yyglrReduce (&yystack, 0, yyrule, yytrue, yyparser, yylex, doc));
            }
          else
            {
              yysymbol_kind_t yytoken = yygetToken (&yychar, yystackp, yyparser, yylex, doc);
              const short* yyconflicts;
              int yyaction = yygetLRActions (yystate, yytoken, &yyconflicts);
              if (*yyconflicts)
                /* Enter nondeterministic mode.  */
                break;
              if (yyisShiftAction (yyaction))
                {
                  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
                  yychar = TK_YYEMPTY;
                  yyposn += 1;
                  yyglrShift (&yystack, 0, yyaction, yyposn, &yylval);
                  if (0 < yystack.yyerrState)
                    yystack.yyerrState -= 1;
                }
              else if (yyisErrorAction (yyaction))
                {
                  /* Issue an error message unless the scanner already
                     did. */
                  if (yychar != TK_YYerror)
                    yyreportSyntaxError (&yystack, yyparser, yylex, doc);
                  goto yyuser_error;
                }
              else
                YYCHK1 (yyglrReduce (&yystack, 0, -yyaction, yytrue, yyparser, yylex, doc));
            }
        }

      /* Nondeterministic mode. */
      while (yytrue)
        {
          yysymbol_kind_t yytoken_to_shift;
          YYPTRDIFF_T yys;

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            yystackp->yytops.yylookaheadNeeds[yys] = yychar != TK_YYEMPTY;

          /* yyprocessOneStack returns one of three things:

              - An error flag.  If the caller is yyprocessOneStack, it
                immediately returns as well.  When the caller is finally
                yyparse, it jumps to an error label via YYCHK1.

              - yyok, but yyprocessOneStack has invoked yymarkStackDeleted
                (&yystack, yys), which sets the top state of yys to NULL.  Thus,
                yyparse's following invocation of yyremoveDeletes will remove
                the stack.

              - yyok, when ready to shift a token.

             Except in the first case, yyparse will invoke yyremoveDeletes and
             then shift the next token onto all remaining stacks.  This
             synchronization of the shift (that is, after all preceding
             reductions on all stacks) helps prevent double destructor calls
             on yylval in the event of memory exhaustion.  */

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            YYCHK1 (yyprocessOneStack (&yystack, yys, yyposn, yyparser, yylex, doc));
          yyremoveDeletes (&yystack);
          if (yystack.yytops.yysize == 0)
            {
              yyundeleteLastStack (&yystack);
              if (yystack.yytops.yysize == 0)
                yyFail (&yystack, yyparser, yylex, doc, YY_("syntax error"));
              YYCHK1 (yyresolveStack (&yystack, yyparser, yylex, doc));
              YY_DPRINTF ((stderr, "Returning to deterministic operation.\n"));
              yyreportSyntaxError (&yystack, yyparser, yylex, doc);
              goto yyuser_error;
            }

          /* If any yyglrShift call fails, it will fail after shifting.  Thus,
             a copy of yylval will already be on stack 0 in the event of a
             failure in the following loop.  Thus, yychar is set to TK_YYEMPTY
             before the loop to make sure the user destructor for yylval isn't
             called twice.  */
          yytoken_to_shift = YYTRANSLATE (yychar);
          yychar = TK_YYEMPTY;
          yyposn += 1;
          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            {
              yy_state_t yystate = yystack.yytops.yystates[yys]->yylrState;
              const short* yyconflicts;
              int yyaction = yygetLRActions (yystate, yytoken_to_shift,
                              &yyconflicts);
              /* Note that yyconflicts were handled by yyprocessOneStack.  */
              YY_DPRINTF ((stderr, "On stack %ld, ", YY_CAST (long, yys)));
              YY_SYMBOL_PRINT ("shifting", yytoken_to_shift, &yylval, &yylloc);
              yyglrShift (&yystack, yys, yyaction, yyposn,
                          &yylval);
              YY_DPRINTF ((stderr, "Stack %ld now in state #%d\n",
                           YY_CAST (long, yys),
                           yystack.yytops.yystates[yys]->yylrState));
            }

          if (yystack.yytops.yysize == 1)
            {
              YYCHK1 (yyresolveStack (&yystack, yyparser, yylex, doc));
              YY_DPRINTF ((stderr, "Returning to deterministic operation.\n"));
              yycompressStack (&yystack);
              break;
            }
        }
      continue;
    yyuser_error:
      yyrecoverSyntaxError (&yystack, yyparser, yylex, doc);
      yyposn = yystack.yytops.yystates[0]->yyposn;
    }

 yyacceptlab:
  yyresult = 0;
  goto yyreturn;

 yybuglab:
  YY_ASSERT (yyfalse);
  goto yyabortlab;

 yyabortlab:
  yyresult = 1;
  goto yyreturn;

 yyexhaustedlab:
  yyerror (yyparser, yylex, doc, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;

 yyreturn:
  if (yychar != TK_YYEMPTY)
    yydestruct ("Cleanup: discarding lookahead",
                YYTRANSLATE (yychar), &yylval, yyparser, yylex, doc);

  /* If the stack is well-formed, pop the stack until it is empty,
     destroying its entries as we go.  But free the stack regardless
     of whether it is well-formed.  */
  if (yystack.yyitems)
    {
      yyGLRState** yystates = yystack.yytops.yystates;
      if (yystates)
        {
          YYPTRDIFF_T yysize = yystack.yytops.yysize;
          YYPTRDIFF_T yyk;
          for (yyk = 0; yyk < yysize; yyk += 1)
            if (yystates[yyk])
              {
                while (yystates[yyk])
                  {
                    yyGLRState *yys = yystates[yyk];
                    if (yys->yypred != YY_NULLPTR)
                      yydestroyGLRState ("Cleanup: popping", yys, yyparser, yylex, doc);
                    yystates[yyk] = yys->yypred;
                    yystack.yynextFree -= 1;
                    yystack.yyspaceLeft += 1;
                  }
                break;
              }
        }
      yyfreeGLRStack (&yystack);
    }

  return yyresult;
}

/* DEBUGGING ONLY */
#if YYDEBUG
static void
yy_yypstack (yyGLRState* yys)
{
  if (yys->yypred)
    {
      yy_yypstack (yys->yypred);
      YY_FPRINTF ((stderr, " -> "));
    }
  YY_FPRINTF ((stderr, "%d@%ld", yys->yylrState, YY_CAST (long, yys->yyposn)));
}

static void
yypstates (yyGLRState* yyst)
{
  if (yyst == YY_NULLPTR)
    YY_FPRINTF ((stderr, "<null>"));
  else
    yy_yypstack (yyst);
  YY_FPRINTF ((stderr, "\n"));
}

static void
yypstack (yyGLRStack* yystackp, YYPTRDIFF_T yyk)
{
  yypstates (yystackp->yytops.yystates[yyk]);
}

static void
yypdumpstack (yyGLRStack* yystackp)
{
#define YYINDEX(YYX)                                                    \
  YY_CAST (long,                                                        \
           ((YYX)                                                       \
            ? YY_REINTERPRET_CAST (yyGLRStackItem*, (YYX)) - yystackp->yyitems \
            : -1))

  yyGLRStackItem* yyp;
  for (yyp = yystackp->yyitems; yyp < yystackp->yynextFree; yyp += 1)
    {
      YY_FPRINTF ((stderr, "%3ld. ",
                   YY_CAST (long, yyp - yystackp->yyitems)));
      if (*YY_REINTERPRET_CAST (yybool *, yyp))
        {
          YY_ASSERT (yyp->yystate.yyisState);
          YY_ASSERT (yyp->yyoption.yyisState);
          YY_FPRINTF ((stderr, "Res: %d, LR State: %d, posn: %ld, pred: %ld",
                       yyp->yystate.yyresolved, yyp->yystate.yylrState,
                       YY_CAST (long, yyp->yystate.yyposn),
                       YYINDEX (yyp->yystate.yypred)));
          if (! yyp->yystate.yyresolved)
            YY_FPRINTF ((stderr, ", firstVal: %ld",
                         YYINDEX (yyp->yystate.yysemantics.yyfirstVal)));
        }
      else
        {
          YY_ASSERT (!yyp->yystate.yyisState);
          YY_ASSERT (!yyp->yyoption.yyisState);
          YY_FPRINTF ((stderr, "Option. rule: %d, state: %ld, next: %ld",
                       yyp->yyoption.yyrule - 1,
                       YYINDEX (yyp->yyoption.yystate),
                       YYINDEX (yyp->yyoption.yynext)));
        }
      YY_FPRINTF ((stderr, "\n"));
    }

  YY_FPRINTF ((stderr, "Tops:"));
  {
    YYPTRDIFF_T yyi;
    for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
      YY_FPRINTF ((stderr, "%ld: %ld; ", YY_CAST (long, yyi),
                   YYINDEX (yystackp->yytops.yystates[yyi])));
    YY_FPRINTF ((stderr, "\n"));
  }
#undef YYINDEX
}
#endif

#undef yylval
#undef yychar
#undef yynerrs



#line 3528 "syntactic.cpp"

/*------------------.
| Report an error.  |
`------------------*/

static void
yyerror (alioth::Parser& yyparser, alioth::Lexer& yylex, alioth::doc_t& doc,
         const char* msg)
{
  YY_USE (yyparser);
  YY_USE (yylex);
  YY_USE (doc);
  yyparser.error (msg);
}


#line 70 "../gen/syntactic.ypp"
namespace alioth {
#line 3547 "syntactic.cpp"

  /// Build a parser object.
  Parser::Parser (alioth::Lexer& yylex_yyarg, alioth::doc_t& doc_yyarg)
    :
#if YYDEBUG
      yycdebug_ (&std::cerr),
#endif
      yylex (yylex_yyarg),
      doc (doc_yyarg)
  {}

  Parser::~Parser ()
  {}

  Parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  int
  Parser::operator() ()
  {
    return parse ();
  }

  int
  Parser::parse ()
  {
    return ::yy_parse_impl (*this, yylex, doc);
  }

#if YYDEBUG
  /*--------------------.
  | Print this symbol.  |
  `--------------------*/

  void
  Parser::yy_symbol_value_print_ (symbol_kind_type yykind,
                           const semantic_type* yyvaluep) const
  {
    YY_USE (yyvaluep);
    std::ostream& yyo = debug_stream ();
    std::ostream& yyoutput = yyo;
    YY_USE (yyoutput);
    YY_USE (yykind);
  }


  void
  Parser::yy_symbol_print_ (symbol_kind_type yykind,
                           const semantic_type* yyvaluep) const
  {
    *yycdebug_ << (yykind < YYNTOKENS ? "token" : "nterm")
               << ' ' << yysymbol_name (yykind) << " (";
    yy_symbol_value_print_ (yykind, yyvaluep);
    *yycdebug_ << ')';
  }

  std::ostream&
  Parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  Parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  Parser::debug_level_type
  Parser::debug_level () const
  {
    return yydebug;
  }

  void
  Parser::set_debug_level (debug_level_type l)
  {
    // Actually, it is yydebug which is really used.
    yydebug = l;
  }

#endif
#line 70 "../gen/syntactic.ypp"
} // alioth
#line 3633 "syntactic.cpp"

#undef TK_YYEMPTY
#undef TK_YYEOF
#undef TK_YYerror

#undef S_YYEMPTY
#undef S_YYEOF
#undef S_YYerror
#undef S_YYUNDEF
#undef S_SPACE
#undef S_COMMENT
#undef S_CONST
#undef S_AS
#undef S_LET
#undef S_USE
#undef S_IN
#undef S_IMPORT
#undef S_FROM
#undef S_CLASS
#undef S_ENUM
#undef S_UNIT
#undef S_INTERFACE
#undef S_MODULE
#undef S_IF
#undef S_ELSE
#undef S_FOR
#undef S_WHILE
#undef S_DO
#undef S_RETURN
#undef S_BREAK
#undef S_CONTINUE
#undef S_PUBLIC
#undef S_PRIVATE
#undef S_PROTECTED
#undef S_ID
#undef S_INTEGER
#undef S_DECIMAL
#undef S_OCTAL
#undef S_HEX
#undef S_TRUE
#undef S_FALSE
#undef S_NULL
#undef S_DQSTR
#undef S_SQSTR
#undef S_THIS
#undef S_COMMA
#undef S_COLON
#undef S_SEMI
#undef S_OPE
#undef S_CLE
#undef S_OPI
#undef S_CLI
#undef S_OPB
#undef S_CLB
#undef S_DOT
#undef S_ETC
#undef S_MOL
#undef S_BITAND
#undef S_BITOR
#undef S_BITXOR
#undef S_BITNOT
#undef S_SHL
#undef S_SHR
#undef S_ASS
#undef S_ASS_ADD
#undef S_ASS_SUB
#undef S_ASS_MUL
#undef S_ASS_DIV
#undef S_ASS_MOL
#undef S_ASS_SHL
#undef S_ASS_SHR
#undef S_ASS_BITAND
#undef S_ASS_BITOR
#undef S_ASS_BITXOR
#undef S_NOT
#undef S_AND
#undef S_OR
#undef S_XOR
#undef S_ADD
#undef S_SUB
#undef S_MUL
#undef S_DIV
#undef S_SUP
#undef S_QST
#undef S_YYACCEPT
#undef S_doc
#undef S_80_doc_header
#undef S_81_doc_body
#undef S_enum
#undef S_83_enum_items
#undef S_enumi
#undef S_modecl
#undef S_import
#undef S_87_1
#undef S_88_import_package
#undef S_89_import_modules
#undef S_modesc

#line 206 "../gen/syntactic.ypp"


namespace alioth {
    std::string kind_name( alioth::VT t ) {
        return yysymbol_name((alioth::VN)t);
    }

    std::string kind_name( alioth::VN n ) {
        return yysymbol_name(n);
    }
    std::string kind_name( int i ) {
        return yysymbol_name((alioth::VN)i);
    }

    void Parser::error( const std::string& msg ) {
        std::cerr << msg << std::endl;
    }
}
