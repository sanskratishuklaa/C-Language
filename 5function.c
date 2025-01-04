#include <stdio.h>

// Function declarations
int max(int num1, int num2);
int min(int num1, int num2);

int main()
{
    int num1, num2, maximum, minimum;

    printf("Enter any two numbers to find maximum and minimum: ");
    scanf("%d%d", &num1, &num2);

    // Call functions to find maximum and minimum
    maximum = max(num1, num2);
    minimum = min(num1, num2);

    // Print results
    printf("Maximum number is: %d\n", maximum);
    printf("Minimum number is: %d\n", minimum);

    return 0;
}

// Function definitions
int max(int num1, int num2)
{
    return (num1 > num2) ? num1 : num2;
}

int min(int num1, int num2)
{
    return (num1 < num2) ? num1 : num2;
}
