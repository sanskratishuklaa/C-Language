//Write a program using switch case to check the CGPA on given condition.
//If the CGPA is 8 then print You got 8 CGPA.
//If the CGPA is 10 then print You got 10 CGPA.
//If the CGPA is 7 then print You got 7 CGPA.

#include<stdio.h>
int main(){
int CGPA;
printf("tell me your CGPA");
scanf("%d",&CGPA);

switch(CGPA)
{case 7:
printf("you got CGPA is %d",CGPA);
break;

case 8:
printf("you got CGPA is %d",CGPA);
break;

case 10:
printf("you got CGPA is %d",CGPA);
break;
default:

printf("no special cases");
}}