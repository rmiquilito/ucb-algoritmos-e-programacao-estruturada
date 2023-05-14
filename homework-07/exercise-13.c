#include <stdio.h>

int main()
{
    float a[5], maior, menor;
    int posicaoMaior, posicaoMenor;
    printf("Conjunto de 5 valores: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%f", &a[i]);
        printf("a[%d] = %.2f\n", i, a[i]);
    }
    maior = a[0];
    menor = a[0];
    for (int i = 0; i < 5; i++)
    {
        if (a[i] > maior)
        {
            maior = a[i];
            posicaoMaior = i;
        }
        else if (a[i] < menor)
        {
            menor = a[i];
            posicaoMenor = i;
        }
    }
    printf("Posicao do maior valor: %d\nPosicao do menor valor: %d\n", posicaoMaior, posicaoMenor);
    return 0;
}