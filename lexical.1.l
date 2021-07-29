%{
#include "lexical.hpp"

#include <iostream>
#include <map>

struct lexer_impl {
  std::function<int(alioth::token)> cb;
  size_t line;
  size_t column;
  std::istream& is;
};

void gincrement(lexer_impl*, const std::string&);

#define YY_DECL size_t yylex( yyscan_t yyscanner )

#define YY_INPUT( buf, result, max_size ) {\
  yyextra->is.read(buf, max_size);\
  result = yyextra->is.gcount();\
}

#define MKTOKEN( id ) ({\
  auto t = alioth::token((int)id);\
  t.tx = std::string(yytext, yyleng);\
  t.bl = yyextra->line;\
  t.bc = yyextra->column;\
  gincrement(yyextra, t.tx);\
  t.el = yyextra->line;\
  t.ec = yyextra->column;\
  t;\
})

#define EMITTOKEN( id ) {\
  auto res = yyextra->cb(MKTOKEN(id));\
  if( res != 0 )\
    return res;\
}

%}

%option noyywrap
%option reentrant
%option extra-type="lexer_impl*"

%%
  /** START RULES */
(\s|\n)+ {EMITTOKEN(alioth::VT::SPACE);}  /* 空白符 */
and {EMITTOKEN(alioth::VT::AND);}
as {EMITTOKEN(alioth::VT::AS);}
break {EMITTOKEN(alioth::VT::BREAK);}
class {EMITTOKEN(alioth::VT::CLASS);}
continue {EMITTOKEN(alioth::VT::CONTINUE);}
const {EMITTOKEN(alioth::VT::CONST);}
do {EMITTOKEN(alioth::VT::DO);}
enum {EMITTOKEN(alioth::VT::ENUM);}
else {EMITTOKEN(alioth::VT::ELSE);}
false {EMITTOKEN(alioth::VT::FALSE);}
for {EMITTOKEN(alioth::VT::FOR);}
if {EMITTOKEN(alioth::VT::IF);}
interface {EMITTOKEN(alioth::VT::INTERFACE);}
let {EMITTOKEN(alioth::VT::LET);}
module {EMITTOKEN(alioth::VT::MODULE);}
not {EMITTOKEN(alioth::VT::NOT);}
or {EMITTOKEN(alioth::VT::OR);}
public {EMITTOKEN(alioth::VT::PUBLIC);}
private {EMITTOKEN(alioth::VT::PRIVATE);}
protected {EMITTOKEN(alioth::VT::PROTECTED);}
return {EMITTOKEN(alioth::VT::RETURN);}
unit {EMITTOKEN(alioth::VT::UNIT);}
use {EMITTOKEN(alioth::VT::USE);}
xor {EMITTOKEN(alioth::VT::XOR);}
0|[1-9][[:digit:]]*  {EMITTOKEN(alioth::VT::DECIMAL);}
[[:alpha:]_][[:alnum:]_]*  {EMITTOKEN(alioth::VT::ID);}
, {EMITTOKEN(alioth::VT::COMMA);}  /* 逗号 */
: {EMITTOKEN(alioth::VT::COLON);}  /* 冒号 */
; {EMITTOKEN(alioth::VT::SEMI);}   /* 分号 */
\( {EMITTOKEN(alioth::VT::OPENSUB);}
\) {EMITTOKEN(alioth::VT::CLOSESUB);}
\[ {EMITTOKEN(alioth::VT::OPENIDX);}
\] {EMITTOKEN(alioth::VT::CLOSEIDX);}
\{ {EMITTOKEN(alioth::VT::OPENBLK);}
\} {EMITTOKEN(alioth::VT::CLOSEBLK);}
  /** END RULES */

<<EOF>> { return 0; }
.  { EMITTOKEN(0); }
%%

namespace alioth {
  Lexer::Lexer(std::istream& is) {
    auto impl = new lexer_impl{
      line: 1,
      column: 1,
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

  void Lexer::ontoken( std::function<int(token)> cb ) {
    yyget_extra(m_impl)->cb = cb;
  }
  
  int Lexer::parse() {
    return yylex(m_impl);
  }

  extern std::map<VT,std::string> idname_table;

  std::string Lexer::IdName( VT id ) {
    return idname_table[id];
  }

  std::map<VT,std::string> idname_table = {
    /** START TABLE */
    /** END TABLE */
  };
}

void gincrement(lexer_impl* impl, const std::string& content ) {
  for( auto c : content ) {
    if( c == '\n' )
      impl->line += (impl->column = 1);
    else
      impl->column += 1;
  }
}