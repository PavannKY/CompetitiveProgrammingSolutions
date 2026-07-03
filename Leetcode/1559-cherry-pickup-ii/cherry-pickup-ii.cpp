class Solution {
public:
    int f(vector<vector<int>>& grid,vector<vector<vector<int>>>& dp,int i,int j1,int j2,int n,int m)
    {
        if(i>=n || j1>=m ||j2>=m || j1<0 || j2<0) return -1e9;

        if(j1==j2) 
        {
            return grid[i][j1];
        }

        if(i == n-1)
        {
            if(j1 == j2)
                return grid[i][j1];
            return grid[i][j1] + grid[i][j2];
        }

        if(dp[i][j1][j2] != -1)
        {
            return dp[i][j1][j2];
        }

        int temp = -1e9;
        for(int a = -1;a<=1;a++)
        {
            for(int b = -1;b<=1;b++)
            {
                int temp2 = f(grid,dp,i+1,j1+a,j2+b,n,m) + grid[i][j1] + grid[i][j2];

                if(temp2>temp)
                {
                    temp=temp2;
                }
            }
        }

        return dp[i][j1][j2] = temp;
    }
    int cherryPickup(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(m, -1)));

        return f(grid,dp,0,0,m-1,n,m);
    }
};