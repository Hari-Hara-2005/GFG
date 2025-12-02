/*
class Node {
  public:
    int data;
    Node *next;
    Node *prev;
    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

*/
class Solution {
  public:
    Node *reverse(Node *head) {
        // code here
        Node* curr = head;
        Node* newHead = nullptr;
        while(curr)
        {
            Node* temp = curr->next;
            curr->next = curr->prev;
            curr->prev = temp;
            newHead = curr;
            curr = temp;
        }
        return newHead;
    }
};