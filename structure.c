#include <stdio.h>
#include <string.h>

struct student
{
    int age;
    char name[10];
    int rollno;
};

int main()
{
    struct student student1;

    student1.age = 10;
    printf("Age: %d\n", student1.age);
    strcpy(student1.name, "sanskrati");
    printf("Name: %s\n", student1.name);
    student1.rollno = 101;
    printf("Roll Number: %d\n", student1.rollno);

    return 0;
}
