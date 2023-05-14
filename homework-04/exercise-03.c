#include <stdio.h>

int main()
{
    int i, n;
    printf("Numero: ");
    scanf("%d", &n);
    for (i = n; i > 0; i--)
    {
        while (i % 2 != 0)
        {
            printf("\n%d", i);
            i--;
        }
    }
    return 0;
}