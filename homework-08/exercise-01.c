#include <stdio.h>

#define SIZE 10

void read();
void check();

int array[SIZE];

int main()
{
    read();
    check();

    return 0;
}

void read()
{
    printf("array: ");
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &array[i]);
    }
};

void check()
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = i + 1; j < SIZE; j++)
        {
            if (array[i] == array[j])
            {
                printf("array[%d] = %d == array[%d] = %d\n", i, array[i], j, array[j]);
            }
        }
    }
}