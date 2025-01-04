#include<stdio.h>
#include<string.h>

union student
{
    int age;
    int rollno;
    char name[10];
};
int main(){
    union student student1;
    student1.age =20;
    printf("Age:%d\n",student1.age);
    strcpy(student1.name,"sanskrati");
    printf("Name:%s\n",student1.name);
    student1.rollno=203;
    printf("roll no:%d\n",student1.rollno);
    


}