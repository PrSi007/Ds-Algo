class Solution {
public:
    int maxDepth(string s) {
        int ans=0,d=0;
        stack <char>st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                st.push(s[i]);
                d++;
            }
            if(s[i]==')')
            {
                st.pop();
                d--;
            }
            ans = max(ans,d);
        }
        return ans;
    }
};