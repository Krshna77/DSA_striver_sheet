#include <bits/stdc++.h>
using namespace std;

long long func(vector<int> &arr, int k)
{
    int n = arr.size();
    long long totalHour = 0;

    for (int i = 0; i < n; i++)
    {
        totalHour += ceil((double)arr[i] / (double)k);
    }
    return totalHour;
}

   int minEatingSpeed(vector<int>& piles, int h) {
        int n = *max_element(piles.begin(), piles.end());

        int low = 1, high = n;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long reqTime = func(piles, mid);

            if (reqTime <= h)
                high = mid - 1;
            else
                low = mid + 1;
        }

        return low;
    }
int main()
{

    vector<int> arr = {3, 6, 7, 11};
    int h = 8;
    int ans = minEatingSpeed(arr, h);
    cout << ans;
    return 0;
}