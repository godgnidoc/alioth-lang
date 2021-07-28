SHELL = /bin/bash

# Variables used for compiling sources
INC =$(wildcard inc/*.hpp)
LEX =$(wildcard src/*.l)
LSRC =$(LEX:src/%.l=src/%.cpp)
CSRC =$(wildcard src/*.cpp)
SRC =$(shell echo $(CSRC) $(LSRC) | sed "s/\s/\n/g" | sort -u)
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

$(LSRC):src/%.cpp:src/%.l
	flex -Ce -o $@ $<

clean:
	rm -rf $(OBJ) $(TARGET) $(LSRC)

.PHONY: init clean install