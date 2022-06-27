#include <bits/stdc++.h>
#include <algorithm>
class Solution {
public:
    
    bool func(const vector <int>&v1,const vector <int>&v2)
    {
        return (v1[0]<v2[0]);
    }
    vector<vector<int>> merge(vector<vector<int>>& a) {
        vector <vector <int>>ans;
        sort(a.begin(),a.end());
        int l=a[0][0],m=a[0][1];
        for(int i=1;i<a.size();i++)
        {
            if(m>=a[i][0]&&m<=a[i][1])
                m=a[i][1];
            else if(m>=a[i][1])
                continue;
            else
            {
                ans.push_back({l,m});
                l=a[i][0];
                m=a[i][1];
            }    
    
        }
        ans.push_back({l,m});
        return ans;
    }
};