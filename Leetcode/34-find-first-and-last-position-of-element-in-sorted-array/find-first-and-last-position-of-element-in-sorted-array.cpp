class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        vector<int> ans(2,-1);

        while(low<=high)
        {
            int mid = low + (high-low) / 2;

            if(nums[mid] >= target)
            {
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        if(low < n && nums[low] == target)
        {
            ans[0] = low;
        }
        else
        {
            return ans;
        }

        low=0;
        high = n-1;
        while(low<=high)
        {
            int mid = low + (high-low) / 2;

            if(nums[mid] <= target)
            {
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
        }
        
        ans[1] = high;

        return ans;


    }
};