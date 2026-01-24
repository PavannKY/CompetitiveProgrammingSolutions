class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int row = mat.size();
        int col = mat[0].size();
        
        int low = 0;
        int high = row-1;
        int mid = 0;

        while(high>=low)
        {
            mid = low + (high-low)/2;
            if(target<=mat[mid][col-1] && target>=mat[mid][0])
            {
                break;
            }
            if(target>mat[mid][col-1])
            {
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
        }

        // while(high>=low)
        // {
        //     int mid = low+(high-low)/2;
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

            // if(mat[mid][1] > target)
            // {
            //     high = mid;
            // }
            // else
            // {
            //     low = mid;
            // }
        // }

        return 0;

        
    }
};