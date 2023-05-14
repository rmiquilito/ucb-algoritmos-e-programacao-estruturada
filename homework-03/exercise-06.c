#include <math.h>
#include <stdio.h>

int main()
{
    float n;

    printf("Numero: ");
    scanf("%f", &n);

    if (fmodf(n, 5) == 0)
    {
        printf("%.2f e divisivel por 5\n", n);
    }
    if (fmodf(n, 3) == 0)
    {
        printf("%.2f e divisivel por 3\n", n);
    }
    if (fmodf(n, 2) == 0)
    {
        printf("%.2f e divisivel por 2\n", n);
    }
    if (fmodf(n, 5) != 0 && fmodf(n, 3) != 0 && fmodf(n, 2) != 0)
    {
        printf("%.2f nao e divisivel por 5, 3 ou 2", n);
    }

    return 0;
}