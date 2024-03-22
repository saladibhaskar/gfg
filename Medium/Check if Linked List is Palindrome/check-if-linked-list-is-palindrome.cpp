//{ Driver Code Starts
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
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        Node *f=head;
        Node *s=head;
        Node *temp=head;
        int l=0;
        while(temp)
        {
          l++;
          temp=temp->next;
        }
        if(l==2)
        {
            if(head->data==head->next->data)
            {
                return true;
            }
            return false;
        }
        if(l==1)
        {
            return true;
        }
        while(f!=NULL && f->next!=NULL)
        {
            if(f->next->next==NULL)
            {
                s=s->next;
                break;
            }
            f=f->next->next;
            s=s->next;
        }
        Node *m=s;
        if(l%2!=0)
        {
           // m=m->next;
        }
        s=NULL;
        Node *cur=m;
        Node *nxt=NULL;
        Node *pre=NULL;
        while(cur)
        {
            nxt=cur->next;
            cur->next=pre;
            pre=cur;
            cur=nxt;
        }
        Node *temp1=pre;
        temp=head;
        while(temp1)
        {
            if(temp1->data!=temp->data)
            {
                return false;
            }
            temp1=temp1->next;
            temp=temp->next;
        }
        return true;

    }
};



//{ Driver Code Starts.
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