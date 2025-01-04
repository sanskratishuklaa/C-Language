// write a program in c to find the maximum and minimum elements in an array.

#include <stdio.h>
int main()
{
    int i, j, n, max, min;
    printf("input a number of element to stored in array");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("element%d:", i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        max = arr[0];
        min = arr[0];

        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("maximum element is %d:\n", max);
    printf("minimum element is %d:\n", min);
}