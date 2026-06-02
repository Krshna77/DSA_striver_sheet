#include <bits/stdc++.h>
using namespace std;

// You are given an integer array bloomDay, an integer m and an integer k.

// You want to make m bouquets. To make a bouquet, you need to use k adjacent flowers from the garden.

// The garden consists of n flowers, the ith flower will bloom in the bloomDay[i] and then can be used in exactly one bouquet.

// Return the minimum number of days you need to wait to be able to make m bouquets from the garden. If it is impossible to make m bouquets return -1.

bool possible(vector<int> &arr, int day, int m, int k)
{
    int n = arr.size();
    int noOfB = 0;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= day)                           //{1, 10, 3, 10, 2}; day = 1
        {
            cnt++;
        }
        else
        {
            noOfB += (cnt / k);
            cnt = 0;
        }
    }
    noOfB += (cnt / k);
    if (noOfB >= m)
        return true;
    else
        return false;
}

int NoOfDaysReq(vector<int> &nums, int m, int k)
{
    if (nums.size() < m * k)
        return -1;
    int maxi = *max_element(nums.begin(), nums.end());
    int mini = *min_element(nums.begin(), nums.end());

    for (int i = mini; i <= maxi; i++)
    {
        if (possible(nums, i, m, k) == true)
        {
            return i;
        }
    }

    return -1;
}
int main()
{

    vector<int> arr = {1, 10, 3, 10, 2};
    int m = 3, k = 1;
    int ans = NoOfDaysReq(arr, m, k);
    cout << ans;
    return 0;
}

// T.C = O((maxi - mini +1) * N )