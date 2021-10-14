// A Bison parser, made by GNU Bison 3.7.5.

// Skeleton interface for Bison GLR parsers in C++

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

// C++ GLR parser skeleton written by Akim Demaille.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.

#ifndef YY_YY_SYNTACTIC_HPP_INCLUDED
# define YY_YY_SYNTACTIC_HPP_INCLUDED
// "%code requires" blocks.
#line 6 "../gen/syntactic.ypp"

#include "syntax.hpp"
#include "token.hpp"

namespace alioth {
class Lexer;
}

#line 52 "syntactic.hpp"

#include <iostream>
#include <stdexcept>
#include <string>

#if defined __cplusplus
# define YY_CPLUSPLUS __cplusplus
#else
# define YY_CPLUSPLUS 199711L
#endif

// Support move semantics when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_MOVE           std::move
# define YY_MOVE_OR_COPY   move
# define YY_MOVE_REF(Type) Type&&
# define YY_RVREF(Type)    Type&&
# define YY_COPY(Type)     Type
#else
# define YY_MOVE
# define YY_MOVE_OR_COPY   copy
# define YY_MOVE_REF(Type) Type&
# define YY_RVREF(Type)    const Type&
# define YY_COPY(Type)     const Type&
#endif

// Support noexcept when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_NOEXCEPT noexcept
# define YY_NOTHROW
#else
# define YY_NOEXCEPT
# define YY_NOTHROW throw ()
#endif

// Support constexpr when possible.
#if 201703 <= YY_CPLUSPLUS
# define YY_CONSTEXPR constexpr
#else
# define YY_CONSTEXPR
#endif
# include "location.hpp"


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

// This skeleton is based on C, yet compiles it as C++.
// So expect warnings about C style casts.
#if defined __clang__ && 306 <= __clang_major__ * 100 + __clang_minor__
# pragma clang diagnostic ignored "-Wold-style-cast"
#elif defined __GNUC__ && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# pragma GCC diagnostic ignored "-Wold-style-cast"
#endif

// On MacOS, PTRDIFF_MAX is defined as long long, which Clang's
// -pedantic reports as being a C++11 extension.
#if defined __APPLE__ && YY_CPLUSPLUS < 201103L \
    && defined __clang__ && 4 <= __clang_major__
# pragma clang diagnostic ignored "-Wc++11-long-long"
#endif

// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif

/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

#line 73 "../gen/syntactic.ypp"
namespace alioth {
#line 194 "syntactic.hpp"




  /// A Bison parser.
  class Parser
  {
  public:
#ifndef YYSTYPE
    /// Symbol semantic values.
    typedef st_node* semantic_type;
#else
    typedef YYSTYPE semantic_type;
#endif
    /// Symbol locations.
    typedef location location_type;

    /// Syntax errors thrown from user actions.
    struct syntax_error : std::runtime_error
    {
      syntax_error (const location_type& l, const std::string& m)
        : std::runtime_error (m)
        , location (l)
      {}

      syntax_error (const syntax_error& s)
        : std::runtime_error (s.what ())
        , location (s.location)
      {}

      ~syntax_error () YY_NOEXCEPT YY_NOTHROW;

      location_type location;
    };

