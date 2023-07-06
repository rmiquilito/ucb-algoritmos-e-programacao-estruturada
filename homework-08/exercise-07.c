#include <stdio.h>

#define SIZE 5

void function();

int array[SIZE];
int odd[SIZE];

int main()
{
    function();

    return 0;
}

void function()
{
    for (int i = 0; i < SIZE; i++)
    {
        odd[i] = 0;
    }

    for (int i = 0; i < SIZE; i++)
    {
        do
        {
            printf("array[%d]: ", i);
            scanf("%d", &array[i]);
        } while (array[i] < 0 || array[i] > 50);

        if (array[i] % 2 != 0)
        {
            odd[i] = array[i];
        }
    }

    for (int i = 0; i < SIZE; i++)
    {
        printf("%d\t", array[i]);
    }

    printf("\n");

    for (int i = 0; i < SIZE; i++)
    {
        if (odd[i] != 0)
        {
            printf("%d\t", odd[i]);
        }
    }
}