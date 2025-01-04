#include <stdio.h>
int main()
{
    int i, j, row, col;
    printf("enter a number of rows you want");
    scanf("%d", &row);
    printf("enter a number of columns you want");
    scanf("%d", &col);

    int arr1[row][col];
    printf("enter elements for first matrix");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf(" \n");
    }
    int arr2[row][col];
    printf("enter elements for second matrix");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d", arr1[i][j]);
        }
        printf(" \n");
    }
    printf("subtraction of both matrix is:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", arr1[i][j] - arr2[i][j]);
        }
        printf(" \n");
    }
}