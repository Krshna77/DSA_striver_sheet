#include<iostream>
using namespace std;
int main (){
    int arr[1000];
    int n;
    bool swapped =0;
    cout<<"enter the size of the array :";
    cin>>n;
    cout<<"enter the elements of the array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=n-2 ;i>=0 ; i--)
    {
        for(int j=i ; j<n-1 ; j++){
            if(arr[j]>arr[j+1]){

                swap(arr[j],arr[j+1]);
                swapped=1;
                
            }
        }
        if(swapped==0)
        break;
    }

     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}