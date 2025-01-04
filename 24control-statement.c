// write a c program to display a pattern like inverted Pyramid;

#include <stdio.h>
int main()
{
   int i, j, k, row, col;
   printf("enter a row and a col");
   scanf("%d,%d", &row, &col);

   {
      for (i = row; i >= 1; i--)
      {
         for (j = 1; j <= row - i; j++)
            printf(" ");
         {
            for (k = 1; k <= 2 * i - 1; k++)
               printf("*");
            printf("\n");
         }
      }
   }
}