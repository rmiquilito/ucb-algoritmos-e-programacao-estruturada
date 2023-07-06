#include <stdio.h>

#define SIZE 5

void read();
void function();

double x[SIZE];
double y[SIZE];

int main()
{
    read();
    function();

    return 0;
}

void read()
{
    printf("x[]: ");
    
    for(int i = 0; i < SIZE; i++)
    {
        scanf("%lf", &x[i]);
    }

    printf("y[]: ");
    
    for(int i = 0; i < SIZE; i++)
    {
        scanf("%lf", &y[i]);
    }
};

void function()
{
    double number = 0;

    for(int i = 0; i < SIZE; i++)
    {
        number += x[i] * y[i];
    }

    printf("%lf", number);
}