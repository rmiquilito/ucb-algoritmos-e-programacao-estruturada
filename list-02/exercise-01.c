#include <stdio.h>

int main()
{
    int n, melhorVolta = 0;
    float somatorio = 0.0, melhorTempo;
    printf("Digite o número de voltas: ");
    scanf("%d", &n);
    float t[n];
    for (int i = 0; i < n; i++)
    {
        printf("Tempo da volta %d: ", i + 1);
        scanf("%f", &t[i]);
        somatorio += t[i];
    }
    melhorTempo = t[0];
    for (int i = 0; i < n; i++)
    {
        if (melhorTempo > t[i])
        {
            melhorTempo = t[i];
            melhorVolta = i;
        }
    }
    printf("Melhor tempo: %.2f\nVolta em que o melhor tempo ocorreu: %d\nTempo medio das %d voltas: %.2f", melhorTempo, melhorVolta + 1, n, somatorio / n);
    return 0;
}