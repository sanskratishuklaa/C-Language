// write a program in c to find the sum of all elements of the array.

#include <stdio.h>
int main()
{
    int i, n, sum = 0;

    printf("input the number of elements to be stored in the array\n");
    scanf("%d", &n);

    int arr[n];

    printf("enter the element in the array");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i <= n; i++)
    {
        printf("sum of all elements that stored in the array is %d\n", sum);
        sum += arr[i];
    }
    
}