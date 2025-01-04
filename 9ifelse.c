//c program to check a person is eligible to enter in the pub.

#include<stdio.h>
int main(){

    int age;
    printf("enter a person age");
    scanf("%d",&age);

    if(age>=20)
    {
        printf("person is eligible to enter in the pub");
    }

    else{
        printf("person is not eligible to enter in the pub");
    }
}