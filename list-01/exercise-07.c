#include <stdio.h>

int main()
{
    int i, n, a = 0, b = 1, c;
    printf("Digite um indice natural para um termo da sequencia de Fibonacci: ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        c = a + b;
        printf("Indice %d: Termo = %d\n", i, a);
        a = b;
        b = c;
    }
    return 0;
}