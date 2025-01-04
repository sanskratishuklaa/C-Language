//Write a C program to find the largest of three numbers.

#include<stdio.h>
int main(){

    int num1;
    int num2;
    int num3;

    printf("enter first numbers");
    scanf("%d",&num1);

    printf("enter second number");
    scanf("%d",&num2);

    printf("enter third number");
    scanf("%d", &num3);

    if(num1>num2 && num1>num3)
    {
        printf("first number is largest");
    }
    else if(num2>num3)
    {
        printf("second number is largest");
    }
    
    else
    {
        printf("third number is largest");
    }
}