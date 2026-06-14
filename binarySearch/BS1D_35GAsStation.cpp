#include <bits/stdc++.h>
using namespace std;
long double  GasStation(vector<int> &arr, int k)
{
    int n = arr.size();
    vector<int> Howmany(n - 1, 0);

    for (int GasStation = 1; GasStation <= k; GasStation++)
    {
        long double maxSection = -1;
        int maxInd = -1;
        for (int i = 0; i < n - 1 ; i++)
        {
            long double diff = (arr[i + 1] - arr[i]);
            long double sectionLength = diff / (long double)(Howmany[i] + 1);
            if (sectionLength > maxSection)
            {
                maxSection = sectionLength;
                maxInd = i;
            }
        }
        Howmany[maxInd]++;
    }

    long double maxAns = -1;
    for (int i = 0; i < n; i++)
    {
        long double diff = (arr[i + 1] - arr[i]);
        long double section = diff / (long double)(Howmany[i] + 1);
        maxAns = max(maxAns, section);
    }
    return maxAns;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int k = 6;
    long double  ans = GasStation(arr, k);
    cout << ans;
    return 0;
}