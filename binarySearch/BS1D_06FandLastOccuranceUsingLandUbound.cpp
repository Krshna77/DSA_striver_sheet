#include <bits/stdc++.h>
using namespace std;
int LowerBound(vector<int> &nums, int target)
{
    int n = nums.size();
    int low = 0, high = n - 1;
    int ans = n;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (nums[mid] >= target)
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

pair<int, int> FirstAndLastOccurance(vector<int> &nums, int target)
{
    int n = nums.size();
    int lb = LowerBound(nums, target);
    if (lb == n || nums[lb] != target)
        return {-1, -1}; // that is the first and last occurance doesnt exist

    return {lb, upperBound(nums, target) - 1};
}
int main()
{
    vector<int> arr = {-1, 0, 3, 5, 9, 12};
    int target = 9;
    pair<int , int > p = FirstAndLastOccurance(arr , target);
    cout << p.first <<" " << p.second;
    return 0;
}