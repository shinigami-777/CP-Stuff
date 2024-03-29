#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main()
{
    /*std::ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);*/
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)   cin>>arr[i];
    cout<<"\nEnter your target:\n";
    int t;
    cin>>t;
    int l=0,h=n-1;
    bool flag=0;
    sort(arr,arr+n);
    while(l<=h){
        if(arr[l]+arr[h]==t){
            cout<<arr[l]<<" + "<<arr[h]<<endl;
            flag=1;
            break;
        }
        else if(arr[l]+arr[h]<t){
            l++;
        }
        else{
            h--;
        }
    }
    if(!flag)   cout<<"Not Found!!!\n";
    return 0;
}