class Solution {
public:
    bool f(vector<int>& nums,vector<vector<int>>& dp,int n,int idn,int target)
    {
        if(target==0) return true;
        if(idn==n-1) return (nums[n-1]==target);
        if(dp[idn][target] != -1)
        {
            return dp[idn][target];
        }

        bool skip = f(nums,dp,n,idn+1,target);
        bool take = false;

        if(nums[idn]<=target)
        {
            take = f(nums,dp,n,idn+1,target-nums[idn]);
        }

        return dp[idn][target] = take||skip;
    }
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum = accumulate(nums.begin(), nums.end(), 0);
        
        if(sum%2==1) return false;
        int target = sum/2;

        vector<vector<int>> dp(n,vector<int>(target+1,-1));
        return f(nums,dp,n,0,target);
    }
};