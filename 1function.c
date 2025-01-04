#include <stdio.h>
int multi()
{
    int a, b, c;
    printf("enter a two numbers for multiplication\n");
    scanf("%d%d", &a, &b);
    c = a * b;
    printf("=%d\n", c);
}
int main()
{
    for (int i = 1; i < 10; i++)
    {
        multi();
        
        
    }
}