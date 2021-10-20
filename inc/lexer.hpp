#ifndef __lexical__
#define __lexical__

#include <functional>

#include "alioth.hpp"
#include "syntactic.hpp"
#include "token.hpp"

namespace alioth {

class st_node;

/** 词法分析器 */
class Lexer {
   private:
    /**
     * 存储真正的词法分析器上下文 */
    void* m_impl;

   public:
    /**
     * @param is 输入流
     * @param source 源文件名唯一指针 */
    Lexer(std::istream& is, const std::string* source);
    Lexer(const Lexer&) = delete;
    Lexer(Lexer&&);
    ~Lexer();

    /** 解析下一个记号 */
    token parse();

    /**
     * 解析一个记号并返回记号id
     * @param ppterm 指向记号指针，Lexer将创建新的st_term对象并使用记号指针指向它
     * @param pploc 指向记号位置结构的指针，Lexer将记号在文件中的位置存于此结构
     * @return 记号id
     */
    int operator()(st_node** ppterm, location* pploc);

    /** 进入一个开始条件（start condition)，此函数将影响词法分析器行为
     * @param SC 开始条件枚举
     */
    void begin(SC);

    /**
     * 从记号id获取记号名
     * @param id 记号id
     * @return 记号名
     */
    static std::string kindname(int id);
};

}  // namespace alioth

#endif