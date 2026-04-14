#include <iostream>
#include <vector>
using namespace std;

int MountainPeak(vector<int> arr)
{
    int n = arr.size();
    int start = 0, end = n - 1;

    while (start <= end)
    {

        // int mid = start + (end - start) / 2;  //That is give us a overflow error or Runtime Error
        int mid = end + (start - end) / 2;

        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        else if (arr[mid] > arr[mid - 1])
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

    vector<int> arr = {1, 2, 3, 4, 5, 3, 1};

    int result = MountainPeak(arr);

    cout << "Peak element is at index: " << result << " And the value is: " << arr[result] << endl;

    return 0;
}