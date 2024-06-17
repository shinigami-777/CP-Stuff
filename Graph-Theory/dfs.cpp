#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef  unsigned long long ull;

const int N=1000;
vector <int> l[N];
bool vis[N]={0};


//4 places to take action
void dfs(int vertex){
    //take action on entering vertex
    cout<<vertex<<"-->";
    vis[vertex]=1;
    for(int child: l[vertex]){
        //take action on child before entering child
        if(!vis[child])
          dfs(child);
        //take action on child after exiting child
    }
    //take action on vertex before exiting vertex
}


//update. DFS on matrix. From the flood-fill leetcode problem

void dfs(int i,int j,int initial_colour,int new_color, vector <int<vector<int>> v){
    int n= v.size();
    int m =v[0].size();
    if(i<0 && j<0)   return;
    else if(i>=n && j>=m)   return;
    else if (v[i][j]==new_color)   return;
    else if (v[i][j]==0)   return;    //not reachable anymore from this point
    else v[i][j]=new_color;

    dfs(i+1,j-1,initial_colour,new_color,vector <int<vector<int>> v);
    dfs(i-1,j-1,initial_colour,new_color,vector <int<vector<int>> v);
    dfs(i+1,j+1,initial_colour,new_color,vector <int<vector<int>> v);
    dfs(i-1,j+1,initial_colour,new_color,vector <int<vector<int>> v);
}

int main()
{
    std::ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin>>n>>m;
    // n is number of nodes andfarming
    // m is number of edges
    //taking for an undirected graph
    for(int i=0;i<m;i++){
        int v1,v2;
        cin>>v1>>v2;
        l[v1].push_back(v2);
        l[v2].push_back(v1);
    }
    dfs(1);
    return 0;
}


//time complexity of dfs is O(v+e)