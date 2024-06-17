#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef  unsigned long long ull;

int main()
{
    int n;
    cin>>n;
    // a tree has n-1 nodes .
    for(int i=0;i<n-1;i++){
        int x,y;
        cin>>x>>y;
        tree[x].push_back(y);
        tree[y].push_back(x);
    }
    return 0;
}