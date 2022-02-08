class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        stack <int>s;
        vector <int>ans;
        s.push(t.size()-1);
        ans.push_back(0);
        for(int i=t.size()-2;i>=0;i--)
        {
            while(s.empty()==false&&t[i]>=t[s.top()])
                s.pop();
            if(s.empty()==false)
                ans.push_back(s.top()-i);
            else
                ans.push_back(0);
            
            s.push(i);
        }
        
        int beg=0,end=ans.size()-1;
        while(beg<end)
        {
            swap(ans[beg],ans[end]);
            beg++;
            end--;
        }
        
        return ans;
        
    }
};