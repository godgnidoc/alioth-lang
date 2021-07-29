/[[:space:]]*\/\*\* START DEFS \*\//,/[[:space:]]*\/\*\* END DEFS \*\// {
    s/[[:space:]]*\/\*\* START DEFS \*\//  \/\*\* START RULES \*\//p
    s/[[:space:]]*\/\*\* END DEFS \*\//  \/\*\* END RULES \*\//p
    s/ELUR\*\/[[:space:]]*,/ELUR\*\//g
    s/[[:space:]]*\([^[:space:]]*\)[[:space:]]*\/\*\*RULE\/\(.*\)\/ELUR\*\//\2 {EMITTOKEN(alioth::VT::\1);}/p
}