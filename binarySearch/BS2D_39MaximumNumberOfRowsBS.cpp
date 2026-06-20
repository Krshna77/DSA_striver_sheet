#include <bits/stdc++.h>
using namespace std;
int MaxNumberOf1s(vector<vector<int>> &arr)
{
    int n = arr.size();
    int m = arr[0].size();

    int ind = -1, max_rows = 0;
    for (int i = 0; i < n; i++)
    {
        int low = 0, high = m - 1;
        int ones = 0;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (arr[i][mid] == 1)
            {
                ones = m - mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        if (ones > max_rows)
        {
            max_rows = ones;
            ind = i;
        }
    }

    return ind;
}
int main()
{
    vector<vector<int>> matrix = {
        {0, 1, 1, 1},
        {0, 0, 1, 1},
        {1, 1, 1, 1},
        {0, 0, 0, 0}};

    double ans = MaxNumberOf1s(matrix);
    cout << ans;
    return 0;
}