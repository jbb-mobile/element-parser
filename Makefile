BINFOLDER := bin/
INCFOLDER := inc/
SRCFOLDER := src/
OBJFOLDER := obj/

CCP := g++
CFLAGS := -Wall -ansi -pedantic -std=c++11

SRCFILES := $(wildcard src/*.cpp)

all: $(SRCFILES:src/%.cpp=obj/%.o)
	$(CCP) $(CFLAGS) obj/*.o -o bin/parser -I./inc

obj/%.o: src/%.cpp
	$(CCP) $(CFLAGS) -c $< -o $@ -I./inc

.PHONY: clean

run:
	./bin/parser
clean:
	rm -rf obj/*
	rm -rf bin/*
