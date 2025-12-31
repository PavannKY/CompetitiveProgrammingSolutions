class Solution {
public:
    string resultingString(string s) {
        vector<char> stack;
        int len = s.size();
        for(char i : s)
        {
            if(stack.empty())
            {
                stack.push_back(i);
                continue;
            }

            if(stack.back()==char(i-1) || stack.back()==char(i+1) || (stack.back()=='a' && i=='z') || (stack.back()=='z' && i=='a'))
            {
                stack.pop_back();
            }
            else
            {
                stack.push_back(i);
            }


        }

        // for(char c : stack)
        // {
        //     cout<<c;
        // }

        return string(stack.begin(),stack.end());
    }

};