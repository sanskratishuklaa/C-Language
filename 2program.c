// c program to check whether a number is divisible by 5 and 11 or not


#include<stdio.h>
int main(){

int num;
printf("enter a number");
scanf("%d",&num);

if(num/5 && num/11)
{
  printf("number is divisible by 5 and 11");
}
else{
    printf("number is not divisible by 5 and 11");
}
}