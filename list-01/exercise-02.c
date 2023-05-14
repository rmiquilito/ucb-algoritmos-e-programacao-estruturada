#include <stdio.h>
#include <math.h>

int main()
{
    float x1, y1, x2, y2, raiz, q1, q2;
    printf("Valor racional de um ponto no eixo X: ");
    scanf("%f", &x1);
    printf("Valor racional do mesmo ponto no eixo Y: ");
    scanf("%f", &y1);
    printf("Valor racional de um outro ponto no eixo X: ");
    scanf("%f", &x2);
    printf("Valor racional do ultimo ponto no eixo Y: ");
    scanf("%f", &y2);
    q1 = pow(x2 - x1, 2);
    q2 = pow(y2 - y1, 2);
    raiz = sqrt(q1 + q2);
    printf("Distancia entre os pontos: %.4f\n", raiz);
    return 0;
}