#include <iostream>
using namespace std;
class team1
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
class group : public team1
{
    int k;
    int n;
};
int main()
{
    group group1;
    group1.getdata();
}
class team2
{
public:
    int a;
    int b;
    int getdata()
    {
        cout << "enter the numbers\n";
        cin >> a;
        cin >> b;
        cout << a << " " << b;
    }
};
