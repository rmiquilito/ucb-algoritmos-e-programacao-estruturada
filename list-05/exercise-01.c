#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 25

typedef struct list
{
    char id[SIZE];
    char name[SIZE];
    int amount;
    float price;

    struct list *next;
} block;

block *initialize();
block *add(block *address);
void show(block *address);
void search(block *address);
block *delete(block *address);

int main()
{
    block *storage;
    int option;

    storage = initialize();

    do
    {
        printf("\n[0] Close\n");
        printf("[1] add()\n");
        printf("[2] show()\n");
        printf("[3] search()\n");
        printf("[4] delete()\n");

        printf("Option: ");
        scanf("%d", &option);

        switch (option)
        {
        case 0:
            printf("\n\tClosed\n");
            break;

        case 1:
            storage = add(storage);

            printf("\n\tAdded\n");
            break;

        case 2:
            show(storage);
            break;

        case 3:
            search(storage);
            break;

        case 4:
            storage = delete (storage);
            break;

        default:
            printf("\n\tInvalid\n");
            break;
        }
    } while (option != 0);

    return 0;
}

block *initialize()
{
    return NULL;
}

block *add(block *address)
{
    block *new = (block *)malloc(sizeof(block));
    block *aux;

    printf("\nName: ");
    scanf("%s", new->name);

    printf("Id: ");
    scanf("%s", new->id);

    for (aux = address; aux != NULL; aux = aux->next)
    {
        while (strcmp(aux->id, new->id) == 0)
        {
            printf("\n\tInvalid\n");

            printf("Id: ");
            scanf("%s", new->id);
        }
    }

    printf("Amount: ");
    scanf("%d", &new->amount);

    printf("Price: ");
    scanf("%f", &new->price);

    new->next = address;

    return new;
};

void show(block *address)
{
    block *aux;

    for (aux = address; aux != NULL; aux = aux->next)
    {
        printf("\n\tName: %s\n", aux->name);
        printf("\tId: %s\n", aux->id);
        printf("\tAmount: %d\n", aux->amount);
        printf("\tPrice: %f\n", aux->price);
    }
};

void search(block *address)
{
    block *aux;
    char id[SIZE];
    int counter = 0;

    printf("\nId: ");
    scanf("%s", id);

    for (aux = address; aux != NULL; aux = aux->next)
    {
        if (strcmp(aux->id, id) == 0)
        {
            printf("\n\tName: %s\n", aux->name);
            printf("\tId: %s\n", aux->id);
            printf("\tAmount: %d\n", aux->amount);
            printf("\tPrice: %f\n", aux->price);

            counter++;
        }
    }

    if (counter == 0)
    {
        printf("\n\tInvalid\n");
    }
};

block *delete(block *address)
{
    block *aux = address;
    block *previous = NULL;
    char id[SIZE];

    printf("\nId: ");
    scanf("%s", id);

    while (aux != NULL && strcmp(aux->id, id) != 0)
    {
        previous = aux;
        aux = aux->next;
    }

    if (aux == NULL)
    {
        printf("\n\tInvalid\n");
        return address;
    }

    if (previous == NULL)
    {
        address = aux->next;
    }
    else
    {
        previous->next = aux->next;
    }

    printf("\n\tDeleted\n");

    free(aux);

    return address;
};