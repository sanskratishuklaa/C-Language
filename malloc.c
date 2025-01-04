#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n = 10;

    // Allocate memory for the array
    arr = (int *)malloc(n * sizeof(int));

    // Check if memory allocation was successful
    if (arr == NULL) // Corrected: Use '==' to compare with NULL
    {
        printf("Memory allocation failed\n"); // Corrected: Added error message
        return 1; // Exit the program with an error code
    }

    // Prompt user for input
    printf("Enter %d elements for the array:\n", n); // Corrected: Added new line and format specifier

    // Read values into the array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (arr + i));
    }

    // Print the values of the array
    printf("Array elements are:\n"); // Added a prompt for clarity
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", *(arr + i));
    }

    // Free the allocated memory
    free(arr);

    return 0;
}
