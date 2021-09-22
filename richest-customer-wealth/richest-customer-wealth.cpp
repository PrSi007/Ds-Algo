class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int res=0,i,j,s;
        for(i=0;i<accounts.size();i++)
        {
            s=0;
            for(j=0;j<accounts[i].size();j++)
                s=s+accounts[i][j];
            res = max(res,s);
        }
        
        return res;
    }
};