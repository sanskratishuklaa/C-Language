#include<iostream>
using namespace std;
class temp{
    int a;
    int b;
    public:
    int solve(int input){
        a=input;
        b=a/2;
        return b;
    }
};
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    temp half;
    int ans=half.solve(n);
    cout<<ans<<endl;
}