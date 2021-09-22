class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0,i;
        
        for(int i=0;i<operations.size();i++)
        {
            if(operations[i]=="++X")
                ++x;
            if(operations[i]=="X++")
                x++;
            if(operations[i]=="--X")
                --x;
            if(operations[i]=="X--")
                x--;
        }
        
        return x;
        
    }
};