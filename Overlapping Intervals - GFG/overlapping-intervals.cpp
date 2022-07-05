// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
        int i,a,b,f,s;
        vector <vector<int>>res;
        sort(intervals.begin(),intervals.end());
        f=intervals[0][0];
        s=intervals[0][1];
        for(i=0;i<intervals.size()-1;i++)
        {
            if(s>=intervals[i+1][0])
                s=max(s,intervals[i+1][1]);
            else
            {
                res.push_back({f,s});
                f=intervals[i+1][0];
                s=intervals[i+1][1];
            }
        }
        
        res.push_back({f,s});
        return res;
        
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends