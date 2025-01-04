#include <stdio.h>

void main()
{
    int age;

    printf("enter your age:");
    scanf("%d", &age);
    if (age >= 18) // outer condition
    {

        if (age >= 60) // inner condition
        {
            printf("You are too old to drive");
        }
        else
        {
            printf("you are %d year old\n", age);
            printf("you are eligible to drive a car");
        }
    }

    else
    {
        printf("you are %d  year old \n", age);
        printf("you can't drive");
    }
}