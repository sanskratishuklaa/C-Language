//Display a program to read two numbers from the keyboard and display the larger value on the screen;
#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter a number1: ";
    cin>>num1;
    cout<<"Enter a number2: ";
    cin>>num2;
    if(num1>num2){
        cout<<"Number1 is larger than Number2";
    }
    else if(num2>num1){
        cout<<"Number2 is larger than number1";
    }
     else{
        cout<<"Number1 and Number2 is equal";
     }
}