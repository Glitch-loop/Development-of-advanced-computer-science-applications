#include <stdio.h>
#include "lex.yy.c"  // Include the generated lexer

int yywrap() {
    // Return 1 to indicate end of input
    return 1;
}


int main() {
    // Open an input stream (could be stdin or a file)
    FILE *input = fopen("example.ac", "r");
    if (!input) {
        perror("Failed to open input file");
        return 1;
    }

    // Set Flex to read from this stream
    yyin = input;

    // Run the lexer until end-of-file
    while (yylex() != 0) {}
    
    cout << endl;
    // Close the input stream
    fclose(input);

    return 0;
}
