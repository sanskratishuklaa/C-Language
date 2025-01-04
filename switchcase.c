#include <stdio.h>

int main()
{
    int day;

    printf("enter a day you want to print");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("you have entered %d this is monday", day);
        break;
    case 2:
        printf("you have entered %d this is tuesday", day);
        break;
    case 3:
        printf("you have entered %d this is wednesday", day);
        break;
    case 4:
        printf("you have entered %d this is thursday", day);
        break;
    case 5:
        printf("you have entered %d this is friday", day);
        break;
    case 6:
        printf("you have entered %d this is saturday", day);
        break;
    case 7:
        printf("you have entered %d this is sunday", day);
        break;

    default:
        break;
    }
}