#include <stdio.h>

#define SIZE 10

int array[SIZE];
int x;

void read();
void function();

int main()
{
    read();
    function();

    return 0;
}

void read()
{
    printf("array: ");

    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("x: ");
    scanf("%d", &x);
}

void function()
{
    for (int i = 0; i < SIZE; i++)
    {
        if (array[i] % x == 0)
        {
            printf("%d\n", array[i]);
        };
    }
}