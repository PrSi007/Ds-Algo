class Solution {
public:
    int findTheWinner(int n, int k) {
        queue <int>q;
        int c=1,i;
        
        for(i=1;i<=n;i++)
            q.push(i);
        
        while(q.size()>1)
        {
            if(c==k)
            {
                q.pop();
                c=1;
            }
            else
            {
                int temp = q.front();
                q.pop();
                q.push(temp);
                c++;
            }
        }
        
        return q.front();
        
    }
};