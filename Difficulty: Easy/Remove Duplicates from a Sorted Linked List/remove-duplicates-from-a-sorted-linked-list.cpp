/*
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
    // Function to remove duplicates from sorted linked list.
    Node* removeDuplicates(Node* head) {

        // code here
        Node* newNode = new Node(-1);
        Node* dummyNode = newNode;
        Node* temp = head;
        Node* curr = head->next;
        dummyNode->next = temp;
        dummyNode = temp;
        while(curr)
        {
            if(curr->data != temp->data)
            {
                dummyNode->next = curr;
                dummyNode = curr;
                temp = curr;
            }
            curr = curr->next;
        }
        dummyNode->next = nullptr;
        return newNode->next;
    }
};