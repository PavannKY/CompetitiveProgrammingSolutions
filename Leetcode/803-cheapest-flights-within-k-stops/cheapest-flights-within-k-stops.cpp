class Solution {
public:
    int dfs(int src,int dst,int k,vector<vector<int>>& adj,int n,int cost,int nk,vector<int>& vis)
    {
        if(src==dst) return cost;
        if(nk>k) return 1e9;
        vis[src] = 1;
        int m = 1e9;
        for(int i = 0;i<n;i++)
        {
            if(adj[src][i] != -1 && !vis[i])
            {
                // vis[src][i] = 1;
                int temp = dfs(i,dst,k,adj,n,cost+adj[src][i],nk+1,vis);
                m = min(m,temp);
            }

        }
        vis[src] = 0;
        return m;
    }

    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k){
        const int INF = 1e9;
        vector<int> dist(n,INF);
        dist[src] = 0;

        for(int i = 0;i<=k;i++)
        {
            vector<int> temp = dist;
            for(auto &flight: flights)
            {
                int u = flight[0];
                int v = flight[1];
                int wt = flight[2];

                if(dist[u] != INF)
                {
                    temp[v] = min(temp[v],dist[u]+wt);
                }
            }
            dist = temp;
        }

        return dist[dst] == INF ? -1 : dist[dst];
    }
};