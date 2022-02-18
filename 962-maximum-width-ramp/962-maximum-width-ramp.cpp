class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        stack <int>s;
        s.push(0);
        int i,ans=0;
        for(i=1;i<nums.size();i++)
            if(nums[i]<nums[s.top()])
                s.push(i);
        
        for(i=nums.size()-1;i>=0&&s.empty()==false;i--)
        {
            while(s.empty()==false&&nums[i]>=nums[s.top()])
            {
                ans = max(ans,i-s.top());
                s.pop();
            }
        }
        
        return ans;
    }
};