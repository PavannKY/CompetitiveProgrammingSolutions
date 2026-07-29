class Solution {
public:
    bool f(int idx,vector<int> &nums,int n,vector<int> &dp)
    {
        if(idx>=n-1)
        {
            return true;
        }
        if(nums[idx]==0)
        {
            return false;
        }
        if(dp[idx]!=-1) return dp[idx];
        for(int i=1;i<=nums[idx];i++)
        {
            if(f(idx+i,nums,n,dp))
            {
                return dp[idx]=true;
            }
        }
        return dp[idx]=false;
    }
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,-1);
        return f(0,nums,n,dp);
    }
};