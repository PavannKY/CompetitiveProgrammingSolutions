class Solution {
public:
    long long maximumHappinessSum(vector<int>& h, int k) {
        long long ans=0,dec=0;
        sort(h.begin(),h.end(),greater<int>());

        for(int i = 0;i<k && i<h.size();i++)
        {
            if((h[i]-dec) <= 0) break; 
            ans += h[i]-dec;
            dec+=1;
        }
        return ans;

    }
};