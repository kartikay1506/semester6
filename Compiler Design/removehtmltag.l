%{
int c=0;
%}
%%
\<[^>]*\> fprintf(yyout,"%s\n",yytext);
.|\n; 
%%
int main(int argc, char *argv[]) {
extern FILE *yyin, *yyout;
yyin = fopen(argv[1], "r");
yyout = fopen("tagsremoved.txt", "w");
yylex();
return 0;
}
