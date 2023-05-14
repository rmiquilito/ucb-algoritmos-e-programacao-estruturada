#include <math.h>
#include <stdio.h>

int main()
{
    float n, raiz, potencia;

    printf("Numero: ");
    scanf("%f", &n);

    if (n > 0)
    {
        raiz = sqrt(n);
        potencia = pow(n, 2);

        printf("%.2f ao quadrado: %.2f\nraiz de %.2f: %.2f", n, potencia, n, raiz);
    }
    else
    {
        printf("%.2f nao e positivo", n);
    }

    return 0;
}