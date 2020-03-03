%{
int c=0;
%}
%%
\/\/(.*) {}
\/\*(.*\n)*.*\*\/  {};	
%%
int main(int argc, char *argv[]) {
extern FILE *yyin, *yyout;
yyin = fopen(argv[1], "r");
yyout = fopen("out.c", "w");
yylex();
return 0;
}
