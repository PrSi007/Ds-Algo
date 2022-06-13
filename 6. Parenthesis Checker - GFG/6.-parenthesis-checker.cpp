// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    
    bool match(char a,char b)
    {
        if((a=='('&&b==')')||(a=='{'&&b=='}')||(a=='['&&b==']'))
            return true;
        else
            return false;
    }
    
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack <char>s;
        int i;
        
        for(i=0;i<x.length();i++)
        {
            if(x[i]=='('||x[i]=='{'||x[i]=='[')
                s.push(x[i]);
            else
            {
                if(s.empty()==true)
                    return false;
                
                if(match(s.top(),x[i])==false)
                    return false;
                else
                    s.pop();
            }
        }
        
        if(s.empty()==true)
            return true;
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends