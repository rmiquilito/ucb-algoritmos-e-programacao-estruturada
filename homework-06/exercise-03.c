#include <stdio.h>

void inflacao(float a);

int main()
{
    float valor;
    printf("Valor do produto: ");
    scanf("%f", &valor);
    inflacao(valor);
    return 0;
}

void inflacao(float a)
{
    if (a < 100)
    {
        printf("Valor: R$%.2f", a * 1.1);
    }
    else
    {
        printf("Valor: R$%.2f", a * 1.2);
    }
}