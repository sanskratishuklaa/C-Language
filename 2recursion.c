//write a program in c to print the first 50 natural numbers using recursion;
#include <stdio.h>
int print(int num)
{
    if (num > 50)
    {
        return 0;
    }
    printf("%d ", num);

    print(num + 1);
}

int main()
{
    printf("First 50 natural numbers:\n");
    print(1);
}
