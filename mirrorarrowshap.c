//write a c program to display a mirrored arrow-Shaped Star Pattern;

#include<stdio.h>
int main(){
    int i,j,k,rows;
    printf("enter a number of rows");

    {for(i=1;i<=rows;i++)
     {for(j=1;j<=i;j++)
     printf(" ");
     {
        for(k=1;k<=i;k++)
        printf("*");
        printf("\n");
        {
            for(i=rows;i>=1;i--)
            {
                for(j=1;j<=i;j++)
                printf(" ");
                {
                    for(k=1;k<=i;k++)
                    printf("*");
                    printf("\n");
                }

            }
        }
     }
     
     
     
     
     
     }
    
    
    
    
    }
}