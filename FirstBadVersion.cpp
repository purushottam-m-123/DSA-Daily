#include <iostream>
using namespace std;

int bad = 4;

bool isBadVersion(int version)
{
    return version >= bad;
}

int BadVersion(int n)
{
    int start = 1, end = n;

    while (start < end)
    {
        int mid = start + (end - start) / 2;

        if (isBadVersion(mid))
        {
            end = mid; 
        }
        else
        {
            start = mid + 1;
        }
    }
    return start;
}

int main()
{
    int n = 6;
    int result = BadVersion(n);

    cout << "First bad version: " << result;

    return 0;
}