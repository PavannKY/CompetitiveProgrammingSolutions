class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
    vector<vector<pair<int,int>>> adj(n + 1);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    vector<int> dist(n+1,1e9);
    for (auto &edge : times)
    {
        int u = edge[0];
        int v = edge[1];
        int w = edge[2];

        adj[u].push_back({v, w});
    }

    dist[k] = 0;
    pq.push({0,k});

    while(!pq.empty())
    {
        int dis = pq.top().first;
        int node = pq.top().second;

        pq.pop();

        for(auto it: adj[node])
        {
            int edgeW = it.second;
            int adjNode = it.first;

            if(dis + edgeW < dist[adjNode])
            {
                dist[adjNode] = dis + edgeW;
                pq.push({dist[adjNode],adjNode});
            } 
        }
    }

    int ans = 0;

    for(int i =1;i<n+1;i++)
    {
        if(dist[i]==1e9)
        {
            return -1;
        }

        ans = max(ans, dist[i]);
    }
    return ans;

    }
};