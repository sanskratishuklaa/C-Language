#include <stdio.h>
int main()
{
    int i, j, rows, col;
    printf("enter a number of rows that you want:");
    scanf("%d", &rows);
    printf("enter a number of columns that you want:");
    scanf("%d", &col);

    int arr1[rows][col];

    printf("enter elements for first matrix:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < col; j++)
        {

            scanf("%d", &arr1[i][j]);
        }
    }
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < col; j++)
        {

            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    int arr2[rows][col];

    printf("enter elements for second matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf(" \n");
    }

    printf("addition of both matrix is:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < col; j++)
        {

            printf("%d ", arr1[i][j] + arr2[i][j]);
        }
        printf("\n");
    }
}
