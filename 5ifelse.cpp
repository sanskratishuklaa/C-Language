//Write a cpp program to find maximum number between two;
#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter two numbers to find maximum: ";
    cin>>num1>>num2;
    if(num1>num2){
        cout<<"The maximum number is:"<<num1<<endl;
    }
    if(num2>num1){
        cout<<"The maximum number is:"<<num2<<endl;
    }
    if(num1==num2){
        cout<<"both numbers are equal\n"<<num1<<num2;
        
    }
}