/*75. Sort Colors
Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
You must solve this problem without using the library's sort function.
Example 1:
Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]

Example 2:
Input: nums = [2,0,1]
Output: [0,1,2]
*/
/*


this is a optimal solution for this problem also knowns as( Dutch National Flag Algorithm).
time complexity --> O(n)
space complexity --> O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int> &arr)
{

    int n = arr.size();
    int i = 0;
    int j = 0;
    int k = n - 1;

    while (k >= j)
    {

        if (arr[j] == 2)
        {
            swap(arr[j], arr[k]);
            k--;
        }

        else if (arr[j] == 1)
        {
            j++;
        }
        else
        {
            swap(arr[j], arr[i]);
            i++;
            j++;
        }
    }
}

int main()
{
    vector<int> arr = {2, 0, 2, 1, 1, 0};

    sortColors(arr);

    // for (int i : arr){
    // cout << i << " ";
    //}

    for (int i = 0; i < arr.size(); i++)
    {

        cout << arr[i] << " ";
    }

    return 0;
}

/*
this is another better approach also knowns as(counting sort).
time complexity --> O(n)
space complexity --> O(1)
*/

#include <iostream>
#include <vector>   
using namespace std;

void sortColors(vector<int> &arr)
{

    int n = arr.size();
    int count0 = 0, count1 = 0, count2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            count0++;
        else if (arr[i] == 1)
            count1++;
        else
            count2++;
    }

    for (int i = 0; i < n; i++)
    {
        if (i < count0)
            arr[i] = 0;
        else if (i < count0 + count1)
            arr[i] = 1;
        else
            arr[i] = 2;
    }
}

int main()
{
    vector<int> arr = {2, 0, 2, 1, 1, 0};

    sortColors(arr);

    for (int i = 0; i < arr.size(); i++)
    {

        cout << arr[i] << " ";
    }

    return 0;
}

/*
this is another brute force approach.
time complexity --> O(nlogn)
space complexity --> O(1)
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sortColors(vector<int> &arr){

    sort(arr.begin(), arr.end());

}

int main()
{
    vector<int> arr = {2, 0, 2, 1, 1, 0};

    sortColors(arr);

    for (int i = 0; i < arr.size(); i++)
    {

        cout << arr[i] << " ";
    }

    return 0;
}
