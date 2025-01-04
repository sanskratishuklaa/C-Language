//write a program in c determine whether he is eligible to cast his/her own vote.

#include<stdio.h>
int main(){

    int age;
    printf("enter a age");
    scanf("%d",&age);

    if(age>=18)
    {
        printf("then he is eligible to cast a vote");
    }

    else 
    {
        printf("he is not eligible to cast a vote");
    }
}