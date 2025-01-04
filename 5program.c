//ept two integers and check whether they are equal or not.

#include<stdio.h>
int main(){

    int int1;
    int int2;

    printf("enter first integer");
    scanf("%d",&int1);

    printf("enter second integer");
    scanf("%d",&int2);

    if(int1==int2)
    {
        printf("two integers are equal");
    }
    else 
    {
        printf("two integers are not equal");
    }

}