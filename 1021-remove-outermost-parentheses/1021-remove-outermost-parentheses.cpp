class Solution {
public:
    string removeOuterParentheses(string s) {
        string na="";
        char ch;
        stack <char>st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                if(st.size()>=1)
                    na=na+s[i];
                st.push(s[i]);
            }
            else
            {
                st.pop();
                if(st.size()>=1)
                    na=na+')';
            }
        }
        
        return na;
    }
};