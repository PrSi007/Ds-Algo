// { Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        vector <string>na;
        unordered_map <string,int>m;
        
        for(int i=0;i<n;i++)
            m[arr[i]]++;
        
        int t=INT_MIN;
        string temp;
        for(auto e:m)
            if(e.second>t)
            {
                t=e.second;
                temp=e.first;
            }
        
        for(auto c:m)
            if(c.second==t&&c.first<temp)
                temp=c.first;
        
        na.push_back(temp);
        na.push_back(to_string(m[temp]));
        return na;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}
  // } Driver Code Ends