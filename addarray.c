#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("enter the number of elements to stored in array");
    scanf("%d", &n);
    int arr1[n];
    int arr2[n];
    printf("enter two integers");
    for (i = 0; i < n; i++)
    {
        scanf("%d%d", &arr1[i], &arr2[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("%d,",arr1[i]+arr2[i]);
    }
}