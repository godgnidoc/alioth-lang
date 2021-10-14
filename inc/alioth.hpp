#ifndef __alioth__
#define __alioth__

#include "cli.hpp"

#ifndef __ARCH
#define __ARCH "undefined"
#endif

#ifndef __VERSION
#define __VERSION "undefined"
#endif

#ifndef __OS
#define __OS "undefined"
#endif

namespace alioth {
using namespace godgnidoc;

/** 编译器应用程序实例 */
extern cli::application compiler;

}  // namespace alioth

#endif