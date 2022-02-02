class Solution {
public:
    int subtractProductAndSum(int n) {
        int i,p=1,s=0,dig;
        for(i=n;i>0;i=i/10)
        {
            dig=i%10;
            p*=dig;
            s+=dig;
        }
        return p-s;
    }
};