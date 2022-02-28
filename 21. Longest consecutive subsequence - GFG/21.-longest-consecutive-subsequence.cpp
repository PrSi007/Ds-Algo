// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
        int res=0,curr,i;
        unordered_set <int>s(arr,arr+N);
        for(i=0;i<N;i++)
        {
            curr=1;
            if(s.find(arr[i]-1)==s.end())
            {
                while(s.find(arr[i]+curr)!=s.end())
                    curr++;
                res=max(res,curr);    
            }
        }
        
        return res;
        
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends