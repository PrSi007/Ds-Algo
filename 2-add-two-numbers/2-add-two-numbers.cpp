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
        ListNode *nhead=NULL,*t,*a=l1,*b=l2;
        int n1=0,n2=0,c=0;
        while(a!=NULL)
        {
            n1++;
            a=a->next;
        }
        while(b!=NULL)
        {
            n2++;
            b=b->next;
        }
        if(n1>=n2)
        {
            a=l1;
            b=l2;
        }
        else
        {
            a=l2;
            b=l1;
        }
        
        while(b!=NULL)
        {
            if(nhead==NULL)
            {
                if(a->val+b->val<10)
                {
                    nhead = new ListNode(a->val+b->val);
                    t = nhead;
                }
                else
                {
                    nhead = new ListNode(a->val+b->val-10);
                    t = nhead;
                    c=1;
                }
            }
            else
            {
                if(a->val+b->val+c<10)
                {
                    t->next = new ListNode(a->val+b->val+c);
                    t = t->next;
                    c=0;
                }
                else
                {
                    t->next = new ListNode(a->val+b->val+c-10);
                    t = t->next;
                    c=1;
                }
            }
            a=a->next;
            b=b->next;
        }
        
        while(a!=NULL)
        {
            if(a->val+c<10)
            {
                t->next = new ListNode(a->val+c);
                t = t->next;
                c=0;
            }
            else
            {
                t->next = new ListNode(a->val+c-10);
                t = t->next;
                c=1;
            }
            a=a->next;
        }
        
        if(c==1)
            t->next = new ListNode(1);
        
        return nhead;
    }
};