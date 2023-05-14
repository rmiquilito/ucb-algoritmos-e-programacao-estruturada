#include <stdio.h>

float bigger(float n1, float n2);

int main()
{
    float n1, n2, result;

    printf("Primeiro valor: ");
    scanf("%f", &n1);

    printf("Segundo valor: ");
    scanf("%f", &n2);

    result = bigger(n1, n2);

    printf("O maior valor: %.2f", result);
    return 0;
}

float bigger(float a, float b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}