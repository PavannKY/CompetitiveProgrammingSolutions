class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        int a,b;
        int n = num.size();
        for(a = 0;a<n;a++)
        {
            int high = n-1;
            int low = a+1;
            int mid = low + (high-low)/2;
            while(high >= low)
            {
                if(num[a]+num[mid] == target) return {a+1,mid+1};
                else if(num[a]+num[mid] > target) high = mid-1;
                else if(num[a]+num[mid] < target) low = mid+1;

                mid = low + (high-low)/2;
            }
        }
        return {};
    }
};