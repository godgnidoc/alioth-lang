#ifndef __lexical__
#define __lexical__

#include <functional>

#include "alioth.hpp"
#include "source.hpp"
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
     * @param source 源文档代理 */
    Lexer(agent<Source> source);
    Lexer(const Lexer&) = delete;
    Lexer(Lexer&&);
    ~Lexer();

    /** 解析下一个记号 */
    token parse();

    /**
     * 解析一个记号并返回记号id
     * @param ppterm 指向记号指针，Lexer将创建新的st_term对象并使用记号指针指向它
     * @return 记号id
     */
    int operator()(st_node** ppterm);

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