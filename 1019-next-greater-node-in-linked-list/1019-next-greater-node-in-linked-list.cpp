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
    vector<int> nextLargerNodes(ListNode* head) {
        vector <int>ans;
        stack <int>s;
        ListNode *curr=head,*temp=NULL,*t;
        while(curr!=NULL)
        {
            t = curr->next;
            curr->next=temp;
            temp=curr;
            curr=t;
        }
        
        s.push(temp->val);
        ans.push_back(0);
        curr=temp->next;
        int c;
        while(curr!=NULL)
        {
            while(s.empty()==false&&curr->val>=s.top())
                s.pop();
            c = (s.empty())?0:s.top();
            ans.push_back(c);
            s.push(curr->val);
            curr=curr->next;
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
        
        
    }
};