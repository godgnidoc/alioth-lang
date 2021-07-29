/[[:space:]]*\/\*\* START DEFS \*\//,/[[:space:]]*\/\*\* END DEFS \*\// {
    s/[[:space:]]*\/\*\* START DEFS \*\//  \/\*\* START TABLE \*\//p
    s/[[:space:]]*\/\*\* END DEFS \*\//  \/\*\* END TABLE \*\//p
    s/ELUR\*\/[[:space:]]*,/ELUR\*\//g
    s/[[:space:]]*\([^[:space:]]*\)[[:space:]]*\/\*\*RULE\/\(.*\)\/ELUR\*\//{alioth::VT::\1, \"\1\" },/p
}