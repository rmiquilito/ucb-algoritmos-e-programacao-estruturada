#include <stdio.h>

int classificaSalario(float salario);
void mostraClassifica(int classificacao);

int main()
{
    int i, acima = 0, abaixo = 0, classificacao, quantidadeAssalariados;
    float salario;
    char sexo;

    printf("Digite a quantidade de assalariados: ");
    scanf("%d", &quantidadeAssalariados);

    for (i = 0; i < quantidadeAssalariados; i++)
    {
        do
        {
            printf("Qual seu sexo? [m/f] ");
            scanf(" %c", &sexo);
            if (sexo != 'm' && sexo != 'f')
            {
                printf("Opcao invalida\n");
            }
        } while (sexo != 'm' && sexo != 'f');

        do
        {
            printf("Valor de seu salario: ");
            scanf("%f", &salario);
        } while (salario < 1);

        classificacao = classificaSalario(salario);

        if (sexo == 'm')
        {
            printf("Sexo masculino\n");
        }
        else
        {
            printf("Sexo feminino\n");
        }

        printf("Salario: R$%.2f\n", salario);
        mostraClassifica(classificacao);

        if (classificacao == 3)
        {
            acima++;
        }
        else if (classificacao != 3 && classificacao != 2)
        {
            abaixo++;
        }
    }

    printf("Quantidade de assalariados com salario abaixo do salario minimo: %d\n", abaixo);
    printf("Quantidade de assalariados com salario acima do salario minimo: %d\n", acima);

    return 0;
}

int classificaSalario(float salario)
{

    if (salario > 1400)
    {
        return 3;
    }
    else if (salario == 1400)
    {
        return 2;
    }
    else
    {
        return 1;
    }
}

void mostraClassifica(int classificacao)
{

    if (classificacao == 3)
    {
        printf("Salario acima do salario minimo\n");
    }
    else if (classificacao == 2)
    {
        printf("Salario igual ao salario minimo\n");
    }
    else
    {
        printf("Salario abaixo do salario minimo\n");
    }
}