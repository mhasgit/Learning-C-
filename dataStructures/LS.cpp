#include <iostream>
using namespace std;

int linearSearch(int arr[],int n, int x)
{
    int index;   
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            index = i;
            break;
        }
    }
    
    return index;
}

// int linearSearch(T arr[],int n, T x)
// {
//     int index;   
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == x)
//         {
//             index = i;
//             break;
//         }
//     }
//     return index;
// }

int main()
{
    int size;
    int item;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];
    cout << "Enter elements of array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> item;

    int index = linearSearch(arr, size, item);

    if (index == -1)
    {
        cout << "Elements does not exist" << endl;
    }
    else
    {
        cout << "Element found at index " << index << endl;
    }
    
    return 0;
}