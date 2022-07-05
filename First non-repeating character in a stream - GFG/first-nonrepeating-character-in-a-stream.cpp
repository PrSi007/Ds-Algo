// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    int i,d=0;
		    string ans="";
		    map<char,int>m;
		    for(i=0;i<A.length();i++)
		    {
		        if(m.find(A[i])==m.end())
		        {
		            ans+=A[d];
		            m[A[i]]=1;
		        }
		        else
		        {
		            m[A[i]]++;
		            while(m[A[d]]!=1&&d<i)
		                d++;
		            
		            if(i==d)
		            {
		                ans+="#";
		                d++;
		            }
		            else      
		                ans+=A[d];
		        }
		    }
		    
		    return ans;
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends