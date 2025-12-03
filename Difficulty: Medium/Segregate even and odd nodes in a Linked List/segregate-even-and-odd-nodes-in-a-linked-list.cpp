// User function template for C++

/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node* divide(Node* head) {
        // code here
        vector<int>even;
        vector<int>odd;
        Node* curr = head;
        while(curr)
        {
            if(curr->data % 2 == 0)
            {
                even.push_back(curr->data);
            }
            else{
                odd.push_back(curr->data);
            }
            curr = curr->next;
        }
        curr = head;
        int idx1 = 0;
        int idx2 = 0;
        while(curr)
        {
            if(idx1 <= even.size()-1)
            {
            curr->data = even[idx1++];
            }
            else
            {
                curr->data = odd[idx2++];
            }
            curr = curr->next;
        }
        return head;
    }
};