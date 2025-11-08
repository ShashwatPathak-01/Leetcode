class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>ver(m,(vector<int>(n,0)));

        ver[0][0]=grid[0][0];

        for(int j=1;j<n;j++){
            ver[0][j]=ver[0][j-1]+grid[0][j];
        }
        for(int i=1;i<m;i++){
            ver[i][0]=ver[i-1][0]+grid[i][0];
        }

        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                ver[i][j]=grid[i][j]+min(ver[i-1][j],ver[i][j-1]);
            }
        }
        return ver[m-1][n-1];
    }
};