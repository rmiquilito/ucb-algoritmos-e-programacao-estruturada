#include <stdio.h>

float calculaMedia(float a, float b, float c);

int main()
{
    char i;
    float n1, n2, n3, media;

    do
    {
        printf("Primeira nota: ");
        scanf("%f", &n1);

        printf("Segunda nota: ");
        scanf("%f", &n2);

        printf("Terceira nota: ");
        scanf("%f", &n3);

        media = calculaMedia(n1, n2, n3);

        printf("Media: %.2f", media);

        printf("\nRegistrar outro estudante? [S/n] ");
        scanf("%s", &i);
    } while (i == 's');

    return 0;
}

float calculaMedia(float a, float b, float c)
{
    return (a + b + c) / 3;
}