#include<iostream>
using namespace std;
class A{
    public:
    int a;
    int b;
    int getdata(){
        cout<<"enter the numbers\n";
        cin>>a;
        cin>>b;
        cout<<a<<" "<<b;
    }

};
class B{
    public:
    int k;
    int n;
    int getdata(){
        cout<<"enter the numbers\n";
        cin>>k;
        cin>>n;
        cout<<k<<" "<<n;
    }

};
class C{
    public:
    int d;
    int e;
    int getdata(){
        cout<<"enter the numbers\n";
        cin>>d;
        cin>>e;
        cout<<d<<" "<<e;
        class C:class A;

    }
};