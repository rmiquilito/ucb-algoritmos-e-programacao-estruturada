#include <stdio.h>

int sum(int *first, int *second);

int main()
{
    int a, b;

    printf("Primeiro valor: ");
    scanf("%d", &a);

    printf("Segundo valor: ");
    scanf("%d", &b);

    int c = sum(&a, &b);

    printf("%d + %d = %d", a, b, c);

    return 0;
}

int sum(int *first, int *second)
{
    *first *= 2;
    *second *= 2;
    return *first + *second;
}