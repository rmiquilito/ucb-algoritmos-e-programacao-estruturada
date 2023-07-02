#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 25

typedef struct list
{
    char name[SIZE];
    char address[SIZE];
    double price;
    char type[SIZE];

    struct list *next;
} block;

block *initialize();
block *create(block *address);
void show(block *address);

int main()
{
    block *restaurants;
    restaurants = initialize();

    int option;

    do
    {
        printf("\n[0] Finalizar\n");
        printf("[1] Registrar restaurante\n");
        printf("[2] Exibir restaurantes\n");

        printf("Terminal: ");
        scanf("%d", &option);

        switch (option)
        {
        case 0:
            printf("\n\tFinalizado\n");
            break;

        case 1:
            restaurants = create(restaurants);
            break;

        case 2:
            show(restaurants);
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

    printf("Endereco: ");
    scanf("%s", new->address);

    printf("Preco medio: ");
    scanf("%lf", &new->price);

    printf("Tipo: ");
    scanf("%s", new->type);

    new->next = address;

    return new;
};

void show(block *address)
{
    block *aux;
    for (aux = address; aux != NULL; aux = aux->next)
    {
        printf("\n\tNome: %s\n", aux->name);
        printf("\tEndereco: %s\n", aux->address);
        printf("\tPreco medio: %lf\n", aux->price);
        printf("\tTipo: %s\n", aux->type);
    }
};