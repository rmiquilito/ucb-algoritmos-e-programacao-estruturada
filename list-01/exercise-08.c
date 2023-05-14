#include <stdio.h>

int main()
{
    int n, maior, menor;
    printf("Digite um numero natural: ");
    scanf("%d", &n);
    maior = n;
    menor = n;
    while (n >= 0)
    {
        printf("Outro numero inteiro (negativo para finalizar): ");
        scanf("%d", &n);
        if (n > maior)
        {
            maior = n;
        }
        else if (n < menor && n >= 0)
        {
            menor = n;
        }
    }
    printf("Maior numero digitado: %d\nMenor numero digitado: %d\n", maior, menor);
    return 0;
}