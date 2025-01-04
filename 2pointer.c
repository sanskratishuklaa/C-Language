//write a program in c to find the subtraction between two numbers;
#include<stdio.h>
int main(){
    int a,b;
    int *p=&a,*q=&b;

    printf("enter two numbers for subtraction",a,b);
    scanf("%d%d",p,q);
    int c=a-b;
    printf("subtraction of %d and %d is:%d",a,b,c);
}