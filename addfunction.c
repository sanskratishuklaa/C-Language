#include<stdio.h>
int add(){
    int a,b,c;
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("sum of two numbers is:%d",c);

}
int main(){
    add();
}