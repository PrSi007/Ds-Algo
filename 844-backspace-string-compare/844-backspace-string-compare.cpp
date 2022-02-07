class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string a="",b="";
        stack <char>st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!='#')
                st.push(s[i]);
            else
            {
                if(st.empty()==false)
                    st.pop();
            }
        }
        
        while(st.empty()==false)
        {
            a=st.top()+a;
            st.pop();
        }
        
        for(int i=0;i<t.length();i++)
        {
            if(t[i]!='#')
                st.push(t[i]);
            else
            {
                if(st.empty()==false)
                    st.pop();
            }
        }
        
        while(st.empty()==false)
        {
            b=st.top()+b;
            st.pop();
        }
        
        return a==b;
    }
};