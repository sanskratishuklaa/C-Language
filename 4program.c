//c program to check Leap Year

#include<stdio.h>
int main(){

    int year;
    
    printf("enter a year");
    scanf("%d",&year);

    if(year%4==0){
        printf("entered year is a leap year");
    }

    else{
        printf("not a leap year");
    }
    
}