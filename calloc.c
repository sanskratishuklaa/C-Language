#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n = 5;

    // Allocate memory for the array
    arr = (int *)calloc(n, sizeof(int)); // Using calloc to initialize memory to zero

    // Check if memory allocation was successful
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1; // Exit the program with an error code
    }

    // Prompt the user for input
    printf("Enter %d elements for the array:\n", n);

    // Read values into the array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (arr + i)); // Use array notation for readability: arr[i]
    }

    // Print the values of the array
    printf("Array elements are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", *(arr + i)); // Use array notation for readability: arr[i]
    }

    // Free the allocated memory
    free(arr);

    return 0; // Indicate successful completion
}
