// write a program in c to display a pattern like a right angle triangle using an asterisk.

#include <stdio.h>
int main()
{
    int num = 5;
    int i;
    printf("enter a number to display a pattern");
    scanf("%d", &num);

    for (i = 0; i <= num; i++)
    {

        // i = 02
        // j=
        for (int j = 0; j <= i; j++)
        {
            if (i==j||i==0||j==num ||i==num-1)
            {
                printf("*");
            }
            else
            {

                printf("");
            }
        }
        printf("\n");
    }
}