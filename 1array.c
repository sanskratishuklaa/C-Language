// write a program in c to store elements in an array and print them.

#include <stdio.h>
void main()
{
    int arr[10];
    int i;
    printf("read and print the numbers\n");
    printf("input 10 elements in the array:\n");
    for (i = 0; i <= 10; i++)
    {
        printf("element-%d:", i);
        scanf(" %d", &arr[i]);
    }
    printf("\nelements in array are: ");

    for (i = 0; i < 10; i++)
    {
        printf("%d", arr[i]);
    }
}
