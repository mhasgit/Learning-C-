#include <iostream>

using namespace std;

int main()
{
    int arr[10],arrTemp[10];
    int i, num, tot, index, j = 0, check = 0;

    cout << "Enter array Size: ";
    cin >> tot;
    cout << "Enter " << tot  <<" Elements: ";
    for (i = 0; i < tot; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> num;

    for (i = 0; i < tot; i++)
    {
        if (arr[i] == num)
        {
            arrTemp[j] = i;
            j++;
            check++;
        }
        
    }

    if (check > 0)
    {
        cout << "\nFound at index NO: ";
        tot = check;
        
        for (i = 0; i < tot; i++)
        {
            cout << arrTemp[i] << " ";
        }
        
    }
    else
    {
        cout << "Element doest't found!!!!";
    }
    cout << endl;
    return 0;
}
