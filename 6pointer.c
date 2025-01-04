// write a program in c to the swap of a number using pointers.
#include <stdio.h>
int swap(int *b, int *c)
{
    int a;
    a = *b;
    *b = *c;
    *c = a;
}
int main()
{

    int num1, num2;
    int *p = &num1, *q = &num2;

    printf("enter a value of num1:");
    scanf("%d", p);
    printf("enter a value of num2:");
    scanf("%d", q);
    printf("before swapping : num1 is %d and num2 is %d\n", num1, num2);
    swap(&num1, &num2);
    printf("after swapping : num1 is %d and num2 is %d\n", num1, num2);
}
