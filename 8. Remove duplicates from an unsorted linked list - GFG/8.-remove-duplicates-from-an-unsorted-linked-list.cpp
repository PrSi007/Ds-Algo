// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

void print(Node *root)
{
Node *temp = root;
while(temp!=NULL)
{
cout<<temp->data<<" ";
temp=temp->next;
}
}


 // } Driver Code Ends
/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/


class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
        if(head->next==NULL)
            return head;
            
        Node *curr=head,*prev=NULL;
        int m;
        while(curr!=NULL)
        {
            if(curr->data>m)
                m=curr->data;
            curr=curr->next;    
        }
        
        int temp[m+1]={0};
        curr=head;
        while(curr!=NULL)
        {
            temp[curr->data]++;
            curr=curr->next;
        }
        
        curr=head;
        while(curr!=NULL)
        {
            if(prev==NULL)
                {
                    prev=curr;
                    temp[curr->data]=0;
                }
            else
            {
                if(temp[curr->data]>0)
                {
                    prev->next=curr;
                    prev=curr;
                    temp[curr->data]=0;
                }
            }
            curr=curr->next;
        }
        
        prev->next=NULL;
        return head;
    }
};


// { Driver Code Starts.

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;
 
		for(int i=0;i<K;i++){
		int data;
		cin>>data;
			if(head==NULL)
			head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp=temp->next;
			}
		}
		
	    Solution ob;
		Node *result  = ob.removeDuplicates(head);
		print(result);
		cout<<endl;
		
	}
	return 0;
}  // } Driver Code Ends