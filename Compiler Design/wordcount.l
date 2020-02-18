%{
int n, w, c;
%}
%%
\n {n++;}
[^ \n\t] {w++; c=c+yyleng;}
. c++;
%%

int main() {
extern FILE *yyin;
yyin = fopen("input.txt", "r");
yylex();
printf("Number of Lines = %d\nNumber of Words = %d\nNumber of Characters = %d\n", n, w, c);
return 0;
}
