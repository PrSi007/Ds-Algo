class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int i,m=0,j,c;
        string na;
        for(i=0;i<sentences.size();i++)
        {
            na = sentences[i];
            c=0;
            for(j=0;j<na.length();j++)
            {
                if(na[j]==' ')
                    c++;
                if(j==na.length()-1)
                {
                    m = max(m,c+1);
                    c=0;
                }
            }
        }
        
        return m;
    }
};