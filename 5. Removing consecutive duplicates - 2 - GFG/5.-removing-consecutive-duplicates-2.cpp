// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to remove pair of duplicates from given string using Stack.
    string removePair(string str)
    {
        string ans="";
        stack <char>s;
        s.push(str[0]);
        for(int i=1;i<str.length();i++)
        {
            if(s.empty()==false&&str[i]==s.top())
                s.pop();
            else
                s.push(str[i]);
        }
        
        while(s.empty()==false)
        {
            ans=s.top()+ans;
            s.pop();
        }
        
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        string s;
        cin>>s;
        Solution obj;
        string ans = obj.removePair (s);
        if(ans=="")
            cout<<"Empty String"<<endl;
        else
            cout<<ans<<endl;
    }
    
	return 0;
}  // } Driver Code Ends