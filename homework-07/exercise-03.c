#include <stdio.h>
#include <math.h>

int main()
{
    float a[10], b[10];
    printf("Conjunto de numeros reais: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%f", &a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("a[%d] = %.2f\n", i, a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        b[i] = pow(a[i], 2);
        printf("b[%d] = %.2f\n", i, b[i]);
    }
    return 0;
}