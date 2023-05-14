#include <stdio.h>

int main()
{
    int ano, mes, dia;

    printf("Quantidade de anos: ");
    scanf("%d", &ano);

    printf("Tendo em vista os anos, quantidade de meses: ");
    scanf("%d", &mes);

    printf("Tendo em vista os anos e meses, quantidade de dias: ");
    scanf("%d", &dia);

    printf("Idade, em quantidade de dias: %d", ano * 365 + mes * 30 + dia);

    return 0;
}