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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL||head->next==NULL)
            return head;
        ListNode *nhead,*curr=head;
        int n=0,c=0;
        while(curr!=NULL)
        {
            n++;
            curr=curr->next;
        }
        
        if(n==k||k==0)
            return head;
        
        if(n<k)
        {
            if(k%n!=0)
                c=n-(k%n);
            else
                return head;
        }
        else
            c=n-k;
        
        curr=head;
        while(c>0)
        {
            curr=curr->next;
            c--;
        }
        nhead=curr;
        while(curr->next!=NULL)
            curr=curr->next;
        curr->next=head;
        while(head->next!=nhead)
            head=head->next;
        head->next=NULL;
        
        return nhead;
        
            
    }
};