#include <stdio.h>

int main()
{
    int ddd;

    printf("DDD: ");
    scanf("%d", &ddd);

    switch (ddd)
    {
    case 61:
        printf("%d corresponde a Brasilia", ddd);
        break;
    case 71:
        printf("%d corresponde a Salvador", ddd);
        break;
    case 11:
        printf("%d corresponde a Sao Paulo", ddd);
        break;
    case 21:
        printf("%d corresponde a Rio de Janeiro", ddd);
        break;
    case 32:
        printf("%d corresponde a Juiz de Fora", ddd);
        break;
    case 19:
        printf("%d corresponde a Campinas", ddd);
        break;
    case 27:
        printf("%d corresponde a Vitoria", ddd);
        break;
    case 31:
        printf("%d corresponde a Belo Horizonte", ddd);
        break;
    default:
        printf("%d corresponde a uma cidade no Brasil sem identificacao", ddd);
    }

    return 0;
}