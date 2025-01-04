#include <iostream>
using namespace std;

class myclass
{
private:
    int x;
    int y;

public:
    int getdata()
    {
        cout << "enter the numbers\n";
        cin >> x;
        cin >> y;

        cout<<x<<" "<<y;
    };
};
    int main()
    {

        myclass myclass1;

         myclass1.getdata();
    }
