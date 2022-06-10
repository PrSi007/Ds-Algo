// { Driver Code Starts
#include <iostream>

using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};



Node *swapkthnode(Node* head, int num, int K);

void addressstore(Node **arr, Node* head)
{
    Node* temp = head;
    int i = 0;
    while(temp){
        arr[i] = temp;
        i++;
        temp = temp->next;
    }
}

bool check(Node ** before, Node **after, int num, int K)
{
    if(K > num)
        return 1;
    return (before[K-1] == after[num - K]) && (before[num-K] == after[K-1]);
}

int main()
{
    int T;
    cin>>T;
    while(T--){
        int num, K , firstdata;
        cin>>num>>K;
        int temp;
        cin>>firstdata;
        Node* head = new Node(firstdata);
        Node* tail = head;
        for(int i = 0; i<num - 1; i++){
            cin>>temp;
            tail->next = new Node(temp);
            tail = tail->next;
        }
        
        Node *before[num];
        addressstore(before, head);
        
        head = swapkthnode(head, num, K);
        
        Node *after[num];
        addressstore(after, head);
        
        if(check(before, after, num, K))
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}
// } Driver Code Ends


//User function Template for C++

/* Linked List Node structure
   struct Node  {
     int data;
     Node *next;
     Node(int x) {
        data = x;
        next = NULL;
  }
  }
*/

//Function to swap Kth node from beginning and end in a linked list.
Node *swapkthnode(Node* head, int num, int k)
{
    if(k>num)
        return head;
    
    Node *f=head,*l=head,*fp=NULL,*lp=NULL,*fn,*ln;
    int i,temp;
    
    for(i=1;i<k&&f!=NULL;i++)
        {
            fp=f;
            f=f->next;
        }
    fn=f->next;
    
    for(i=1;i<num-k+1&&l!=NULL;i++)
        {
            lp=l;
            l=l->next;
        }
    ln=l->next;    
    
    if(f->next==l)
    {
        fp->next=l;
        l->next=f;
        f->next=ln;
        return head;
    }
    
    if(l->next==f)
    {
        lp->next=f;
        f->next=l;
        l->next=fn;
        return head;
    }
    
    if(fp!=NULL)
        fp->next=l;
    else
        head=l;
        
    l->next=fn;
    
    if(lp!=NULL)
        lp->next=f;
    else
        head=f;
        
    f->next=ln;
    
    return head;
}
