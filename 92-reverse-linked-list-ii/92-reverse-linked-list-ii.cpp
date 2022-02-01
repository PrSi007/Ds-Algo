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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head->next==NULL)
            return head;
        ListNode *curr=head,*prev=NULL,*temp,*temp2,*l=head;
        if(left==1)
        {
            while(right>0)
            {
                temp = curr->next;
                curr->next=prev;
                prev=curr;
                curr=temp;
                right--;
            }
            head->next=curr;
            return prev;
        }
        else
        {
            int d=2;
            while(d<left)
            {
                l=l->next;
                d++;
            }
            curr=l->next;
            temp2=curr;
            while(right-left>=0)
            {
                temp=curr->next;
                curr->next=prev;
                prev=curr;
                curr=temp;
                left++;
            }
            l->next=prev;
            temp2->next=curr;
            return head;
        }
    }
};