#include <iostream>
#include <stack>
#include <vector>
#include <cctype>

using namespace std;
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        int n = t.size();
        vector<int> ans(n,0);
        stack<int> st;
        int prev;
        for(int i=0 ;i<n;i++)
        {
            while(!st.empty() && t[i] > t[st.top()])
            {
                prev = st.top();
                st.pop();
                ans[prev] = i-prev;
            }

            st.push(i);

        }
            return ans;
    }
};