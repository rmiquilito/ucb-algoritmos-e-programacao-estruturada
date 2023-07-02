#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 25

typedef struct dieta
{
    char name[SIZE];
    float weight;
    float kcal;

    struct dieta *next;
} block;

block *initialize();
block *create(block *address);
void show(block *address);

int main()
{
    block *restaurant;
    restaurant = initialize();

    int option;

    do
    {
        printf("\n[0] Finalizar\n");
        printf("[1] Registrar alimento\n");
        printf("[2] Exibir alimentos\n");

        printf("Terminal: ");
        scanf("%d", &option);

        switch (option)
        {
        case 0:
            printf("\n\tFinalizado\n");
            break;

        case 1:
            restaurant = create(restaurant);
            break;

        case 2:
            show(restaurant);
            break;

        default:
            printf("\n\tOpcao invalida\n");
            break;
        }

    } while (option != 0);

    return 0;
}

block *initialize()
{
    return NULL;
}

block *create(block *address)
{
    block *new = (block *)malloc(sizeof(block));
    printf("\nNome: ");
    scanf("%s", new->name);

    printf("Peso, em g: ");
    scanf("%f", &new->weight);

    printf("Calorias: ");
    scanf("%f", &new->kcal);

    new->next = address;

    return new;
};

void show(block *address)
{
    block *aux;
    for (aux = address; aux != NULL; aux = aux->next)
    {
        printf("\n\tNome: %s\n", aux->name);
        printf("\tPeso, em g: %f\n", aux->weight);
        printf("\tCalorias: %f\n", aux->kcal);
    }
};