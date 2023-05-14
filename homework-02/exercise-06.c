#include <stdio.h>

int main()
{
    float salario, reajuste;

    printf("Valor do salario: ");
    scanf("%f", &salario);

    printf("Reajuste, em por cento: ");
    scanf("%f", &reajuste);

    printf("Valor do novo salario: %.2f", salario * (reajuste + 100) / 100);

    return 0;
}