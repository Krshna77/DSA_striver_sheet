#include <bits/stdc++.h>
using namespace std;

vector<int> second(vector<int> &arr)
{
    int n = arr.size();
    int repeating = -1;
    int missing = -1;
    int hash[n + 1] = {0};

    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    for (int i = 1; i <= n; i++)
    {
        if (hash[i] == 2){
            repeating = i;
        }
            
        else if (hash[i] == 0){ 
            missing = i;
        }
           

        if (repeating != -1 && missing != -1)
            break;
    }

    return {repeating, missing};
}
int main()
{

    vector<int> a = {4, 3, 6, 2, 1, 1};
    vector<int> num1 = second(a);

    for (int num : num1)
    {
        cout << num << " ";
    }
    return 0;
}