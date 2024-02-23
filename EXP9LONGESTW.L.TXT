%{
#include <stdio.h>
#include <string.h>
int max_length = 0;
%}

%%
[a-zA-Z]+    {
                int length = strlen(yytext);
                if (length > max_length) {
                    max_length = length;
                }
            }
.|\n         ;

%%

int main() {
    yylex();
    printf("Length of longest word: %d\n", max_length);
    return 0;
}

int yywrap() {
    return 1; // Indicate that there are no more files to process
}