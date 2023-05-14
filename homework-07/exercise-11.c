#include <stdio.h>
#include <math.h>

int main()
{
    float a[10], somatorio = 0;
    int quantidade = 0;
    printf("Conjunto de valores reais: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%f", &a[i]);
        if (a[i] >= 0)
        {
            somatorio += a[i];
        }
        else if (a[i] <= 0)
        {
            quantidade++;
        }
    }
    printf("Quantidade de valores negativos: %d\nSomatorio dos valores positivos: %.2f", quantidade, somatorio);
    return 0;
}