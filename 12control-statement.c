//write a program in c to display the cube of the number up to an integer.

#include<stdio.h>
int main(){
    int i, num;
    printf("enter an integer to find a cube:\n");
    scanf("%d",&num);

    for(i=0;i<=num;i++)
    printf("number-%d:\n and the cube of %d is %d:\n",i,i,(i*i*i));

}