//write a program in c to store roll numbers and marks obtained by 4students side by side in a matrix; 
#include<stdio.h>
 int main(){
    int i,j,k,row,col,stu1,stu2,stu3,stu4,rollno;
    printf("Enter the no. of row for 4students side by side\n ");
    scanf("%d",&row);
    printf("Enter the no. of column for 4students side by side\n ");
    scanf("%d",&col);
    int arr1[row][col];
    printf("Enter the roll no. of all 4students in arr1: \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    int arr2[row][col];
    printf("Enter the marks obtained by the all 4students:\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    printf("all 4students marks are determined by roll no.wise: ");
    printf("%d ",arr1[i][j]=arr2[i][j]);

}