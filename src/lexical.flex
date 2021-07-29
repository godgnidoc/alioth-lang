%{
#include "lexical.hpp"

#include <iostream>
#include <map>

/** 词法分析器上下文 */
struct lexer_impl {
  std::function<int(alioth::token)> cb;
  size_t line;
  size_t column;
  std::istream& is;
};

/** 根据单词计算偏移量 */
void gincrement(lexer_impl*, const std::string&);

/** 词法分析算返回0表示正常结束，返回非零表示其他情况 */
#define YY_DECL int yylex( yyscan_t yyscanner )

/** 改写输入操作为读取输入流 */
#define YY_INPUT( buf, result, max_size ) {\
  yyextra->is.read(buf, max_size);\
  result = yyextra->is.gcount();\
}

/** 根据当前分析内容构建记号 */
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

/** 向外界报告一个记号并获取指示 */
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
done {EMITTOKEN(alioth::VT::DONE);}
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
  std::string Lexer::IdName( int id ) {
    return IdName((VT)id);
  }

  
}

void gincrement(lexer_impl* impl, const std::string& content ) {
  for( auto c : content ) {
    if( c == '\n' )
      impl->line += (impl->column = 1);
    else
      impl->column += 1;
  }
}

std::map<alioth::VT,std::string> alioth::idname_table = {
  /** START TABLE */
{alioth::VT::SPACE, "SPACE" },  /* 空白符 */
{alioth::VT::AND, "AND" },
{alioth::VT::AS, "AS" },
{alioth::VT::BREAK, "BREAK" },
{alioth::VT::CLASS, "CLASS" },
{alioth::VT::CONTINUE, "CONTINUE" },
{alioth::VT::CONST, "CONST" },
{alioth::VT::DO, "DO" },
{alioth::VT::DONE, "DONE" },
{alioth::VT::ENUM, "ENUM" },
{alioth::VT::ELSE, "ELSE" },
{alioth::VT::FALSE, "FALSE" },
{alioth::VT::FOR, "FOR" },
{alioth::VT::IF, "IF" },
{alioth::VT::INTERFACE, "INTERFACE" },
{alioth::VT::LET, "LET" },
{alioth::VT::MODULE, "MODULE" },
{alioth::VT::NOT, "NOT" },
{alioth::VT::OR, "OR" },
{alioth::VT::PUBLIC, "PUBLIC" },
{alioth::VT::PRIVATE, "PRIVATE" },
{alioth::VT::PROTECTED, "PROTECTED" },
{alioth::VT::RETURN, "RETURN" },
{alioth::VT::UNIT, "UNIT" },
{alioth::VT::USE, "USE" },
{alioth::VT::XOR, "XOR" },
{alioth::VT::DECIMAL, "DECIMAL" },
{alioth::VT::ID, "ID" },
{alioth::VT::COMMA, "COMMA" },  /* 逗号 */
{alioth::VT::COLON, "COLON" },  /* 冒号 */
{alioth::VT::SEMI, "SEMI" },   /* 分号 */
{alioth::VT::OPENSUB, "OPENSUB" },
{alioth::VT::CLOSESUB, "CLOSESUB" },
{alioth::VT::OPENIDX, "OPENIDX" },
{alioth::VT::CLOSEIDX, "CLOSEIDX" },
{alioth::VT::OPENBLK, "OPENBLK" },
{alioth::VT::CLOSEBLK, "CLOSEBLK" },
  /** END TABLE */
  };
