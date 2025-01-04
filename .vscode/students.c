#include <stdio.h>
int main()
{

    int stu1 = 99;
    int stu2 = 89;
    printf("enter first student marks:");
    scanf("%d", &stu1);

    printf("enter second student marks:");
    scanf("%d", &stu2);

    if (stu1 >= stu2)
    {
        printf("first student has higher marks");
    }

    else
    {
        printf("second student has higher marks");
    }
}
