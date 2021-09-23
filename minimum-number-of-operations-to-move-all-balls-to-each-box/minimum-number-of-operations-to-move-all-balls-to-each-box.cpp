class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector <int>v;
        int i,j,res;
        for(i=0;i<boxes.length();i++)
        {
            res=0;
            for(j=0;j<boxes.length();j++)
            {
                if(j!=i)
                {
                    if(boxes[j]=='1')
                    res+=abs(j-i);
                }
            }
            v.push_back(res);
        }
        
        return v;
    }
};