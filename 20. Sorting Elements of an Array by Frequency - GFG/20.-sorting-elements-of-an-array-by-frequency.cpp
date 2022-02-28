// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(int arr[],int n)
    {
        int c=INT_MIN;
        vector <int>ans;
        map <int,int>m;
        
        for(int i=0;i<n;i++)
            {
                m[arr[i]]++;
                c=max(c,m[arr[i]]);
            }
            
        for(int i=c;i>=1;i--)
        {
            for(auto t:m)
            {
                if(t.second==i)
                {
                    for(int j=1;j<=t.second;j++)
                        ans.push_back(t.first);
                }
            }
        }
        
        return ans;
            
        
    }
};

// { Driver Code Starts.

int main() {
	
	
	int t;
	cin >> t;
	
	
	while(t--){
	    
	    
	    int n;
	    cin >> n;
	    
	    int a[n+1];
	    
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution obj;
	    vector<int> v;
	    v = obj.sortByFreq(a,n);
	    for(int i:v)
	        cout<<i<<" ";
	    cout << endl;
	}
	
	return 0;
}

  // } Driver Code Ends