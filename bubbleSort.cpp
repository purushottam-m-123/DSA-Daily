#include <iostream>
using namespace std;

int runBubbleSortDemo(int arr[], int n)
{
    for (int i = n - 2; i >= 0; i--)
    {
        bool swapped = 0;

        for (int j = 0; j <= i; j++)
        {
            if (arr[j] > arr[j + 1]) // ascending condition
            // if (arr[j] < arr[j + 1]) // descending condition
            {
                swapped = 1;
                swap(arr[j], arr[j + 1]);
            }
        }

        if (swapped == 0)
            break; // already sorted
    }

    cout << "Sorted Array (Ascending): ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

int main()
{

    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    /*
    //for taking input from user

            int arr[100];
            int n;

            cout << "Enter the size of Array: ";
            cin >> n;

            cout << "Enter elements:\n";
            for (int i = 0; i < n; i++)
            {
                cin >> arr[i];
    }
    */

    return runBubbleSortDemo(arr, n);
}

/*
(same for both ascending and descending)
this is the bubble sort algorithm.
time complexity --> O(n^2)
space complexity --> O(1)
*/

/*

//new Code
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}*/
