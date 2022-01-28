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
    int pairSum(ListNode* head) {
        deque <int>q;
        ListNode *curr=head;
        while(curr!=NULL)
        {
            q.push_back(curr->val);
            curr=curr->next;
        }
        int ans=INT_MIN;
        while(q.empty()==false)
        {
            ans=max(ans,q.front()+q.back());
            q.pop_front();
            q.pop_back();
        }
        return ans;
    }
};