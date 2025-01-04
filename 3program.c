//c program check whether a number is even or odd or zero

#include<stdio.h>
int main(){

    int num1;

    printf("enter a number to check even or odd");
    scanf("%d",&num1);

    if(num1%2==0)
    {

        if (num1==0){
            printf("given number is zero");
        }
        else
        {
            printf("number is not zero and a even");
        }
        
        printf("number is even");
       
    }

    else 
    {
        printf("number is odd"); 
    }
    return 0;
}