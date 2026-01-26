class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int row = mat.size();
        int col = mat[0].size();
        for(int mid = 0;mid<row;mid++)
        {
            
            int l = 0;
            int h = col-1;
            while(h>=l)
            {
                int m = l+(h-l)/2;
                if(mat[mid][m] == target)
                {
                    return 1;
                }

                if(mat[mid][m]>target)
                {
                    h = m-1;
                }
                else
                {
                    l = m+1;
                }
            }
        }

        return 0;

        
    }
};