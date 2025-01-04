// find the greatest number among three numbers?

#include <stdio.h>
int main()
{

    int num1;
    int num2;
    int num3;
    printf("enter first number");
    scanf("%d", &num1);

    printf("enter second number");
    scanf("%d", &num2);

    printf("enter third number");
    scanf("%d", &num2);

    if (num1 > num2 && num1 > num3)
    {
        printf("first number is the greatest");
    }
    else if (num2>num3)
    {
        printf("second number is the greatest");
    }
    else
    {
        printf("third number is the greatest");
    }
    return 0;
    
}