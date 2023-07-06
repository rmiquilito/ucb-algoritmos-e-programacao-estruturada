#include <stdio.h>

#define SIZE 5
#define DOUBLE_SIZE 10

void read();
void function();

int a[SIZE];
int b[SIZE];
int c[DOUBLE_SIZE];

int main()
{
    read();
    function();

    return 0;
}

void read()
{
    printf("a[]: ");
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("b[]: ");
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &b[i]);
    }
};

void function()
{
    for (int i = 0; i < DOUBLE_SIZE; i++)
    {
        if (i % 2 == 0)
        {
            c[i] = a[i - (i / 2)];
        }
        else
        {
            c[i] = b[i - ((i + 1) / 2)];
        }

        printf("%d\t", c[i]);
    }
}