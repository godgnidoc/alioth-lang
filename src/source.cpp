#ifndef __impl_source__
#define __impl_source__

#include "source.hpp"

#include <fstream>
#include <sstream>

namespace alioth {

using namespace godgnidoc;

agent<Source> Source::ReadDocument(uri uri) {
    char* buf = new char[1024];
    auto is = std::ifstream("/"+uri.path);
    if (is.bad()) return (delete buf), nullptr;
    std::string code;
    for (auto len = is.read(buf, 1024).gcount(); len > 0; len = is.read(buf, 1024).gcount()) code += std::string(buf, len);
    return (delete buf), new Source(uri, code);
}

std::string Source::written(const token& tk) {
    m_sealed = true;
    return std::string(m_code.begin() + tk.off, m_code.begin() + tk.off + tk.len);
}

std::tuple<int, int, int, int> Source::locate(const token& tk) {
    m_sealed = true;
    auto [bl, bc] = calc_position(tk.off);
    auto [el, ec] = calc_position(tk.off + tk.len);
    return {bl, bc, el, ec};
}

std::unique_ptr<std::istream> Source::streamify() {
    m_sealed = true;
    return std::make_unique<std::istringstream>(m_code);
}

void Source::detect_lines() {
    m_lines.clear();
    auto len = m_code.size();
    m_lines.push_back(0);
    for (size_t loc = 1UL; loc != std::string::npos && loc != 0UL; loc = m_code.find('\n', loc) + 1) {
        if (loc < len) m_lines.push_back(loc);
    }
}

std::tuple<int, int> Source::calc_position(size_t off) {
    if (off >= m_code.size()) return {-1, -1};
    auto llen = m_lines.size();
    size_t il;
    for (il = 0; il < llen && m_lines[il] > off; il++)
        ;
    return {il + 1, 1 + off - m_lines[il]};
}

std::string Source::getter_code() { return m_code; }

void Source::setter_code(const std::string& _c) {
    if (m_sealed) throw std::logic_error("trying to modify sealed source code");
    m_code = _c;
}

Source::Source(uri uri, const std::string& content) : m_uri(uri), m_code(content), __init_prop(code) {
    m_sealed.cb = std::bind(&Source::detect_lines, this);
}

}  // namespace alioth

#endif