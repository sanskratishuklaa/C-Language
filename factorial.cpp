#include <iostream>
using namespace std;
int main()
{
    int n;
    long factorial = 1;
    cout << "Enter a positive number: ";
    cin >> n;
    if (n < 0)
    {
        cout << "Error!The factorial of negative number does not exist." << endl;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            factorial *= i;
        }
        cout << "Factorial of " << n << " is: " << factorial << endl;
    }
    return 0;
}