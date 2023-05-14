#include <stdio.h>
#include <math.h>

int opcoes(void);
void opcao1(float a);
void opcao2(float a);
void opcao3(float a);

int main()
{
    float total;
    int opcao;
    printf("Total: ");
    scanf("%f", &total);
    do
    {
        opcao = opcoes();
        switch (opcao)
        {
        case 1:
            opcao1(total);
            break;
        case 2:
            opcao2(total);
            break;
        case 3:
            if (opcao == 3 && total < 100)
            {
                printf("\nOpcao invalida\n\n");
                break;
            }
            else
            {
                opcao3(total);
                break;
            }
        }
    } while (opcao == 3 && total < 100);
    return 0;
}

int opcoes(void)
{
    int a;
    printf("(1) A vista com 10%% de desconto\n");
    printf("(2) Em duas vezes (preco da etiqueta)\n");
    printf("(3) De 3 ate 10 vezes com 3%% de juros ao mes (somente para compras acima de R$100\n");
    printf("Opcao: ");
    scanf("%d", &a);
    return a;
}

void opcao1(float a)
{
    printf("\nValor: uma parcela de R$%.2f", a * 0.9);
}

void opcao2(float a)
{
    printf("\nValor: duas parcelas de R$%.2f", a / 2);
}

void opcao3(float a)
{
    printf("\nOu tres parcelas de R$%.2f\n", a * pow(1 + 0.03, 3) / 3);
    printf("Ou quatro parcelas de R$%.2f\n", a * pow(1 + 0.03, 4) / 4);
    printf("Ou cinco parcelas de R$%.2f\n", a * pow(1 + 0.03, 5) / 5);
    printf("Ou seis parcelas de R$%.2f\n", a * pow(1 + 0.03, 6) / 6);
    printf("Ou sete parcelas de R$%.2f\n", a * pow(1 + 0.03, 7) / 7);
    printf("Ou oito parcelas de R$%.2f\n", a * pow(1 + 0.03, 8) / 8);
    printf("Ou nove parcelas de R$%.2f\n", a * pow(1 + 0.03, 9) / 9);
    printf("Ou dez parcelas de R$%.2f", a * pow(1 + 0.03, 10) / 10);
}