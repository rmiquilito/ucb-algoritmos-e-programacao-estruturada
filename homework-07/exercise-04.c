#include <stdio.h>

int main()
{
    float a[8];
    int x, y;
    printf("Conjunto de 8 valores: ");
    for (int i = 0; i < 8; i++)
    {
        scanf("%f", &a[i]);
    }
    printf("Primeira posicao no conjunto: ");
    scanf("%d", &x);
    printf("Segunda posicao no conjunto: ");
    scanf("%d", &y);
    printf("a[%d] = %.2f\n", x, a[x]);
    printf("a[%d] = %.2f", y, a[y]);
    return 0;
}