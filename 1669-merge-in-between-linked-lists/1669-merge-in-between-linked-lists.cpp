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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {

            ListNode *start=list1,*end=list1;
            while(a>1)
            {
                start=start->next;
                a--;
            }
            while(b>=0)
            {
                end=end->next;
                b--;
            }
            start->next=list2;
            while(start->next!=NULL)
                start=start->next;
            start->next=end;
            
            return list1;
    }
};