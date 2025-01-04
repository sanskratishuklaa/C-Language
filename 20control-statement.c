// write a program in c to display a pattern like a diamond.

#include <stdio.h>
int main()
{
    int n,i,j,k,r, c;
    printf("enter the number of rows");
    scanf("%d", &r);

    {
        for (i = 1; i <= r; i++)
        {
            for (j = 1; j <= r-i; j++)
                printf(" ");
            {
                for (k = 1; k<=2*i - 1; k++)
                    printf("*");
                printf("\n");
            }
        }
    }

    {
        for (i = r - 1; i >= 1; i--)

        {
            for (j = 1; j <=r-i; j++)
                printf(" ");
            {
                for (k = 1; k <= 2 * i - 1; k++)
                    printf("*");
                printf("\n");
            }
        }
    }
}
