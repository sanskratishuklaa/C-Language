#include<iostream>
using namespace std;
class printer{
    public:
void print(int i){
    cout<<i<<"\n";
}
void print(double j){
    cout<<j<<"\n";
}
void print(string s){
    cout<<s;
}};
int main(){
    printer p;
    p.print(5);
    p.print(11.44);
    p.print("hello");
    return 0;
}