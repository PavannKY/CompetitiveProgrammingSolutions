class Solution {
public:
    bool checkOnesSegment(string s) {
        int n = s.size();
        int count = 0;
        if(s[0]=='1') count++;
        for(int i = 1;i<n;i++)
        {
            if(s[i] == '1' && s[i-1] == '0')
            {
                count++;
            }
        }

        cout<<count;

        if(count<=1) return true;
        else return false;
    }
};