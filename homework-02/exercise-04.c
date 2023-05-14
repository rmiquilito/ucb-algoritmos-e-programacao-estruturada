#include <stdio.h>

int main()
{
    float base, altura;

    printf("Base do retangulo, em metro: ");
    scanf("%f", &base);

    printf("Altura do retangulo, em metro: ");
    scanf("%f", &altura);

    printf("Area do retangulo, em metro quadrado: %.2f", base * altura);

    return 0;
}