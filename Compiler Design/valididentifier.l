%{
int c = 0;
%}

%%

[a-z A-Z_][a-zA-Z0-9_]*   { c++; printf("\tValid Identifier = %s", yytext); }

%%

main(int argc, char **argv)
{
  yylex();
  printf("Number of Valid Identifier = %d\n", c);
}
