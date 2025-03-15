//write a c++ program to calculate the sum of first 50 natural numbers using while loop;
#include<iostream>
using namespace std;
int main(){
    int sum=0,i=0;
    
    while(i<=50){
        sum=sum+i;
        i++;


    }
    cout<<"sum of first 50 natural number: "<<sum<<endl;
    
}