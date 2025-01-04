#include <iostream>
using namespace std;
int multi()
{
    int a, b, c;
    printf("enter two numbers for multipliation\n");
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