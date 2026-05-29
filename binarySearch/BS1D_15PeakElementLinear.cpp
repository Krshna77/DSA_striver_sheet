#include <bits/stdc++.h>
using namespace std;

int SingleELementBinary(vector<int> &nums)
{
    int n = nums.size();

    for( int i = 0 ; i<n ; i++){
        if((n == 0 || nums[i-1])<nums[i] && (i == n-1 || nums[i]>nums[i+1])){
            return i;
        }
    }
}
int main()
{
    vector<int> arr = {7, 8, 1, 2, 3, 4, 5, 6};
    vector<int> arr1 = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
    int ans = SingleELementBinary(arr1);
    cout << ans;
    return 0;
}