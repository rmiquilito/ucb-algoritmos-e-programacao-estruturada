#include <stdio.h>

int main()
{
    int quantidadeTimes = 0, n = 0, quantidadeJogadores = 0, somatorioIdades = 0, quantidadeJogadoresAcima25 = 0, quantidadeJogadoresAbaixo18 = 0, quantidadeJogadoresAcima80 = 0;
    float somatorioPesosAcima25 = 0.0, mediaIdades = 0.0, porcentagemAcima80 = 0.0;
    do
    {
        printf("Quantidade de times: ");
        scanf("%d", &quantidadeTimes);
        if (quantidadeTimes < 3 || quantidadeTimes > 9)
        {
            printf("Quantidade invalida\n");
        }
    } while (quantidadeTimes < 3 || quantidadeTimes > 9);

    for (int i = 0; i < quantidadeTimes; i++)
    {
        do
        {
            printf("Time %d\n", i + 1);
            printf("Quantidade de jogadores do time %d: ", i + 1);
            scanf("%d", &n);
            if (n < 6 || n > 11)
            {
                printf("Quantidade invalida\n");
            }
        } while (n < 6 || n > 11);
        quantidadeJogadores += n;

        int idade[n];
        float peso[n];

        somatorioIdades = 0;
        somatorioPesosAcima25 = 0.0;
        quantidadeJogadoresAcima25 = 0;

        for (int j = 0; j < n; j++)
        {
            printf("Idade do jogador %d: ", j + 1);
            scanf("%d", &idade[j]);
            somatorioIdades += idade[j];

            printf("Peso do jogador %d: ", j + 1);
            scanf("%f", &peso[j]);

            if (idade[j] > 25)
            {
                quantidadeJogadoresAcima25++;
                somatorioPesosAcima25 += peso[j];
            }
            if (idade[j] < 18)
            {
                quantidadeJogadoresAbaixo18++;
            }
            if (peso[j] > 80.0)
            {
                quantidadeJogadoresAcima80++;
            }
        }

        mediaIdades = somatorioIdades / n;
        printf("Media das idades dos jogadores do time %d: %.2f\n", i + 1, mediaIdades);
        printf("Media do peso dos jogadores acima de 25 anos do time %d: %.2f\n", i + 1, somatorioPesosAcima25 / quantidadeJogadoresAcima25);
    }

    printf("Quantidade de jogadores menores de idade: %d\n", quantidadeJogadoresAbaixo18);
    printf("Quantidade de jogadores com mais de 80 quilos: %d\n", quantidadeJogadoresAcima80);
    porcentagemAcima80 = quantidadeJogadoresAcima80 * 100 / quantidadeJogadores;
    printf("Porcentagem de jogadores com mais de 80 quilos: %.2f%%", porcentagemAcima80);

    return 0;
}