// class Solution {
// public:
//     long long maxSubarraySum(vector<int>& nums, int k) {
//         int n = nums.size();
//         int ans = -1000000001;

//         for(int i=k;i<=n;i+=k)
//         {
//             cout<<i<<endl;
//             for(int j = 0;j<=n-i;j++)
//             {
//                 int sum = reduce(nums.begin()+j,nums.begin()+j+i,0);
//                 cout << j<<endl;
//                 cout << "window: [" << j << " to " << (j + i) << "] ";
//                 cout << "sum = " << sum << "\n";
//                 if(sum > ans) 
//                 {
//                     ans=sum;
//                 }
//             }

//         }

//         return ans;
//     }
// };

class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();

        long long prefix = 0;

        vector<long long> minPrefix(k, LLONG_MAX);

        minPrefix[0] = 0;

        long long ans = LLONG_MIN;

        for (int i = 0; i < n; i++) {
            prefix += nums[i];

            int mod = (i + 1) % k;

            if (minPrefix[mod] != LLONG_MAX) {
                ans = max(ans, prefix - minPrefix[mod]);
            }

            minPrefix[mod] = min(minPrefix[mod], prefix);
        }

        return ans;
    }
};
