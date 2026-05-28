#include <bits/stdc++.h>
using namespace std;

int MinimumInRotatedAnsSortedArray(vector<int> &nums)
{
    int n = nums.size();
    int low = 0, high = n - 1;
    int ans = INT_MAX;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if(nums[low] <= nums[high]){  // when then entire search space is sorted then nums[low] will always be min;
            ans= min(ans , nums[low]);
            break;
        }

        if (nums[low] <= nums[mid])
        {

            ans = min(ans, nums[low]);
            low = mid + 1;
        }
        else
        {
            ans = min(ans, nums[mid]);
            high = mid - 1;
        }
    }

    return ans;
}
int main()
{
    vector<int> arr = {7, 8, 1, 2, 3, 4, 5, 6};
    vector<int> arr1 = {4, 5, 6, 7, 0, 1, 2};
    int ans = MinimumInRotatedAnsSortedArray(arr1);
    cout << ans;
    return 0;
}