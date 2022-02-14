class Solution {
public:
    string interpret(string command) {
        string na;
        for(int i=0;i<command.length();i++)
        {
            if(command[i]=='G')
                na+="G";
            else if(command[i]=='('&&command[i+1]==')')
            {
                na+="o";
                i++;
            }
            else
            {
                na+="al";
                i=i+3;
            }
        }
        
        return na;
    }
};