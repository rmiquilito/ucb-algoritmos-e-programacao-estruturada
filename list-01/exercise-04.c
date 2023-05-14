#include <stdio.h>

int main()
{
    float x, y;

    printf("Valor racional de um ponto no eixo X: ");
    scanf("%f", &x);

    printf("Valor racional do mesmo ponto no eixo Y: ");
    scanf("%f", &y);

    if (x > 0)
    {
        if (y > 0)
        {
            printf("Esse ponto se encontra no quadrante 1 do plano cartesiano\n");
        }
        else
        {
            printf("Esse ponto se encontra no quadrante 4 do plano cartesiano\n");
        }
    }
    else
    {
        if (y > 0)
        {
            printf("Esse ponto se encontra no quadrante 2 do plano cartesiano\n");
        }
        else
        {
            printf("Esse ponto se encontra no quadrante 3 do plano cartesiano\n");
        }
    }

    return 0;
}