#include <stdio.h>

int main()
{
    int a = 5, b = 6;

    a = b + a;

    b = a - b;

    a = a - b;

    printf("%d%d", a, b);
}