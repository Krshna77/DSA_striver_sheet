#include <bits/stdc++.h>
using namespace std;

vector<long long> second(vector<int> &arr)
{
    long long n = arr.size();
    long long sn = (n * (n + 1)) / 2;
    long long s2n = (n * (n + 1) * (2 * n + 1)) / 6;

    long long s = 0, s2 = 0;
    for (int i = 0; i < n; i++)
    {
        s += arr[i];
        s2 += (long long)arr[i] * arr[i];
    }

    long long val1 = s-sn;
    long long val2 = s2-s2n;
    val2 = val2/val1;
    long long x = (val1 +val2) / 2;
    long long y = val2 -x;

    return {x, y};
}
int main()
{

    vector<int> a = {4, 3, 6, 2, 1, 1};
    vector<long long> num1 = second(a);

    for (int num : num1)
    {
        cout << num << " ";
    }
    return 0;
}