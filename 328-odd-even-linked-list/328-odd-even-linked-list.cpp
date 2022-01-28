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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL||head->next==NULL)
            return head;
        ListNode *shead=NULL,*ehead=NULL,*curr=head,*s2,*e2;
        bool rev = true;      
        
        while(curr!=NULL)
        {
            if(rev)
            {
                if(shead==NULL)
                {
                    shead=curr;
                    s2=curr;
                }
                else
                {
                    s2->next=curr;
                    s2=s2->next;
                }
            }
            else
            {
                if(ehead==NULL)
                {
                    ehead=curr;
                    e2=curr;
                }
                else
                {
                    e2->next=curr;
                    e2=e2->next;
                }
            }
            rev=!rev;
            curr=curr->next;
        }
        
        s2->next=ehead;
        e2->next=NULL;
        return shead;
    }
};