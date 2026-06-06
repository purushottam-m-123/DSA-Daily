#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &arr)
{
    int n = arr.size();

    for (int i = 0; i < n - 1; i++)
    {
        int smallestIndex = i; 

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[smallestIndex]) // assending order
            // if (arr[j] > arr[smallestIndex]) // descending order
            {
                smallestIndex = j;
            }
        }

        swap(arr[i], arr[smallestIndex]);
    }
}

int main()
{
    vector<int> arr = {7, 6, 9, 7, 8, 1, 5, 2};

    selectionSort(arr);

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