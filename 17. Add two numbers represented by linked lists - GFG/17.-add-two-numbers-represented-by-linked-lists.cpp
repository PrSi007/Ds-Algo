// { Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


 // } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        Node *f=NULL,*s=NULL,*head=NULL,*temp,*curr;
        int c=0;
        curr=first;
        while(curr!=NULL)
        {
            temp=curr->next;
            curr->next=f;
            f=curr;
            curr=temp;
        }
        
        curr=second;
        while(curr!=NULL)
        {
            temp=curr->next;
            curr->next=s;
            s=curr;
            curr=temp;
        }
        
        while(f!=NULL&&s!=NULL)
        {
            if(f->data+s->data+c>=10)
            {
                temp = new Node(abs(10-(f->data+s->data+c)));
                c=1;
            }
            else
            {
                temp = new Node(f->data+s->data+c);
                c=0;
            }
            
            if(head==NULL)
                {
                    head=temp;
                    curr=temp;
                }
            else
                {
                    curr->next=temp;
                    curr=curr->next;
                }
            f=f->next;
            s=s->next;
        }
        
        while(f!=NULL)
        {
            if(f->data+c>=10)
            {
                temp = new Node(abs(10-(f->data+c)));
                c=1;
            }
            else
            {
                temp = new Node(f->data+c);
                c=0;
            }
            curr->next=temp;
            curr=curr->next;
            f=f->next;
        }
        
        while(s!=NULL)
        {
            if(s->data+c>=10)
            {
                temp = new Node(abs(10-(s->data+c)));
                c=1;
            }
            else
            {
                temp = new Node(s->data+c);
                c=0;
            }
            curr->next=temp;
            curr=curr->next;
            s=s->next;
        }
        
        if(c==1)
        {
            temp = new Node(1);
            curr->next=temp;
        }

        
        Node *cu=head,*t=NULL,*tp;
        while(cu!=NULL)
        {
            tp=cu->next;
            cu->next=t;
            t=cu;
            cu=tp;
        }
        
        return t;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
  // } Driver Code Ends