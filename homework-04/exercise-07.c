#include <stdio.h>

int main()
{
    int i, n, a = 0, b = 1, c;
    printf("Termo: ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        c = a + b;
        printf("\nTermo %d: %d", i, a);
        a = b;
        b = c;
    }
    return 0;
}