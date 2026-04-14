#include <iostream>
#include <vector>
using namespace std;

int UpperBound(vector<int> arr, int target)
{
    int n = arr.size();
    int start = 0, end = n - 1;
    int ans = n;

    while (start <= end)
    {

        int mid = start + (end - start) / 2;
        if (arr[mid] > target)                    //Here The Difference between lower and upper Bounds
        {
            ans = mid;
            end = mid - 1;
        }

        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{

    vector<int> arr = {1, 1, 1, 1, 1, 2, 2, 2, 2, 3};
    int target = 2;

    int ans = UpperBound(arr, target);
    cout << "The Upper Bound is: " << ans;

    return 0;
}