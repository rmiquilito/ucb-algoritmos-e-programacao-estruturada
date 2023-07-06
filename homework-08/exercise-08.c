#include <stdio.h>

#define SIZE 10

int a[SIZE];
int b[SIZE];
int c[SIZE];

void read();

int main()
{
    read();

    for (int i = 0; i < SIZE; i++)
    {
        c[i] = a[i] - b[i];

        printf("c[%d] = %d\n", i, c[i]);
    }

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
}