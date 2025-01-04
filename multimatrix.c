#include <stdio.h>

int main()
{
    int i, j, k, row, col;

    // Input dimensions of the matrices
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);

    int arr1[row][col], arr2[row][col], arr3[row][col];

    // Input elements for matrix arr1
    printf("Enter elements for matrix arr1:\n");
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
        printf("\n");
    }

    // Input elements for matrix arr2
    printf("Enter elements for matrix arr2:\n");
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
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    // Initialize matrix arr3 with zeros (important step)
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            arr3[i][j] = 0;
        }
    }

    // Perform matrix multiplication: arr3 = arr1 * arr2
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            for (k = 0; k < col; k++)
            {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    // Print the resultant matrix arr3
    printf("Resultant matrix arr3:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
