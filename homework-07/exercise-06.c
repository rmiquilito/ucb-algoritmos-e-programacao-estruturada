#include <stdio.h>

int main()
{
    float a[10];
    float maior, menor;
    printf("Conjunto de 10 valores: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%f", &a[i]);
    }
    maior = a[0];
    menor = a[0];
    for (int i = 0; i < 10; i++)
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
    printf("Maior: %.2f\nMenor: %.2f", maior, menor);
    return 0;
}