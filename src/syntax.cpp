#ifndef __impl_syntax__
#define __impl_syntax__

#include "syntax.hpp"

#include "str.hpp"
#include "syntactic.hpp"

std::string mkindent(int indent) {
    using namespace godgnidoc;
    return std::string(" ") * (4 * indent);
}

namespace alioth {

std::ostream& operator<<(std::ostream& os, const st_node& node) {
    node.print(os);
    return os;
}

st_node::st_node() {}
st_node::st_node(const token& t) : token(t) {}
st_node::st_node(token&& t) : token(t) {}

st_node::~st_node() {}

st_term::st_term(const token& t) : st_node(t) {}
st_term::st_term(token&& t) : st_node(t) {}
std::ostream& st_term::print(std::ostream& os, int indent) const { return os << written(); }

std::ostream& st_nters::print(std::ostream& os, int indent) const {
    for (auto& item : *this) item->print(os, indent);
    return os;
}

st_modecl::st_modecl() { id = VN::S_modecl; }
std::ostream& st_modecl::print(std::ostream& os, int indent) const { return os << mkindent(indent) << "module " << *name; }

st_modesc::st_modesc() { id = VN::S_modesc; }
std::ostream& st_modesc::print(std::ostream& os, int indent) const {
    if (alias)
        return os << mkindent(indent) << *module << " as " << *alias;
    else
        return os << mkindent(indent) << *module;
}

st_import::st_import() { id = VN::S_import; }
std::ostream& st_import::print(std::ostream& os, int indent) const {
    os << mkindent(indent) << "import ";
    bool first = true;
    for (auto& module : modules) {
        if (first)
            first = false;
        else
            os << ", ";
        os << *module;
    }
    return os << " from " << *from;
}

st_doc::st_doc() { id = VN::S_doc; }
std::ostream& st_doc::print(std::ostream& os, int indent) const {
    os << *modecl << "\n\n";
    for (auto& import : imports) os << *import << "\n";
    os << "\n";
    for (auto& stmt : this->body) os << *stmt << "\n\n";
    return os;
}

st_enumi::st_enumi() { id = VN::S_enumi; }
std::ostream& st_enumi::print(std::ostream& os, int indent) const {
    os << mkindent(indent) << *name;
    if (value) os << " = " << *value;
    return os;
}

st_enum::st_enum() { id = VN::S_enum; }
std::ostream& st_enum::print(std::ostream& os, int indent) const {
    os << mkindent(indent) << "enum " << *name << " {\n";
    for (auto& item : items) item->print(os, indent + 1) << "\n";
    os << mkindent(indent) << "}";
    return os;
}
}  // namespace alioth

#endif