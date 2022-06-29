// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int a[], int n, long long s)
    {
        int i,csum=0,f=0;
        vector <int>ans;
        for(i=0;i<n;i++)
        {
            csum+=a[i];
            if(csum>s)
            {
                while(csum>s&&f<i)
                csum-=a[f++];
            }
            if(csum==s)
            {
                ans.push_back(f+1);
                ans.push_back(i+1);
                return ans;
            }
        }
        
        ans.push_back(-1);
        return ans;
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends