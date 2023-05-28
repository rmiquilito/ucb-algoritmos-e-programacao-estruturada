#include <stdio.h>

typedef struct grandfather
{
    char nome[20];
} father;

int main()
{
    father son;

    printf("Nome: ");
    scanf("%s", son.nome);

    printf("%c", son.nome[0]);

    if(son.nome[0] == 'r')
    {
        printf("Valor encontrado");
    }

    return 0;
}