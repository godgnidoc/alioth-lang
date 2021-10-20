#ifndef __token__
#define __token__

#include <string>

#include "agent.hpp"
#include "alioth.hpp"
#include "chainz.hpp"

namespace alioth {

class Source;

/**
 * 词法记号基类 */
struct token {
    agent<Source> src;  // 源文档id
    size_t off;         // 文本在源文档中的起始位置
    size_t len;         // 文本的长度
    int id;             // 词法记号ID

    int begin_line() const;
    int begin_column() const;
    int end_line() const;
    int end_column() const;
    std::string written() const;  // 获取文本字符串
};
using tokens_t = chainz<token>;
}  // namespace alioth

#endif