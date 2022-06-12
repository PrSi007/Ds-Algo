// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int a[], int n) 
    { 
        int l[n],r[n],i,j,ans=0;
        l[0]=a[0];
        for(i=1;i<n;i++)
            l[i]=min(l[i-1],a[i]);
        
        r[n-1]=a[n-1];
        for(i=n-2;i>=0;i--)
            r[i]=max(r[i+1],a[i]);
        
        i=0;
        j=0;    
        while(i<n&&j<n)
        {
            if(l[i]<=r[j])
            {
                ans=max(ans,j-i);
                j++;
            }
            else
                i++;
        }
        
        return ans;
    }
};

// { Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
}   // } Driver Code Ends