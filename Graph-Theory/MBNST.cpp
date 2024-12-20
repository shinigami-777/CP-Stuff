// Minimum Bottle Neck Spanning Tree
/*This is a variation of the classic Minimum Spanning Tree (MST) problem, but instead of minimizing the sum of the edge weights,
we minimize the maximum edge weight in the spanning tree.*/

// For undirected graph.
//If it was directed, then Minimum Bottleneck Spanning Arborescence (MBSA)

// refer --> https://en.wikipedia.org/wiki/Minimum_bottleneck_spanning_tree

int spanningTree(int V, vector<vector<int>> adj[])
    {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        vector <int > vis(V,0);
        pq.push({0,0});
        int sum=0;
        while(!pq.empty()){
            auto it=pq.top();
            pq.pop();
            int node=it.second;
            int wt=it.first;
            if(vis[node]==1)  continue;// this means its already visited. So leave it
            vis[node]=1;
            sum=max(sum,wt);   // i only changed this
            for(auto it:adj[node]){
                int adjnode=it[0];
                int edw=it[1];
                if(!vis[adjnode]){
                    pq.push({edw,adjnode});
                }
            }
        }
        return sum;
    }
