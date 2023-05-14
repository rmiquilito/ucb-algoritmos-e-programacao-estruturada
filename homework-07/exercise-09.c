#include <stdio.h>

int main()
{
    int a[6];
    int b[6];
    for (int i = 0; i < 6; i++)
    {
        printf("Valor inteiro par %d: ", i + 1);
        scanf("%d", &a[i]);
        while (a[i] % 2 != 0)
        {
            printf("Valor impar digitado. Novamente, valor inteiro par %d: ", i + 1);
            scanf("%d", &a[i]);
        }
    }
    for (int i = 5; i >= 0; i--)
    {
        b[5 - i] = a[i];
        printf("%d\n", b[5 - i]);
    }
    return 0;
}