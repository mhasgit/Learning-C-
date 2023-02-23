#include <iostream>

using namespace std;

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    
}

void insertionSortAsc(int array[], int size)
{
    for (int step = 0; step < size; step++)
    {
        int key = array[step];
        int j = step - 1;
        //Compare key with each elements on the left of it until an element
        //smallest is found
        while (key < array[j] && j >= 0)
        {
            array[j + 1] = array[j];
            --j;
        }
        array[j + 1] = key;
    }
    
}

void insertionSortDesc(int array[], int size)
{
    for (int step = 0; step < size; step++)
    {
        int key = array[step];
        int j = step - 1;
        //Compare key with each elements on the left of it until an element
        //largest is found
        while (key > array[j] && j >= 0)
        {
            array[j + 1] = array[j];
            --j;
        }
        array[j + 1] = key;
    }
}

int main()
{
    int data[] = {10, 50, 150, 40, 230};
    int size = sizeof(data) / sizeof(data[0]);
    insertionSortAsc(data, size);
    cout << "Sorted array in Asc Order: \n";
    printArray(data, size);

    cout << "******************************\n";
    insertionSortDesc(data, size);
    cout << "Sorted array in Desc Order: \n";
    printArray(data, size);

    return 0;
}