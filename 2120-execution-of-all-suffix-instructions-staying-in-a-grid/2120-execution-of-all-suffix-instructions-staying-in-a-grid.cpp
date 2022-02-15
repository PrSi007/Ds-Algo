class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        vector <int>v;
        int k,i,j,c,start=0;
        
        while(start<s.length())
        {
            c=0;
            i=startPos[0];
            j=startPos[1];
            for(k=start;k<s.length();k++)
            {
                if(s[k]=='R')
                    j++;

                if(s[k]=='D')
                    i++;
            
                if(s[k]=='L')
                    j--;
                
                if(s[k]=='U')
                    i--;  
                
                if((i>=0&&i<n)&&(j>=0&&j<n))
                    c++;
                else
                    break;
            }
            v.push_back(c); 
            start++;
        }
        
        return v;
    }
};