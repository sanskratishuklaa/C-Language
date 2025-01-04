// write a program in c to find factorial of a number using pointer;
#include <stdio.h>
int main()
{
    int fact = 1, a, i;
    int *p = &a, *q = &fact;
    printf("enter a number to find factorial:\n");
    scanf("%d", p);

    for (i = 1; i <= *p; i++)
    {
        *q *= i;
    }

    printf("factorial of %d is: %d\n", *p, *q);
}