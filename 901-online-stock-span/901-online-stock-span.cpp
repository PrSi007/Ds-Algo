class StockSpanner {
public:
    stack <int>s;
    vector <int>v;
    int i,ans;
    StockSpanner() {
        i=0;
    }
    
    int next(int price) {
        v.push_back(price);
        if(s.empty())
        {
            s.push(0);
            i++;
            return 1;
        }
        else
        {
             while(s.empty()==false&&v[i]>=v[s.top()])
                s.pop();   
            ans = (s.empty()==false)?i-s.top():i+1;
                
            s.push(i);
            i++;
            return ans;   
        }
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */