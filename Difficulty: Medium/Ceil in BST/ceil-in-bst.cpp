class Solution {
  public:
    int findCeil(Node* root, int x) {
        // code here
        int ceilval =-1;
        while(root)
        {
            if(root->data == x)return root->data;
            else if(x>=root->data)root = root->right;
            else{
                ceilval = root->data;
                root = root->left;
            }
        }
        return ceilval;
    }
};
