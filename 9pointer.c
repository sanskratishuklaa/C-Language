// write a program in c using pointer to declare the person height in centimeter and categorize the person according to their height;
#include <stdio.h>
int main()
{
    int perheight;
    int *p = &perheight;
    printf("enter a person height: ");
    scanf("%d", p);
    if (perheight >= 180)
    {
        printf("person height is taller");
    }
    else if
        (perheight >= 150)
        {
            printf("person height is normal");
        }
    else
    {
        printf("person height is dwarf");
    }
}