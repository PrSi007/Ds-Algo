class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue <int>q;
        for(int i=0;i<tickets.size();i++)
            q.push(tickets[i]);
        
        int ans=0,n=k;
        while(n>=0)
        {
            q.front()--;
            ans++;
            if(q.front()==0&&n==0)
                return ans;
            else if(q.front()!=0&&n==0)
            {
                int temp = q.front();
                q.pop();
                q.push(temp);
                n=q.size()-1;
            }
            else if(q.front()==0&&n!=0)
            {
                q.pop();
                n--;
            }
            else
            {
                int temp = q.front();
                q.pop();
                q.push(temp);
                n--;
            }
                
        }
        
        return ans;
    }
};