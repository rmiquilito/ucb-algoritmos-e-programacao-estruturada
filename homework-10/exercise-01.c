#include <stdio.h>

int main()
{
    int integer = 0;
    int *i = &integer;

    double real = 0;
    double *r = &real;

    char character = 'a';
    char *c = &character;

    printf("%d, %lf, %c\n", integer, real, character);

    *i = 1;
    *r = 1;
    *c = 'b';

    printf("%d, %lf, %c\n", integer, real, character);

    return 0;
}