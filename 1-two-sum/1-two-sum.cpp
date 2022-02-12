class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int>v;
        v= nums;
        sort(v.begin(),v.end());
        int i=0,j=i+1,a,b;
        while(i<v.size())
        {
            if(i<v.size()&&j==v.size())
            {
                i++;
                j=i+1;
            }
            
            else if(v[i]+v[j]<target)
                j++;
            
            else if(v[i]+v[j]>target)
            {
                i++;
                j=i+1;
            }
            else
            {
                a=v[i];
                b=v[j];
                break;
            }
        }
        
        v.clear();
        for(i=0;i<nums.size();i++)
        {
            if(a==nums[i]||b==nums[i])
                v.push_back(i);
        }
        
        return v;
    }
};