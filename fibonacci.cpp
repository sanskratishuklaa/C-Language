// write a program in cpp to find the fibonacci series;
#include <iostream>
using namespace std;
int main()
{
    int i, n;
    int t1 = 0, t2 = 1;
    int nextterm = t1 + t2;
    cout << "Enter the number of terms: " << t1 << t2 << endl;
    cin >> n;
    cout << "Fibonacci series is:";
    for (i = 1; i <= n; i++)
    {
        cout << "\n"
             << nextterm << endl;
        t1 = t2;
        t2 = nextterm;
        nextterm = t1 + t2;
    }
}