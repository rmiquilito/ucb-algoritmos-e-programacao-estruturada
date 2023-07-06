#include <stdio.h>

#define SIZE 10

int array[SIZE];

void read();
void show();

int main()
{
    read();
    show();
    return 0;
}

void read()
{
    printf("array: ");
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &array[i]);

        if (array[i] < 1)
        {
            array[i] = 0;
        }
    }
};

void show()
{
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d\n", array[i]);
    }
}