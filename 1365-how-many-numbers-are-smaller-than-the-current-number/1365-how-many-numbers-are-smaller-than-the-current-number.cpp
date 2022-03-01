class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int i,c;
        vector <int>v;
        unordered_map <int,int>m;
        for(i=0;i<nums.size();i++)
            m[nums[i]]++;
        for(i=0;i<nums.size();i++)
        {
            c=0;
            for(auto t:m)
                if(t.first<nums[i])
                    c+=t.second;
            v.push_back(c);
        }
        
        return v;
    }
};