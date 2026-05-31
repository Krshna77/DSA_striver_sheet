#include <bits/stdc++.h>
using namespace std;

int func(int mid, int n, int m)
{ // nth root of the m number
    long long ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * mid;
        if (ans > m)
            return 2;
    }
    if (ans == m)
        return 1;
    return 0;
}

int NthRoot( int n, int m)
{
    int low = 1, high = m;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        int midN = func(mid, n, m);
        if (midN == 1)
            return mid;
        else if (midN == 0)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int main()
{

    int m = 69;
    int n = 4;
    int ans = NthRoot(n,m);
    cout << ans;
    return 0;
}