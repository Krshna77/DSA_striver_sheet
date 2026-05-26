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
        else{
            high = mid - 1;
        }
    }

    return last;
}

pair<int, int> FirstAndLastOccurance(vector<int> &nums, int target)
{
    int n = nums.size();
    int firstIndex  = first(nums , target);
    if(firstIndex == -1) return {-1, -1 };
    return {firstIndex , last(nums,target)};
}
int main()
{
    vector<int> arr = {-1, 0, 3, 5, 9, 12};
    int target = 9;
    pair<int, int> p = FirstAndLastOccurance(arr, target);
    cout << p.first << " " << p.second;
    return 0;
}