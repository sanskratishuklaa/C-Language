// C program to check whether a number is positive, negative or zero //

#include<stdio.h>
int main(){


    int num;
    
    printf("Enter a number");
    scanf("%d",&num);

    if(num>0)
    {
        printf("Number is positive");
    }
    else if(num==0)
    {
        printf("Number is equal to zero");
    }

else
{
    printf("Number is negative");

}
}