    /// Token kinds.
    struct token
    {
      enum token_kind_type
      {
        TK_YYEMPTY = -2,
    TK_YYEOF = 0,                  // "end of file"
    TK_YYerror = 1,                // error
    TK_YYUNDEF = 2,                // "invalid token"
    TK_SPACE = 3,                  // SPACE
    TK_COMMENT = 4,                // COMMENT
    TK_CONST = 5,                  // CONST
    TK_AS = 6,                     // AS
    TK_LET = 7,                    // LET
    TK_USE = 8,                    // USE
    TK_IN = 9,                     // IN
    TK_IMPORT = 10,                // IMPORT
    TK_FROM = 11,                  // FROM
    TK_CLASS = 12,                 // CLASS
    TK_ENUM = 13,                  // ENUM
    TK_UNIT = 14,                  // UNIT
    TK_INTERFACE = 15,             // INTERFACE
    TK_MODULE = 16,                // MODULE
    TK_IF = 17,                    // IF
    TK_ELSE = 18,                  // ELSE
    TK_FOR = 19,                   // FOR
    TK_WHILE = 20,                 // WHILE
    TK_DO = 21,                    // DO
    TK_RETURN = 22,                // RETURN
    TK_BREAK = 23,                 // BREAK
    TK_CONTINUE = 24,              // CONTINUE
    TK_PUBLIC = 25,                // PUBLIC
    TK_PRIVATE = 26,               // PRIVATE
    TK_PROTECTED = 27,             // PROTECTED
    TK_ID = 28,                    // ID
    TK_INTEGER = 29,               // INTEGER
    TK_DECIMAL = 30,               // DECIMAL
    TK_OCTAL = 31,                 // OCTAL
    TK_HEX = 32,                   // HEX
    TK_TRUE = 33,                  // TRUE
    TK_FALSE = 34,                 // FALSE
    TK_NULL = 35,                  // NULL
    TK_DQSTR = 36,                 // DQSTR
    TK_SQSTR = 37,                 // SQSTR
    TK_THIS = 38,                  // THIS
    TK_COMMA = 39,                 // COMMA
    TK_COLON = 40,                 // COLON
    TK_SEMI = 41,                  // SEMI
    TK_OPE = 42,                   // OPE
    TK_CLE = 43,                   // CLE
    TK_OPI = 44,                   // OPI
    TK_CLI = 45,                   // CLI
    TK_OPB = 46,                   // OPB
    TK_CLB = 47,                   // CLB
    TK_DOT = 48,                   // DOT
    TK_ETC = 49,                   // ETC
    TK_MOL = 50,                   // MOL
    TK_BITAND = 51,                // BITAND
    TK_BITOR = 52,                 // BITOR
    TK_BITXOR = 53,                // BITXOR
    TK_BITNOT = 54,                // BITNOT
    TK_SHL = 55,                   // SHL
    TK_SHR = 56,                   // SHR
    TK_ASS = 57,                   // ASS
    TK_ASS_ADD = 58,               // ASS_ADD
    TK_ASS_SUB = 59,               // ASS_SUB
    TK_ASS_MUL = 60,               // ASS_MUL
    TK_ASS_DIV = 61,               // ASS_DIV
    TK_ASS_MOL = 62,               // ASS_MOL
    TK_ASS_SHL = 63,               // ASS_SHL
    TK_ASS_SHR = 64,               // ASS_SHR
    TK_ASS_BITAND = 65,            // ASS_BITAND
    TK_ASS_BITOR = 66,             // ASS_BITOR
    TK_ASS_BITXOR = 67,            // ASS_BITXOR
    TK_NOT = 68,                   // NOT
    TK_AND = 69,                   // AND
    TK_OR = 70,                    // OR
    TK_XOR = 71,                   // XOR
    TK_ADD = 72,                   // ADD
    TK_SUB = 73,                   // SUB
    TK_MUL = 74,                   // MUL
    TK_DIV = 75,                   // DIV
    TK_SUP = 76,                   // SUP
    TK_QST = 77                    // QST
      };
      /// Backward compatibility alias (Bison 3.6).
      typedef token_kind_type yytokentype;
    };

    /// Token kind, as returned by yylex.
    typedef token::yytokentype token_kind_type;

    /// Backward compatibility alias (Bison 3.6).
    typedef token_kind_type token_type;

    /// Symbol kinds.
    struct symbol_kind
    {
      enum symbol_kind_type
      {
        YYNTOKENS = 78, ///< Number of tokens.
        S_YYEMPTY = -2,
        S_YYEOF = 0,                             // "end of file"
        S_YYerror = 1,                           // error
        S_YYUNDEF = 2,                           // "invalid token"
        S_SPACE = 3,                             // SPACE
        S_COMMENT = 4,                           // COMMENT
        S_CONST = 5,                             // CONST
        S_AS = 6,                                // AS
        S_LET = 7,                               // LET
        S_USE = 8,                               // USE
        S_IN = 9,                                // IN
        S_IMPORT = 10,                           // IMPORT
        S_FROM = 11,                             // FROM
        S_CLASS = 12,                            // CLASS
        S_ENUM = 13,                             // ENUM
        S_UNIT = 14,                             // UNIT
        S_INTERFACE = 15,                        // INTERFACE
        S_MODULE = 16,                           // MODULE
        S_IF = 17,                               // IF
        S_ELSE = 18,                             // ELSE
        S_FOR = 19,                              // FOR
        S_WHILE = 20,                            // WHILE
        S_DO = 21,                               // DO
        S_RETURN = 22,                           // RETURN
        S_BREAK = 23,                            // BREAK
        S_CONTINUE = 24,                         // CONTINUE
        S_PUBLIC = 25,                           // PUBLIC
        S_PRIVATE = 26,                          // PRIVATE
        S_PROTECTED = 27,                        // PROTECTED
        S_ID = 28,                               // ID
        S_INTEGER = 29,                          // INTEGER
        S_DECIMAL = 30,                          // DECIMAL
        S_OCTAL = 31,                            // OCTAL
        S_HEX = 32,                              // HEX
        S_TRUE = 33,                             // TRUE
        S_FALSE = 34,                            // FALSE
        S_NULL = 35,                             // NULL
        S_DQSTR = 36,                            // DQSTR
        S_SQSTR = 37,                            // SQSTR
        S_THIS = 38,                             // THIS
        S_COMMA = 39,                            // COMMA
        S_COLON = 40,                            // COLON
        S_SEMI = 41,                             // SEMI
        S_OPE = 42,                              // OPE
        S_CLE = 43,                              // CLE
        S_OPI = 44,                              // OPI
        S_CLI = 45,                              // CLI
        S_OPB = 46,                              // OPB
        S_CLB = 47,                              // CLB
        S_DOT = 48,                              // DOT
        S_ETC = 49,                              // ETC
        S_MOL = 50,                              // MOL
        S_BITAND = 51,                           // BITAND
        S_BITOR = 52,                            // BITOR
        S_BITXOR = 53,                           // BITXOR
        S_BITNOT = 54,                           // BITNOT
        S_SHL = 55,                              // SHL
        S_SHR = 56,                              // SHR
        S_ASS = 57,                              // ASS
        S_ASS_ADD = 58,                          // ASS_ADD
        S_ASS_SUB = 59,                          // ASS_SUB
        S_ASS_MUL = 60,                          // ASS_MUL
        S_ASS_DIV = 61,                          // ASS_DIV
        S_ASS_MOL = 62,                          // ASS_MOL
        S_ASS_SHL = 63,                          // ASS_SHL
        S_ASS_SHR = 64,                          // ASS_SHR
        S_ASS_BITAND = 65,                       // ASS_BITAND
        S_ASS_BITOR = 66,                        // ASS_BITOR
        S_ASS_BITXOR = 67,                       // ASS_BITXOR
        S_NOT = 68,                              // NOT
        S_AND = 69,                              // AND
        S_OR = 70,                               // OR
        S_XOR = 71,                              // XOR
        S_ADD = 72,                              // ADD
        S_SUB = 73,                              // SUB
        S_MUL = 74,                              // MUL
        S_DIV = 75,                              // DIV
        S_SUP = 76,                              // SUP
        S_QST = 77,                              // QST
        S_YYACCEPT = 78,                         // $accept
        S_doc = 79,                              // doc
        S_80_doc_header = 80,                    // doc.header
        S_81_doc_body = 81,                      // doc.body
        S_enum = 82,                             // enum
        S_83_enum_items = 83,                    // enum.items
        S_enumi = 84,                            // enumi
        S_modecl = 85,                           // modecl
        S_import = 86,                           // import
        S_87_1 = 87,                             // $@1
        S_88_import_package = 88,                // import.package
        S_89_import_modules = 89,                // import.modules
        S_modesc = 90                            // modesc
      };
    };

