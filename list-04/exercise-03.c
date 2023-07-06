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
    char alphabeticFirst[SIZE];
    char alphabeticSecond[SIZE];
    char alphabeticThird[SIZE];
    int numericFirst;
    int numericSecond;
    int numericThird;
    int numericFourth;

    int year;

    struct list *next;
} block;

block *initialize();
block *add(block *address);
void a(block *address);
void b(block *address);
void c(block *address);
block *d(block *address);
void show(block *address);

int main()
{
    block *cars;

    cars = initialize();

    int option;

    do
    {
        printf("\n\n[0] Finalizar\n");
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
            printf("\n\tClosed\n");
            break;

        case 1:
            cars = add(cars);

            printf("\n\tAdded");
            break;

        case 2:
            a(cars);
            break;

        case 3:
            b(cars);
            break;

        case 4:
            c(cars);
            break;

        case 5:
            cars = d(cars);
            break;

        case 6:
            show(cars);
            break;

        default:
            printf("\n\tInvalid");
            break;
        }

    } while (option != 0);

    return 0;
}

block *initialize()
{
    return NULL;
};

block *add(block *address)
{
    block *new = (block *)malloc(sizeof(block));

    printf("\nProprietario: ");
    scanf("%s", new->owner);

    do
    {
        printf("Combustivel [alcool/diesel/gasolina]: ");
        scanf("%s", new->fuel);

        if (strcmp("alcool", new->fuel) != 0 && strcmp("diesel", new->fuel) != 0 && strcmp("gasolina", new->fuel) != 0)
        {
            printf("\n\tInvalid\n\n");
        }
    } while (strcmp("alcool", new->fuel) != 0 && strcmp("diesel", new->fuel) != 0 && strcmp("gasolina", new->fuel) != 0);

    printf("Modelo: ");
    scanf("%s", new->model);

    printf("Cor: ");
    scanf("%s", new->color);

    printf("Chassi: ");
    scanf("%s", new->chassis);

    do
    {
        printf("Ano: ");
        scanf("%d", &new->year);

        if (new->year < 1886 || new->year > 2023)
        {
            printf("\n\tInvalid\n\n");
        }
    } while (new->year < 1886 || new->year > 2023);

    printf("Placa:");
    printf("\n\t1o [letter]: ");
    scanf("%s", new->alphabeticFirst);
    printf("\t2o [letter]: ");
    scanf("%s", new->alphabeticSecond);
    printf("\t3o [letter]: ");
    scanf("%s", new->alphabeticThird);
    printf("\t4o [number]: ");
    scanf("%d", &new->numericFirst);
    printf("\t5o [number]: ");
    scanf("%d", &new->numericSecond);
    printf("\t6o [number]: ");
    scanf("%d", &new->numericThird);
    printf("\t7o [number]: ");
    scanf("%d", &new->numericFourth);

    new->next = address;

    return new;
};

void a(block *address)
{
    block *aux;
    int counter = 0;

    for (aux = address; aux != NULL; aux = aux->next)
    {
        if (aux->year >= 2010 && strcmp(aux->fuel, "diesel") == 0)
        {
            printf("\n\tNome: %s", aux->owner);

            counter++;
        }
    }

    if (counter == 0)
    {
        printf("\n\tNot found");
    }
};

void b(block *address)
{
    block *aux;
    int counter = 0;

    for (aux = address; aux != NULL; aux = aux->next)
    {
        if (strcmp(aux->alphabeticFirst, "j") == 0 && (aux->numericFourth == 0 || aux->numericFourth == 2 || aux->numericFourth == 4 || aux->numericFourth == 7))
        {
            printf("\n\tNome: %s", aux->owner);
            printf("\n\tPlaca: %s-%s-%s-", aux->alphabeticFirst, aux->alphabeticSecond, aux->alphabeticThird);
            printf("%d-%d-%d-%d", aux->numericFirst, aux->numericSecond, aux->numericThird, aux->numericFourth);

            counter++;
        }
    }

    if (counter == 0)
    {
        printf("\n\tNot found");
    }
};

void c(block *address)
{
    block *aux;
    int counter = 0;

    for (aux = address; aux != NULL; aux = aux->next)
    {
        if (strcmp(aux->alphabeticSecond, "a") == 0 || strcmp(aux->alphabeticSecond, "e") == 0 || strcmp(aux->alphabeticSecond, "i") == 0 || strcmp(aux->alphabeticSecond, "o") == 0 || strcmp(aux->alphabeticSecond, "u") == 0)
        {
            if ((aux->numericFirst + aux->numericSecond + aux->numericThird + aux->numericFourth) % 2 == 0)
            {
                printf("\n\tModelo: %s", aux->model);
                printf("\n\tCor: %s", aux->color);

                counter++;
            }
        }
    }

    if (counter == 0)
    {
        printf("\n\tNot found");
    }
};

block *d(block *address)
{
    block *aux;
    char chassis[SIZE];
    int counter = 0;

    printf("\nChassi: ");
    scanf("%s", chassis);

    for (aux = address; aux != NULL; aux = aux->next)
    {
        if (aux->numericFirst != 0 && aux->numericSecond != 0 && aux->numericThird != 0 && aux->numericFourth)
        {
            if (strcmp(aux->chassis, chassis) == 0)
            {
                printf("Proprietario: ");
                scanf("%s", aux->owner);

                printf("\n\tChanged");

                counter++;
            }
        }
    }

    if (counter == 0)
    {
        printf("\n\tNot found");
    }

    return address;
};

void show(block *address)
{
    block *aux;

    if (address == NULL)
    {
        printf("\n\tNot found");
    }
    else
    {
        for (aux = address; aux != NULL; aux = aux->next)
        {
            printf("\n\tProprietario: %s\n", aux->owner);
            printf("\tCombustivel: %s\n", aux->fuel);
            printf("\tModelo: %s\n", aux->model);
            printf("\tCor: %s\n", aux->color);
            printf("\tChassi: %s\n", aux->chassis);
            printf("\tAno: %d\n", aux->year);
            printf("\tPlaca: %s-%s-%s-", aux->alphabeticFirst, aux->alphabeticSecond, aux->alphabeticThird);
            printf("%d-%d-%d-%d", aux->numericFirst, aux->numericSecond, aux->numericThird, aux->numericFourth);
        }
    }
};