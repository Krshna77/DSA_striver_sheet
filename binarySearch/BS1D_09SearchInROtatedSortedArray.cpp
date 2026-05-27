#include <bits/stdc++.h>
using namespace std;

int SearchInRotatedAndSOrted(vector<int> &nums, int target)
{
    int n = nums.size();
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (nums[mid] == target)
            return mid; // if you find the target then return it from there only

        if (nums[low] <= nums[mid]) // if the left half is sorted 
        {
            if (nums[low] <= target && target <= nums[mid]) // then check if the target lies in left half
            {
                high = mid - 1; //shift high to the left part 
            }
            else
            {
                low = mid + 1; // if the target doesnt lies in the left half then shift the low to right half
            }
        }
        else // if the right half is sorted 
        {
            if (nums[mid] <= target && target <= nums[high]) // then check if the target lies b/w the mid and high index
            {
                low = mid + 1; // then search in the right half 
            }
            else
            {
                high = mid - 1; // and if it doesnt exist in the right sorted array then search in the left half 
            }
        }
    }

    return -1; 
}
int main()
{
    vector<int> arr = {7, 8, 9, 1, 2, 3, 4, 5, 6};
    int target = 1;
    int ans = SearchInRotatedAndSOrted(arr, target);
    cout << ans;
    return 0;
}