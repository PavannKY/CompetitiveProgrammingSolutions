class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int n = s.size();
        string t = s;
        reverse(t.begin(),t.end());
        vector<vector<int>> dp(n+1,vector<int>(n+1,0));
        vector<int> prev(n+1,0);
        vector<int> curr(n+1,0);

        // for(int i = 0;i<n;i++) dp[0][i]=0;
        // for(int j = 0;j<n;j++) dp[j][0]=0;
        
        // int ans = 0;

        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(s[i-1]==t[j-1])
                {
                    curr[j] = prev[j-1] + 1;
                    // ans += 1;
                }
                else
                {
                    curr[j] = max(curr[j-1],prev[j]);
                }
            }
            prev = curr;
        }
        return curr[n];
    }
};