class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int i,t;
        vector <int>v;
        stack <int>s;
        s.push(nums[nums.size()-1]);
        for(i=nums.size()-2;i>=0;i--)
        {
            while(s.empty()==false&&nums[i]>=s.top())
                s.pop();
            if(s.empty()==false)
                t = s.top();
            else
            {
                t=-1;
                for(int j=0;j<i;j++)
                    if(nums[j]>nums[i])
                    {
                        t=nums[j];
                        break;
                    }
            }
            
            v.push_back(t);
            s.push(nums[i]);
        }
        reverse(v.begin(),v.end());
        for(i=0;i<nums.size()-1;i++)
            if(nums[i]>nums[nums.size()-1])
                break;
        if(i!=nums.size()-1)
            v.push_back(nums[i]);
        else
            v.push_back(-1);
        
        return v;
    }
};