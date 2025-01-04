//write a program in c to check whether a number is a prime number or not using the function.
#include<stdio.h>
int isprime(int num){
    if(num<=1){
        return 0;
    }

for(int i=2;i<num;i++)
{
    if(num%i==0){
        return 1;
}
}}
int main(){
    int num;
    printf("enter a number to check prime or not\n");
    scanf("%d",&num);
    if(isprime(num)){
        printf("%d is a prime number\n",num);
    }
    else{
        printf("%d is not a prime number\n",num);
    }
}
