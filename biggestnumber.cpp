// cpp program to find the biggest numbers between three numbers;
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the third number: ";
    cin >> c;
    if (a >= b &&a >= c)
    {
        cout << "The biggest number is :" << a << endl;
    }
    else if (b >= c &&b >= a)
    {
        cout << "The biggest number is: " << b << endl;
    }
    else
    {
        cout << "The biggest number is: " << c << endl;
    }
    return 0;
}