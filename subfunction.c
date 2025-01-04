#include<stdio.h>
int sub(){
    int a,b,c;
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
    c=a-b;
    printf("sub of two number is:%d",c);
}

int main(){
    sub();
}