#ifndef __alioth__
#define __alioth__

#include <set>

#include "cli.hpp"

namespace alioth {
using namespace godgnidoc;

class Compiler : public cli::application {
   public:
    Compiler();

   protected:
    int compile(cli::commandline cmd);

    /**
     * 获取source源文件名的唯一地址，此函数复用source_name_table的数据。
     * 由于Lexer目前只能使用指针管理词法记号位置中的源文件名，难以构造自动释放机制。
     * 故设置source_name_table用于复用大量重复的源文件名
     * @param source 源文件名
     * @return 复用的源文件名指针 */
    const std::string* unique_source_name_ptr(const std::string& source);

   protected:
    std::set<std::string> source_name_table;
};

}  // namespace alioth

#endif