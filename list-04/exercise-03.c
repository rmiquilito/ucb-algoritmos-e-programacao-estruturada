#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 25

typedef struct list
{
    char owner[SIZE];
    char fuel[SIZE];
    char model[SIZE];
    char color[SIZE];
    char chassis[SIZE];
    int year;
    char plate[SIZE];

    struct list *next;
} block;

block *initialize();
block *create(block *address);
void a(block *address);
void b();
void c();
void d();
void show(block *address);

char alcool[] = "alcool";
char diesel[] = "diesel";
char gasoline[] = "gasolina";

int main()
{
    block *cars;
    cars = initialize();

    int option;

    do
    {
        printf("\n[0] Finalizar\n");
        printf("[1] Registrar carro\n");
        printf("[2] Funcao 'a'\n");
        printf("[3] Funcao 'b'\n");
        printf("[4] Funcao 'c'\n");
        printf("[5] Funcao 'd'\n");
        printf("[6] Exibir carros\n");

        printf("Terminal: ");
        scanf("%d", &option);

        switch (option)
        {
        case 0:
            printf("\n\tFinalizado\n");
            break;

        case 1:
            cars = create(cars);
            break;

        case 2:
            a(cars);
            break;

        case 3:
            b();
            break;

        case 4:
            c();
            break;

        case 5:
            d();
            break;

        case 6:
            show(cars);
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

    printf("\nProprietario: ");
    scanf("%s", new->owner);

    do
    {
        printf("Combustivel: ");
        scanf("%s", new->fuel);

        if (strcmp(alcool, new->fuel) != 0 && strcmp(diesel, new->fuel) != 0 && strcmp(gasoline, new->fuel) != 0)
        {
            printf("\n\tValor invalido\n\n");
        }
    } while (strcmp(alcool, new->fuel) != 0 && strcmp(diesel, new->fuel) != 0 && strcmp(gasoline, new->fuel) != 0);

    printf("Modelo: ");
    scanf("%s", new->model);

    printf("Cor: ");
    scanf("%s", new->color);

    printf("Chassi: ");
    scanf("%s", new->chassis);

    printf("Ano: ");
    scanf("%d", &new->year);

    printf("Placa: ");
    scanf("%s", new->plate);

    new->next = address;

    return new;
};

void a(block *address)
{
    block *aux;

    for (aux = address; aux != NULL; aux = aux->next)
    {
        if (aux->year >= 2010 && strcmp(aux->fuel, "diesel") == 0)
        {
            printf("\n\tNome: %s", aux->owner);
        }
    }
};

void b(){};

void c(){};

void d(){};

void show(block *address)
{
    block *aux;
    for (aux = address; aux != NULL; aux = aux->next)
    {
        printf("\n\tProprietario: %s\n", aux->owner);
        printf("\tCombustivel: %s\n", aux->fuel);
        printf("\tModelo: %s\n", aux->model);
        printf("\tCor: %s\n", aux->color);
        printf("\tChassi: %s\n", aux->chassis);
        printf("\tAno: %d\n", aux->year);
        printf("\tPlaca: %s\n", aux->plate);
    }
};