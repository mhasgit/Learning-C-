#include <iostream>

using namespace std;

int main()
{
    int arr[10], tot = 10, i, elem, j, found = 0;

    cout << "Enter 10 Array Elements: ";
    for (i = 0; i < tot; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter Element to delete: ";
    cin >> elem;

    for (i = 0; i < tot; i++)
    {
        if (arr[i] == elem)
        {
            for (j = i; j < (tot - 1); j++)
            {
                arr[j] = arr[j + 1];
            }
            found++;
            i--;
            tot--;
        }
        
    }

    if (found == 0)
    {
        cout << "\nElements does'nt found in the array!";
    }
    else
    {
        cout << "\nElement deleted successfully!";
        cout << endl;
    }

return 0;
}