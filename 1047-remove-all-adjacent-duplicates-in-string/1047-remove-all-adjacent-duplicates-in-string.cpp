class Solution {
public:
    string removeDuplicates(string s) {
        stack <char>st;
        st.push(s[0]);
        string rev="";
        for(int i=1;i<s.length();i++)
        {
            if(st.empty()==false)
            {
                if(s[i]!=st.top())
                    st.push(s[i]);
                else
                    st.pop();
            }
            else
                st.push(s[i]);
        }
       
        while(st.empty()==false)
        {
            rev=st.top()+rev;
            st.pop();
        }
        
        return rev;
    }
};