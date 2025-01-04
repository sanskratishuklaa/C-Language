//write a program in c to find the factorial of a number using function;
#include<stdio.h>
int fact(int num){
    int i,factorial=1;
    for(i=1;i<=num;i++)
    {factorial*=i;}
    return factorial;
}
int main(){
    int result, number=4;
    result=fact(number);
    printf("factorial is: %d",result);
}