#include <stdio.h>

#define SIZE 5

double array[SIZE];
int code;

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
        scanf("%lf", &array[i]);
    }
}

void function()
{
    do
    {
        printf("code: ");
        scanf("%d", &code);

        switch (code)
        {
        case 0:
            printf("closed\n");
            break;

        case 1:
            for (int i = 0; i < SIZE; i++)
            {
                printf("%lf\n", array[i]);
            }
            break;

        case 2:
            for (int j = (SIZE - 1); j >= 0; j--)
            {
                printf("%lf\n", array[j]);
            }
            break;

        default:
            printf("invalid\n");
            break;
        }
    } while (code != 0);
};