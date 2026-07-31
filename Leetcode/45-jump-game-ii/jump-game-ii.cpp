class Solution {
public:
    int jump(vector<int>& nums) {
        int r=0, l=0, jump=0;
        int n = nums.size();
        while(r<n-1)
        {
            int far = 0;
            for(int i=l;i<=r;i++)
            {
                far = max(far,nums[i]+i);
            }

            l=r+1;
            r=far;
            jump+=1;
        }
        return jump;

    }
};