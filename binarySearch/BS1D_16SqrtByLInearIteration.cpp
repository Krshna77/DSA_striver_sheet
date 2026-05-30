#include <bits/stdc++.h>
using namespace std;

int SingleELementBinary( int num)
{
    int ans = 1;

    for( int i = 0 ; i<=num ; i++){
        
        if(i*i <= num){
            ans = i;
        }else{
            break;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {7, 8, 1, 2, 3, 4, 5, 6};
    vector<int> arr1 = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
    int num = 28;
    int ans = SingleELementBinary(num);
    cout << ans;
    return 0;
}