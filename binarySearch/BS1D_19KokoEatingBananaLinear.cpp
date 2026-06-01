#include <bits/stdc++.h>
using namespace std;

int func(vector<int>& arr , int k) // we are calculating the total time it will take to eat all bananas if it is eating at a speed of k bananas/hour
{ 
    int n = arr.size();
    int totalHour = 0;

    for(int i = 0 ; i<n ; i++){
        totalHour+= (arr[i] + k - 1) / k;
    }
    return totalHour;
}

int KokoEatingBanana( vector<int>& arr , int h) // h= deadline 
{
    int reqTime = 0;
    int n = *max_element(arr.begin() , arr.end()); 


    for(int i = 1 ; i<=n ; i++){
        reqTime = func(arr , i);
        if(reqTime<=h) return i;
    }

    return -1;
    
}
int main()
{

    vector<int> arr = {3,6,7,11};
    int h = 8;
    int ans = KokoEatingBanana(arr , h);
    cout << ans;
    return 0;
}