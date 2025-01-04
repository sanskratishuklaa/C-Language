// c program to check even or odd using function;
#include <stdio.h>
int even(int num)
{
    return !(num & 1);
}
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d", &num);
    if (even(num))
        printf("the entered number is even");
    else
        printf("the entered number is odd");
}