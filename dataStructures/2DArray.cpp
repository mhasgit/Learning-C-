#include <iostream>

using namespace std;

int main()
{
    int arr[2][2];
    cout << "Enter 4 Elements: ";

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
        
    }
    cout << "You Entered Below Elements" << endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    

    return 0;
}