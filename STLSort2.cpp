#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Custom comparator (Ascending)
bool comparator(pair<int, int> p1, pair<int, int> p2)
{
    // Sort by second
    if (p1.second < p2.second) // Desc: if(p1.second > p2.second)
        return true;

    if (p1.second > p2.second) // Desc: if(p1.second < p2.second)
        return false;

    // If second same, sort by first
    if (p1.first < p2.first) // Desc: if(p1.first > p2.first)
        return true;
    else
        return false;
}

int main()
{
    vector<pair<int, int>> arr = {
        {1, 5},
        {2, 3},
        {4, 5},
        {3, 2},
        {6, 3}
    };

    sort(arr.begin(), arr.end(), comparator);

    for (auto p : arr)
    {
        cout << "(" << p.first << ", " << p.second << ") ";
    }

    return 0;
}
