#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef  unsigned long long ull;

const int N=2e5+1;
vector <int> l[N];
bool vis[N]={0};

bool detect(int vertex,int parent){
    vis[vertex]=1;
    for(int child: l[vertex]){
        if(vis[child] && child!=parent)   return true;
        else if(vis[child]==0)
          detect(child,vertex);
    }
    return false;
}

int main()
{
    std::ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int v,e;
    cin>>v>>e;
    for(int i=0;i<e;i++){
        int v1,v2;
        cin>>v1>>v2;
        l[v1].push_back(v2);
        l[v2].push_back(v1);
    }

    bool hascycke=0;
    for(int i=1;i<=v;i++){
        if(!vis[i])
          hascycke |=detect(i,i);
    }
    cout<<(hascycke?"yes":"no")<<endl;
    return 0;
}