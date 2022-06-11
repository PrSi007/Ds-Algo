// { Driver Code Starts
#include<iostream>

#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

int intersectPoint(struct Node* head1, struct Node* head2);

Node* inputList(int size)
{
    if(size==0) return NULL;
    
    int val;
    cin>> val;
    
    Node *head = new Node(val);
    Node *tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

/* Driver program to test above function*/
int main()
{
    int T,n1,n2,n3;

    cin>>T;
    while(T--)
    {
        cin>>n1>>n2>>n3;
        
        Node* head1 = inputList(n1);
        Node* head2 = inputList(n2);
        Node* common = inputList(n3);
        
        Node* temp = head1;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;
        
        temp = head2;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;
        
        cout << intersectPoint(head1, head2) << endl;
    }
    return 0;
}

// } Driver Code Ends


/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

//Function to find intersection point in Y shaped Linked Lists.
int intersectPoint(Node* head1, Node* head2)
{
   int a=0,b=0;
   Node *curr,*c;
   
   curr=head1;
   while(curr!=NULL)
   {
       a++;
       curr=curr->next;
   }
   
   curr=head2;
   while(curr!=NULL)
   {
       b++;
       curr=curr->next;
   }
   
    if(a>b)
        {
            curr=head1;
            for(int i=1;i<=a-b;i++)
                curr=curr->next;
            c=head2;
        }
    else
        {
            curr=head2;
            for(int i=1;i<=b-a;i++)
                curr=curr->next;
            c=head1;
        }
        
        while(curr!=NULL&&c!=NULL&&curr!=c)
        {
            curr=curr->next;
            c=c->next;
        }
        
        if(curr==c)
            return curr->data;
        else
            return -1;
        
}

