/*#include <iostream>
#include <vector>
using namespace std;

int Search(vector<int> arr, int target)
{
    int n = arr.size();
    int start = 0, end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[start] <= arr[mid])
        {
            if (arr[start] <= target && target < arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }

        else
        {
            if (arr[mid] < target && target <= arr[end])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{

    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int target = 0; // 4

    cout << "The Index Is: " << Search(arr, target) << endl;

    return 0;
}
*/
// 81. Search in Rotated Sorted Array II
#include <iostream>
#include <vector>
using namespace std;

bool Search(vector<int> &arr, int target)
{
    int start = 0, end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        // Target found
        if (arr[mid] == target)
            return true;

        // Handle duplicates
        if (arr[start] == arr[mid] && arr[mid] == arr[end])
        {
            start++;
            end--;
        }
        // Left half sorted
        else if (arr[start] <= arr[mid])
        {
            if (arr[start] <= target && target < arr[mid])
                end = mid - 1;
            else
                start = mid + 1;
        }
        // Right half sorted
        else
        {
            if (arr[mid] < target && target <= arr[end])
                start = mid + 1;
            else
                end = mid - 1;
        }
    }
    return false;
}

int main()
{
    vector<int> arr = {2, 5, 6, 0, 0, 1, 2};
    int target = 0;

    if (Search(arr, target))
        cout << "Target Found" << endl;
    else
        cout << "Target Not Found" << endl;

    return 0;
}