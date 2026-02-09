/*The Node structure is defined as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// return the Kth largest element in the given BST rooted at 'root'
class Solution {
  public:
    void findLargest(Node*root ,vector<int>&arr)
    {
        if(root == nullptr)return;
        findLargest(root->left,arr);
        arr.push_back(root->data);
        findLargest(root->right,arr);
    }
    int kthLargest(Node *root, int k) {
        // Your code here
        vector<int>arr;
        if(root == nullptr)return 0;
        findLargest(root,arr);
        int n = arr.size();
        return arr[n-k];
    }
};