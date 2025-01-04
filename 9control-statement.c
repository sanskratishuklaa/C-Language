//Write a c program to compute the sum of the first 10 natural numbers.

#include<stdio.h>
int main(){
    int i,sum=0,num;
        printf("enter a sum of first 10 natural number\n");
    scanf("%d",&sum);

    for(i=1;i<=10;i++){
    sum+=i;
    printf("%d\n",i);
    printf("the sum is %d",sum);}
}