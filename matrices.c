//display a program in c to create a matrix;
#include<stdio.h>
int main(){
    int i,j,k,row,col;
    printf("enter the number of row");
    scanf("%d",&row);
    printf("enter the number of col");
    scanf("%d",&col);
    int arr1[row][col], arr2[row][col];
    printf("enter elements for matrix arr1\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d",arr1[i][j]);
        }
        printf("\n");
    }
    printf("enter elements for matrix arr2\n");
    for(i=0;i<row;i++){}
}