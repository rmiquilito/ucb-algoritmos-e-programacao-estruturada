#include <stdio.h>

int validaQuantidade(int n);
float calculaSalario(int n);
void mostraFinal(float a);

int main()
{
    int quantidade;
    float salario;
    int i = 1;
    int opcao;

    quantidade = validaQuantidade(i);
    salario = calculaSalario(quantidade);
    mostraFinal(salario);

    do
    {
        printf("Você quer continuar? [1/0] ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            i++;
            quantidade = validaQuantidade(i);
            salario = calculaSalario(quantidade);
            mostraFinal(salario);
            break;
        case 0:
            break;
        default:
            printf("Opcao invalida\n");
            break;
        }
    } while (opcao != 0);
    return 0;
}

int validaQuantidade(int n)
{
    int m;
    do
    {
        printf("Digite a quantidade de pecas fabricadas neste mês do funcionario  %d: ", n);
        scanf("%d", &m);
    } while (m < 0);
    return m;
}

float calculaSalario(int n)
{
    float salario = 600;
    if (n > 50 && n <= 80)
    {
        salario += (n - 50) * 0.5;
    }
    else if (n > 80)
    {
        salario += 80 * 0.5 + (n - 80) * 0.75;
    }
    return salario;
}

void mostraFinal(float a)
{
    printf("Salario do funcionario: %.2f\n", a);
}