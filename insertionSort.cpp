#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr)
{
    int n = arr.size();

    for (int i = 1; i < n; i++)
    {

        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])   //for ascending order
            // (arr[j] > arr[j - 1]) // for desending order
            {
                swap(arr[j], arr[j - 1]);
            }
            else
            {
                break;
            }
        }
    }
}

int main()
{

    vector<int> arr = {7, 6, 9, 7, 8, 1, 5, 2};
    insertionSort(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
this is also known as the in-place sorting algorithm because it does not require any extra space for sorting the array.
Time complexity: O(n^2) all cases (best, average, worst) because of the nested loops.
space complexity: O(1) because it only uses a constant amount of extra space for the temporary variable used in the swap operation.
it is stable sorting algorithm because it maintains the relative order of equal elements in the sorted output.
*/