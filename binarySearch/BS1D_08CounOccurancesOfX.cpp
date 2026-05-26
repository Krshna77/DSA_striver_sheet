#include <bits/stdc++.h>
using namespace std;
int first(vector<int> &nums, int target)
{
    int n = nums.size();
    int low = 0, high = n - 1;
    int first = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (nums[mid] == target)
        {
            first = mid;
            high = mid - 1;
        }
        else if (nums[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return first;
}

int last(vector<int> &nums, int target)
{
    int n = nums.size();
    int low = 0, high = n - 1;
    int last = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (nums[mid] == target) // upper bound condition
        {
            last = mid;
            low = mid + 1;
        }
        else if (nums[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return last;
}

pair<int, int> FirstAndLastOccurance(vector<int> &nums, int target)
{
    int n = nums.size();
    int firstIndex = first(nums, target);
    if (firstIndex == -1)
        return {-1, -1};
    return {firstIndex, last(nums, target)};
}

int CountOccurances(vector<int> &nums, int target)
{
    int n = nums.size();
    pair<int, int> ans = FirstAndLastOccurance(nums, target);
    if (ans.first == -1)
        return 0;
    return ans.second - ans.first + 1;
}
int main()
{
    vector<int> arr = {-1, 0, 3, 5, 9, 12};
    int target = 9;
    int ans = CountOccurances(arr, target);
    cout << ans;
    return 0;
}