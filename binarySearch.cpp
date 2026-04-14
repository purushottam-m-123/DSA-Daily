// 704. Binary Search

/*Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

You must write an algorithm with O(log n) runtime complexity.



Example 1:

Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4
Explanation: 9 exists in nums and its index is 4
Example 2:

Input: nums = [-1,0,3,5,9,12], target = 2
Output: -1
Explanation: 2 does not exist in nums so return -1*/

#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(vector<int> arr, int target)
{
    int n = arr.size();
    int start = 0, end = n - 1;

    while (start <= end)
    {
        // int mid = (start + end) / 2;    for Normal Question and Small Data

        int mid = start + (end - start) / 2; // for OverFlow Question and Large Data

        if (arr[mid] == target)
        {
            return mid;
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
    return -1;
}

int main()
{

    vector<int> arr = {1, 8, 7, 1, 3, 6, 1};
    int target = 1;

    int result = BinarySearch(arr, target);

    cout << "Elemen Found At Index: " << result;

    return 0;
}