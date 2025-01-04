// read 10 numbers and find their sum and average;

#include <stdio.h>
void main()
{
    int i, n, sum = 0;
    float avg;
    printf("enter the 10 numbers:\n");

    for (i = 1; i <= 10; i++)
    {
        printf("number-%d\n", i);
        sum = sum + i;
    }
        avg = sum / 10.0;
        printf("sum of 10 number is:%d\n", sum);
        printf("The average is %f\n", avg);
    
}