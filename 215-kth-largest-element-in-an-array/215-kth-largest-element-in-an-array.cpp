class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int i,temp=0,res,f=0;
        map<int,int,greater<int>>m;
        for(i=0;i<nums.size();i++)
            m[nums[i]]++;
        
        for(auto x:m)
        {
            while(x.second>0)
            {
                temp++;
                if(temp==k)
                {
                    res=x.first;
                    f=1;
                    break;
                }
                x.second--;
            }
            if(f==1)
                break;
        }
        
        return res;
    }
};