#include <stdio.h>
int main()
{

    int num1 = 6;
    int num2 = 9;
    printf("enter first number");
    scanf("%d", &num1);

    printf("enter second number");

    scanf("%d", &num2);

    if (num1 <= num2)
    {
        printf("first number is lesser");
    }

    else
    {
        printf("second number is lesser");
    }

    return 0;
}
