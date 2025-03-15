//obtain the largest of 3number;
#include<iostream>
using namespace std;
int main(){
            int num1,num2,num3;
            cout<<"Enter a first number: ";
            cin>>num1;
            cout<<"Enter a second number: ";
            cin>>num2;
            cout<<"Enter a third number: ";
            cin>>num3;
            if(num1>=num2&&num1>=num3){
                cout<<"Number1 is largest";
            }
            else if(num2>=num1&&num2>=num3){
                cout<<"Number2 is largest";
            }
            else if(num3>=num1&&num3>=num2)
            {
                cout<<"Number3 is largest";
            }
            else{
                cout<<"All Three are equal";
            }
            
            


}


