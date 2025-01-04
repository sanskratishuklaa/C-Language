// c program to check whether two matrices are equal or not;
#include <stdio.h>
int main()
{
    int i, j, row, col, isequal;
    printf("enter a number of rows");
    scanf("%d", &row);
    printf("enter a number of columns");
    scanf("%d",&col);
    int arr1[row][col],arr2[row][col],arr3[row][col];
    printf("enter a number of elements for matrix arr1:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    printf("enter a number of elements for matrix arr2:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    isequal=1;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
          if(arr1[i][j]!=arr2[i][j])
          {
            isequal=0;
            break;
          }
        }
    }
    if(isequal==1)
    {
        printf("matrix arr1 is equal to matrix arr2;\n");
    }
    else
    {
        printf("matrix arr1 is not equal to matrix arr2;\n");
    }


    
    
    
    
    
    }

