#include <iostream>
using namespace std;
#include <process.h> // for exit()
const int LIMIT = 100;

class safearay
{
private:
    int arr[LIMIT];

public:
    int& operator[](int n) // note: return by reference
    {
        if (n < 0 || n >= LIMIT)
        {
            cout << "\nIndex out of bounds";
            exit(1);
        }

        return arr[n];
    }
};

int main()
{

    safearay sa1;
    for (int j = 0; j < LIMIT; j++)
        sa1[j] = j * 10; //*left* side of equal sign

    cout << sa1[999];

    for (int j = 0; j < LIMIT; j++)
    {
        int temp = sa1[j]; //*right* side of equal sign
        cout << "Element " << j << " is " << temp << endl;
    }

    return 0;
}