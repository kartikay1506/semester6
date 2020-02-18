%{
int c=0;
%}
%%
[^ \n]* ++c; fprintf(yyout,"%d %s\n",c,yytext);
%%
int main(int argc, char *argv[]) {
extern FILE *yyin, *yyout;
yyin = fopen(argv[1], "r");
yyout = fopen(argv[2], "w");
yylex();
return 0;
}
