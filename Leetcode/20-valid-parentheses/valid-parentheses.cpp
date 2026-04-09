class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        cout<<n;
        stack<char> arr;
        for(int i=0;i<n;i++)
        {
            if(s[i] == '{' || s[i] == '[' || s[i] == '(')
            {
                arr.push(s[i]);
            }
            else
            {
                if (arr.empty()) return false;
                if(
                    (s[i] == ')' && arr.top() !='(') ||
                    (s[i] == ']' && arr.top() !='[') ||
                    (s[i] == '}' && arr.top() !='{')
                )
                {
                    return 0;
                }
                arr.pop();
            }
        }
        return arr.empty();
    }
};