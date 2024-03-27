#include<iostream>
using namespace std;
int swap(int arr[],int l,int r){
    int temp=arr[l];
    arr[l]=arr[r];
    arr[r]=temp;
    return 0;
}

int rev(int arr[],int l,int r){
    if(l>=r)  return 0;
    swap(arr,l,r);
    l++; r--;
    rev(arr,l,r);
    return 0;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    rev(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}