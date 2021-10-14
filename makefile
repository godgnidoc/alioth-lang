SHELL = /bin/bash

# Variables used for compiling sources

ARCH    =x86_64
OS      =Linux
VERSION =1.0.0-build1
OOPT += -D__ARCH=\"$(ARCH)\" -D__OS=\"$(OS)\" -D__VERSION=\"$(VERSION)\"

FLEX =syntax/lexical.fl
LSRC =gen/lexical.cpp
LINC =
LOBJ =$(LSRC:gen/%.cpp=obj/%.o)

BISON =gen/syntactic.ypp
SINC =gen/syntactic.hpp
SSRC =gen/syntactic.cpp
SOBJ =$(SSRC:gen/%.cpp=obj/%.o)
SYNTAX =$(wildcard syntax/syntax-*)

CSRC =$(wildcard src/*.cpp)
CINC =$(wildcard inc/*.hpp)
COBJ =$(CSRC:src/%.cpp=obj/%.o)

SRC =$(shell echo $(CSRC) $(LSRC) $(SSRC) | sed "s/\s/\n/g" | sort -u)
INC =$(shell echo $(CICN) $(LINC) $(SINC) | sed "s/\s/\n/g" | sort -u)
OBJ =$(shell echo $(COBJ) $(LOBJ) $(SOBJ) | sed "s/\s/\n/g" | sort -u)

CC = g++
OOPT += -Iinc -Igen -I../libz/inc -std=gnu++17 -g -c
LOPT += -L../libz/arc -lpthread -lz
TARGET = bin/alioth

# link all object files to compiler
$(TARGET):$(OBJ)
	$(CC) $(OBJ) $(LOPT) -o $@

# compile every single source code document to object file
$(COBJ):obj/%.o:src/%.cpp $(INC)
	$(CC) $(OOPT) -o $@ $<

$(SOBJ) $(LOBJ):obj/%.o:gen/%.cpp $(INC)
	$(CC) $(OOPT) -o $@ $<

$(LSRC):gen/%.cpp:syntax/%.fl
	flex -Ce -o $@ $<

$(SSRC):gen/%.cpp:gen/%.ypp
	cd gen && bison ../$<

$(SINC):gen/%.hpp:gen/%.ypp
	cd gen && bison ../$<

$(BISON):$(SYNTAX) syntax/syntactic $(FLEX)
	sed "/\/\*\* @MARK\[RULE\] \*\//e cat syntax/syntax-*" syntax/syntactic > $@
	sed -n 's/^%s \(\w\+\)/        \1,/p' $(FLEX) | tee gen/sc
	sed -i "/\/\*\* @MARK\[SC\] \*\//r gen/sc" $@
	rm gen/sc

clean:
	rm -rf $(OBJ) $(TARGET) gen/*

.PHONY: init clean install