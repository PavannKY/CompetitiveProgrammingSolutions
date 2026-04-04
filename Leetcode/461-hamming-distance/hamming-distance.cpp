class Solution {
public:
    vector<int> binary(int n){
        vector<int> num;
        while(n) {
            num.push_back(n % 2);
            n /= 2;
        }
        return num;
    }
    int hammingDistance(int x, int y) {
        vector<int> bx = binary(x);
        vector<int> by = binary(y);

        int count = 0;

        int n = max(bx.size(),by.size());

        for(int i = 0;i<n;i++)
        {
            int bitx = (i<bx.size()) ? bx[i]:0;
            int bity = (i<by.size()) ? by[i]:0;

            if(bitx != bity) count+=1;
        }

        return count;

        // int val = x^y;
        // cout<<val;
        // return 0;

    }
};