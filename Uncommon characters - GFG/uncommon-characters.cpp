// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            int i;
            string na="";
            set<char>s,ans;
            for(i=0;i<A.length();i++)
                s.insert(A[i]);
            
            for(i=0;i<B.length();i++)
            {
                if(s.find(B[i])==s.end())
                    ans.insert(B[i]);
            }
            
            s.clear();
            for(i=0;i<B.length();i++)
                s.insert(B[i]);
            
            for(i=0;i<A.length();i++)
            {
                if(s.find(A[i])==s.end())
                    ans.insert(A[i]);
            }
            
            if(ans.size()==0)
            return "-1";
            
            for(char x:ans)
                na+=x;
                
            return na;    
        }
};



// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends