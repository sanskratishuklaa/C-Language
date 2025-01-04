// c program for calculating factorial;

// 5 5 * 4 * 3 * 2 * 1

#include <stdio.h>
    int
    main()
{
    int num;
    printf("enter a positive number");
    scanf("%d", &num);
    int counter = 1;
    int factorial = 1;
    while (counter <= num)
    {
        factorial = factorial * counter ;
        counter++;
    }

    printf("factorial is :%d",factorial);
}