// { Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
  
    int prec(char a)
    {
        if(a=='(')
        return 0;
        
        if(a=='+'||a=='-')
        return 1;
        
        if(a=='*'||a=='/')
        return 2;
        
        if(a=='^')
        return 3;
    }
  
    // Function to convert an infix expression to a postfix expression.
    string infixToPostfix(string s) {
        int i,j;
        stack <char>st;
        string res="";
        
        for(j=0;j<s.length();j++)
        {
            if((s[j]>='a'&&s[j]<='z')||(s[j]>='A'&&s[j]<='Z'))
                res=res+s[j];
            else if(s[j]=='(')
                st.push(s[j]);
            else if(s[j]==')')
            {
                while(st.empty()==false&&st.top()!='(')
                    {
                        res=res+st.top();
                        st.pop();
                    }
                    st.pop();
            }
            
            else
            {
                if(st.empty()==true)
                {
                    st.push(s[j]);
                }
                else if(prec(s[j])>prec(st.top()))
                {
                    st.push(s[j]);
                }
                else
                {
                    while(st.empty()==false&&prec(s[j])<=prec(st.top()))
                    {
                        res=res+st.top();
                        st.pop();
                    }
                    
                    st.push(s[j]);
                }
            }
        }
        
        while(st.empty()==false)
        {
            res+=st.top();
            st.pop();
        }
        
        return res;
    }
};


// { Driver Code Starts.
// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--) {
        string exp;
        cin >> exp;
        Solution ob;
        cout << ob.infixToPostfix(exp) << endl;
    }
    return 0;
}
  // } Driver Code Ends