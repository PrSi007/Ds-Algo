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
    int getDecimalValue(ListNode* head) {
        int c = 0,ans=0;
        ListNode* curr=head;
        while(curr!=NULL)
        {
            c++;
            curr=curr->next;
        }
        curr = head;
        c--;
        while(curr!=NULL)
        {
            ans=ans+curr->val*pow(2,c--);
            curr=curr->next;
        }
        return ans;
    }
};