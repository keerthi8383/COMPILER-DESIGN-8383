%{
#include<stdio.h>
int length;
%}

%%
[a-z A-Z 0-9]+ {length=yyleng; }
%%
int yywrap(){}

int main()
{
yylex();
printf("length of given string is : %d", length);
return 0;
}
