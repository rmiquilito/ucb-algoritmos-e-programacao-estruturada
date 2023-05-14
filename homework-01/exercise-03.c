#include <stdio.h>

int main()
{
    float largura, altura;

    printf("Largura da parede, em metro: ");
    scanf("%f", &largura);

    printf("Altura da parede, em metro: ");
    scanf("%f", &altura);

    printf("Quantidade necessaria para pinta-la: %.2f lata(s) de tinta",
           (largura * altura * 0.3) / 2);
    return 0;
}