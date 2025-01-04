#include <stdio.h>
int main()
{

    int prime = 11;
    int isprime = 0;
    int counter = 8;
    while (counter < prime)
    {
        if (prime % counter == 0)
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