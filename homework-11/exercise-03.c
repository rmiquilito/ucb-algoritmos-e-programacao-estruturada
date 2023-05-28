#include <stdio.h>

void sum(int *first, int *second);

int main()
{
    int a, b;

    printf("Primeiro valor: ");
    scanf("%d", &a);

    printf("Segundo valor: ");
    scanf("%d", &b);

    sum(&a, &b);

    printf("%d\n%d\n", a, b);

    return 0;
}

void sum(int *first, int *second)
{
    *first += *second;
}