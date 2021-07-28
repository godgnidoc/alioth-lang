#ifndef __lexical__
#define __lexical__

#include <functional>

#include "alex.hpp"
#include "alioth.hpp"

namespace alioth {

using token = alex::token;

/** 词法分析器 */
class Lexer {
 private:
  void* m_impl;

 public:
  Lexer(std::istream& is);
  Lexer( const Lexer& ) = delete;
  Lexer( Lexer&& );
  ~Lexer();

  void ontoken(std::function<bool(token)>);

  size_t parse();
};

}  // namespace alioth

#endif