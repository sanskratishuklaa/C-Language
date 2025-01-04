#include<stdio.h>
int multi(){
    int a,b,c;
    printf("enter two numbers for multiplication\n");
    scanf("%d%d",&a,&b);
    c=a*b;
    printf("multiplication of two number is:%d",c);

}
int main(){
    multi();
}