//Write a program in c to display n terms of natural numbers and their sum;

#include<stdio.h>
int main(){
    int i,n,sum;
    printf("enter n terms of natural number and their sum");
    scanf("%d",&n);

    for(i=1;i<=n;i++)

    {
    printf("%d\n",i);
    sum=sum+i;
printf("sum is %d\n",sum);
    }
    printf(" sum of n terms is %d",sum);

}