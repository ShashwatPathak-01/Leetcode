class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int x=0;
        for(int i=0;i<grid.size();i++)
            for(int j=0;j<grid.size();j++)
            {
                int c=0;
                for(int k=0;k<grid.size();k++)
                {
                    if(grid[i][k]!=grid[k][j])
                    break;
                    else
                    c++;
                }
                if(c==grid.size())
                x++;
            }
        return x;
    }
};