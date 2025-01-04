#include <iostream>
using namespace std;
class team
{
public:
    int x;
    int y;
    int getdata()
    {
        cout << "enter the numbers\n";
        cin >> x;
        cin >> y;
        cout << x << " " << y;
    }
};
class group : public team
{
    int k;
    int n;
};
int main()
{
    group group1;
    group1.getdata();
}
