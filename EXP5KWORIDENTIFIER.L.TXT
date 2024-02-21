%{
#include<stdio.h>
%}
%%
if|else|while|int|switch|for|char { printf("\n%s is a KEYWORD", yytext);}
[a-zA-Z0-9]+ { printf("\n%s is IDENTIFIER", yytext);}
%%
int yywrap( ){}
int main()
{
	yylex();
}