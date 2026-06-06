#include <bits/stdc++.h>
using namespace std;

int KthMissingNumber(vector<int> &arr, int k)
{
    int low = 0, high = arr.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int missing = arr[mid] - (mid + 1);
        if (missing < k)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return low + k;

    // or  return high + k +1;
}
int main()
{

    vector<int> arr = {2, 3, 4, 7, 11};
    int k = 5;
    int ans = KthMissingNumber(arr, k);
    cout << ans;
    return 0;
}
