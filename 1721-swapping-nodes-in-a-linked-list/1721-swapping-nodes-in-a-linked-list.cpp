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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *sw1=head,*sw2=head;
        int c=1,n=0;
        while(sw1!=NULL)
        {
            n++;
            sw1=sw1->next;
        }
        
        sw1=head;
        while(c<k)
        {
            sw1=sw1->next;
            c++;
        }
        
        c=1;
        while(c<n-k+1)
        {
            sw2=sw2->next;
            c++;
        }
        swap(sw1->val,sw2->val);
        
        return head;
    }
};