#include <iostream>
using namespace std;
class demo
{
private:
    int a;

public:
    int getdata()
    {
        cout << "enter the numbers";
        cin >> a;
    }

    void display(){
        cout<<a;
    }

    demo operator+(demo bb)
    {
        demo cc;
        cc.a = a + bb.a;
        return cc;
    }
}; int main()
{
    demo aa, bb, cc;
    aa.getdata();
    bb.getdata();
    cc = aa + bb;

    cc.display();
}