//{ Driver Code Starts
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
    //Function to add two numbers represented by linked list
     struct Node* rev(struct Node*node)
    {
     Node *cur=node;
     Node *pre=NULL;
     Node* nxt=NULL;
    while(cur)
    {
        nxt=cur->next;
        cur->next=pre;
        pre=cur;
        cur=nxt;
    }
    return pre;
    }
    struct Node* addTwoLists(struct Node* t1, struct Node* t2)
    {
        // code here
         Node *l1=rev(t1);
         Node *l2=rev(t2);
        int carry=0;
        struct Node* head=new struct Node(0);
        struct Node*temp=head;
        while(l1!=NULL or l2!=NULL or carry!=0)
        {
            int sum=0;
            if (l1!=NULL){
                sum+=l1->data;
                l1=l1->next;
            }
            if (l2!=NULL){
                sum+=l2->data;
                l2=l2->next;
            }
            sum=sum+carry;
            carry=sum/10;
            int rem=sum%10;

             Node* ele=new Node(rem);
            temp->next=ele;
            temp=temp->next;
        }
        return rev(head->next);
        
    }
};


//{ Driver Code Starts.

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