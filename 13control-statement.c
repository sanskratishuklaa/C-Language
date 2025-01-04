//write a program in c to display the multiplication table for a given integer.

#include<stdio.h>
int main(){
    int i,num;
    printf("enter a integer for multiplication of table");
    scanf("%d",&num);

    for(i=1;i<=10;i++)
    printf("num:%d\n",num*i);
}