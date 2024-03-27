#include<iostream>
#include<vector>
using namespace std;
int Psub(int i,vector <int> ds,int arr[],int n,int sum,int k){
    if(i==n){
        if(sum==k){
            for(auto it: ds)  cout<<it<<" ";
            cout<<"\n";
        }
        return 0;
    }
    ds.push_back(arr[i]);
    sum+=arr[i];
    Psub(i+1,ds,arr,n,sum,k);
    ds.pop_back();
    sum-=arr[i];
    Psub(i+1,ds,arr,n,sum,k);
    return 0;
}
int main()
{   int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)   cin>>arr[i];
    cout<<"Enter sum to find:";
    int key;
    cin>>key;
    vector <int> ds;
    Psub(0,ds,arr,n,0,key);
    return 0;
}