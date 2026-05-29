#include <bits/stdc++.h>
using namespace std;

int SingleELementBrute(vector<int> &nums)
{
    int n = nums.size();

    if (n == 1)
        return nums[0];

    for (int i = 0; i < n; i++)
    {
        if (n == 0)
        {
            if (nums[i] != nums[i + 1])
                return nums[i];
        }
        else if (n == n - 1)
        {
            if (nums[i] != nums[i - 1])
                return nums[i];
        }
        else
        {
            if (nums[i] != nums[i - 1] && nums[i] != nums[i + 1])
                return nums[i];
        }
    }
}
int main()
{
    vector<int> arr = {7, 8, 1, 2, 3, 4, 5, 6};
    vector<int> arr1 = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
    int ans = SingleELementBrute(arr1);
    cout << ans;
    return 0;
}