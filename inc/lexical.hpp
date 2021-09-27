#ifndef __lexical__
#define __lexical__

#include <functional>

#include "alioth.hpp"
#include "token.hpp"

namespace alioth {

class st_node;

/** 词法分析器 */
class Lexer {
   public:
    /** Start Condition, 定义顺序必须与fl中顺序一致 */
    enum SC { INITIAL, DEPENDENCY, EXPRESSION };

   private:
    void* m_impl;

   public:
    /**
     * @param is 输入流 */
    Lexer(std::istream& is);
    Lexer(const Lexer&) = delete;
    Lexer(Lexer&&);
    ~Lexer();

    /** 解析下一个记号 */
    token parse();

    /**
     * 解析一个记号并返回记号id
     * @param ppterm
     * 指向记号指针，Lexer将创建新的st_term对象并使用记号指针指向它
     * @return 记号id
     */
    int operator()(st_node** ppterm, location* pploc);

    /** 进入一个开始条件 */
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