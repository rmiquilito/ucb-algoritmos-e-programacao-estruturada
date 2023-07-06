#include <stdio.h>

#define SIZE 10

void read();
void function();

int number[SIZE];
float height[SIZE];

int main()
{
    read();
    function();

    return 0;
}

void read()
{
    printf("number[]: ");
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &number[i]);
    }

    printf("height[]: ");
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%f", &height[i]);
    }
};

void function()
{
    float higher = height[0];
    float lower = height[0];
    int numberHigher;
    int numberLower;

    for (int i = 0; i < SIZE; i++)
    {
        if (height[i] > higher)
        {
            numberHigher = number[i];
            higher = height[i];
        }

        if (lower > height[i])
        {
            numberLower = number[i];
            lower = height[i];
        }
    }

    printf("higher: %d; height: %.2f\nlower: %d; height: %.2f", numberHigher, higher, numberLower, lower);
}