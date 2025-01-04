//c program to find cube of a number using function;
#include<stdio.h>
int cube(int num){
    
    return num*num*num;
}
int main(){
    int number,result;
     printf("enter a number to find cube\n");
     scanf("%d",&number);
     result =cube(number);
     printf("cube of a %d is: %d\n",number,result);
     }