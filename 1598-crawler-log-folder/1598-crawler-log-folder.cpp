class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack <int>s;
        for(int i=0;i<logs.size();i++)
        {
            if(logs[i]=="../")
            {
                if(s.empty()==false)
                    s.pop();
            }
            else if(logs[i]=="./")
            {
                
            }
            else
                s.push(1);
        }
        int c=0;
        while(s.empty()==false)
        {
            c++;
            s.pop();
        }
        
        return c;
    }
};