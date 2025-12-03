/*Link list node
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};*/
class Solution {
  public:
    Node* insertionSort(struct Node* head_ref) {
        // code here
        vector<int>arr;
        Node* curr = head_ref;
        while(curr)
        {
            arr.push_back(curr->data);
            curr = curr->next;
        }
        sort(arr.begin(),arr.end());
        int idx=0;
        curr = head_ref;
        while(curr)
        {
            curr->data = arr[idx++];
            curr = curr->next;
        }
        return head_ref;
    }
};