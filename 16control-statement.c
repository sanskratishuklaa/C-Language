// write a c program to display a pattern like a right angle triangle with a number.

#include <stdio.h>
int main()
{
    int i, rows, j;
    printf("enter a number to display a pattern");
    scanf("%d", &rows);

    for (i = 5; i >= 0; i--)
    {
        for (j = 0; j <= i; j++)
        {
            if (i == 0 || i == j || j==0 || i == rows)
            {
                printf("*");
            }
            else
                printf(" ");

            // printf("%d",i);
            // printf("%d", j);
        }
        printf("\n");
    }
}