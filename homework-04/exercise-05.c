#include <stdio.h>

int main()
{
    int i, j = 50, sum = 0;
    for (i = 1; j > 0; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
            j--;
            printf("\nSoma %d: %d", 50 - j, sum);
        }
    }
    return 0;
}