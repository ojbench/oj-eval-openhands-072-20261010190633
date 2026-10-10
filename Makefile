CXX = g++
CXXFLAGS = -std=c++17 -O2 -pipe -static -s

all: code

code: main.cpp
	  -o code main.cpp

clean:
	rm -f code
