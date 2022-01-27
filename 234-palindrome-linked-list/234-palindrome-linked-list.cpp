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
    bool isPalindrome(ListNode* head) {
        if(head->next==NULL)
            return true;
        ListNode *temp=head;
        deque <int>q;
        while(temp!=NULL)
        {
            q.push_back(temp->val);
            temp=temp->next;
        }
        while(q.empty()==false)
        {
            if(q.front()==q.back())
            {
                q.pop_front();
                if(q.empty()==false)
                    q.pop_back();
            }
            else
                return false;
        }
        
        return true;
    }
};