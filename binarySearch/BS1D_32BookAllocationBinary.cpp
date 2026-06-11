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
    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (StudentCount(arr, mid) <= students)
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
int main()
{

    vector<int> arr = {25, 46, 28, 49, 24};
    int students = 4;
    int ans = BookAllocation(arr, students);
    cout << ans;
    return 0;
}

// T.c = O(log (sum - max + 1)) * O(n);
