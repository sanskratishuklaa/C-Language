//write a program in c to find the second largest element in the array.
#include <stdio.h>
int main()
{
    int i, j, n, lrg1, lrg2, temp;
    printf("enter a size of array");
    scanf("%d", &n);
    int array[n];
    for (i = 0; i < n; i++)
    {
        printf("element is %d:", i);
        scanf("%d", &array[i]);
    }
    for (i = 0; i < n - 1; i++)

    {
        for (j = 0; j < n - i - 1; j++)
        {

            if (array[j] > array[j + 1])
            {

                temp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\n", array[i]);
    }
    
}