class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> ans;

        for(int i = 0;i<n;i++)
        {
            int target = nums1[i]; 
            auto it = find(nums2.begin(), nums2.end(), target);
            int index = it-nums2.begin();
            int a = -1;
            for(int j=index+1;j<m;j++)
            {
                if(target < nums2[j])
                {
                    a = nums2[j];
                    break;
                }
            }

            ans.push_back(a);
        }

        return ans;
    }
};