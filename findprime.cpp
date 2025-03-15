//write c++ program to find number is prime or not;
#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter a number to check the number is prime or not: ";
    cin>>n;
    int isprime=1;
    for(i=2;i<=n/2+1;i++){
        if(n%i==0){
            isprime=0;
            cout<<"Not prime.";
            break;}

        }
        if(isprime==1){
                      cout<<"prime.";
        }
        
        }
    
