// Function to find HCF of two numbers using recursion
#include <stdio.h>
int findHCF(int a, int b)
{
    if (b != 0)
        return findHCF(b, a % b);
    else
        return a;
}

int main()
{
    int num1, num2, hcf;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    hcf = findHCF(num1, num2);
    printf("HCF of %d and %d is %d\n", num1, num2, hcf);
}
