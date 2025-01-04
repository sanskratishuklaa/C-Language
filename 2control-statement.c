#include <stdio.h>
int main()
{
    int odd = 0;
    int even = 0;
    int counter = 1;
    while (counter < 100)
    {
        if (counter % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        counter++;
    }

    printf("even is :%d\n", even);
    printf("odd is :%d", odd);
}