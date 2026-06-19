#include <bits/stdc++.h>
using namespace std;
int MaxNumberOf1s(vector<vector<int>> &arr)
{
    int n = arr.size();
    int m = arr[0].size();

    int ind = -1, max_rows = -1;
    for (int i = 0; i < n; i++)
    {
        int cnt_rows = 0;
        for (int j = 0; j < m; j++)
        {
            cnt_rows += arr[i][j];
        }
        if (cnt_rows > max_rows)
        {
            max_rows = cnt_rows;
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