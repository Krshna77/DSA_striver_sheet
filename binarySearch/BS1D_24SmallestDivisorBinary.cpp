#include <bits/stdc++.h>
using namespace std;

int sum(vector<int> &arr, int d)
{
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += (arr[i] + d - 1) / d;
    }

    return sum;
}

int SmallestDivisor(vector<int> &nums, int threshold)
{
    int maxi = *max_element(nums.begin(), nums.end());

    int low = 1, high = maxi;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (sum(nums, mid) <= threshold)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return low;
}
int main()
{

    vector<int> arr = {1, 2, 5, 9};
    int threshold = 6;
    int ans = SmallestDivisor(arr, threshold);
    cout << ans;
    return 0;
}
