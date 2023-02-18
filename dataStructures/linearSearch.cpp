#include <iostream>

using namespace std;

int main()
{
    int arr[10], i, num, index;
    cout << "Enter 10 Elements: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> num;

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == num)
        {
            index = i;
            break;
        }
        
    }
    cout << "Found at index No: " << index;
    cout << endl;
    
    return 0;
}
