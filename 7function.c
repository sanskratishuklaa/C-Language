//c program to find a square of a numbers using function;
#include<stdio.h>
int square(int num){
    return num*num;
}
int main(){
    int result,number;
    printf("enter a number to find a square\n");
    scanf("%d",&number);
    result = square(number);
    printf("square of %d is: %d",number,result);
}
