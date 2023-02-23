#include <iostream>

#define N 20

using namespace std;

void bubbleSortAsc(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            
        }
        
    }
}

void bubbleSortDesc(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            
        }
        
    }
}

int main()
{
    int n, arr[N];

    cout << "Enter the Size (max, 20): ";
    cin >> n;
    cout << "Enter " << n << " Numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Sorting the Array using Bubble Sort technique..\n";

    bubbleSortAsc(arr, n);
    cout << "\nArray Sorted Successfully! in Asc Order\n";

    cout << "\nThe New Array is: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    
    bubbleSortDesc(arr, n);
    cout << "\nArray Sorted Successfully! in Desc Order\n";
    
    cout << "\nThe New Array is: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}