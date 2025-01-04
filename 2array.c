 //write a program in c to read n number of values in an array and display them in reverse order.

#include<stdio.h>
int main(){
    int i,n,arr[10];
    printf("enter n number of values in array and display them in reverse order\n");
    printf("input the number of elements to store in the array");
    scanf("%d",&n);

        printf("input %d number of elements in the array:\n",n);
        for(i=0;i<n;i++)
        {
            printf("element-%d:",i);
            scanf("%d",&arr[i]);
        }
        printf("the value stored in the array are:\n");
        for(i=0;i<n;i++)
        {
            printf(" %d",arr[i]);
        }
        for(i=n-1;i>=0;i--)
        {
            printf(" %d",arr[i]);
        }
        printf("\n");


}