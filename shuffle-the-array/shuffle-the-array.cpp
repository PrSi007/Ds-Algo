class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector <int>v;
        int d=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0)
            {
                v.push_back(nums[d]);
                d++;
            }
            else
            {
                v.push_back(nums[n]);
                n++;
            }
        }
        
        return v;
    }
};