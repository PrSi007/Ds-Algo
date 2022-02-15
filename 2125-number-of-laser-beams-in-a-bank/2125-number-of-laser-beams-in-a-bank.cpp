class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector <int>v;
        int i,c,j,t,ans;
        string na;
        for(i=0;i<bank.size();i++)
        {
            na=bank[i];
            c=0;
            for(j=0;j<na.length();j++)
            {
                if(na[j]=='1')
                    c++;
            }
            if(c!=0)
            v.push_back(c);
        }
        
        if(v.empty())
            return 0;
        
        ans=0;
        for(i=0;i<v.size()-1;i++)
            ans=ans+v[i]*v[i+1];
            
        return ans;
    }
};