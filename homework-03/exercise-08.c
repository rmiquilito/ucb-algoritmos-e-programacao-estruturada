#include <stdio.h>

int main()
{
    int prato, sobremesa, bebida;
    int calorias = 0;

    printf("(1) Vegetariano\n(2) Peixe\n(3) Frango\n(4) Carne\n");
    printf("\nPrato: ");
    scanf("%d", &prato);

    printf(
        "\n(1) Abacaxi\n(2) Sorvete Diet\n(3) Mouse Diet\n(4) Mouse Chocolate\n");
    printf("\nSobremesa: ");
    scanf("%d", &sobremesa);

    printf("\n(1) Cha \n(2) Suco Laranja \n(3) Suco Melao \n(4) Refrigerante "
           "Diet\n");
    printf("\nBebida: ");
    scanf("%d", &bebida);

    switch (prato)
    {
    case 1:
        calorias += 180;
        break;
    case 2:
        calorias += 230;
        break;
    case 3:
        calorias += 250;
        break;
    case 4:
        calorias += 350;
        break;
    }

    switch (sobremesa)
    {
    case 1:
        calorias += 75;
        break;
    case 2:
        calorias += 110;
        break;
    case 3:
        calorias += 170;
        break;
    case 4:
        calorias += 200;
        break;
    }

    switch (bebida)
    {
    case 1:
        calorias += 20;
        break;
    case 2:
        calorias += 70;
        break;
    case 3:
        calorias += 100;
        break;
    case 4:
        calorias += 65;
        break;
    }

    printf("\nQuantidade total de calorias: %d", calorias);

    return 0;
}