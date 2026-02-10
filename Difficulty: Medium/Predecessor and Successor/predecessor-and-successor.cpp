/* BST Node
class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    void inorder(Node* root,map<int,Node*>&mp)
    {
        if(root == nullptr)return;
        if(root->left != nullptr)inorder(root->left,mp);
        mp[root->data] = root;
        if(root->right != nullptr)inorder(root->right,mp);
    }
    vector<Node*> findPreSuc(Node* root, int key) {
        // code here
        map<int,Node*>mp;
        inorder(root,mp);
        Node* succ = nullptr;
        Node* pre = nullptr;
        for(auto it:mp)
        {
            if(it.first < key)
            {
                succ = it.second;
            }
            if(it.first > key)
            {
                pre = it.second;
                break;
            }
        }
        return {succ,pre};
    }
};