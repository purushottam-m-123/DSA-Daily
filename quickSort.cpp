#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

int partition(vector<int> &arr, int start, int end)
{
    /*  //For Random Pivot Selection
    int pivotIndex = start + rand() % (end - start + 1);
     swap(arr[pivotIndex], arr[end]);  */

    int pivot = arr[end];
    int i = start - 1;

    for (int j = start; j < end; j++)
    {
        if (arr[j] < pivot) // for ascending order
        //  if (arr[j] > pivot) // for desending order
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[end]);
    return i + 1;
}

void quickSort(vector<int> &arr, int start, int end)
{
    if (start < end)
    {
        int pivotIndex = partition(arr, start, end);

        quickSort(arr, start, pivotIndex - 1); // this is for left side recursive call
        quickSort(arr, pivotIndex + 1, end);   // this is for right side recursive call
    }
}

int main()
{
    //        srand(time(0));
    vector<int> arr = {5, 2, 3, 1};

    quickSort(arr, 0, arr.size() - 1);

    for (int val : arr)
    {
        cout << val << " ";
    }

    return 0;
}

/*
this is a simple implementation of quick sort algorithm
Time Complexity: O(n log n) on average, O(n^2) in the worst case (when the smallest or largest element is always chosen as the pivot)
Space Complexity: O(log n) on average, O(n) in the worst case (when the smallest or largest element is always chosen as the pivot) due to recursive stack space
Not a Stable Sort: Quick sort is not a stable sorting algorithm, meaning that it does not preserve the relative order of equal elements.
*/
