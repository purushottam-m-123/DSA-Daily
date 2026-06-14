#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
// Approach 1: Normal Sorting
//  int KthElement(vector<int> &arr, int k)
//  {
//      //this is the approach of normal sorting
//      int n = arr.size();
//      sort(arr.begin(), arr.end());
//      return arr[n - k];
//      // OR
//      // sort(arr.begin(), arr.end(), greater<int>());
//      // return arr[k - 1];
// }

// Approach 2: Quick Select Algorithm
int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[high];
    int i = low;

    for (int j = low; j < high; j++)
    {
        if (arr[j] > pivot) // For kth largest, use >. For kth smallest, use <
        {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i], arr[high]);
    return i;
}

int quickSelect(vector<int> &arr, int low, int high, int k)
{
    if (low <= high)
    {
        int pivot = partition(arr, low, high);

        if (pivot == k - 1) // Found the kth largest
            return arr[pivot];
        else if (pivot > k - 1) // Search in the left subarray
            return quickSelect(arr, low, pivot - 1, k);
        else // Search in the right subarray
            return quickSelect(arr, pivot + 1, high, k);
    }
    return -1; // This case should not happen if k is valid
}
int FindKthLargest(vector<int> &arr, int k)
{
    return quickSelect(arr, 0, arr.size() - 1, k);
}

int main()
{

    vector<int> arr = {3, 2, 3, 1, 2, 4, 5, 5, 6};
    int k = 2;

    int result = FindKthLargest(arr, k);

    cout << result << endl;

    return 0;
}
