%{
int n, m, t, c;
%}

%%

\n   { n++; }
\t   { m++; }
[\ ] { t++; }
.    { c++; }

%%

main(int argc, char **argv)
{
  yylex();
  printf("Number of Lines = %d\nNumber of Tab Spaces = %d\nNumber of Spaces = %d\nNumber of Characters = %d\n", n, m, t, c);
}
