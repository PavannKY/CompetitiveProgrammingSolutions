#include <iostream>
#include <stack>
#include <vector>
#include <cctype>

using namespace std;
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
        stack<int> s;
        for(auto i:tokens)
        {
            if(i=="+" || i=="-" || i=="/" || i=="*")
            {
                int a = s.top();
                s.pop(); 
                int b = s.top();
                s.pop();
                int ans=0;
                if(i == "+") ans = b+a;
                else if(i == "-") ans = b-a;
                else if(i == "/") ans = b/a;
                else if(i == "*") ans = b*a;
                s.push(ans);
            }

            else
            {
                s.push(stoi(i));
            }
        }
        return s.top();
    }
};