class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int res,i,j,k,max1,max2;
        res=0;
        for(i=0;i<grid.size();i++)
        {
            for(j=0;j<grid[i].size();j++)
            {
                max1=max2=grid[i][j];
                for(k=0;k<grid[j].size();k++)
                {
                    max1=max(max1,grid[i][k]);
                    max2=max(max2,grid[k][j]);
                }
                if(max1<=max2)
                    res+=max1-grid[i][j];
                else
                    res+=max2-grid[i][j];
            }
        }
        
        return res;
    }
};