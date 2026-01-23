class Solution {
public:
    string removeOuterParentheses(string st) {
        stack<char> s;
        int count = 0;
        string ans = "";
        for(auto i:st)
        {
            if(s.empty() && i=='(')
            {
                s.push(i);
            }
            else if(count == 1 && i==')')
            {
                s.pop();
            }
            else
            {
                ans+=i;
            }

            if(i=='(') count++;
            else count--;
            // if((count == rem) && !s.empty())
            // {
            //     s.pop();
            // }
        }
        return ans;
    }
};