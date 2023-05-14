#include <stdio.h>

int main()
{
    float raio;

    printf("Raio do circulo, em metro: ");
    scanf("%f", &raio);

    printf("Area do circulo, em metro quadrado: %.2f", raio * raio * 3.14);

    return 0;
}