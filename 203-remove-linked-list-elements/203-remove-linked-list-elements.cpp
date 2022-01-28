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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL)
            return head;
        if(head->next==NULL)
        {
            if(head->val==val)
                head=NULL;
            return head;
        }
        
        while(head!=NULL&&head->val==val)
        {
            ListNode *temp=head;
            head=head->next;
            delete temp;
        }
        if(head==NULL)
            return head;
        
        ListNode *curr=head->next,*temp=head;
        while(curr!=NULL)
        {
            if(curr->val==val)
            {
                ListNode *d = curr;
                curr=curr->next;
                delete d;
                temp->next=curr;
            }
            else
            {
                temp=temp->next;
                curr=curr->next;
            }
        }
        return head;
            
    }
};