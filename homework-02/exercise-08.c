#include <stdio.h>

int main()
{
    float salario, comissao, quantidade, valor;

    printf("Salario fixo: ");
    scanf("%f", &salario);

    printf("Comissao fixa: ");
    scanf("%f", &comissao);

    printf("Quantidade de carros vendidos: ");
    scanf("%f", &quantidade);

    printf("Valor total dos carros vendidos: ");
    scanf("%f", &valor);

    printf("Salario final: %.2f", salario + comissao * quantidade + valor * 0.05);

    return 0;
}