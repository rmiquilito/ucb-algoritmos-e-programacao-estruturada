#include <stdio.h>

void bigger(int *first, int *second);

int main()
{
    int a, b;

    printf("Primeiro valor: ");
    scanf("%d", &a);

    printf("Segundo valor: ");
    scanf("%d", &b);

    bigger(&a, &b);

    printf("%d\n%d\n", a, b);

    return 0;
}

void bigger(int *first, int *second)
{
    int holder;
    if (*first < *second)
    {
        holder = *second;
        *second = *first;
        *first = holder;
    }
}