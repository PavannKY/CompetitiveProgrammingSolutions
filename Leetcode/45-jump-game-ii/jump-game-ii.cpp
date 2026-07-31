class Solution {
public:
    int f(int idx,vector<int>& nums,int n,vector<int> & dp)
    {
        if(idx==n-1) return 0;
        if(idx>=n) return INT_MAX;
        
        if(dp[idx]!=-1) return dp[idx];
        
        int ans = INT_MAX;

        for(int i = 1;i<=nums[idx];i++)
        {
            if(idx+i < n)
            {
                int count = f(idx+i,nums,n,dp);
                if(count != INT_MAX)
                {
                    ans = min(ans,count+1);
                }
            }   
        }
        return dp[idx]=ans;
    }
    int jump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n+1,-1);
        return f(0,nums,n,dp);
    }
};