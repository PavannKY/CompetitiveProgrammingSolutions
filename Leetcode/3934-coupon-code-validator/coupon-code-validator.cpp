class Solution {
public:
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        int n = code.size();

        vector<pair<string,string>> ans;

        for(int i = 0;i<n;i++)
        {
            bool name = false;
            bool line = false;

            for(int j=0;j<code[i].size();j++)
            {
                if(isalnum(code[i][j]) || code[i][j] == '_')
                {
                    name = true;
                }
                else
                {
                    name = false;
                    break;
                }

            }

            if(name == false)
            {
                continue;
            }

            if(businessLine[i] == "electronics" || businessLine[i] == "grocery" || businessLine[i] == "restaurant" || businessLine[i] == "pharmacy")
            {
                line = true;
            }
            else
            {
                continue;
            }

            if(isActive[i] == false)
            {
                continue;
            }

            ans.push_back({businessLine[i], code[i]});

        }

        sort(ans.begin(), ans.end());

        vector<string> temp;
        for (auto& p : ans) {
            temp.push_back(p.second);
        }
        return temp;

    }

};