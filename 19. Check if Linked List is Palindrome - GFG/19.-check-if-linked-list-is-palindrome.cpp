// { Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




 // } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
  
    bool middle(Node*head,Node *ohead)
    {
        Node *curr=head,*temp=NULL,*t;
        while(curr!=NULL)
        {
            t=curr->next;
            curr->next=temp;
            temp=curr;
            curr=t;
        }
        
        while(temp!=NULL)
        {
            if(temp->data!=ohead->data)
                return false;
            temp=temp->next;
            ohead=ohead->next;
        }
        
        return true;
    }
    
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        Node *slow=head,*fast=head,*f;
        while(fast!=NULL&&fast->next!=NULL&&fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        f=slow->next;
        slow->next=NULL;
        return middle(f,head);
        
    }
};



// { Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}

  // } Driver Code Ends