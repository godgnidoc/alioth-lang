#ifndef __impl_token__
#define __impl_token__

#include "token.hpp"

#include "source.hpp"

namespace alioth {

int token::begin_line() const {
    if (!src) return -1;
    auto [bl, bc, el, ec] = src->locate(*this);
    return bl;
}
int token::begin_column() const {
    if (!src) return -1;
    auto [bl, bc, el, ec] = src->locate(*this);
    return bc;
}
int token::end_line() const {
    if (!src) return -1;
    auto [bl, bc, el, ec] = src->locate(*this);
    return el;
}
int token::end_column() const {
    if (!src) return -1;
    auto [bl, bc, el, ec] = src->locate(*this);
    return ec;
}

std::string token::written() const {
    if (!src) return "";
    return src->written(*this);
}

}  // namespace alioth

#endif