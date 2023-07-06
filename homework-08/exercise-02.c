#include <stdio.h>

#define SIZE 20

void read();
void check();
void show();

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
        int aux = 0;
        for (int j = i + 1; j < SIZE; j++)
        {
            if (array[i] == array[j])
            {
                aux++;
            }
        }

        if (aux == 0)
        {
            printf("%d\n", array[i]);
        }
    }
};