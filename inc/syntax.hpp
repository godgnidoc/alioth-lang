#ifndef __syntax__
#define __syntax__

/**
 * Version 1.0.0; Sep. 07, 2021 by GodGnidoc
 * 定义语法结构 */

#include <map>

#include "agent.hpp"
#include "alioth.hpp"
#include "jsonz.hpp"
#include "token.hpp"

namespace alioth {

/** 语法树节点基类 */
struct st_node : public basic_thing, public token {
   protected:
    st_node();
    st_node(const token&);
    st_node(token&&);

   public:
    virtual std::ostream& print(std::ostream& os, int indent = 0) const = 0;
    virtual ~st_node();
};
using node_t = agent<st_node>;

/** 将语法树结构打印为源代码 */
std::ostream& operator<<(std::ostream&, const st_node&);

/** 语法树上的终结符 */
struct st_term : public st_node {
    st_term(const token&);
    st_term(token&&);
    virtual std::ostream& print(std::ostream& os, int indent = 0) const override;
};
using term_t = agent<st_term>;
using terms_t = chainz<term_t>;

/** 通用非终结符序列
 * 用于语法分析中间过程之间传递分析结果
 */
struct st_nters : public st_node, chainz<node_t> {
    virtual std::ostream& print(std::ostream& os, int indent = 0) const override;
};
using nters_t = agent<st_nters>;

/** 定义语法结构 */
struct st_def : public st_node {};
using def_t = agent<st_def>;

/** 可执行语句 */
struct st_stmt : public st_node {};
using stmt_t = agent<st_stmt>;

/** 类型表达式
 * 类型表达式表述类型演算
 */
struct st_txpr : st_node {};
using txpr_t = agent<st_txpr>;

/** 表达式 */
struct st_expr : public st_stmt {};
using expr_t = agent<st_expr>;

/** 类比表达式 */
struct st_expr_as : public st_expr {
    st_expr_as();
    virtual std::ostream& print(std::ostream& os, int indent = 0) const override;

    expr_t expr;  // 源表达式
    txpr_t type;  // 类型表达式
};

/** 调用表达式 */
struct st_expr_call : public st_expr {
    st_expr_call();
    virtual std::ostream& print(std::ostream& os, int indent = 0) const override;

    expr_t callee;        // 被调表达式
    chainz<expr_t> args;  // 参数列表
};

/** 双目运算表达式 */
struct st_expr_binary : public st_expr {
    st_expr_binary();
    virtual std::ostream& print(std::ostream& os, int indent = 0) const override;

    term_t op;   // 运算符
    expr_t lhs;  // 左子式
    expr_t rhs;  // 右子式
};

/** 单目前缀运算表达式 */
struct st_expr_prefix : public st_expr {
    st_expr_prefix();
    virtual std::ostream& print(std::ostream& os, int indent = 0) const override;

    term_t op;   // 运算符单词
    expr_t rhs;  // 右子式
};

/** 单目后缀运算表达式 */
struct st_expr_suffix : public st_expr {
    st_expr_suffix();
    virtual std::ostream& print(std::ostream& os, int indent = 0) const override;

    term_t op;   // 运算符单词
    expr_t lhs;  // 左子式
};

/** 常量表达式 */
struct st_expr_literal : public st_expr {
    st_expr_literal();
    virtual std::ostream& print(std::ostream& os, int indent = 0) const override;

    term_t value;  // 常量单词
};
using expr_literal_t = agent<st_expr_literal>;

/** 标号表达式 */
struct st_expr_label : public st_expr {
    st_expr_label();
    virtual std::ostream& print(std::ostream& os, int indent = 0) const override;

    term_t label;  // 标号单词
};
using expr_label_t = agent<st_expr_label>;

/** 枚举项 */
struct st_enumi : public st_def {
    st_enumi();
    virtual std::ostream& print(std::ostream& os, int indent = 0) const override;
    term_t name;   // 枚举项名称
    term_t value;  // 枚举值
};
using enumi_t = agent<st_enumi>;
using enumis_t = chainz<enumi_t>;

/** 枚举声明 */
struct st_enum : public st_def {
    st_enum();
    virtual std::ostream& print(std::ostream& os, int indent = 0) const override;
    term_t name;     // 枚举类型名
    enumis_t items;  // 枚举项列表
};
using enum_t = agent<st_enum>;

/** 类定义语法结构 */
struct st_class : public st_def {
    st_class();
    virtual std::ostream& print(std::ostream& os, int indent = 0) const override;

    term_t name;  // 类名
};
using class_t = agent<st_class>;

/** 接口定义语法结构 */
struct st_interface : public st_def {
    st_interface();
    virtual std::ostream& print(std::ostream& os, int indent = 0) const override;
};

/** 函数定义语法结构 */
struct st_fndef : public st_def {};
using fndecl_t = agent<st_fndef>;

/** 函数实现 */
struct st_fnimpl : public st_node {
    term_t cls;
    term_t label;
};
using func_t = agent<st_fnimpl>;

/** 模块导入语句中的依赖描述 */
struct st_modesc : public st_node {
    st_modesc();
    virtual std::ostream& print(std::ostream& os, int indent = 0) const override;

    term_t module;  // 模块名
    term_t alias;   // 模块别名
};
using modesc_t = agent<st_modesc>;

/** 模块声明语句 */
struct st_modecl : public st_node {
    st_modecl();
    virtual std::ostream& print(std::ostream& os, int indent = 0) const override;

    term_t name;  // 模块名
};
using modecl_t = agent<st_modecl>;

/** 模块导入语句 */
struct st_import : public st_node {
    st_import();
    virtual std::ostream& print(std::ostream& os, int indent = 0) const override;

    chainz<modesc_t> modules;  // 依赖模块列表
    term_t from;               // 包名
};
using import_t = agent<st_import>;

/** 文档 */
struct st_doc : public st_node {
    st_doc();
    virtual std::ostream& print(std::ostream& os, int indent = 0) const override;
    modecl_t modecl;           // 模块声明
    chainz<import_t> imports;  // 模块导入语句
    chainz<node_t> body;       // 声明和实现语句
};
using doc_t = agent<st_doc>;

}  // namespace alioth

#endif