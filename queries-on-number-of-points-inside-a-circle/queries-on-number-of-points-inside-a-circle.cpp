class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        int i,j,res,x,y,r;
        vector <int>v;
        for(i=0;i<queries.size();i++)
        {
            res=0;
            r = queries[i][2]*queries[i][2];
            for(j=0;j<points.size();j++)
            {
                x = (points[j][0] - queries[i][0])*(points[j][0] - queries[i][0]);
                y = (points[j][1] - queries[i][1])*(points[j][1] - queries[i][1]);
                if(x + y <= r)
                    ++res;
            }
            v.push_back(res);
        }
        
        return v;
    }
};