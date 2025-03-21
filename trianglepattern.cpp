// Write a c++ program to display a pattern like triangle;
#include <iostream>
using namespace std;
int main()
{
    int row, col, i, j, k, n;
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of col: ";
    cin >> col;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= row + 1; j++)
        {
            cout << " * ";
        }
        for (k = 1; k <= 2 * row - 1; k++)
        {
            cout << " ";
        }
    }
}