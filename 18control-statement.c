//write a program in c to make such a pattern like a right angle triangle with the number increased by 1.

#include<stdio.h>
int main(){
    int i,j,rows,n=1;
    printf("enter a number of rows");
    scanf("%d",&rows);

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        if(i==3)
        break;
        // printf("*");
        else
        printf("*");

        printf("\n");


        
    }

}