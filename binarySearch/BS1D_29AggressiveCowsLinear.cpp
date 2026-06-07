#include <bits/stdc++.h>
using namespace std;

bool CanWePlace(vector<int> &arr, int dist, int cows)
{
    int n = arr.size();
    int cntCows = 1, last = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - last >= dist)
        {
            cntCows += 1;
            last = arr[i];
        }
        if (cntCows >= cows)
            return true;
    }

    return false;
}

int AggressiveCows(vector<int> &arr, int cows)
{
    int max = *max_element(arr.begin(), arr.end());
    int min = *min_element(arr.begin(), arr.end());
    for (int i = 1; i <= max - min; i++)
    {
        if (CanWePlace(arr, i, cows) == true)
        {
            continue;
        }
        else
        {
            return (i - 1);
        }
    }
}
int main()
{

    vector<int> arr = {0, 3, 4, 7, 9, 10};
    int cows = 4;
    int ans = AggressiveCows(arr, cows);
    cout << ans;
    return 0;
}
