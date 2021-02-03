#include <stdio.h>

void main()
{

    char a[] = "abc"; // a b c \0

    char *b ="abc";

    printf("%s %s" ,a,b);

    a[1] = '\0';
    printf("%s %s" ,a,b);
}