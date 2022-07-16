class Solution {
public:
    vector<string> fizzBuzz(int n) {
        int i,no;
        vector <string>v;
        for(i=0;i<n;i++)
        {
            no=i+1;
            if(no%3==0&&no%5==0)
                v.push_back("FizzBuzz");
            else if(no%3==0)
                v.push_back("Fizz");
            else if(no%5==0)
                v.push_back("Buzz");
            else
                v.push_back(to_string(no));
        }
        
        return v;
    }
};