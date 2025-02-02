// write a program in cpp to check the person age if she or he is eligible to caste a vote;
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    int votingage=18;
    if(age>=18){
        cout<<"Old enough to caste vote.\n";
    }
    else{
        cout<<"Not old enough to caste vote.\n";
    }
}