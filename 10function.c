//c program to swap a numbers without using third variable;
#include<stdio.h>
int swap(int a, int b){
    a=a+b;
    b=a-b;
    a=a-b;
    printf("enter a number for swap:%d,%d",a,b);
}
int main(){
    swap(10,15);
}