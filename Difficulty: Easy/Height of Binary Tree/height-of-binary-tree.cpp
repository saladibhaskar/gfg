// User function template for C++

/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    int solve(Node*root)
    {
        if(!root)return 0;
        int left=solve(root->left);
        int right=solve(root->right);
        
        int height=max(left,right)+1;
        return height;
    }
    int height(Node* node) {
        // code here
        return solve(node)-1;
        
    }
};