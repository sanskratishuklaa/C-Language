//write a program in cpp for open the door if door code is true otherwise door remains closed;
#include<iostream>
using namespace std;
int main(){
    int doorcode;
    cout<<"Enter the code of the door: "; 
    cin>>doorcode;
    if(doorcode==3547){
        cout<<"correct code.\n The door is now open.";

    }
    else{
         cout<<"Wrong code.\n The door is remains closed.";
    }

} 