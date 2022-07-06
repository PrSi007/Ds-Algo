// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}// } Driver Code Ends


string firstRepChar(string s)
{
    int i;
    set<char>st;
    string na="";
    for(i=0;i<s.length();i++)
    {
        if(st.find(s[i])==st.end())
            st.insert(s[i]);
        else
        {
            na=na+s[i];
            return na;
        }
    }
    
    return "-1";
    
}