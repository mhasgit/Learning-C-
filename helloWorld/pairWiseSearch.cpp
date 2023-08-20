#include <iostream>
using namespace std;

int pairwiseSearch(int arr[], int n, int x) {
    int pairSize = 2;
    int pairIndex = 0;

    while (pairIndex < n) {
        if (arr[pairIndex] == x)
            return pairIndex;

        pairIndex += pairSize;

        if (pairIndex >= n)
            break;
    }

    // If the target element is not found in the pairs,
    // perform a linear search for the remaining elements
    for (int i = pairSize - pairIndex; i < n; i++) {
        if (arr[i] == x)
            return i;
    }

    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 7;

    int index = pairwiseSearch(arr, n, x);
    if (index != -1)
        cout << "Element " << x << " found at index " << index << endl;
    else
        cout << "Element " << x << " not found in the array" << endl;

    return 0;
}