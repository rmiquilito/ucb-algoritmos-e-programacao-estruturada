#include <stdio.h>

int main()
{
    int a, b, c, d;

    printf("Digite um primeiro numero inteiro: ");
    scanf("%d", &a);

    printf("Digite um segundo numero inteiro: ");
    scanf("%d", &b);

    printf("Digite um terceiro numero inteiro: ");
    scanf("%d", &c);

    printf("Digite um quarto numero inteiro: ");
    scanf("%d", &d);

    printf("Diferença = (%d * %d) - (%d * %d)\n", a, b, c, d);
    printf("Diferença = %d\n", a * b - c * d);

    return 0;
}