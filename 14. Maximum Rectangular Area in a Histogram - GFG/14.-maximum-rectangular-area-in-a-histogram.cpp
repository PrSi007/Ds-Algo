// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        int i;
        long long curr=0,res=0;
        stack <int>s1;
        vector <int>b(n);
        vector <int>c(n);
        
        s1.push(0);
        b[0]=-1;
        for(i=1;i<n;i++)
        {
            while(s1.empty()==false&&arr[i]<=arr[s1.top()])
                s1.pop();
            b[i] = (s1.empty())?-1:s1.top();
            s1.push(i);
        }
        
        while(s1.empty()==false)
            s1.pop();
        
        s1.push(n-1);
        c[n-1]=-1;
        for(i=n-2;i>=0;i--)
        {
            while(s1.empty()==false&&arr[i]<=arr[s1.top()])
                s1.pop();
            c[i] = (s1.empty())?-1:s1.top();
            s1.push(i);
        }
        
        for(i=0;i<n;i++)
        {
            curr = arr[i];
            
            if(b[i]==-1)
                curr+= (i)*arr[i];
            else
                curr += (i-b[i]-1)*arr[i];
            
            if(c[i]==-1)
                curr+= (n-i-1)*arr[i];
            else    
                curr += (c[i]-i-1)*arr[i];
            
            res = max(curr,res);
        }
        
        return res;
    }
};


// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
  // } Driver Code Ends