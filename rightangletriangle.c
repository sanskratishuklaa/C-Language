//write a c program to display a inverted Right-Angle Triangle in a Start Pattern;

#include<stdio.h>
int main(){
    int i,rows;
    printf("enter a number of rows");
    scanf("%d",&rows);


    {for(i=rows;i>=1;i--)
     {for(int j=1;j<=i;j++)
     printf("*");
     printf("\n");}

    
    
    }

}
