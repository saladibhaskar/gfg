/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution {
  public:
  vector<int>v;
    void bombit(Node* root,unordered_map<int,int>&mp,int lv=0)
    {
        if(root)
        {
            if(mp.find(lv)==mp.end())
            {
                mp[lv]=root->data;
                v.push_back(root->data);
            }
        
        bombit(root->left,mp,lv+1);
        bombit(root->right,mp,lv+1);
        }
    }
    vector<int> leftView(Node *root) {
        // code here
        unordered_map<int,int>mp;
        v.clear();
        bombit(root,mp);
        return v;
        
    }
};