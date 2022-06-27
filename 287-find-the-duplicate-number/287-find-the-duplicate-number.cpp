class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i;
        set<int>s;
        for(i=0;i<nums.size();i++)
        {
            if(s.find(nums[i])!=s.end())
                break;
            else
                s.insert(nums[i]);
        }
        return nums[i];
    }
};