class Solution {
public:
    int clumsy(int n) {
        int i,c=0,t1,t2,et;
        stack <int>s;
        for(int i=1;i<=n;i++)
            s.push(i);
        
        while(s.size()>1)
        {
            if(c==0)
            {
                t1=s.top();
                s.pop();
                t2=s.top();
                s.pop();
                s.push(t1*t2);
            }
            if(c==1)
            {
                t1=s.top();
                s.pop();
                t2=s.top();
                s.pop();
                s.push(t1/t2);
            }
            if(c==2)
            {
                t1=s.top();
                s.pop();
                t2=s.top();
                s.pop();
                s.push(t1+t2);
            }
            if(c==3)
            {
                t1=s.top();
                s.pop();
                t2=s.top();
                s.pop();
                if(s.empty()==false)
                {
                    t2=t2*s.top();
                    s.pop();
                    c=(c+1)%4;
                }
                if(s.empty()==false)
                {
                    t2=t2/s.top();
                    s.pop();
                    c=(c+1)%4;
                }
                s.push(t1-t2);
            }
            c++;
        }
        
        return s.top();
            
    }
};