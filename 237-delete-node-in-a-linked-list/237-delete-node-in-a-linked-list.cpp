/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode*temp=node;
        while(node->next!=NULL)
        {
            swap(node->val,node->next->val);
            if(node->next->next==NULL)
                temp=node;
            node=node->next;
        }
        temp->next=NULL;
    }
};