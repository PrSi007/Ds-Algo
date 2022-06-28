class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0,j,m,n;
        m=matrix.size();
        n=matrix[0].size();
        while(i<m)
        {
            if(target>=matrix[i][0]&&target<=matrix[i][n-1])
            {
                for(j=0;j<n;j++)
                    if(matrix[i][j]==target)
                        return true;
            }
            i++;
        }
        return false;
    }
};