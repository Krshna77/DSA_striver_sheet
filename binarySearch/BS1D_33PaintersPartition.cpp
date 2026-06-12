#include <bits/stdc++.h>
using namespace std;

int PainterCount(vector<int> &arr, int Time)
{
    int PainterCnt = 1, TimeCount = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] + TimeCount <= Time)
        {
            TimeCount += arr[i];
        }
        else
        {
            PainterCnt++;
            TimeCount = arr[i];
        }
    }
    return PainterCnt;
}

int PaintersPartition(vector<int> &arr, int k)
{
    if (k > arr.size())
        return -1;
    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (PainterCount(arr, mid) <= k)
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
int splitArray(vector<int> &nums, int k)
{
    return PaintersPartition(nums, k);
}
int main()
{

    vector<int> arr = {7, 2, 5, 10, 8};
    int k = 2;
    int ans = splitArray(arr, k);
    cout << ans;
    return 0;
}

// T.c = O(log (sum - max + 1)) * O(n);
