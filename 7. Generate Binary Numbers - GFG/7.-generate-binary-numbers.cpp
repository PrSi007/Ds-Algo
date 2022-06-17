// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

//Function to generate binary numbers from 1 to N using a queue.
vector<string> generate(int N)
{
	queue <string>q;
	vector <string>ans;
	int i;
	q.push("1");
	ans.push_back("1");
	for(i=1;i<=N-1;i++)
	{
	    q.push(q.front()+"0");
	    q.push(q.front()+"1");
	    q.pop();
	    ans.push_back(q.front());
	}
	
	return ans;
}


// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> ans = generate(n);
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}  // } Driver Code Ends