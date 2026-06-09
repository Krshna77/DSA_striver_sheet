#include <bits/stdc++.h>
using namespace std;

int StudentCount(vector<int> &arr, int pages)
{
    int stdCnt = 1, pagesStudent = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] + pagesStudent <= pages)
        {
            pagesStudent += arr[i];
        }
        else
        {
            stdCnt++;
            pagesStudent = arr[i];
        }
    }
    return stdCnt;
}

int BookAllocation(vector<int> &arr, int students)
{
    if (students > arr.size())
        return -1;
    int max = *max_element(arr.begin(), arr.end());
    int sum = accumulate(arr.begin(), arr.end(), 0);

    for (int i = max; i <= sum; i++)
    {
        int cnt = StudentCount(arr, i);
        if (cnt == students)
            return i;
    }
}
int main()
{

    vector<int> arr = {25, 46, 28, 49, 24};
    int students = 4;
    int ans = BookAllocation(arr, students);
    cout << ans;
    return 0;
}
