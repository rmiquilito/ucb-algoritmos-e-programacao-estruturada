#include <stdio.h>

int main()
{
    int n, i;
    float sum;
    for (i = 1; i <= 10; i++)
    {
        printf("(%d/10) Digite um numero inteiro: ", i);
        scanf("%d", &n);
        sum += n;
    }
    printf("Media: %.2f\n", sum / 10);
    return 0;
}