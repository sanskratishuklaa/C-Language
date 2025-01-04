// Write a program in c to display the first 10 natural numbers;

#include <stdio.h>
int main()
{
    int num;
    printf("enter a first 10 natural number");
    scanf("%d", &num);

    for ( num = 1; num <= 10; num++)
    {

        printf(",%d", num);
    }
}