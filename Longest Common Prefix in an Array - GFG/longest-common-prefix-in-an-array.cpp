// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int n)
    {
        int i,j;
        string res=arr[0],na,c1,c2;
        for(i=0;i<n-1;i++)
        {
            c1=arr[i];
            c2=arr[i+1];
            j=0;
            na="";
            while(j<c1.length()&&j<c2.length())
            {
                if(c1[j]==c2[j])
                na+=c1[j];
                else
                break;
                j++;
            }
            if(na=="")
            return "-1";

            res=min(res,na);            
        }
        
        return res;
           
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends