class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    sort(strs.begin(), strs.end());

    string ans = "";
    string n = strs[0];
    string m = strs.back();
    int len = min(n.size(), m.size());

    for(int i = 0;i<len;i++)
    {
        if(n[i] == m[i])
        {
            ans += n[i];
        }
        else
        {
            break;
        }
    }

    return ans;
    }
};