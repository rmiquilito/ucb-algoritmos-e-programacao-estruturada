#include <stdio.h>

int main()
{
    int a, b;

    if (&a > &b)
    {
        printf("%p\n", &a);
    }
    else
    {
        printf("%p\n", &b);
    }

    return 0;
}