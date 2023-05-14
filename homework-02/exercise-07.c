#include <stdio.h>

int main()
{
    float fabrica;

    printf("Valor de fabrica do carro: ");
    scanf("%f", &fabrica);

    printf("Custo final do carro: %.2f",
           fabrica * 0.28 + fabrica * 0.45 + fabrica);

    return 0;
}