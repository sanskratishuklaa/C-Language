// write a c++ program to find even numbers between minimum and maximum numbers;
#include <iostream>
using namespace std;
int main()
{
    int min, max;
    cout << "enter minimum number: ";
    cin >> min;
    cout << "Enter maximum number: ";
    sheherme:
    cin >> max;
    if(min>max){
        cout<<"your max is smaller than min again enter min: ";
        goto sheherme;
    }
    for (int i = min; i <= max; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
    }
}