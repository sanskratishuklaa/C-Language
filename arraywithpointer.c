#include <stdio.h>
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter elments in array");
        scanf("%d", arr + i);
    }
    for(int i=0;i<5;i++)
        {
            printf("%d",*(arr+i));
        }
    
}