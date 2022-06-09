// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        int i,c=INT_MIN;
        for(i=0;i<n;i++)
        {
            if(arr[i]>c)
                c=arr[i];
        }
        
        int t[c+2]={0};
        for(i=0;i<n;i++)
        {
            if(arr[i]>0)
                t[arr[i]]++;
        }
        
        for(i=1;i<c+2;i++)
        {
            if(t[i]==0)
                return i;
        }
    } 
};

// { Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
}   // } Driver Code Ends