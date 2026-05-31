#include <bits/stdc++.h>
using namespace std;

int SingleELementBinary(int num)
{
    long long  ans = 1;
    long long  low = 1, high = num;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (mid * mid <= num)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}
int main()
{
    int num = 28;
    int ans = SingleELementBinary(num);
    cout << ans;
    return 0;
}