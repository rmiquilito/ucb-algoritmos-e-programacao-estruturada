#include <stdio.h>

int main()
{
    int opcao;
    float n1, n2;

    printf("(1) Adicao\n(2) Subtracao\n(3) Multiplicacao\n(4) Divisao\n\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("Primeiro fator: ");
    scanf("%f", &n1);

    printf("Segundo fator: ");
    scanf("%f", &n2);

    switch (opcao)
    {
    case 1:
        printf("%.2f + %.2f = %.2f", n1, n2, n1 + n2);
        break;
    case 2:
        printf("%.2f - %.2f = %.2f", n1, n2, n1 - n2);
        break;
    case 3:
        printf("%.2f * %.2f = %.2f", n1, n2, n1 * n2);
        break;
    case 4:
        printf("%.2f / %.2f = %.2f", n1, n2, n1 / n2);
        break;
    }
    return 0;
}