// write a program in c to swap an array by using pointer;
#include <stdio.h>
int swap(int *arr, int i, int j)
{
    int temp;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
int main()
{
    int i, j, n;
    printf("enter a size of an array");
    scanf("%d", &n);
    int arr[n];
    printf("enter elements in array");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr, j, j + 1);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", *(arr + i));
    }
}