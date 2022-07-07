// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        int res=0,i,temp;
        for(i=0;i<str.length();i++)
        {
            if(isdigit(str[i]))
            {
                temp=str[i]-'0';
                res=res*10+temp;
            }
            else if(str[i]=='-'&&i==0)
                continue;
            else
                return -1;
        }
        
        if(str[0]!='-')
            return res;
        else
            return -res;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}  // } Driver Code Ends