    /// (Internal) symbol kind.
    typedef symbol_kind::symbol_kind_type symbol_kind_type;

    /// The number of tokens.
    static const symbol_kind_type YYNTOKENS = symbol_kind::YYNTOKENS;


    /// Build a parser object.
    Parser (alioth::Lexer& yylex_yyarg, alioth::doc_t& doc_yyarg);
    virtual ~Parser ();

    /// Parse.  An alias for parse ().
    /// \returns  0 iff parsing succeeded.
    int operator() ();

    /// Parse.
    /// \returns  0 iff parsing succeeded.
    virtual int parse ();

#if YYDEBUG
    /// The current debugging stream.
    std::ostream& debug_stream () const;
    /// Set the current debugging stream.
    void set_debug_stream (std::ostream &);

    /// Type for debugging levels.
    typedef int debug_level_type;
    /// The current debugging level.
    debug_level_type debug_level () const;
    /// Set the current debugging level.
    void set_debug_level (debug_level_type l);
#endif

    /// Report a syntax error.
    /// \param loc    where the syntax error is found.
    /// \param msg    a description of the syntax error.
    virtual void error (const location_type& loc, const std::string& msg);

# if YYDEBUG
  public:
    /// \brief Report a symbol value on the debug stream.
    /// \param yykind       The symbol kind.
    /// \param yyvaluep     Its semantic value.
    /// \param yylocationp  Its location.
    virtual void yy_symbol_value_print_ (symbol_kind_type yykind,
                                         const semantic_type* yyvaluep,
                                         const location_type* yylocationp) const;
    /// \brief Report a symbol on the debug stream.
    /// \param yykind       The symbol kind.
    /// \param yyvaluep     Its semantic value.
    /// \param yylocationp  Its location.
    virtual void yy_symbol_print_ (symbol_kind_type yykind,
                                   const semantic_type* yyvaluep,
                                   const location_type* yylocationp) const;
  private:
    /// Debug stream.
    std::ostream* yycdebug_;
#endif


    // User arguments.
    alioth::Lexer& yylex;
    alioth::doc_t& doc;
  };

#line 73 "../gen/syntactic.ypp"
} // alioth
#line 493 "syntactic.hpp"


// "%code provides" blocks.
#line 15 "../gen/syntactic.ypp"

namespace alioth {

    /** Start Condition, 由语法分析器用于修改词法分析器语境 */
    enum class SC {
        INITIAL,
        /** @MARK[SC] */
        DEPENDENCY,
        EXPRESSION,
    };

    /** 终结符ID */
    using VT = Parser::token_kind_type;

    /** 非终结符ID */
    using VN = Parser::symbol_kind_type;

    /** 获取终结符记号名称 */
    std::string kind_name( alioth::VT t );

    /** 获取非终结符记号名称 */
    std::string kind_name( alioth::VN n );

    /** 获取终结符或非终结符记号名称 */
    std::string kind_name( int i );
}

#line 525 "syntactic.hpp"


#endif // !YY_YY_SYNTACTIC_HPP_INCLUDED
