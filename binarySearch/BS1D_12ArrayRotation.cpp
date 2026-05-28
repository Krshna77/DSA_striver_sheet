#include <bits/stdc++.h>
using namespace std;

int MinimumInRotatedAnsSortedArray(vector<int> &nums)
{
    int n = nums.size();
    int low = 0, high = n - 1;
    int ans = INT_MAX;
    int index = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (nums[low] <= nums[high])
        { // when then entire search space is sorted then nums[low] will always be min;
            if (nums[low] < ans)
            {
                ans = nums[low];
                index = low;
            }

            break;
        }

        if (nums[low] <= nums[mid])
        {
            if (nums[low] < ans)
            {
                ans = nums[low];
                index = low;
            }
            low = mid + 1;
        }
        else
        {
            if (nums[mid] < ans)
            {
                ans = nums[low];
                index = low;
            }
            high = mid - 1;
        }
    }

    return index;
}
int main()
{
    vector<int> arr = {7, 8, 1, 2, 3, 4, 5, 6};
    vector<int> arr1 = {4, 5, 6, 7, 0, 1, 2};
    int ans = MinimumInRotatedAnsSortedArray(arr1);
    cout << ans;
    return 0;
}