// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& a, int n, int k){
        int i,temp,j;
        vector <int>v,ans;
        for(i=0;i<n;i++)
        {
            if(i%k==0)
            {
                reverse(v.begin(),v.end());
                ans.insert(ans.end(),v.begin(),v.end());
                v.clear();
            }
            v.push_back(a[i]);
        }
        
        if(i-1%k!=0)
        {
            reverse(v.begin(),v.end());
            ans.insert(ans.end(),v.begin(),v.end());
        }
        
        for(i=0;i<n;i++)
            a[i]=ans[i];
    }
};

// { Driver Code Starts.
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
}

  // } Driver Code Ends