#include <bits/stdc++.h>
using namespace std;

int upperBound(vector<int> &nums, int target)
{
    int n = nums.size();
    int low = 0, high = n - 1;
    int ans = n;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (nums[mid] > target) // upper bound condition
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
int main()
{
    vector<int> arr = {-1, 0, 3, 5, 9, 12};
    int target = 9;
    int ans = upperBound(arr, 9);
    cout << ans;
    return 0;
}