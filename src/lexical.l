%{
#include "lexical.hpp"
#include<iostream>
#include<string>

struct lexer_impl {
  std::function<bool(alioth::token)> cb;
  size_t column;
  size_t line;
  std::istream& is;
};

#define YY_DECL size_t yylex( yyscan_t yyscanner )

#define YY_INPUT( buf, result, max_size ) {\
  yyextra->is.read(buf, max_size);\
  result = yyextra->is.gcount();\
}

#define MKTOKEN( id ) ({\
  auto t = alioth::token(id);\
  t.tx = std::string(yytext, yyleng);\
  t.bl = yylineno;\
  t;\
})

%}

%option noyywrap
%option reentrant
%option extra-type="lexer_impl*"

SPACE \s+

%%
{SPACE} { yyextra->cb(MKTOKEN(1)); }
[a-zA-Z]+ { yyextra->cb(MKTOKEN(2)); } 
[0-9]+ { yyextra->cb(MKTOKEN(3)); }
<<EOF>> { return 0; }

. yyextra->cb(MKTOKEN(0));
%%

namespace alioth {
  Lexer::Lexer(std::istream& is) {
    auto impl = new lexer_impl{
      column: 1,
      line: 1,
      is:is
    };
    yylex_init_extra(impl, &m_impl);
  }
  Lexer::Lexer( Lexer&& an ):m_impl(an.m_impl) {
    an.m_impl = nullptr;
  }
  Lexer::~Lexer() {
    if( m_impl ) {
      delete yyget_extra(m_impl);
      yylex_destroy( m_impl );
    }
  }

  void Lexer::ontoken( std::function<bool(token)> cb ) {
    yyget_extra(m_impl)->cb = cb;
  }
  
  size_t Lexer::parse() {
    return yylex(m_impl);
  }
}