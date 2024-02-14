//{ Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

// } Driver Code Ends

/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/

class Solution{
    public:
    int i=0;
    int search(int *in,int start,int end,int target)
    {
        int j;
        for( j=start;j<=end;j++)
        {
            if(in[j]==target) break;
        }
        return j;
        
    }
    Node *bombit(int *in,int *pre,int start,int end)
    {
        //if(i>=sizeof(in)) return NULL;
        if(start>end)return NULL;
        if(start==end){
            
            Node *nn=new Node(in[start]);
            i++;
            return nn;
        }
        int x=search(in,start,end,pre[i]);
        //cout<<in[x]<<"$";
        Node *root=new Node(in[x]);
        i++;
        root->left=bombit(in,pre,start,x-1);
        root->right=bombit(in,pre,x+1,end);
        return root;
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        int start=0;
        int end=n-1;
        //Node *root=new Node();
        return bombit(in,pre,start,end);
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}

// } Driver Code Ends