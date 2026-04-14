/*34. Find First and Last Position of Element in Sorted Array
Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].
You must write an algorithm with O(log n) runtime complexity.

Example 1:
Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]

Example 2:
Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]

Example 3:
Input: nums = [], target = 0
Output: [-1,-1]
*/
#include <iostream>
#include <vector>
using namespace std;

int findleftmost(vector<int> &arr, int target, int n)
{

    int start = 0, end = n - 1;
    int ans = -1;
    while (start <= end)
    {

        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int findrightmost(vector<int> &arr, int target, int n)
{
    int start = 0, end = n - 1;
    int ans = -1;

    while (start <= end)
    {

        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

vector<int> SearchRange(vector<int> &arr, int target)
{
    int n = arr.size();
    // int start = 0, end = n -1, first = -1, last = -1;
    int first_most = findleftmost(arr, target, n);
    int right_most = findrightmost(arr, target, n);

    vector<int> result = {first_most, right_most};

    return result;
}

int main()
{

    vector<int> arr = {2,2,2,2,2,2,2};
    int target = 2;

    // solution sol;
    // vector<int> result = sol.SearchRange(arr, target);

    vector<int> result = SearchRange(arr, target);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}


// Approach: We can use binary search to find the leftmost and rightmost positions of the target value in the sorted array. We will implement two separate functions, one for finding the leftmost position and another for finding the rightmost position. Both functions will have a time complexity of O(log n), resulting in an overall time complexity of O(log n) for the entire algorithm.
// time complexity: O(log n)
// space complexity: O(1)
