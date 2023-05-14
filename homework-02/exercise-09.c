#include <stdio.h>

int main()
{
    float nota1, nota2, nota3;

    printf("Nota 1: ");
    scanf("%f", &nota1);

    printf("Nota 2: ");
    scanf("%f", &nota2);

    printf("Nota 3: ");
    scanf("%f", &nota3);

    printf("Media ponderada: %.2f", (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10);
    return 0;
}