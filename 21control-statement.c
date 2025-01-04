//write a program in c to display a pattern like a diamond with using numbers;

#include<stdio.h>
int main(){
    int n,i,j,k,r;
    printf("enter a number of rows");
    scanf("%d",&r);
    {
        for(i=1;i<=r;i++)
        {
            for(j=1;j<=r-i;j++)
            printf(" ");
            {
                for(k=1;k<=2*i-1;k++)
                if(k<=i)
                {
                    printf("%d",k);}
                else
                {printf("%d",2*i-k);}
                
         {
            for(i=r-1;i>=1;i--)
            {
                for(j=1;j<=r-i;j++)
                printf(" ");
                {
                    for(k=1;k<=2*i-1;k++)
                    if(k<=i)
                    {
                        printf("%d",k);
                    }
                    else{
                   { printf("%d",2*i-k);
                    printf("\n");}
                    
                }
            }
         }

                
          }
        }
    }
}}