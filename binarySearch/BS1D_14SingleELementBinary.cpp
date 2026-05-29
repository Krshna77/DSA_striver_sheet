#include <bits/stdc++.h>
using namespace std;

int SingleELementBinary(vector<int> &nums)
{
    int n = nums.size();

    if (n == 1)
        return nums[0]; // edge case when array contains only one element
    if (nums[0] != nums[1])
        return nums[0]; // edge case for the first element
    if (nums[n - 1] != nums[n - 2])
        return nums[n - 1]; // edge case for the last element

    int low = 1, high = n - 2;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1])
        {
            return nums[mid];
        }

        // when we are on the left half and the element exists in the right half then eleminate the left half
        if ((mid % 2 == 1 && nums[mid] == nums[mid - 1])
            || (mid % 2 == 0 && nums[mid] == nums[mid + 1]))
            {
                low = mid + 1;
            }

            // when we are on the right half and the element exists in the left half then eleminate the right half
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}
int main()
{
    vector<int> arr = {7, 8, 1, 2, 3, 4, 5, 6};
    vector<int> arr1 = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
    int ans = SingleELementBinary(arr1);
    cout << ans;
    return 0;
}