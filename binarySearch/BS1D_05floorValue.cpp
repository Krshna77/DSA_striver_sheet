// floor is : largest index <= x;
#include <bits/stdc++.h>
using namespace std;

int Floor(vector<int> &nums, int target)
{
    int n = nums.size();
    int low = 0, high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (nums[mid] <= target)
        {
            ans = nums[mid];
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return ans;
}
int main()
{

    vector<int> arr = {-1, 0, 3, 5, 9, 12};
    int target = 8;
    int ans = Floor(arr, 9);
    cout << ans;
    return 0;
}