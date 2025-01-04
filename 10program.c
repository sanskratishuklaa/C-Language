//admission to a professional course based on the following criteria

#include<stdio.h>
int main(){

    int marks1;
    int marks2;
    printf("enter a mathematics marks");
    scanf("%d",&marks1);
    
    printf("enter a physics marks");
    scanf("%d",&marks2);
    
    if(marks1>=79 && marks2>=55)
    {
        printf("then candidate is eligible to take admission");
    }

    else{
        printf("candidate is not eligible to take admission");
    }
    
    
    
    
    
    
    }