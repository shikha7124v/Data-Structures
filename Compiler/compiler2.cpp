% {
#include <studio.h>
      % } %
        % "auto" |
    "double" | "int" | "struct" | "break" | "else" | "long" | "switch" | "case" | "enum" | "register" | "typedef" | "char" | "extern" | "return" | "union" | "continue" | "for" | "signed" | "void" | "do" | "if" | "static" | "while" | "default" | "goto" | "sizeof" | "volatile" | "const" | "float" | "short" | "printf" | "scanf"
{
    ECHO;
    printf("\tKeyword\t");
}
"{" | ";" | "," | "(" | ")" | "}"
{
    ECHO;
    printf("\tSeparator\t");
}

"+" | "-" | "/" | "=" | "*" | "%"
{
    ECHO;
    printf("\tOperator\t");
}

[0 - 9] *
{ECHO; printf("\t Number\t"); }([a - z A - Z][0 - 9]) +
    | [a - z A - Z] *
{ECHO; printf("\tIdentifier\t"); } % %

          int yywrap()
{
    return 1;
}
main()
{
    printf("Enter String\n");
    yylex();
}
int main()
{
    int count = 2;
    while (count <= 4)
    {
        printf("%d", count);
        count++;
    }
    return 0;
}