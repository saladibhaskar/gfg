//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    data =x;
	    next = NULL;
	}
};
/* Function to print linked list */


void append(struct Node** headRef, struct Node** tailRef, int newData)
{
	struct Node* new_node = new Node(newData);
	struct Node *last = *headRef;
	if (*headRef == NULL)
	{
	    *headRef = new_node;
	    *tailRef = *headRef;
	    return;
	}
	
	(*tailRef) -> next = new_node;
	*tailRef = (*tailRef) -> next;
}

// A utility function to print a linked list
void printList(Node *head)
{
	while (head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}



// } Driver Code Ends

/*
struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    data =x;
	    next = NULL;
	}
};
*/

class Solution
{
public:
    void sort(Node **headRef) {
        priority_queue<int, vector<int>, greater<int>> pq;
        Node* head = *headRef; // Dereference headRef to get the actual head pointer
        
        // Push all elements of the list into the priority queue
        while (head != NULL) {
            pq.push(head->data);
            head = head->next;
        }
        
        // Now, head points to NULL, so we reset it to point to the start of the list
        head = *headRef;
        
        // Pop elements from the priority queue and update the list's data in sorted order
        while (!pq.empty()) {
            head->data = pq.top();
            pq.pop();
            head = head->next;
        }
        // The list pointed by headRef is now sorted in place, no need to return anything
    }
};

//{ Driver Code Starts.
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
	    struct Node* head = NULL;
	    struct Node* tail = NULL;
	    int n, k;
	    cin>>n;
	    for(int i=0; i<n ;i++){
	        cin>>k;
	        append(&head, &tail, k);
	    }
	    Solution ob;
	    ob.sort(&head);
	    printList(head);
	}
	return 0;
}

// } Driver Code Ends