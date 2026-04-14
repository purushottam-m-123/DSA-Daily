#include <iostream>
#include <vector>
using namespace std;

int linearsearch(vector<int> &arr, int target)
{
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {

            return i;
        }
    }

    return -1;
}

int main()
{
    vector<int> arr = {1, 6, 4, 8, 3, 7, 5, 7};
    int target = 5;

    int result = linearsearch(arr, target);

    cout << "Element at index " << result;

    return 0;
}