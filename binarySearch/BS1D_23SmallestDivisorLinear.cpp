#include <bits/stdc++.h>
using namespace std;


int SmallestDivisor(vector<int> &nums, int threshold)
{
  int maxi = *max_element(nums.begin() , nums.end());

  for(int d = 1 ; d<=maxi ; d++){
    int sum =0;
    for(int i = 0 ; i< nums.size() ; i++){
        sum+= (nums[i] + d - 1) / d;
    }
    if(sum<=threshold) return d;
  }
  return -1;
}
int main()
{

    vector<int> arr = {1,2,5,9};
    int threshold = 6;
    int ans = SmallestDivisor(arr,threshold);
    cout << ans;
    return 0;
}

