#include <stdio.h>

int main()
{
    int a, b;

    printf("Valor de a: ");
    scanf("%d", &a);

    printf("Valor de b: ");
    scanf("%d", &b);

    if (&a > &b)
    {
        printf("%d\n", a);
    }
    else
    {
        printf("%d\n", b);
    }

    return 0;
}