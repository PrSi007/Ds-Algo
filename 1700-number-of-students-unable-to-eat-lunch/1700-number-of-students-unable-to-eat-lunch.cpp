class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int d=0,c=0;
        queue <int>q1;
        stack <int>q2;
        for(d=0;d<students.size();d++)
        {
            q1.push(students[d]);
            q2.push(sandwiches[sandwiches.size()-1-d]);
        }
        d=0;
        while(q2.size()>0 && d<q2.size())
        {
            if(q1.front()==q2.top())
            {
                q1.pop();
                q2.pop();
                d=0;
                c++;
            }
            else
            {
                int temp = q1.front();
                q1.pop();
                q1.push(temp);
                d++;
            }
        }
        
        return students.size()-c;
    }
};