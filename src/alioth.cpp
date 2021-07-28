#include "alioth.hpp"

#include <fstream>
#include <iostream>

#include "cli.hpp"
#include "lexical.hpp"

namespace alioth {

cli::application compiler;

int main(int argc, char **argv) {
  compiler.name = "alioth";
  compiler.version = "1.0.0";
  compiler.author = "godgnidoc";
  compiler.email = "godgnidoc@gmail.com";
  compiler.brief = "compiler of the Alioth programming language";
  compiler.arch = "x86_64";
  compiler.os = "Linux";
  compiler.cert = "MIT";

  compiler.regist_main_function((cli::function){
    name : "compile",
    brief : "compile the alioth module",
    accept_more : true,
    entry : [](cli::commandline cmd) {
      if (cmd[0].size()) {
        auto is = std::ifstream(cmd[0][0].args[0]);
        Lexer lexer(is);
        lexer.ontoken([&](token tk) {
          if( tk && tk.id != (int)VT::SPACE ) {

            std::cout << tk.id << "(" << tk.bl << "," << tk.bc << ")" << tk.tx << std::endl;
          }
          return 0;
        });
        lexer.parse();
      }
      return 0;
    }
  });

  return compiler.execute(argc, argv);
}

}  // namespace alioth

int main(int argc, char **argv) { return alioth::main(argc, argv); }