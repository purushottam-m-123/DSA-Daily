//Leetcode 154 & 153
#include <iostream>
#include <vector>
using namespace std;

int FindMin(vector<int> arr)
{
    int n = arr.size();
    int start = 0, end = n - 1;

    while (start < end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] > arr[end])
        {
            start = mid + 1;
        }
        else          //arr[mid] <= arr[end]
        {
            end = mid;
        }

        /* For Equal Elements
         if (arr[mid] > arr[end])
        {
            start = mid + 1;
        }
        else if (arr[mid] < arr[end])    
        {
            end = mid;
        }
        else
        {
            end--;  //or start++;
        }   
        */
    }
    return arr[start]; 
}

int main()
{

    vector<int> arr = {3, 4, 5, 1, 2};

    int result = FindMin(arr);

    cout << "The Minimum Value Is: " << result;

    return 0;
}
