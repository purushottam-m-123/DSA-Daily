/*


#include <iostream>
#include <vector>
using namespace std;

// Binary search in a specific row
bool searchElement(vector<vector<int>> &matrix, int target, int row)
{
    int n = matrix[0].size();
    int start = 0, end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (matrix[row][mid] == target)
        {
            return true;
        }
        else if (matrix[row][mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return false;
}

// Binary search on rows
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int m = matrix.size(), n = matrix[0].size();

    int startRow = 0, endRow = m - 1;

    while (startRow <= endRow) // ✅ fixed
    {
        int midRow = startRow + (endRow - startRow) / 2;

        if (matrix[midRow][0] <= target && target <= matrix[midRow][n - 1]) // That midRow and search in this by BS
        {
            return searchElement(matrix, target, midRow);
        }
        else if (matrix[midRow][n - 1] < target) // ✅ fixed condition(down side)
        {
            startRow = midRow + 1;
        }
        else // (up side)
        {
            endRow = midRow - 1;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}};

    int target = 34;

    if (searchMatrix(matrix, target))
        cout << "The Element Is Found";
    else
        cout << "The Element Is Not Found";

    return 0;
}
*/

// 74. Search a 2D Matrix
#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int n = matrix.size();
    int m = matrix[0].size();
    int low = 0, high = m * n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        int row = mid / m;
        int column = mid % m;

        if (matrix[row][column] == target)
        {
            return true;
        }
        else if (matrix[row][column] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return false;
}

int main()
{

    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}};

    int target = 34;

    if (searchMatrix(matrix, target))
        cout << "The Element Is Found";
    else
        cout << "The Element Is Not Found";

    return 0;
}
