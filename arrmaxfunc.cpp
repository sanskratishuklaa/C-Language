#include <iostream>
using namespace std;
int maxArray(int arr[i])
{
    int max = arr[0];
    for (int i = 1; i <= 10; ++i)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    maxArray(arr[i]);
    int arr[10] = {5, 4, 2, 3, 7, 8, 1, 9, 4, 6};
    cout<<"maximum number of array is: "<<maxArray<<endl;
}