//Write a program using switch case for printing you are eligible for voting or not.
//If age is equal to 18 then you are not eligible to attend cse examination.
//If age is greater than 24 then you are eligible to attend cse examination.

#include<stdio.h>
void main(){

    int age;
    printf("tell me your age");
    scanf("%d",&age);
    
    switch(age)
    {
        case 1:
        printf("enter your age is %d then you are eligible to attend cse examination",age);
        break;

        case 2:
        printf("enter your age is %d then you are not eligible to attend cse examination",age);
        break;
        default:
}}