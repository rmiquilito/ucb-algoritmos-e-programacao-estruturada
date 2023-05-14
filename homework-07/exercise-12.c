#include <stdio.h>

int main()
{
    float a[5], maior, menor, somatorio = 0;
    printf("Conjunto de 5 valores: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%f", &a[i]);
        printf("a[%d] = %.2f\n", i, a[i]);
        somatorio += a[i];
    }
    maior = a[0];
    menor = a[0];
    for (int i = 0; i < 5; i++)
    {
        if (a[i] > maior)
        {
            maior = a[i];
        }
        else if (a[i] < menor)
        {
            menor = a[i];
        }
    }
    float media = somatorio / 5;
    printf("Maior: %.2f\nMenor: %.2f\nMedia: %.2f\n", maior, menor, media);
    return 0;
}