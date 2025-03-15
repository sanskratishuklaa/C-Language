#include <stdio.h>
int main()
{   
    int num;
    printf("Enter a number to check prime or not: ",num);
    scanf("%d",&num);
    int isprime = 0;
    int counter = 2;
    while (counter < num)
    {
        if (num % counter == 0)
        {
            isprime++;
        }
        counter++;
    }

    if (isprime == 0)
    {
        printf("prime");
    }
    else
    {
        printf("not prime");
    }
}