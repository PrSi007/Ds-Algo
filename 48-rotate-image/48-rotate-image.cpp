class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int i,j;
        for(i=0;i<matrix.size();i++)
        {
            for(j=0;j<matrix[i].size();j++)
            {
                if(i<j)
                    swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        int m=matrix.size();
        for(i=0;i<m/2;i++)
        {
            for(j=0;j<matrix.size();j++)
                swap(matrix[j][i],matrix[j][m-1-i]);
        }
    }
};