#include <stdio.h>

int main()
{
    float mercadoria, frete, despesa, custo, venda;

    printf("Custo da mercadoria: ");
    scanf("%f", &mercadoria);

    printf("Custo do frete: ");
    scanf("%f", &frete);

    printf("Custo das despesas eventuais: ");
    scanf("%f", &despesa);

    printf("Valor da venda: ");
    scanf("%f", &venda);

    custo = mercadoria + frete + despesa;

    printf("Percentagem de lucro: %.2f por cento", (venda - custo) / custo * 100);

    return 0;
}