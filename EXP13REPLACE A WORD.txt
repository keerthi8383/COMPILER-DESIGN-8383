%{
#include <stdio.h>
#include <string.h>
%}

%%
word_to_replace    { printf("word_replacement"); }
.                  { printf("%c", yytext[0]); }
%%

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <input_file>\n", argv[0]);
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    if (!file) {
        perror("Error opening file");
        return 1;
    }

    yyin = file;
    yylex();

    fclose(file);
    return 0;
}