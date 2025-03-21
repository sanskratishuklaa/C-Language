#include <iostream>
using namespace std;
long fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}
int main()
{
    int num;
    cout << "enter the number: ";
    cin >> num;
    cout << "factorial: " << fact(num);
}