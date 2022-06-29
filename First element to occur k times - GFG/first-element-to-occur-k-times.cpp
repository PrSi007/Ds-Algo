// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int firstElementKTime(int a[], int n, int k)
    {
        int i,m=INT_MIN;
        for(i=0;i<n;i++)
            m=max(m,a[i]);
        int temp[m+1]={0};
        for(i=0;i<n;i++)
        {
            temp[a[i]]++;
            if(temp[a[i]]==k)
                return a[i];
        }
        
        return -1;
    }
};

// { Driver Code Starts.

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution ob;
	    cout<<ob.firstElementKTime(a, n, k)<<endl;
	}
	
	return 0;
}  // } Driver Code Ends