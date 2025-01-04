#include <iostream>
using namespace std;
class myclass
{
private:
    int a;
    int b;

public:
    int getdata()
    {
        cout << "enter the numbers\n";
        cin >> a;
        cin >> b;
        cout << a << " " << b;
    };
};
int main()
{
    myclass myclass1;
    myclass1.getdata();
}