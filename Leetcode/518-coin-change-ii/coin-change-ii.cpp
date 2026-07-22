class Solution {
public:
    int f(int idx,int amount,vector<vector<int>> &dp,vector<int>& coins,int n)
    {
        if(amount==0) return 1;
        if(idx==n) return 0;
        if(dp[idx][amount]!=-1)
        {
            return dp[idx][amount];
        }
        int num=0;
        if(amount>=coins[idx])
        {
            num += f(idx,amount-coins[idx],dp,coins,n);
        }
        int notTake = f(idx+1,amount,dp,coins,n);

        return dp[idx][amount] = num+notTake;
    }
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,-1));
        return f(0,amount,dp,coins,n);
    }
};