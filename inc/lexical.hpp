#ifndef __lexical__
#define __lexical__

#include <functional>

#include "alex.hpp"
#include "alioth.hpp"

namespace alioth {

using token = alex::token;

enum class VT : int {
/** START DEFS */
  $,
  SPACE /**RULE/(\s|\n)+/ELUR*/, // 空白符
  AND /**RULE/and/ELUR*/,
  AS /**RULE/as/ELUR*/,
  BREAK /**RULE/break/ELUR*/,
  CLASS /**RULE/class/ELUR*/,
  CONTINUE /**RULE/continue/ELUR*/,
  CONST /**RULE/const/ELUR*/,
  DO /**RULE/do/ELUR*/,
  ENUM /**RULE/enum/ELUR*/,
  ELSE /**RULE/else/ELUR*/,
  FALSE /**RULE/false/ELUR*/,
  FOR /**RULE/for/ELUR*/,
  IF /**RULE/if/ELUR*/,
  INTERFACE /**RULE/interface/ELUR*/,
  LET /**RULE/let/ELUR*/,
  MODULE /**RULE/module/ELUR*/,
  NOT /**RULE/not/ELUR*/,
  OR /**RULE/or/ELUR*/,
  PUBLIC /**RULE/public/ELUR*/,
  PRIVATE /**RULE/private/ELUR*/,
  PROTECTED /**RULE/protected/ELUR*/,
  RETURN /**RULE/return/ELUR*/,
  UNIT /**RULE/unit/ELUR*/,
  USE /**RULE/use/ELUR*/,
  XOR /**RULE/xor/ELUR*/,
  LABEL /**RULE/[a-zA-Z_][a-zA-Z0-9_]* /ELUR*/,
  COMMA /**RULE/,/ELUR*/, // 逗号
  COLON /**RULE/:/ELUR*/, // 冒号
  SEMI /**RULE/;/ELUR*/, // 分号
  OPENSUB /**RULE/\(/ELUR*/,
  CLOSESUB /**RULE/\)/ELUR*/,
  OPENIDX /**RULE/\[/ELUR*/,
  CLOSEIDX /**RULE/\]/ELUR*/,
  OPENBLK /**RULE/\{/ELUR*/,
  CLOSEBLK /**RULE/\}/ELUR*/,
/** END DEFS */
};

/** 词法分析器 */
class Lexer {
 private:
  void* m_impl;

 public:
  Lexer(std::istream& is);
  Lexer( const Lexer& ) = delete;
  Lexer( Lexer&& );
  ~Lexer();

  void ontoken(std::function<int(token)>);

  int parse();
};

}  // namespace alioth

#endif