class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int i,res=0,c=1;
        for(i=0;i<nums.size();i++)
        {
            if(nums[res]==nums[i])
                c++;
            else
                c--;
            if(c==0)
            {
                res=i;
                c=1;
            }
        }
        
        return nums[res];
    }
};