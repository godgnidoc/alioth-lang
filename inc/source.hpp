#ifndef __source__
#define __source__

#include <atomic>
#include <tuple>
#include <vector>
#include <memory>

#include "agent.hpp"
#include "alioth.hpp"
#include "proxy.hpp"
#include "token.hpp"
#include "uriz.hpp"
#include "utils.hpp"

namespace alioth {

/**
 * 一份源文档 */
class Source : public basic_thing {
   public:
    /** 读取文档全部内容生成源文档对象 */
    static agent<Source> ReadDocument(uri uri);

   public:
    /**
     * @param uri 源文档统一资源标识符
     * @param content 源文档文本内容，可省略 */
    Source(uri uri, const std::string& content = "");

    Source(const Source&) = delete;
    Source(Source&&) = delete;

    /**
     * 获取词法记号的书写文本，此动作将封闭源码
     * @param tk 词法记号 */
    std::string written(const token& tk);

    /**
     * 获取词法记号在源码中的位置，此动作将封闭源码
     * @param tk 词法记号
     * @return [bl, bc, el, ec]， 其中-1表示未能计算 */
    std::tuple<int, int, int, int> locate(const token& tk);

    /**
     * 将源文档串流用作词法分析器输入，此动作将封闭源码 */
    std::unique_ptr<std::istream> streamify();

    /**
     * 源码文本，封闭状态下尝试设置将抛出异常 */
    __def_prop(code, std::string);

   protected:
    /** 检测并计算行首信息 */
    void detect_lines();

    /** 计算偏移量对应的行列
     * @param off 偏移量
     * @return  [line, column]， 其中-1表示未能计算 */
    std::tuple<int, int> calc_position(size_t off);

   protected:
    /** 源文档资源标识符 */
    uri m_uri;

    /** 源码文本内容 */
    std::string m_code;

    /** 源码是否封闭，封闭代码不能再被修改
     * 获取输入流或获取词法书写都将封闭代码 */
    one_shot_flag m_sealed;

    /** 源文档中各行开头位置标记
     * 当源码被封闭时填充此数据 */
    std::vector<size_t> m_lines;
};

}  // namespace alioth

#endif