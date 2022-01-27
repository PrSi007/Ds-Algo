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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1=0,l2=0,c=0;
        ListNode *temp,*temp2;
        temp=headA;
        while(temp!=NULL)
        {
            l1++;
            temp=temp->next;
        }
        
        temp=headB;
        while(temp!=NULL)
        {
            l2++;
            temp=temp->next;
        }
        
        if(l1<l2)
        {
            temp=headB;
            while(c<abs(l1-l2))
            {
                temp = temp->next;
                c++;
            }
            temp2=headA;
        }
        else
        {
            temp=headA;
            while(c<abs(l1-l2))
            {
                temp = temp->next;
                c++;
            }
            temp2=headB;
        }
        while(temp!=NULL&&temp2!=NULL)
        {
            if(temp==temp2)
                return temp;
            temp=temp->next;
            temp2=temp2->next;
        }
        return NULL;
        
        
    }
};