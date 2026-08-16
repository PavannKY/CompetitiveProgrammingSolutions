class Solution {
public:
    int solve(vector<vector<int>>& dp,vector<int>& prices,int idx,bool buy)
    {
        if(idx == prices.size()) return 0;

        if(dp[idx][buy] != -1)
        {
            return dp[idx][buy];
        }
        
        if(buy==0)
        {
            return dp[idx][buy]=max(-prices[idx] + solve(dp,prices,idx+1,1) , solve(dp,prices,idx+1,0));
        }
        else
        {
            return dp[idx][buy]=max(prices[idx]+solve(dp,prices,idx+1,0) , solve(dp,prices,idx+1,1));
        }

    }
    int maxProfit(vector<int>& prices) {
        vector<vector<int>> dp(prices.size(),vector<int>(2,-1));
        return solve(dp,prices,0,0);

    }
};