#include <iostream>

#define N 20

using namespace std;

int main()
{
    int n, i, j;
    string arr[N], temp;

    cout << "Enter the Size (max, 20): ";
    cin >> n;
    cout << "Enter " << n << " Numbers: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Sorting the Array using Bubble Sort technique..\n";
    
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            
        }
        
    }
    cout << "\nArray Sorted Successfully! in Asc Order\n";
    cout << "\nThe New Array is: \n";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "\nArray Sorted Successfully! in Desc Order\n";
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            
        }
        
    }
    cout << "\nThe New Array is: \n";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    //bubbleSortDesc(arr[n], n);

    return 0;
}