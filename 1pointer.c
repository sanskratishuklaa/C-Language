//write a program in c to find the addition between two numbers;
#include<stdio.h>
int main(){
    int a, b,c;
    int *p= &a,*q=&b;
    printf("enter first number:",a);
    scanf("%d",*p);
    printf("Enter second Number:",b);
    scanf("%d",*q);
    c=a+b;
    printf("addition of two numbers is:%d",c);

}





