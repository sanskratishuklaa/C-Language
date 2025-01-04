// person in centimeters and categorize the person according to their height.

#include<stdio.h>
int main(){

    int perheight;
    printf("enter a person height");
    scanf("%d",&perheight);

    if(perheight>=180)
    {
        printf("then a person height is taller");
    }   
    
    else if(perheight>=150)
    {
        printf("then a person height is normal");
    }

    else
    {
        printf("then a person height is dwarf");
    }
}