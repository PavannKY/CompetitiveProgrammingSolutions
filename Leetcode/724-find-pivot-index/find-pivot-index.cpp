class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            int sum1=0;
            int sum2=0;
            for(int num = 0;num<i;num++)
            {
                sum1 += nums[num];
            }
            for (int num = i+1;num<n;num++)
            {
                sum2 += nums[num];
            }

            if(i==0 && sum2==0)
            {
                return 0;
            }
            if (sum1 == sum2)
            {
                return i;
            }
        }

        return -1;
    }

};