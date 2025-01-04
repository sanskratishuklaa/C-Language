// POINTER:- a pointer is defined as a derived data type that can store the address of other c variables or a memory location.
// We can access and manipulate the data stored in that memory location using pointers.
#include <stdio.h>
int main()
{
    int a, b;
    int *p = &a, *q= &b;
    printf("enter two numbers for add",a,b);
    scanf("%d%d",p,q);
    int c=a+b;
    printf("addition of %d and %d is: %d",a,b,c);
}