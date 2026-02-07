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
    int floor(Node* root, int x) {
        // code here
        int floorval = -1;
        if(root == nullptr)return -1;
        while(root)
        {
            if(root->data == x)return root->data;
            else if(x >root->data)
            {
                floorval = root->data;
                root = root->right;
            }
            else{
                root = root->left;
            }
        }
        return floorval;
    }
};