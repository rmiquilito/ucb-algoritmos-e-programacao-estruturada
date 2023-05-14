#include <stdio.h>

int main()
{
    float a[15];
    float somatorio = 0;
    printf("Conjunto de 15 notas: ");
    for (int i = 0; i < 15; i++)
    {
        scanf("%f", &a[i]);
        somatorio += a[i];
    }
    printf("Media = %.2f", somatorio / 15);
    return 0;
}