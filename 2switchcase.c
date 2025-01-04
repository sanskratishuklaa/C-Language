// switchcase program to make calculator:

#include <stdio.h>
char main()
{

    char operation;
    int a;
    int b;

    printf("enter a operation you want to print");
    scanf("%c", &operation);
    printf("enter a number you want to print");
    scanf("%d", &a);
    printf("enter a number you want to print");
    scanf("%d", &b);

    switch (operation)

    {
    case '+':
        printf("you have entered %d this is addition", a + b);
        break;

    case '-':
        printf("you have entered %d this is subtraction", a - b);
        break;

    case '*':
        printf("you have entered %d this is multiplication", a * b);
        break;

    case '%':
        printf("you have entered %d this is modulus", a % b);
        break;

    case '/':
        printf("you have entered %d this is division", a/b);

    default:
        break;
    }
}