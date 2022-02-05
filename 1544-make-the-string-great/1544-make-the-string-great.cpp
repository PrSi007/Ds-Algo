class Solution {
public:
    string makeGood(string s) {
        if(s.length()==1)
            return s;
        stack <char>st;
        st.push(s[0]);
        string ans="";
        for(int i=1;i<s.length();i++)
        {
            if(st.empty()==false)
            {
                if(st.top()==s[i]+32||st.top()==s[i]-32)
                    st.pop();
                else
                    st.push(s[i]);
            }
            else
                st.push(s[i]);
        }
        
        while(st.empty()==false)
        {
            ans=st.top()+ans;
            st.pop();
        }
        return ans;
    }
};