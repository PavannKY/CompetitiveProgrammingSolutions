class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int total = accumulate(nums.begin(), nums.end(), 0);
        int leftsum = 0;
        for(int i = 0;i<n;i++)
        {
            int rightsum = 0;
            rightsum = total - nums[i] - leftsum;

            if(rightsum == leftsum)
            {
                return i;
            }

            leftsum += nums[i];

        }

        return -1;
    }

};