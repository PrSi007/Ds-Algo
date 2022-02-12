class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int i;
        vector <vector<int>>ans;
        vector <int>v1,v2;
        if(numRows==1)
        {
            v1.push_back(1);
            ans.push_back(v1);
            return ans;
        }
        if(numRows==2)
        {
            v1.push_back(1);
            v2.push_back(1);
            v2.push_back(1);
            ans.push_back(v1);
            ans.push_back(v2);
            return ans;
        }
        
        if(numRows==3)
        {
            v1.push_back(1);
            v2.push_back(1);
            v2.push_back(1);
            ans.push_back(v1);
            ans.push_back(v2);
            v2.clear();
            v2.push_back(1);
            v2.push_back(2);
            v2.push_back(1);
            ans.push_back(v2);
            return ans;
        }
        
        v1.push_back(1);
        v2.push_back(1);
        v2.push_back(1);
        ans.push_back(v1);
        ans.push_back(v2);
        v2.clear();
        v2.push_back(1);
        v2.push_back(2);
        v2.push_back(1);
        ans.push_back(v2);
                     
        v1 = v2;
        v2.clear();
        
        while(numRows-3>0)
        {
            v2.push_back(1);
            for(i=1;i<v1.size();i++)
                v2.push_back(v1[i]+v1[i-1]);
            v2.push_back(1);
            
            ans.push_back(v2);
            v1=v2;
            v2.clear();
            numRows--;
        }
        
        return ans;
    }
};