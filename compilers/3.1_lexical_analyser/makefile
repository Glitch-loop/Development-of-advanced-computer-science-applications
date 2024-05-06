# Makefile for compiling a Flex lexer (lexer.l) and a C++ program (main.cpp) into an executable

# Compiler settings
CXX = g++
CXXFLAGS = -std=c++11

# Flex settings
FLEX = flex
FLEXFLAGS = 

# Output executable name
OUTPUT = lex_analaizer

# Target for the lexer executable
$(OUTPUT): lex.yy.c
	$(CXX) main.cpp -o $(OUTPUT)

# Generate lex.yy.c from lexer.l using Flex
lex.yy.c: $(OUTPUT).l
	$(FLEX) $(FLEXFLAGS) -o $@ $^

# Clean up generated files
clean:
	rm -f $(OUTPUT) lex.yy.c *.o

# Phony targets (not real files)
.PHONY: all clean
