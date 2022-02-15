class Solution {
public:
    int minAddToMakeValid(string s) {
        stack <char>st;
        st.push(s[0]);
        
        for(int i=1;i<s.length();i++)
        {
            if(st.empty())
                st.push(s[i]);
            else if(st.top()=='('&&s[i]==')')
                st.pop();
            else
                st.push(s[i]);
        }
        
        int c=0;
        while(st.empty()==false)
        {
            c++;
            st.pop();
        }
        
        return c;
    }
};