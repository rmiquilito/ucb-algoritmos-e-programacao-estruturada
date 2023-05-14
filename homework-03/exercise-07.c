#include <stdio.h>

int main()
{
    int codigo, quantidade;
    float valor;

    printf("(100) Cachorro quente\n(101) Bauru simples\n(102) Bauru com ovo\n(103) Hamburguer\n(104) Cheeseburger\n");
    printf("\nCodigo: ");
    scanf("%d", &codigo);

    printf("Quantidade: ");
    scanf("%d", &quantidade);

    switch (codigo)
    {
    case 100:
        valor = quantidade * 10.1;
        break;
    case 101:
        valor = quantidade * 8.3;
        break;
    case 102:
        valor = quantidade * 8.5;
        break;
    case 103:
        valor = quantidade * 12.5;
        break;
    case 104:
        valor = quantidade * 13.25;
        break;
    }

    printf("Valor: %.2f", valor);

    return 0;
}