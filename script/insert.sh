/[[:space:]]*\/\*\* START RULES \*\//,/[[:space:]]*\/\*\* END RULES \*\// {
    s/[[:space:]]*\/\*\* START RULES \*\//sed -n -f script\/extract-rules.sh inc\/lexical.hpp/e
    T MAKE
    b DONE
    : MAKE
        d
    : DONE
}

/[[:space:]]*\/\*\* START TABLE \*\//,/[[:space:]]*\/\*\* END TABLE \*\// {
    s/[[:space:]]*\/\*\* START TABLE \*\//sed -n -f script\/extract-table.sh inc\/lexical.hpp/e
    T MAKE1
    b DONE1
    : MAKE1
        d
    : DONE1
}