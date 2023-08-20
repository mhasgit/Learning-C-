#include <iostream>

using namespace std;

int main()
{
    int arr[2][2];
    int i = 0, j = 0;
    cout << "Enter 4 Elements: ";

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }  
    }

    cout << arr[i][j];
    
    























    

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
  
    // }
    // cout << "You Entered Below Elements" << endl;

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    

    return 0;
}