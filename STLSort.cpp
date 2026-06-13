#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // ==========================
    // 1. ARRAY SORTING
    // ==========================

    int arr1[] = {2, 9, 4, 8, 1, 3, 5};
    int n = sizeof(arr1) / sizeof(arr1[0]);

    // Ascending Order
    // sort(arr1, arr1 + n);

    // Sorting in Range (Index 2 to 4)
    // sort(arr1 + 2, arr1 + 5);

    // Descending Order
    // sort(arr1, arr1 + n, greater<int>());

    // Reverse Array
    // reverse(arr1, arr1 + n);

    /*
    cout << "Array Output: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    */


    // ==========================
    // 2. VECTOR SORTING
    // ==========================

    vector<int> arr = {2, 9, 4, 8, 1, 3, 5};

    // Ascending Order
    sort(arr.begin(), arr.end());

    // Sorting in Range (Index 2 to 4)
    // sort(arr.begin() + 2, arr.begin() + 5);

    // Descending Order
    // sort(arr.begin(), arr.end(), greater<int>());

    // Reverse Vector
    // reverse(arr.begin(), arr.end());

    cout << "Vector Output: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}