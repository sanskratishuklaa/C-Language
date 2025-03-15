// write a c++ program to print even number between 1 to 10;
#include <iostream>
using namespace std;
int main()
{
     int n;
     cout<<"Enter a number to check number is even or not: ";
     cin>>n;
    for (int i = n; i <= n; i++)
    {

        if (n% 2 == 0)
        {
            cout << "Entered number is even."<< endl;
        }
        else{
            cout<<"Entered Number is not even.";
        }
    }
}