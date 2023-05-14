#include <stdio.h>
#include <math.h>

int main()
{
    float valor, parteDecimal, parteInteira, centenas;
    int i;

    printf("Valor monetario: ");
    scanf("%f", &valor);

    parteDecimal = fmodf(valor, 100);
    parteInteira = valor - parteDecimal;
    centenas = parteInteira / 100;

    printf("%.2f e minimamente composto por:\n", valor);

    for (i = 0; i < centenas; i++)
    {
        if (valor >= 100)
        {
            valor = valor - 100;
            printf("100\n");
        }
    }
    for (i = 1; i < 2; i++)
    {
        if (valor >= 50)
        {
            valor = valor - 50;
            printf("50\n");
        }
    }
    for (i = 1; i < 3; i++)
    {
        if (valor >= 20)
        {
            valor = valor - 20;
            printf("20\n");
        }
    }
    for (i = 1; i < 2; i++)
    {
        if (valor >= 10)
        {
            valor = valor - 10;
            printf("10\n");
        }
    }
    for (i = 1; i < 2; i++)
    {
        if (valor >= 5)
        {
            valor = valor - 5;
            printf("5\n");
        }
    }
    for (i = 1; i < 3; i++)
    {
        if (valor >= 2)
        {
            valor = valor - 2;
            printf("2\n");
        }
    }
    for (i = 1; i < 2; i++)
    {
        if (valor >= 1)
        {
            valor = valor - 1;
            printf("1\n");
        }
    }
    for (i = 1; i < 2; i++)
    {
        if (valor >= 0.5)
        {
            valor = valor - 0.5;
            printf("0.5\n");
        }
    }
    for (i = 1; i < 2; i++)
    {
        if (valor >= 0.25)
        {
            valor = valor - 0.25;
            printf("0.25\n");
        }
    }
    for (i = 1; i < 3; i++)
    {
        if (valor >= 0.1)
        {
            valor = valor - 0.1;
            printf("0.1\n");
        }
    }
    for (i = 1; i < 2; i++)
    {
        if (valor >= 0.05)
        {
            valor = valor - 0.05;
            printf("0.05\n");
        }
    }
    for (i = 1; i < 5; i++)
    {
        if (valor >= 0.01)
        {
            valor = valor - 0.01;
            printf("0.01\n");
        }
    }

    return 0;
}