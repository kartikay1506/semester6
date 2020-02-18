%{
int n, w, c;
%}
%%
\n {n++;}
[^ \n\t]+ {w++; c=c+yyleng;}
. c++;
%%

int main() {
extern FILE *yyin, *yyout;
yyin = fopen("input.txt", "r");
yyout = fopen("output.txt", "w");
yylex();
fprintf(yyout, "Number of Lines = %d\nNumber of Words = %d\nNumber of Characters = %d\n", n, w, c);
fclose(yyout);
return 0;
}
