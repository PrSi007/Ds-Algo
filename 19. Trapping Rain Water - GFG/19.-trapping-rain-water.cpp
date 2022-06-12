// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int a[], int n){
        int l[n],r[n],i;
        long long int ans=0;
        
        l[0]=a[0];
        for(i=1;i<n;i++)
            l[i]=max(l[i-1],a[i]);
        
        r[n-1]=a[n-1];
        for(i=n-2;i>=0;i--)
            r[i]=max(r[i+1],a[i]);
            
        for(i=1;i<n-1;i++)
            ans=ans+(min(l[i],r[i])-a[i]);
            
        return ans;    
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends