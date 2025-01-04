// c program for addition of two numbers;
# include <stdio.h>
int main()
{
    int num1, num2, sum;
    printf("enter two numbers:\n", num1, num2);
    // take input of two numbers;
    scanf("%d%d", &num1, &num2);
    sum = num1 + num2;
    printf("sum of two numbers is:%d", sum);
    return 0;
}