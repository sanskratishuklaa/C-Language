//write a program in c to find the maximum number between two numbers using pointer;
#include <stdio.h>
void main()
{
 int num1,num2;
 int *p=&num1,*q=&num2;
   printf(" Input the first number : ");
   scanf("%d", p);
   printf(" Input the second  number : ");
   scanf("%d", q);
 if(*p>*q)
 {
  printf("\n\n %d is the maximum number.\n\n",*p);
 }
 else
 {
  printf("\n\n %d is the maximum number.\n\n",*q);
 }
}