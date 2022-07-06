// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
        int i,res=INT_MAX;
        map<char,int>m;
        for(i=0;i<str.length();i++)
        {
            if(m.find(str[i])==m.end())
                m.insert({str[i],i});
        }
        
        for(i=0;i<patt.length();i++)
        {
            if(m.find(patt[i])!=m.end())
                res=min(res,m[patt[i]]);
        }
        
        if(res==INT_MAX)
            return -1;
        else    
        return res;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
    cin>>t;
    while(t--)
    {
        string str;
        string patt;
        cin>>str;
        cin>>patt;
        Solution obj;
        cout<<obj.minIndexChar(str, patt)<<endl;
    }
	return 0;
}
  // } Driver Code Ends