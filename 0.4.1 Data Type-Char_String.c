#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
char a;
scanf("%c",&a); //for char &variable_name can be used
char b[10];
scanf("%s",b); //for string only variable name can be used
char c[10];
char d[10];
char e[10];
scanf("%s%s%s",c,d,e); //for string only variable name can be used
printf(" Char is %c\n  Strings are \n %s\n%s %s %s",a,b,c,d,e);
    return 0;
}
