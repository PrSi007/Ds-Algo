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
    ListNode* removeNthFromEnd(ListNode* head, int k) {
        ListNode *curr=head,*temp;
        int n=0,c=0;
        while(curr!=NULL)
        {
            n++;
            curr=curr->next;
        }
        
        if(n==k)
        {
            temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        c=n-k;
        temp=NULL;
        curr=head;
        while(c>0)
        {
            temp=curr;
            curr=curr->next;
            c--;
        }
        temp->next=curr->next;
        delete curr;
        return head;
            
    }
};