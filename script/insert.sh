/[[:space:]]*\/\*\* START RULES \*\//,/[[:space:]]*\/\*\* END RULES \*\// {
    s/[[:space:]]*\/\*\* START RULES \*\//sed -n -f script\/extract.sh inc\/lexical.hpp/e
    T MAKE
    b DONE
    : MAKE
        d
    : DONE
}
