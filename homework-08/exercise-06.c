#include <stdio.h>

#define SIZE 50

void function();

int array[SIZE];

int main()
{
    function();

    return 0;
}

void function()
{
    for (int i = 0; i < SIZE; i++)
    {
        array[i] = ((i + (5 * i)) % (i + 1));

        printf("%d\n", array[i]);
    }
}