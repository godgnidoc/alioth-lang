#ifndef __utils__
#define __utils__

#include <functional>

namespace alioth {

/** 只允许设置不允许复位的标记 */
class one_shot_flag {
   public:
    operator bool() const;
    one_shot_flag& operator=(bool);

    std::function<void()> cb;
   private:
    bool buf = false;
};
}  // namespace alioth

#endif