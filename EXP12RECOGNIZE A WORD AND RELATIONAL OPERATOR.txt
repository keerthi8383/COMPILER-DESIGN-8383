%{
#include <stdio.h>
%}

WORD    [a-zA-Z][a-zA-Z0-9]*
WS      [ \t\n]+
REL_OP  "<"|">"|"<="|">="|"=="|"!="

%%
{WORD}      { printf("WORD: %s\n", yytext); }
{REL_OP}    { printf("RELATIONAL OPERATOR: %s\n", yytext); }
{WS}        ; // Ignore whitespace
.           { printf("Invalid input: %s\n", yytext); }
%%

int yywrap() {
    return 1;  // Indicate that there are no more files to parse
}

int main() {
    yylex();
    return 0;
}