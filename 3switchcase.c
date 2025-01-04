//C program to print number of days in a month using switch case

#include<stdio.h>
int main(){

    int month;
    printf("enter a month you want to print");
    scanf("%d",&month);
    
    switch(month)
    {
        case 1:
        printf("enter a month %d this is january",month);
        break;

        case 2:
        printf("enter a month %d this is february",month);
        break;

        case 3:
        printf("enter a month %d this is march",month);
        break;

        case 4:
        printf("enter a month %d this is april",month);
        break;

        case 5:
        printf("enter a month %d this is may",month);
        break;

        case 6:
        printf("enter a month %d this is june",month);
        break;

        case 7:
        printf("enter a month %d this is july",month);
        break;

        case 8:
        printf("enter a month %d this is august",month);
        break;

        case 9:
        printf("enter a month %d this is september",month);
        break;

        case 10:
        printf("enter a month %d this is october",month);
        break;

        case 11:
        printf("enter a month %d this is november",month); 
        break;  
        
        case 12:
        printf("enter a month %d this is december",month);
        break;
        
         }
}