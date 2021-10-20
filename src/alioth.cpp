#ifndef __impl_alioth__
#define __impl_alioth__

#include "alioth.hpp"

#include <fstream>
#include <iostream>
#include <set>
#include <type_traits>

#include "cli.hpp"
#include "lexer.hpp"
#include "source.hpp"
#include "syntactic.hpp"

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

Compiler::Compiler() {
    name = "alioth";
    version = __VERSION;
    author = "godgnidoc";
    email = "godgnidoc@gmail.com";
    brief = "compiler of the Alioth programming language";
    arch = __ARCH;
    os = __OS;
    cert = "MIT";

    regist_main_function((cli::function){
        name : "compile",
        brief : "compile source code into module",
        accept_more : true,
        entry : std::bind(&Compiler::compile, this, std::placeholders::_1)
    });
}

const std::string* Compiler::unique_source_name_ptr(const std::string& source) {
    auto [it, _] = source_name_table.insert(source);
    return &*it;
}

int Compiler::compile(cli::commandline cmd) {
    try {
        if (cmd[0].size()) {
            auto source = Source::ReadDocument(uri::from_string(cmd[0][0].args[0]));
            if( !source ) {
                std::cerr << "cannot open document" << std::endl;
                return 2;
            }
            Lexer lexer(source);
            doc_t doc;
            Parser parser(lexer, doc);
            parser();
            if (doc) {
                std::cout << *doc << std::endl;
            }
        }
    } catch (std::exception& err) {
        std::cerr << err.what() << std::endl;
    }
    return 0;
}

}  // namespace alioth

int main(int argc, char** argv) {
    alioth::Compiler compiler;
    return compiler.execute(argc, argv);
}

#endif