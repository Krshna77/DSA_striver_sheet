#include<iostream>
using namespace std;
int main (){
    int arr[1000];
    int n;

    cout<<"enter the size of the array :";
    cin>>n;
    int key;
    cout<<"enter the number to be found :";
    cin>>key;
    cout<<"enter the elements of the array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

     int start =0 ,end=n-1;

     while(start<=end ){
        int mid=(start + end)/2;

        if(arr[mid]==key){
        cout<<"got it !"<<key;
        break;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }


     }


    return 0;
}