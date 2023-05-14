#include <stdio.h>

int main()
{
    int i, n;
    printf("Numero inteiro positivo: ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        printf("\n%d", i);
    }
    return 0;
}