#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int start, int mid, int end)
{
    int i = start;
    int j = mid + 1;
    vector<int> temp;

    while (i <= mid && j <= end)
    {
        if (arr[i] < arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }

    while (j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }

    for (int index = 0; index < temp.size(); index++)
    {
        arr[start + index] = temp[index];
    }
}

void mergeSort(vector<int> &arr, int start, int end)
{
    if (start < end)
    {
        int mid = start + (end - start) / 2;

        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);

        merge(arr, start, mid, end);
    }
}

int main()
{
    vector<int> arr = {12, 31, 35, 8, 32, 17};

    int start = 0;
    int end = arr.size() - 1;

    mergeSort(arr, start, end);

    // Print sorted array
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
The Merge Sort is also called as Divide and Conquer Algorithm. It divides the input array into two halves, calls itself for the two halves, and then merges the two sorted halves.
Time COMPLEXITY: O(n log n)
Space COMPLEXITY: O(n)
*/