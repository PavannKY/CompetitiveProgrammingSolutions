class Solution {
public:
    typedef pair<int,pair<int, int>> PP;

    vector<vector<int>> directions = {{0,-1}, {0,1}, {-1,0}, {1,0}};

    int trapRainWater(vector<vector<int>>& hM) {
        int col = hM.size();
        int row = hM[0].size();

        priority_queue<PP, vector<PP>, greater<>> boundary;

        vector<vector<bool>> visited(col,vector<bool>(row,false));

        for(int i =0;i < col;i++)
        {
            for(int j:{0,row-1})
            {
                boundary.push({hM[i][j],{i,j}});
                visited[i][j] = true;
            }
        }

        for(int i=0 ; i<row;i++)
        {
            for(int j : {0,col-1})
            {
                boundary.push({hM[j][i],{j,i}});
                visited[j][i] = true;
            }
        }

        int water = 0;

        while(!boundary.empty())
        {
            // PP curr= boundary.top();
            auto [h, cell] = boundary.top();
            boundary.pop();

            int a = cell.first;
            int b = cell.second;

            for(vector<int>& dir : directions)
            {
                int a_ = a+dir[0];
                int b_ = b+dir[1];

                if(a_ >= 0 && a_ < col && b_ >= 0 && b_ < row && !visited[a_][b_])
                {
                    water += max(h - hM[a_][b_],0);

                    boundary.push({max(h,hM[a_][b_]), {a_,b_}});;

                    visited[a_][b_] = true;
                }
            }
        }
        return water;
    }
};