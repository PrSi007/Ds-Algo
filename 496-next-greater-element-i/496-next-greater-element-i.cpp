class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack <int>s;
        map <int,int>mp;
        vector <int>ans;
        int i;
        s.push(nums2[nums2.size()-1]);
        for(i=nums2.size()-1;i>=0;i--)
        {
            while(s.empty()==false&&nums2[i]>=s.top())
                s.pop();
            if(s.empty())
                mp[nums2[i]]=-1;
            else
                mp[nums2[i]]=s.top();
            s.push(nums2[i]);
        }
        
        for(i=0;i<nums1.size();i++)
        {
            if(mp.find(nums1[i])!=mp.end())
                ans.push_back(mp[nums1[i]]);
        }
        
        return ans;
    }
};