#include<stdio.h>
int div(){
    int a,b,c;
    printf("enter two numbers for division\n");
    scanf("%d%d",&a,&b);
    c=a/b;
    printf("division of two numbers is:%d\n",c);
  }
  int main(){
    div();
  }