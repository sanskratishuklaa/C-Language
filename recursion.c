// write a program in c to find the sum of the series 1! using the function.

// RECURSION:- Recursion is the process of a function calling itself repeatedly till the given condition is satisfied.
 //A function that calls itself directly or indirectly is called a recursive function.
  //And such kind of function calls are called recursive calls.
#include <stdio.h>
int fact(int num)
{

    if (num < 1)
    {
        return 1;
    }

   return num *fact(num - 1);
}
int main()
{
  int   result = fact(5);


  printf("%d",result);
}