//write a program in c to find multiplication between two numbers using pointer;
#include<stdio.h>
int main(){
    int a,b;
    int *p=&a, *q=&b;
    printf("enter two numbers to find multiplication:",a,b);
    scanf("%d%d",p,q);
    int c=a*b;
    printf("multiplication of %d and %d is: %d",a,b,c);
    }