%{
int m = 0, n = 0;
%}

%%

[0-9]   { m++; printf("\tInteger = %s", yytext); }
[0-9]+"."+[0-9]   { n++; printf("\tFloat = %s", yytext); }

%%

main(int argc, char **argv)
{
  yylex();
  printf("Number of Integers = %d\nNumber of Floating Point = %d\n", m, n);
}
