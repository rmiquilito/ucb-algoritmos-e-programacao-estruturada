#include <stdio.h>

int main()
{
    int i = 1, j = 2, opcao, abacaxi, maca, pera, sum = 0;
    while (i != j)
    {
        printf("\n(1) Menu de frutas\n(2) Finalizar\n");
        printf("Opção: ");
        scanf("%d", &i);
        if (i == 1)
        {
            printf("\n(1) Abacaxi: R$5 a unidade\n(2) Maçã: R$1 a unidade\n(3) Pera: R$4 a unidade\n");
            printf("Opcao: ");
            scanf("%d", &opcao);
            switch (opcao)
            {
            case 1:
                printf("Quantidade: ");
                scanf("%d", &abacaxi);
                sum += 5 * abacaxi;
                break;
            case 2:
                printf("Quantidade: ");
                scanf("%d", &maca);
                sum += 1 * maca;
                break;
            case 3:
                printf("Quantidade: ");
                scanf("%d", &pera);
                sum += 4 * pera;
                break;
            }
        }
        else
        {
            printf("\nTotal: R$%d\n", sum);
        }
    }
    return 0;
}