#ifndef __impl_utils__
#define __impl_utils__

#include "utils.hpp"

#include <stdexcept>

namespace alioth {
one_shot_flag::operator bool() const { return buf; }
one_shot_flag& one_shot_flag::operator=(bool v) {
    if (buf && !v) throw std::logic_error("trying to reset one shot flag");
    if (!buf && v && cb) {
        buf = v; // 确保状态正确
        cb();
    }
    buf = v;
    return *this;
}
}  // namespace alioth

#endif