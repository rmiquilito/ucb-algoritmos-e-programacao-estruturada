#include <stdio.h>

int main()
{
    float a[10];
    float maior;
    int posicao = 0;
    printf("Conjunto de 10 valores: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%f", &a[i]);
    }
    maior = a[0];
    for (int i = 0; i < 10; i++)
    {
        if (a[i] > maior)
        {
            maior = a[i];
            posicao = i;
            printf("a[%d] = %.2f", i, a[i]);
        }
    }
    printf("Maior: a[%d] = %.2f", posicao, maior);
    return 0;
}