class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        
        sort(nums.begin(), nums.end());
        
        int n = nums.size();
        int ans=1;
        int m=1;
        
        for(int i=1;i<n;i++)
        {
            if(nums[i] == nums[i-1]) continue;

            if(nums[i] == nums[i-1] + 1) m++;
            else m=1;

            ans = max(ans,m);
        }
        return ans;
    }
};