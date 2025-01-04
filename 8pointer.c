// write a program in c to determine whether the person is eligible to caste his/her own vote using pointer;
#include <stdio.h>
int main()
{
    int age;
    int *p = &age;
    printf("enter a age:\n");
    scanf("%d",p);
    if (age >= 18)
    {
        printf("he is eligible to caste a vote");
    }
    else
    {
        printf("he is not eligible to caste a vote");
    }
}