#include <stdio.h>

int main()
{
    char sexo, olhos, cabelo;
    int idade = 0;
    float salario, i = 0, a = 0, b = 0, c = 0, d = 0;

    do
    {
        do
        {
            printf("\n(-1 para finalizar o cadastro) Idade: ");
            scanf("%d", &idade);
        } while ((idade < 10 || idade > 100) && idade != -1);
        if (idade >= 18 && idade <= 35)
        {
            d++;
        }

        if (idade != -1)
        {
            i++;
            do
            {
                printf("\n(m) Masculino\n(f) Feminino\nSexo: ");
                scanf("%s", &sexo);
            } while (sexo != 'm' && sexo != 'f');
            switch (sexo)
            {
            case 'f':
                a++;
            }

            do
            {
                printf("\n(a) Azul\n(v) Verde\n(c) Castanho\n(p) Preto\nCor dos olhos: ");
                scanf("%s", &olhos);
            } while (olhos != 'a' && olhos != 'v' && olhos != 'c' && olhos != 'p');
            switch (olhos)
            {
            case 'c':
                b++;
            }

            do
            {
                printf("\n(l) Loiro\n(c) Castanho\n(p) Preto\n(r) Ruivo\nCor do cabelo: ");
                scanf("%s", &cabelo);
            } while (cabelo != 'l' && cabelo != 'c' && cabelo != 'p' && cabelo != 'r');
            switch (cabelo)
            {
            case 'c':
                c++;
            }

            do
            {
                printf("\nSalário: ");
                scanf("%f", &salario);
            } while (salario < 0);
        }
    } while (idade != -1);

    if (i == 0)
    {
        printf("\nSexo feminino: 0%%");
        printf("\nCor dos olhos castanho: 0%%");
        printf("\nCor do cabelo castanho: 0%%");
        printf("\nIdade entre 18 e 35: 0%%");
    }
    else
    {
        printf("\nSexo feminino: %.2f%%", a / i * 100);
        printf("\nCor dos olhos castanho: %.2f%%", b / i * 100);
        printf("\nCor do cabelo castanho: %.2f%%", c / i * 100);
        printf("\nIdade entre 18 e 35: %.2f%%", d / i * 100);
    }

    return 0;
}