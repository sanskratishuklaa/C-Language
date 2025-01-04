// c program to swap a numbers using function;
#include <stdio.h>
int swap(int a, int b)
{
    a, b;
    int c;
    c = b;
    b = a;
    a = c;
    printf("enter a number for swap:%d,%d", a, b);
}
int main()
{
    swap(7,9);
}
