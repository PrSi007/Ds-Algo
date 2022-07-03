// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        long long i,sum=0;
        int l[n]={0},r[n]={0};
        
        l[0]=arr[0];
        for(i=1;i<n-1;i++)
            l[i]=max(arr[i],l[i-1]);
        
        r[n-1]=arr[n-1];
        for(i=n-2;i>0;i--)
            r[i]=max(arr[i],r[i+1]);
            
        for(i=1;i<n-1;i++)
            sum+=min(l[i],r[i])-arr[i];
        
        return sum;
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