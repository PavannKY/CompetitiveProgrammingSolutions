class Solution {
public:
    void dfs(vector<vector<int>>& grid,vector<vector<int>>& vis,int i,int j,int n,int m)
    {
        vis[i][j] = 1;

        int dirn[] = {0,-1,0,+1};
        int dirm[] = {-1,0,+1,0};

        for(int a=0;a<4;a++)
        {
            int newi = i + dirn[a];
            int newj = j + dirm[a];

            if(newi<n && newi>=0 && newj<m && newj>=0 && vis[newi][newj]==0 && grid[newi][newj]==1)
            {
                dfs(grid,vis,newi,newj,n,m);
            }
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));

        for(int i=0;i<n;i++)
        {
            if(grid[i][0]==1 && vis[i][0]==0)
            {
                dfs(grid,vis,i,0,n,m);
            }
            if(grid[i][m-1]==1 && vis[i][m-1]==0)
            {
                dfs(grid,vis,i,m-1,n,m);
            }
        }
        for(int i=0;i<m;i++)
        {
            if(grid[0][i]==1 && vis[0][i]==0)
            {
                dfs(grid,vis,0,i,n,m);
            }
            if(grid[n-1][i]==1 && vis[n-1][i]==0)
            {
                dfs(grid,vis,n-1,i,n,m);
            }
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1 && vis[i][j]==0)
                {
                    count++;
                }
            }
        }
        return count;
    }
};