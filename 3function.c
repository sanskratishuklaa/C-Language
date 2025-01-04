#include<stdio.h>
int multi(int a, int b){
    int c;
    c=a*b;
    return c;
}
int main(){
    int a=multi(5,3);
    printf("%d",a);
}