%{
int n=0;
%}
%%
"while"|"if"|"else" {n++; printf("\nKeyword = %s", yytext);}
"int"|"float"|"char" {n++; printf("\nKeyword = %s", yytext);}
"<="|"=="|"="|"++"|"+"|"-" {n++; printf("\nOperator = %s", yytext);}
[A-Za-z_][a-zA-Z0-9_]* {n++; printf("\nIdentifier = %s", yytext);}
[0-9]*"."[0-9]+ {n++; printf("\nFloat = %s", yytext);}
[0-9]+ {n++; printf("\nInteger = %s", yytext);}
%%

int main() {
extern FILE *yyin;
yyin = fopen("tokeninput.txt", "r");
yylex();
printf("\nNumber of Tokens = %d\n", n);
return 0;
}
