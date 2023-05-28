#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 25
#define MAX 3

void create();
void edit();
void delete();
void search();
void print();
void save();
void restore();
int id();
void email();

typedef struct data
{
    int id;
    char name[SIZE];
    char email[SIZE];
    char sex[SIZE];
    char address[SIZE];
    double height;
    int vaccine;
} user;

user registry[MAX];
user backup[MAX];
int amount;
int *i = &amount;
char male[] = "Masculino";
char female[] = "Feminino";
char undefined[] = "Indiferente";

int main()
{
    char option;

    do
    {
        printf("\n[0] Finalizar\n");
        printf("[1] Registrar\n");
        printf("[2] Editar\n");
        printf("[3] Excluir\n");
        printf("[4] Buscar\n");
        printf("[5] Exibir\n");
        printf("[6] Guardar\n");
        printf("[7] Restaurar\n");

        printf("Terminal: ");
        scanf("%s", &option);

        switch (option)
        {
        case '0':
            printf("\n\tFinalizado\n");
            break;

        case '1':
            create();
            amount++;
            break;

        case '2':
            edit();
            break;

        case '3':
            delete ();
            break;

        case '4':
            search();
            break;

        case '5':
            print();
            break;

        case '6':
            save();
            break;

        case '7':
            restore();
            break;

        default:
            printf("\n\tOpcao invalida\n");
            break;
        }
    } while (option != '0');

    return 0;
}

void create()
{
    registry[*i].id = id();

    printf("\nNome: ");
    scanf("%s", registry[*i].name);

    email();

    do
    {
        printf("Sexo: ");
        scanf("%s", registry[*i].sex);

        if (strcmp(male, registry[*i].sex) != 0 && strcmp(female, registry[*i].sex) != 0 && strcmp(undefined, registry[*i].sex) != 0)
        {
            printf("\n\tValor invalido\n\n");
        }
    } while (strcmp(male, registry[*i].sex) != 0 && strcmp(female, registry[*i].sex) != 0 && strcmp(undefined, registry[*i].sex) != 0);

    printf("Endereco: ");
    scanf("%s", registry[*i].address);

    do
    {
        printf("Altura: ");
        scanf("%lf", &registry[*i].height);

        if (registry[*i].height < 1 || registry[*i].height > 2)
        {
            printf("\n\tValor invalido\n\n");
        }
    } while (registry[*i].height < 1 || registry[*i].height > 2);

    do
    {
        printf("Vacina: ");
        scanf("%d", &registry[*i].vaccine);

        if (registry[*i].vaccine != 0 && registry[*i].vaccine != 1)
        {
            printf("\n\tValor invalido\n\n");
        }
    } while (registry[*i].vaccine != 0 && registry[*i].vaccine != 1);
};

void edit()
{
    int aux;

    printf("\nID: ");
    scanf("%d", &aux);

    for (int j = 0; j < amount; j++)
    {
        if (aux == registry[j].id)
        {
            printf("\nNovo nome: ");
            scanf("%s", registry[j].name);

            printf("Novo e-mail: ");
            scanf("%s", registry[j].email);

            do
            {
                printf("Novo sexo: ");
                scanf("%s", registry[j].sex);

                if (strcmp(male, registry[j].sex) != 0 && strcmp(female, registry[j].sex) != 0 && strcmp(undefined, registry[j].sex) != 0)
                {
                    printf("\n\tValor invalido\n\n");
                }
            } while (strcmp(male, registry[j].sex) != 0 && strcmp(female, registry[j].sex) != 0 && strcmp(undefined, registry[j].sex) != 0);

            printf("Novo endereco: ");
            scanf("%s", registry[j].address);

            do
            {
                printf("Nova altura: ");
                scanf("%lf", &registry[j].height);

                if (registry[j].height < 1 || registry[j].height > 2)
                {
                    printf("\n\tValor invalido\n\n");
                }
            } while (registry[j].height < 1 || registry[j].height > 2);

            do
            {
                printf("Nova vacina: ");
                scanf("%d", &registry[j].vaccine);

                if (registry[j].vaccine != 0 && registry[j].vaccine != 1)
                {
                    printf("\n\tValor invalido\n\n");
                }
            } while (registry[j].vaccine != 0 && registry[j].vaccine != 1);
        }
    }
};

void delete()
{
    int aux;

    printf("\nID: ");
    scanf("%d", &aux);

    for (int j = 0; j < MAX; j++)
    {
        if (aux == registry[j].id)
        {
            for (int k = j; k >= j && k < MAX; k++)
            {
                registry[k] = registry[k + 1];
            }
            amount--;
        }
    }
};

void search()
{
    char aux[SIZE];

    printf("\nE-mail: ");
    scanf("%s", aux);

    for (int j = 0; j < amount; j++)
    {
        if (strcmp(aux, registry[j].email) == 0)
        {
            printf("\nID registrado: %d\n", registry[j].id);
            printf("Nome registrado: %s\n", registry[j].name);
            printf("E-mail registrado: %s\n", registry[j].email);
            printf("Sexo registrado: %s\n", registry[j].sex);
            printf("Endereco registrado: %s\n", registry[j].address);
            printf("Altura registrada: %lf\n", registry[j].height);
            printf("Vacina registrada: %d\n", registry[j].vaccine);
        }
    }
};

void print()
{
    for (int j = 0; j < amount; j++)
    {
        printf("\nID registrado: %d\n", registry[j].id);
        printf("Nome registrado: %s\n", registry[j].name);
        printf("E-mail registrado: %s\n", registry[j].email);
        printf("Sexo registrado: %s\n", registry[j].sex);
        printf("Endereco registrado: %s\n", registry[j].address);
        printf("Altura registrada: %lf\n", registry[j].height);
        printf("Vacina registrada: %d\n", registry[j].vaccine);
    }
};

void save()
{
    for (int j = 0; j < MAX; j++)
    {
        backup[j] = registry[j];
    }
};

void restore()
{
    for (int j = 0; j < MAX; j++)
    {
        registry[j] = backup[j];
    }
};

int id()
{
    int escape;
    int id;

    do
    {
        id = rand() % (MAX - 1 + 1) + 1;
        for (int j = 0; j < amount; j++)
        {
            if (id == registry[j].id)
            {
                escape = 1;
                break;
            }
            else
            {
                escape = 0;
            }
        }
    } while (escape == 1);

    return id;
};

void email()
{
    int escape;

    do
    {
        printf("E-mail: ");
        scanf("%s", registry[*i].email);
        int size = strlen(registry[*i].email);

        for (int j = 0; j < size; j++)
        {
            if ('@' == registry[*i].email[j])
            {
                escape = 0;
            }
            else
            {
                escape = 1;
            }
        }

        if (escape == 1)
        {
            printf("\n\tValor invalido\n\n");
        }
    } while (escape == 1);
}