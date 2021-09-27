SHELL = /bin/bash

# Variables used for compiling sources
FLEX =$(wildcard src/*.fl)
LSRC =$(FLEX:src/%.fl=src/%.cpp)

BISON =$(wildcard src/*.ypp)
SINC =$(BISON:src/%.ypp=inc/%.hpp)
SSRC =$(BISON:src/%.ypp=src/%.cpp)

CSRC =$(wildcard src/*.cpp)
CINC =$(wildcard inc/*.hpp)

SRC =$(shell echo $(CSRC) $(LSRC) $(SSRC) | sed "s/\s/\n/g" | sort -u)
INC =$(shell echo $(CICN) $(SINC) | sed "s/\s/\n/g" | sort -u)
OBJ =$(SRC:src/%.cpp=obj/%.o)

CC = g++
OOPT = -Iinc -I../libz/inc -std=gnu++17 -g -c
LOPT = -L../libz/arc -lpthread -lz
TARGET = bin/alioth

# link all object files to compiler
$(TARGET):$(OBJ)
	$(CC) $(OBJ) $(LOPT) -o $@

# compile every single source code document to object file
$(OBJ):obj/%.o:src/%.cpp $(INC)
	$(CC) $(OOPT) -o $@ $<

$(LSRC):src/%.cpp:src/%.fl
	flex -Ce -o $@ $<

$(SSRC):src/%.cpp:src/%.ypp
	bison $<

$(SINC):inc/%.hpp:src/%.ypp
	bison $<

clean:
	rm -rf $(OBJ) $(TARGET) $(LSRC) $(SSRC)

.PHONY: init clean install