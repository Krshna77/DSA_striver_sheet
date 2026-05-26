#include <bits/stdc++.h>
using namespace std;

vector<int> LinearSearch(vector<int> &nums, int target)
{
    int first = -1, last = -1;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == target)
        {
            if (first == -1 && last == -1)
            {
                first = i;
                last = i;
                // ans->push_back(first);
            }

            last = i;
            // ans->push_back(last);
        }
    }

    return {first, last};
}
int main()
{
    vector<int> arr = {2, 4, 6, 8, 8, 8, 11, 13};
    int target = 8;
    vector<int> ans = LinearSearch(arr , target);
    for(int it : ans) cout<<it<< " ";

    return 0;
}