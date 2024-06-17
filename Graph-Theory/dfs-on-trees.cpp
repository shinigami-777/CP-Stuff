#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef  unsigned long long ull;

const int N=1000;
vector <int> tree[N];

int height[N];
int depth[N];

void dfs(vector <int> tree[], int parent ,int vertex){

    for(auto child:tree[parent]){
        if(child == parent)  continue;
        depth[child] = depth[vertex] +1;
        dfs(tree, vertex, child);
        heigth[vertex]=max(height[vertex],height[child]+1);
    }
}

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