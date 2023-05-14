#include <stdio.h>

float celsiusFahrenheit(float a);
float celsiusKelvin(float a);
float celsiusReaumur(float a);
float fahrenheitCelsius(float a);
float kelvinCelsius(float a);
float kelvinRankine(float a);
float reaumurCelsius(float a);
float rankineKelvin(float a);

int main()
{
    int e;
    float t1, t2;
    printf("\n(1) Celsius para Fahrenheit\n(2) Fahrenheit para Celsius\n(3) Celsius para Kelvin\n(4) Kelvin para Celsius\n(5) Celsius para Reaumur\n(6) Reaumur para Celsius\n(7) Kelvin para Rankine\n(8) Rankine para Kelvin");
    printf("\nFuncao de conversao: ");
    scanf("%d", &e);

    printf("Temperatura inicial: ");
    scanf("%f", &t1);

    switch (e)
    {
    case 1:
        t2 = celsiusFahrenheit(t1);
        break;
    case 2:
        t2 = fahrenheitCelsius(t1);
        break;
    case 3:
        t2 = celsiusKelvin(t1);
        break;
    case 4:
        t2 = kelvinCelsius(t1);
        break;
    case 5:
        t2 = celsiusReaumur(t1);
        break;
    case 6:
        t2 = reaumurCelsius(t1);
        break;
    case 7:
        t2 = kelvinRankine(t1);
        break;
    case 8:
        t2 = rankineKelvin(t1);
        break;
    }

    printf("Temperatura convertida: %.2f", t2);

    return 0;
}

float celsiusFahrenheit(float a)
{
    return 9 * a / 5 + 32;
}

float celsiusKelvin(float a)
{
    return a + 273.15;
}

float celsiusReaumur(float a)
{
    return a * 4 / 5;
}

float fahrenheitCelsius(float a)
{
    return (a - 32) * 5 / 9;
}

float kelvinCelsius(float a)
{
    return a - 273.15;
}

float kelvinRankine(float a)
{
    return a * 1.8;
}

float reaumurCelsius(float a)
{
    return a * 5 / 4;
}

float rankineKelvin(float a)
{
    return a / 1.8;
}