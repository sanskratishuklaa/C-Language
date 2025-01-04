// write a c program to display the n terms of odd natural numbers and their sum.

#include <stdio.h>
int main()
{
    int i, n, sum;
    printf("enter the n number of terms");
    scanf("%d", &n);
    printf("enter a odd natural numbers");

    for (i = 0; i <= n; i++)
        printf(",%d", 2 * i - 1);
    sum = 2 * i - 1;
    printf("the odd natural numbers upto %d terms:,%d", n, sum);
}