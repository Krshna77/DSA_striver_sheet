#include <bits/stdc++.h>
using namespace std;
int LowerBound(vector<int> &nums, int n, int target)
{
    int low = 0, high = n - 1;
    int ans = n;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (nums[mid] >= target)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return ans;
}
int MaxNumberOf1s(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();

    int index = -1, cnt_max = 0;
    for (int i = 0; i < n; i++)
    {
        int cnt_rows = 0;
        int ones = m - LowerBound(matrix[i], m, 1);
        if (ones > cnt_max)
        {
            cnt_max = ones;
            index = i;
        }
    }

    return index;
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
