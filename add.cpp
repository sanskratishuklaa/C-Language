// write a program in C++ to print the sum of two numbers;
#include <iostream>
using namespace std;
int main()
{
    double num1, num2, sum;
    cout << "enter the first number:\n";
    cin >> num1;

    cout << "enter the second number:\n";
    cin >> num2;
    sum = num1 + num2;


    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum;
}