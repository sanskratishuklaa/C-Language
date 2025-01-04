//c program to Display Characters from A to Z Using Loop

#include<stdio.h>
int main(){

    char i;
    printf("enter alphabet from A to Z");
    scanf("%c",&i);

    for(i='A'; i<='Z';i++)
    printf(",%c",i);
}

