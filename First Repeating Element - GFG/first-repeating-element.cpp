// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template in C++

class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        unordered_set <int>s1,s2;
        int i,ans=-1;
        s1.insert(arr[0]);
        for(i=1;i<n;i++)
        {
            if(s1.find(arr[i])==s1.end())
                s1.insert(arr[i]);
            else
            s2.insert(arr[i]);
        }
        
        for(i=0;i<n;i++)
        {
            if(s2.find(arr[i])!=s2.end())
                {
                    ans=i+1;
                    break;
                }
        }
        
        return ans;
    }
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; ++i) cin >> arr[i];
        Solution ob;
        cout << ob.firstRepeated(arr, n) << "\n";
    }

    return 0;
}
  // } Driver Code Ends