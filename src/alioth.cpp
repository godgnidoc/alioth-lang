#include "alioth.hpp"

#include <fstream>
#include <iostream>

#include "cli.hpp"
#include "lexical.hpp"
#include "syntactic.hpp"

namespace alioth {

cli::application compiler;

int main(int argc, char **argv) {
    compiler.name = "alioth";
    compiler.version = __VERSION;
    compiler.author = "godgnidoc";
    compiler.email = "godgnidoc@gmail.com";
    compiler.brief = "compiler of the Alioth programming language";
    compiler.arch = __ARCH;
    compiler.os = __OS;
    compiler.cert = "MIT";

    compiler.regist_main_function((cli::function){
        name : "compile",
        brief : "compile the alioth module",
        accept_more : true,
        entry : [](cli::commandline cmd) {
            try {
                if (cmd[0].size()) {
                    doc_t doc;
                    auto is = std::ifstream(cmd[0][0].args[0]);
                    Lexer lexer(is);
                    Parser parser(lexer, doc);
                    parser();
                    if (doc) {
                        std::cout << *doc << std::endl;
                    }
                }
            } catch (std::exception &err) {
                std::cerr << err.what() << std::endl;
            }
            return 0;
        }
    });

    return compiler.execute(argc, argv);
}

}  // namespace alioth

int main(int argc, char **argv) { return alioth::main(argc, argv); }