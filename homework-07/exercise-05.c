#include <stdio.h>
#include <math.h>

int main()
{
    float a[10];
    int n = 0;
    printf("Conjunto de 10 valores: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%f", &a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (fmodf(a[i], 2) == 0)
        {
            n++;
        }
    }
    printf("Quantidade de valores pares: %d", n);
    return 0;
}