//write a program in c to find the division between two numbers;
#include<stdio.h>
int main(){
    int a,b;
    int*p=&a,*q=&b;
    printf("enter a two numbers to find division");
    scanf("%d%d",p,q);
    int c=a/b;
    printf("division of %d and %d is: %d",a,b,c);
}