class CustomStack {
public:
    vector <int>v;
    int n,d=0;
    CustomStack(int maxSize) {
        n=maxSize;
    }
    
    void push(int x) {
        if(d<n)
        {
            v.push_back(x);
            d++;
        }
    }
    
    int pop() {
        if(d>0)
        {
            int temp = v.back();
            v.pop_back();
            d--;
            return temp;
        }
        else
            return -1;
    }
    
    void increment(int k, int val) {
        if(d>0)
        {
            if(k<d)
            {
                for(int i=0;i<k;i++)
                    v[i]+=val;
            }
            else
            {
                for(int i=0;i<d;i++)
                    v[i]+=val;
            }   
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */