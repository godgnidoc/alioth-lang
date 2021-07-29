#!/bin/bash

#1 target file
#2 source file

RULES=$(sed -n $2 -e "/[[:space:]]*\/\*\* START DEFS \*\//,/[[:space:]]*\/\*\* END DEFS \*\// {
    s/ELUR\*\/[[:space:]]*,/ELUR\*\//g
    s/[[:space:]]*\([^[:space:]]*\)[[:space:]]*\/\*\*RULE\/\(.*\)\/ELUR\*\//\2 {EMITTOKEN(alioth::VT::\1);}/p
}")

TABLE=$(sed -n $2 -e "/[[:space:]]*\/\*\* START DEFS \*\//,/[[:space:]]*\/\*\* END DEFS \*\// {
    s/ELUR\*\/[[:space:]]*,/ELUR\*\//g
    s/[[:space:]]*\([^[:space:]]*\)[[:space:]]*\/\*\*RULE\/\(.*\)\/ELUR\*\//{alioth::VT::\1, \"\1\" },/p
}")

CODE=$(cat $1)

CODE="$(echo "${CODE}" | sed -n -e "1,/[[:space:]]*\/\*\* START RULES \*\//p")
${RULES}
$(echo "${CODE}" | sed -n -e "/[[:space:]]*\/\*\* END RULES \*\//, $ p")"

CODE="$(echo "${CODE}" | sed -n -e "1,/[[:space:]]*\/\*\* START TABLE \*\//p")
${TABLE}
$(echo "${CODE}" | sed -n -e "/[[:space:]]*\/\*\* END TABLE \*\//, $ p")"

echo "${CODE}" > $1