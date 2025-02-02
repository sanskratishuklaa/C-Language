//write a cpp program to find out a number is even or odd;
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number to find odd or even: ";
    cin>>num;
    if(num%2==0){
        cout<<"entered number is even.\n";
    }else{
        cout<<"Entered number is odd.\n";
    }
}
