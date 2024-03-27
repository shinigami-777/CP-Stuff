#include<iostream>
#include<vector>
using namespace std;
//to print all the subarrays that are possible using recursion
//we use the technique of take | not take
void sub(int i,vector <int> ds,int arr[],int n){
     if(i>=n){
        for(auto it:ds)  cout<<it<<" ";
        cout<<endl; return;
     }
     ds.push_back(arr[i]);
     sub(i+1,ds,arr,n);
     ds.pop_back();
    sub(i+1,ds,arr,n);
    return; 
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)   cin>>arr[i];
    vector <int> ds;
    sub(0,ds,arr,n);
    return 0;
}