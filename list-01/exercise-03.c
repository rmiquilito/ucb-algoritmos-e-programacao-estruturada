#include <stdio.h>
#include <math.h>

int main()
{
    float r, pi = 3.14159;
    printf("Valor racional do raio de uma esfera: ");
    scanf("%f", &r);
    printf("Volume: %.2f\n", 4.0 / 3.0 * pi * pow(r, 3));
    printf("Area: %.2f\n", 4.0 * pi * pow(r, 2));
    return 0;
}