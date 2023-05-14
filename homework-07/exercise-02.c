#include <stdio.h>

int main()
{
    int a[6];
    for (int i = 0; i < 6; i++)
    {
        printf("Valor %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
    return 0;
}