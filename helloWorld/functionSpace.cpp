#include <iostream>

using namespace std;

int Addition(int a, int b)
{
    int c;
    return  c = a + b;
}

int main()
{  
    int rows, col;
    int arr[rows][col];

    if(rows == col)
    {
        arr[rows][col] = 1;
    }
    else
    {
        arr[rows][col] = 0;
    }
    
    cout << Addition(12, 19);

    return 0;
}