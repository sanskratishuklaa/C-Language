#include <stdio.h>
int div(int a, int b)
{
    int c;
    c = a / b;
    return c;
}
int main()
{
    int a = div(35, 5);
    printf("%d", a);
}