class Solution {
public:
    
    bool compare(char a,char b)
    {
        if((a=='('&&b==')')||(a=='['&&b==']')||(a=='{'&&b=='}'))
            return true;
        else
            return false;
    }
    
    bool isValid(string s) {
        stack <char>st;
        st.push(s[0]);
        for(int i=1;i<s.length();i++)
        {
            if((s[i]==')'||s[i]==']'||s[i]=='}')&&st.empty()==false)
            {
                int b = compare(st.top(),s[i]);
                if(b==false)
                    return b;
                else
                    st.pop();
            }
            else
                st.push(s[i]);
        }
        
        return st.empty();
    }
};