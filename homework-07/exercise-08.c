#include <stdio.h>

int main()
{
    int a[6];
    int b[6];
    printf("Conjunto de 6 valores inteiros: ");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 5; i >= 0; i--)
    {
        b[5 - i] = a[i];
        printf("%d\n", b[5 - i]);
    }
    return 0;
}