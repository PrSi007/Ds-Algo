/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector <int>v;
        stack <int>s,s2;
        ListNode *curr,*temp,*ohead,*thead;
        int c=0,one=0,two=0;
        curr=l1;
        while(curr!=NULL)
        {
            one++;
            curr=curr->next;
        }
        
        curr=l2;
        while(curr!=NULL)
        {
            two++;
            curr=curr->next;
        }
        
        if(one>=two)
        {
            ohead=l1;
            thead=l2;
        }
        else
        {
            thead=l1;
            ohead=l2;
        }
        
        curr=ohead;
        while(curr!=NULL)
        {
            s.push(curr->val);
            curr=curr->next;
        }
        
        curr=thead;
        while(curr!=NULL)
        {
            s2.push(curr->val);
            curr=curr->next;
        }
        
        while(s2.empty()==false)
        {
            if(s.top()+s2.top()+c>=10)
            {
                v.push_back(s.top()+s2.top()+c-10);
                s.pop();
                s2.pop();
                c=1;
            }
            else
            {
                v.push_back(s.top()+s2.top()+c);
                s.pop();
                s2.pop();
                c=0;
            }
        }
        
        while(s.empty()==false)
        {
            if(s.top()+c>=10)
            {
                v.push_back(s.top()+c-10);
                s.pop();
                c=1;
            }
            else
            {
                v.push_back(s.top()+c);
                s.pop();
                c=0;
            }
        }
        
        if(c==1)
            v.push_back(1);
        
        curr=NULL;
        int d=v.size()-1;
        while(d>=0)
        {
            if(curr==NULL)
            {
                curr = new ListNode(v[d--]);
                temp = curr;
            }
            else
            {
                temp->next = new ListNode(v[d--]);
                temp=temp->next;
            }
        }
        
        return curr;
    }
};