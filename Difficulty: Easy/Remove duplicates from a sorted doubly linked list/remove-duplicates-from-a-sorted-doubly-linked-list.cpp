/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }

};
*/

class Solution {
  public:

    Node *removeDuplicates(struct Node *head) {
        // Your code here
        Node* curr = head->next;
        Node* prev = head;
        while(curr)
        {
            Node* deleteNode = curr->next;
            if(prev->data != curr->data)
            {
                prev->next = curr;
                curr->prev = prev;
                prev = curr;
            }
            else{
                delete curr;
            }
            curr = deleteNode;
        }
        prev->next = nullptr;
        return head;
    }
};