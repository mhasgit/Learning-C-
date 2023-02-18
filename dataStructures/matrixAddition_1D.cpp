#include <iostream>

using namespace std;

int main()
{
    int arr1[2], arr2[2], sum[2];
    int i;
    cout << "Enter 2 elements: ";
    for (i = 0; i < 2; i++)
    {
        cin >> arr1[i];
    }
    
    cout << "Enter 2 elements again: ";
    for (i = 0; i < 2; i++)
    {
        cin >> arr2[i];
    }

    cout << "sum of array elements are: ";
    for (i = 0; i < 2; i++)
    {
        sum[i] = arr1[i] + arr2[i];

        cout << sum[i] << " ";
    }
 
    return 0;
}