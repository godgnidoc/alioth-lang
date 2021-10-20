#ifndef __token__
#define __token__

#include <string>

#include "alioth.hpp"
#include "chainz.hpp"
#include "location.hpp"

namespace alioth {

/**
 * 词法记号基类 */
class token {
   public:
    int id;
    std::string tx;
    location loc;
};
using tokens_t = chainz<token>;
}  // namespace alioth

#endif