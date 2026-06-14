// /*217. Contains Duplicate
// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
// */

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// bool containsDuplicate(vector<int> &arr)
// {
//     int n = arr.size();

//     sort(arr.begin(), arr.end());

//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] == arr[i - 1])
//         {
//             return true;
//         }
//     }
//     return false;
// }

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 9};

//     cout << containsDuplicate(arr) << endl;

//     return 0;
// }

/*
Time Complexity: O(n log n) due to sorting.
Space Complexity: O(1) if we ignore the space used by the sorting algorithm, otherwise O(n) in the worst case for some sorting algorithms.
*/

// Solution 2 : Using Hash Set

#include <iostream>
#include <set>
#include <vector>
using namespace std;

bool containsDuplicate(vector<int> &arr)
{

   
        set<int> st;

        for (int i = 0; i < arr.size(); i++)
        {

            if (st.count(arr[i]))
            {
                return true;
            }

            st.insert(arr[i]);
        }

        return false;
    }


int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9,9};

    cout << containsDuplicate(arr) << endl;

    return 0;
}

/*Time Complexity --> O(n)
Space Complexity --> O(n) */